// Student Grade calculator...

console.log("============ Student Grade Calculator ============");

let math_marks = 95
let phy_marks = 32
let chem_marks = 88
let comp_marks = 93
let eng_marks = 95

let math_pass = math_marks >= 33
let phy_pass = phy_marks >= 33
let chem_pass = chem_marks >= 33
let comp_pass = comp_marks >= 33
let eng_pass = eng_marks >= 33

let total_marks = (math_marks + phy_marks + chem_marks + eng_marks + comp_marks)
let percentage = total_marks / 5;

let subjectPass = math_pass && phy_pass && chem_pass && comp_pass && eng_pass
let alloverPass = subjectPass && percentage >= 33

console.log("Student marks is (Out of 100) :- ");
console.log(`Maths :- ${math_marks}`);
console.log(`Physics :- ${phy_marks}`);
console.log(`Chemistry :- ${chem_marks}`);
console.log(`English :- ${eng_marks}`);
console.log(`Computer :- ${comp_marks}`);

console.log(`Student Percentage is :- ${percentage}`);

let grade;

if(percentage >= 90) grade = "A+";
else if(percentage >= 80) grade = "A";
else if(percentage >= 70) grade = "B";
else if(percentage >= 60) grade = "C";
else if(percentage >= 50) grade = "D";
else if(percentage >= 40) grade = "E";
else grade = "F";

console.log("Total Marks :- " + total_marks);
console.log("Percentage :- " + percentage);
console.log("Grade :- " + grade);
console.log("Result :- " + (alloverPass ? "Pass" : "Fail"));