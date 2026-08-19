'use strict'

// Javascript Variable declaration methods...

// var, let & const

// i] var method 


var Name = "Prince"

console.log(Name);

// javascript hoisting...

var a, b

a = 1
b = 2

console.log(a+b);

var x = 100
var x = 200

{

    console.log(x);
    
}

var y;

console.log(y);

// ii] let method

// ES-6 2015

let temp = 7

console.log(temp);

let name , age , course

name = "Zeel"
age = 20
course = "Javascript"


console.log(name);
console.log(age);
console.log(course);


console.log("Hello"); console.log("World...!!");

var bln = false

console.log(bln);

var bln = true

console.log(bln);

{  // <- Scope

    let first_name = "Karan"
    console.log(first_name);
}

// iii] const method

const toy = "Car"

console.log(toy);


/* Javascript DataTypes */

/* Primitive DataTypes / immutable */

/*

string
number
boolean
undefined
null
Bigint
symbol

*/

/* Non-Primitive DataTypes / Mutable */

/*

array
object

*/

let str = "Hello World!!"
let num1 = 10
let num2 = 10.20
let bol1 = true
let bol2 = false
let undef = undefined
let n = null
let sym = Symbol()
let big = 10000000000000000000000000000000000000
let arr = [1 , 2 , 3 , 4 , 5]
let obj = {
    name:"Rahul"
}

console.log(str);
console.log(num1);
console.log(num2);
console.log(bol1);
console.log(bol2);
console.log(undef);
console.log(n);
console.log(sym);
console.log(big);
console.log(arr);
console.log(obj);

/* typeof operator */

console.log(typeof(str));
console.log(typeof(num1));
console.log(typeof(num2));
console.log(typeof(bol1));
console.log(typeof(bol2));
console.log(typeof(undef));
console.log(typeof(n));
console.log(typeof(sym));
console.log(typeof(big));
console.log(typeof(arr));
console.log(typeof(obj));

/* variables decalaration */

var last_name;
var $lastName;
var lastName;
var LastName;
var last_name_;
var age_80;
// var 80_age