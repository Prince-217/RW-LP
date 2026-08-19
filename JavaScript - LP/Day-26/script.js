const studentsDB = [
    { id: 1, name: "Prince", marks: [85, 90, 78] },
    { id: 2, name: "Meera", marks: [40, 55, 60] },
    { id: 3, name: "Raj", marks: [30, 28, 35] },
    { id: 4, name: "Sana", marks: [95, 88, 92] },
    { id: 5, name: "Arjun", marks: [10, 15, 20] },
]

async function getStudent(id) {

    if (studentsDB[id - 1]) {
        return studentsDB[id - 1];
    } else {
        throw new Error("Student not found!");
    }

}
{
    console.log("===== Basic Promise =====")

    getStudent(1)
        .then((obj) => {
            console.log(`Student Found: ${obj.name}`);
            return obj.marks;
        })
        .then((mrk) => {

            let total = 0;

            mrk.forEach(element => {
                total += element;
            });


            const percentage = ((total / (mrk.length * 100)) * 100).toFixed(2)

            console.log(`Total: ${total}, Percentage: ${percentage}%`);

            return percentage;
        })
        .then((percentage) => {
            let grade;

            if (percentage >= 90) grade = "A";
            else if (percentage >= 80) grade = "B";
            else if (percentage >= 70) grade = "C";
            else if (percentage >= 60) grade = "D";
            else if (percentage > 33) grade = "E";
            else throw new Error("Student has failed")

            console.log(`Grade: ${grade}`);

            console.log("✅ Pass");


        })
        .catch((msg) => console.log(msg))
        .finally(() => { })
}

{
    console.log("===== Promise.all =====")

    Promise.all([getStudent(1), getStudent(2), getStudent(4)])
        .then((retVal) => {
            console.log(`${retVal[0].name}, ${retVal[1].name}, ${retVal[2].name} fetched successfully`);
        })
        .catch((err) => {
            throw new Error(err);
        })

}

{
    console.log("===== Promise.allSettled =====")

    Promise.allSettled([getStudent(1), getStudent(99), getStudent(4)])
        .then((results) => {
            results.forEach((res, index) => {
                if (res.status === "fulfilled") console.log(`${index + 1} -> fulfilled: ${res.value.name}`);
                else console.log(`${index + 1} -> rejected: Student not found!`);
            })
        })

}

async function fetchResult(id) {
    try {

        const st = await getStudent(id)

        let total = 0;

        st.marks.forEach(ele => {
            total += ele;
        })

        const per = ((total / (st.marks.length * 100)) * 100).toFixed(2)
        
        console.log("===== async/await =====")
        
        if (per < 33) throw `❌ Result: FAIL - ${st.name} (${per}%)`;
        console.log(`✅ Result: PASS - ${st.name} (${per}%)`);
    }
    catch (err) {
        console.log("===== async/await =====")
        console.log(err);
    }
}


{

    fetchResult(1)
    fetchResult(3)
}

async function fetchAllResults() {
    console.log("===== All Results =====")

    for (const element of studentsDB) {

        let mrk = await element.marks
        let total = 0

        mrk.forEach((m) => {
            total += m;
        })

        const per = ((total / (element.marks.length * 100)) * 100).toFixed(2)

        let res;

        if (per < 33) res = "FAIL";
        else res = "PASS";

        console.log(`${element.name} -> ${per}% -> ${res}`);
    }
}

{
    fetchAllResults()
}

function validateId(id) {
    try {
        if (typeof id !== "number") throw "Invalid ID: must be a number"
        if (id <= 0) throw "Invalid ID: must be greater than 0"

        console.log("✅ Valid ID:", id);

    } catch (err) {
        console.log(err);
    }
}
console.log("===== Validation =====")
validateId("abc")
validateId(-1)
validateId(1)

function getStudentWithDelay(id) {
    return new Promise((resolve, reject) => {
        setTimeout(() => {

            const st = studentsDB.find(s => s.id === id)

            if (st) resolve(st);
            else reject("Student not found!")

        }, 1000);
    })
}

async function showDelay() {
    console.log("Fetching student with delay...")
    const st = await getStudentWithDelay(2)
    console.log(`Fetched: ${st.name}`)
}

showDelay()


Promise.race([getStudent(1), getStudent(2), getStudent(4)])
    .then(st => console.log(`First resolved: ${st.name}`))
    .catch(err => console.log(err))