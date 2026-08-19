import {add, subtract, multiply, percentage} from './mathUtils.js';

import getGrade from './gradeUtils.js';

import {studentName, course, getWelcome} from './studentUtils.js';

import getStudentInfo from './studentUtils.js';


console.log("===== Math Utils =====");

console.log(`Add: ${add(10, 20)}`);
console.log(`Subtract: ${subtract(50, 30)}`);
console.log(`Multiply: ${multiply(10, 10)}`);

let per = percentage(436, 500).toFixed(2)

console.log(`Percentage: ${per}%`);

console.log("===== Grade Utils =====");

let grd = getGrade(per)

console.log(`Garde: ${grd}`);

console.log("===== Student Utils =====");

console.log(getWelcome(studentName));

console.log(getStudentInfo(studentName, course, per, grd));






