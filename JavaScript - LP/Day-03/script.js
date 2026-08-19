// Js Built-in functions.

// 1. null
// 2. isNaN()
// 3. Number.isNaN()
// 4. NaN
// 5. undefined and null
// 6. Infinity and -Infinity
// 7. Number constants


// 1. null :-

/*

null is a premitive value.
It represents the international (globe) intentional absence of any object value.
It is assigend by the programmer.
typeof null return "Object".

*/

console.log("============== null =============");

let value = null;

console.log(value);

console.log(typeof null);

console.log(value == undefined);

console.log(value === undefined);

console.log(value === null);


/* isNaN */

/*

isNaN() checks whether a value is Not-a-Number

It first convert the value into a number

Because of converting , the output may sometimes be confusing.

*/


console.log("============= isNaN ==================");

console.log(isNaN(NaN));

console.log(isNaN(100));

console.log(isNaN(-2e-4));

console.log(isNaN(Infinity));

console.log(isNaN(true));

console.log(isNaN(false));

console.log(isNaN(null));

console.log(isNaN(""));

console.log(isNaN("45"));

console.log(isNaN("45.5"));

console.log(isNaN("Infinity"));

console.log(isNaN("Hello"));

console.log(isNaN("10$"));

console.log(isNaN(undefined));

console.log(isNaN(function(){}));

console.log(isNaN([]));

console.log(isNaN({}));

console.log(isNaN([1]));


/* Number.isNaN() */

/*

Es6 - 2015
It Does not convert value before checking.
return true only if the value itself is NaN.

*/

console.log("============== Number.isNaN() ===================");


console.log(Number.isNaN(NaN));
console.log(Number.isNaN(100));
console.log(Number.isNaN(true));
console.log(Number.isNaN(false));
console.log(Number.isNaN(null));
console.log(Number.isNaN(undefined));
console.log(Number.isNaN("100"));
console.log(Number.isNaN("Hello"));
console.log(Number.isNaN([]));
console.log(Number.isNaN({}));


/* NaN */

/*

NaN means Not-a-Number
It is retunred whenever a methemetical operation fails.
NaN is never equal to itself.

*/

console.log("============ NaN ================");

console.log(NaN);

console.log(typeof NaN);

console.log(NaN == NaN);

console.log(NaN === NaN);

console.log(Number.NaN);

console.log(window.hasOwnProperty("NaN"));


/* undefined and null */

console.log("=============== undefined ============");

let x;

console.log(x);

console.log(typeof x);

let student = {
    name : "Rahul"
}

console.log(student.name);

console.log(student.age);

console.log(student.age === undefined);

function demo(){
    return;
}

console.log(demo());


/* Infinity and -Infinity */

console.log("=============== Infinity ===================");

console.log(Infinity);
console.log(-Infinity);
console.log(1/0);
console.log(1/-0);
console.log(25 / Infinity);
console.log(0 / 0);
console.log("hello" / 10);
console.log(Infinity + Infinity);
console.log(Math.pow(123456789,500));
a = 0
b=  -0

console.log(a == b);
console.log(a === b);