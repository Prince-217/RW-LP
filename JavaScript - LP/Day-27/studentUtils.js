const studentName = "Prince";
const course = "FULL STACK DEVELOPMENT";

function getWelcome(name){
    return `Welcome, ${name}!`;
}

function getStudentInfo(name, course, percentage, grade){
    return `Name: ${name} | Course: ${course} | Percentage: ${percentage} | Grade: ${grade}`;
}


export{studentName, course, getWelcome}

export default getStudentInfo;