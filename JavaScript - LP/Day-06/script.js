/* Javascript Control Flow */

/* control flow in javascript is the order in which the program executes statements and make decisions. It control flow how the code runs based on condition , loop , function and exceptions. */

/* Types of control flow in javascript */

// 1. Sequential control flow
// 2. Conditional Control Flow (if, if-else, if... else if ...else, switch case)
// 3. Looping Control Flow (while, do...while, for, for...in, for...out)
// 4. Exception Handeling Control Flow


// ===== Student Report Card Generator =====

let students = [
  { name: "Prince",  marks: [85, 40, 72] },
  { name: "Raj",     marks: [30, 28, 55] },
  { name: "Meera",   marks: [90, 95, 88] },
  { name: "Arjun",   marks: [45, 33, 60] },
  { name: "Sana",    marks: [10, 20, 15] }
];

let subjects = ["Maths", "Science", "English"];

let totalPassed = 0;
let totalFailed = 0;
let highestPercentage = 0;
let topStudent = "";

for (let i = 0; i < students.length; i++) {

  let student = students[i];
  let total = 0;
  let allSubjectsPassed = true;

  console.log("===== Report Card =====");
  console.log("Name: " + student.name);

  for (let j = 0; j < student.marks.length; j++) {
    let mark = student.marks[j];
    let subjectResult = mark >= 33 ? "Pass" : "Fail";

    if (mark < 33) {
      allSubjectsPassed = false;
    }

    total += mark;

    console.log(subjects[j] + ": " + mark + " - " + subjectResult);
  }

  let percentage = (total / 300) * 100;

  let grade;
  if (percentage >= 90) {
    grade = "A+";
  } else if (percentage >= 75) {
    grade = "A";
  } else if (percentage >= 60) {
    grade = "B";
  } else if (percentage >= 45) {
    grade = "C";
  } else if (percentage >= 33) {
    grade = "D";
  } else {
    grade = "F";
  }

  let result = allSubjectsPassed ? "PASS" : "FAIL";

  // Count pass/fail for class summary
  if (result === "PASS") {
    totalPassed++;
  } else {
    totalFailed++;
  }

  if (percentage > highestPercentage) {
    highestPercentage = percentage;
    topStudent = student.name;
  }

  console.log("Total: " + total + "/300");
  console.log("Percentage: " + percentage.toFixed(2) + "%");
  console.log("Grade: " + grade);
  console.log("Result: " + result);
  console.log("=======================");
  console.log("");
}

console.log("===== Class Summary =====");
console.log("Total Passed: " + totalPassed);
console.log("Total Failed: " + totalFailed);
console.log("Top Student: " + topStudent + " (" + highestPercentage.toFixed(2) + "%)");
console.log("=========================");
