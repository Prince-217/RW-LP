// Javascript Functions

// 1. Function Declaration

// Hoisted Function mean can be used before definition.

{
    console.log("============ 1. Function Declaration ============");

    console.log(`Square of 5 is :- ${square(5)}`);


    function square(number) {
        return number * number;
    }
}

// 2. Function Expression

// While the function declaration above is syntactically a statement, functions can also be created by a function expression.

// Such a function can be anonymous; it does not have to have a name. For example, the function square could have been defined as:

{
    console.log("============ 2. Function Expression ============");

    const square = function (number) {
        return number * number;
    };

    console.log(square(4));
}

// 3. Anonymous Function :- 

// An anonymous function in JavaScript is a function that does not have a name. It is typically created when a function is needed only temporarily or passed around as a value.

// Because they lack a name identifier, anonymous functions cannot be called directly on their own unless they are assigned to a variable, passed as an argument, or executed immediately.

// Anonymous functions are heavily used as callbacks passed directly into other functions, such as timers or array methods.

{
    console.log("============ 3. Anonymous Function ============");
    setTimeout(function () {
        console.log("(Anonymous Function) This runs after 2 seconds!");
    }, 2000);
}

// 4. Named Function Expression

// However, a name can be provided with a function expression. Providing a name allows the function to refer to itself, and also makes it easier to identify the function in a debugger's stack traces:

// Recursion Function

{
    console.log("============ 4. Named Function Expression ============");
    const factorial = function fac(n) {
        return n < 2 ? 1 : n * fac(n - 1);
    };
    
    console.log(factorial(3));
}

// 5. Arrow Function :- 

// An arrow function is a compact alternative to a traditional function expression introduced in ES6 (ECMAScript 2015). It uses the => (fat arrow) syntax, strips away the mandatory function keyword, and dynamically binds the this context from its surrounding lexical scope.

// Arrow Function Syntax

console.log("============ 5. Arrow Function & lexical scope ============");

const addArrow = (a, b) => {
    return a + b;
};

console.log(addArrow(7, 14));

// Key Syntax Rules & Shorthands

const multiply = (a, b) => a * b; 
console.log(multiply(2,3));

const square = x => x * x;
console.log(square(5));

const sayHello = () => console.log("Hello!");

const getUser = id => ({ id: id, role: "Admin" });
console.log(getUser(7));

// 6. IIFE

// An IIFE (Immediately Invoked Function Expression) is a JavaScript function that runs automatically as soon as it is defined.

// Syntax

console.log("============ 6. IIFE ============");
(function () {
    console.log("I run immediately!");
})();

// You can also write them using arrow function syntax.

(() => {
    console.log("I also run immediately!");
})();



// 7. Calback Function

// A callback function is a function passed into another function as an argument, which is then executed (called back) inside the outer function to complete a specific task.

// This pattern works because functions are first-class objects in JavaScript, meaning they can be assigned to variables and treated like any other data type.

console.log("============ 7. Callback Function ============");

function greetUser(name, callback){
    console.log(`Hello, ${name}...!!`);
    callback();
}

const greet = () => console.log("Good Morning");


greetUser("Prince", greet)


// 8. HOF : Higher Order Functions

// A Higher-Order Function (HOF) is a function that either takes one or more functions as arguments or returns a function as its result.

console.log("============ 8. HOF (Higher Order Function) ============");

function half(num){
    return function (numInr) {
        return numInr / num
    }
}

const tempr = half(2)

console.log(tempr(9));

// 9. Constructor Function

// A constructor function in JavaScript is a regular function used with the new operator to create and initialize multiple similar objects.

// It acts as a blueprint, allowing you to define a structure (properties and methods) that every object instance created from it will share.

console.log("============ 9. Constructor Function ============");

function Student(name, rollNo, course){
    this.name = name
    this.rollNo = rollNo
    this.course= course
}

const stu1 = new Student("Prince", 7, "BscIT")
const stu2 = new Student("Shivani", 10, "BCA")
const stu3 = new Student("Khushi", 8, "BscIT")

console.log(`${stu2.name}\n${stu1.rollNo}\n${stu3.course}`);
