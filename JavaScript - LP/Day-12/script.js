// Javscript Objects

// Object Literal

const employee1 = {
    name: "Prince",
    age: 22,
    department: "IT",
    salary: 25000,
    isActive: true
}

const employee2 = {
    name: "Meera",
    age: 28,
    department: "HR",
    salary: 32000,
    isActive: true
}

const employee3 = {
    name: "Raj",
    age: 35,
    department: "Finance",
    salary: 45000,
    isActive: false
}



// Object Notations : (Dot "." Notaion & Bracket Notation "[]")

console.log(`Employee -1\nName: ${employee1.name},\nDepartment: ${employee1.department}`);
console.log(`Employee -2\nSalary: ${employee2['salary']}\nIs Active: ${employee2['isActive']}`);




// Add and Update Properties


employee1.bonus = 5000

employee2['email'] = "meera@company.com"

employee3.isActive = true




// Object assign()

const updatedEmployee1 = Object.assign({}, employee1, { salary: 30000, role: "Team Lead" })

console.log("Original Employee - 1", employee1);
console.log("Updated Employee - 1", updatedEmployee1);




// Object create()

{
    const employeeTemplate = {

        getDetails(){
            console.log(`Name : ${this.name}\nDept : ${this.department}`);
        }
    }

    let newEmployee = Object.create(employeeTemplate)

    newEmployee.name = "Pratik"

    newEmployee.age = 22

    newEmployee.department = "Sales"

    newEmployee.salary = 28000

    newEmployee.getDetails()

    console.log(newEmployee.hasOwnProperty("getDetails"))
}



// Object entries()
console.log("============ Employee-2 Details ============");

for(let [key, value] of Object.entries(employee2)){
    console.log(`${key} -> ${value}`);
}

console.log("===========================================");



// Object freeze() & isFrozen()

const founderRecord = {
    name: "Jaysinh",
    established: 2007,
    hq: "Surat"
}

Object.freeze(founderRecord)

founderRecord.hq = "Delhi"

console.log(founderRecord.hq);   // Not changed.

console.log(Object.isFrozen(founderRecord))





// Object seal() & isSealed()

Object.seal(employee3)

employee3.salary = 50000

employee3.nickName = "Rajyo"

console.log(`${employee3.salary}\n${employee3.nickName}`);

console.log(Object.isSealed(employee3));



// Extra Tasks

const combinedEmployee = Object.assign({}, employee1, employee2)

console.log(Object.keys(combinedEmployee).length);
