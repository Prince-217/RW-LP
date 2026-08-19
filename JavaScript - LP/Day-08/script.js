// Object Functions

// A function defined inside an object is called a method. Methods represent the actions or behaviors that an object can perform, allowing the object to act on its own data.

console.log("============ 1. Function Defined Inside an object ============");


const myInfo = {
    name: "Prince",
    rollNo: 7,
    course: "BscIT",
    
    greet() {
        return `Hello ! ${this.name}`;    
    }
}

console.log(myInfo.greet());

// Generator Function

// It uses the yield keyword to pause execution and can return multiple values over time.

console.log("============ 2. Generator Function ============");
function* dispalyNums(){
    yield 1;
    yield 2;
    yield 3;
}

console.log(dispalyNums());


// Async Function

// Always return a promise

console.log("============ 3. Async Function ============");

async function name() {
    return "Data loaded"
}

console.log(name());

// Pure and Impure Function

// Pure Function :- 

// A function is strictly considered pure if it satisfies two definitive conditions:
// Deterministic behavior: Passing the same exact arguments will always yield the exact same return value.
// No Side Effects: It does not read from or alter any external application state, mutate its arguments, or execute I/O operations (like network calls, console logging, or DOM manipulation).

console.log("============ 4. Pure & Impure Function ============");

console.log("Pure Function -----------------------------------");

function calculateTotal(price, tax) {
    return price + (price * tax);
}

const price1 = calculateTotal(20, 0.15) // Always returns 23
const price2 = calculateTotal(100, 0.15) // Always returns 115

console.log(`${price1}\n${price2}`);

console.log("Impure Function -----------------------------------");

// Modifying a Global variable.

let taxRate = 18
function totalPrice(price){
    return price + (price*(taxRate/100)); // Unpredictable if taxRate changes globally
}

console.log(totalPrice(120));


// Creating a side effect by mutating an input array

function addItem(arr, item){
    arr.push(item)
    return arr;     // Directly mutates the original array outside the function
}

arry = [1, 2, 3, 4, 5]

console.log(addItem(arry, 7));

// Default Parameter Function

console.log("============ 5. Default Parameter Function ============");

function courseAdd(course = "Not Declared"){
    return `Your Course is :- ${course}`;
}

console.log(`If you Not add arguments :- \n${courseAdd()}`);
console.log(`If you add arguments :- \n${courseAdd("Bsc.IT")}`);


// Rest Parameter Function

console.log("============ 6. Rest Parameter Function ============");

// The JavaScript rest parameter syntax allows a function to accept an indefinite number of arguments and bundle them into a single array.

function myFunc(...allArgs){
    console.log(allArgs);
}

myFunc(1, 2, 3, 4, 5);

function disaplayStaff(trustee, principle, ...teachers){
    console.log("School Staff");
    console.log(`Trustee Is :- ${trustee}\nPrinciple Is :- ${principle}\nTeachers Are :- ${teachers}`);
}

disaplayStaff("Trikam Sir", "Sahil Sir", "Khushi Madam", "Yashvi Madam", "Ramesh Sir", "Ganesh Sir", "Dhara Madam")


// Bound Function :- 
console.log("============ 7. Bound Function ============");

// In JavaScript, a bound function is a new function created by calling the Function.prototype.bind() method on an existing function.

// It wraps the original function object to permanently fix its "this" context and optionally pre-fill its parameters.

const user = {
    name: "Alice",
    greet() {
        console.log(`Hello, my name is ${this.name}`);
    }
};

// "this" is lost because setTimeout executes greet in the global context

setTimeout(user.greet, 1000);

// Fixing context with bind()

const safeGreet = user.greet.bind(user);
setTimeout(safeGreet, 1000);


// Closure 

// A closure in JavaScript is a feature where an inner function retains access to variables from its outer (enclosing) scope, even after the outer function has finished executing.

console.log("============ 8. Closure ============");

function createCounter(){
    let count = 0;

    return function(){
        return ++count;
    }
}

const counter = createCounter()

console.log(counter());
console.log(counter());
console.log(counter());
console.log(counter());
