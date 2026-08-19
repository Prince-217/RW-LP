// student profile manager:
function getStudentData() {
    return {
        name: document.getElementById("name").value,
        email: document.getElementById("email").value,
        age: document.getElementById("age").value,
        course: document.getElementById("course").value
    }
}



document.getElementById("saveBtn").addEventListener("click", () => {

    const student = getStudentData()

    let resStudent = JSON.stringify(student)

    localStorage.setItem("Student", resStudent)
    localStorage.setItem("Course", student.course)

    console.log("✅ Data saved to localStorage!");


    const mySt = JSON.parse(localStorage.getItem("Student"))

    document.getElementById("output").innerHTML = `
        <p>Name: ${mySt.name}</p>
        <p>Email: ${mySt.email}</p>
        <p>Age: ${mySt.age}</p>
        <p>Course: ${mySt.course}</p>
    `
})


document.getElementById("getBtn").addEventListener("click", () => {

    let stu = localStorage.getItem("Student")

    if (stu) {
        const mySt = JSON.parse(stu);

        document.getElementById("output").innerHTML = `
            <p>Name: ${mySt.name}</p>
            <p>Email: ${mySt.email}</p>
            <p>Age: ${mySt.age}</p>
            <p>Course: ${mySt.course}</p>
        `

        console.log(`Total localStorage Keys: ${localStorage.length}`);

    }
    else {
        document.getElementById("output").innerHTML = "<p>⚠️ No data found in localStorage</p>"
    }

})

document.getElementById("removeBtn").addEventListener("click", () => {

    localStorage.removeItem("Student")

    console.log("🗑️ Student data removed!");

})


document.getElementById("clearBtn").addEventListener("click", () => {

    localStorage.clear()

    document.getElementById("output").innerHTML = ""

    console.log("❌ All localStorage cleared!");

})


document.getElementById("sessionSaveBtn").addEventListener("click", () => {

    const student = getStudentData()

    sessionStorage.setItem("sessionStudent", JSON.stringify(student))

    console.log("✅ Data saved to sessionStorage!");

})


document.getElementById("sessionGetBtn").addEventListener("click", () => {
    let stu = sessionStorage.getItem("sessionStudent")

    if (stu) {
        const mySt = JSON.parse(stu);

        document.getElementById("output").innerHTML = `
            <p>Name: ${mySt.name}</p>
            <p>Email: ${mySt.email}</p>
            <p>Age: ${mySt.age}</p>
            <p>Course: ${mySt.course}</p>
        `
    }
    else {
        document.getElementById("output").innerHTML = "<p>⚠️ No session data found</p>"
    }

    console.log("✅ Data retrieved from sessionStorage!")
})


document.getElementById("sessionRemoveBtn").addEventListener("click", () => {

    sessionStorage.removeItem("sessionStudent")

    console.log("🗑️ Session data removed!");

})


let stu = localStorage.getItem("Student")

if (stu) {
    const mySt = JSON.parse(stu);

    document.getElementById("output").innerHTML = `
            <p>Name: ${mySt.name}</p>
            <p>Email: ${mySt.email}</p>
            <p>Age: ${mySt.age}</p>
            <p>Course: ${mySt.course}</p>
        `

    console.log(`Total localStorage Keys: ${localStorage.length}`);

}