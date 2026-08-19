// Array In Javascript.

// A JavaScript array is a single variable used to store an ordered collection of multiple values.

// A JavaScript array is a single variable used to store an ordered collection of multiple values. JavaScript arrays are dynamic in size and can contain elements of mixed data types (numbers, strings, objects, or even other arrays).

// The most common way to create an array is using the array literal syntax [].

console.log("============> Arrays In Javascript <============");

{
    const techstack = ["HTML", "CSS", "JavaScript"]

    console.log(techstack);

    console.log(techstack.length);

    console.log(typeof techstack);

}

{
    const ary = [7, "Prince", true, null, undefined, 8646846162]

    console.log(ary);
    console.log(typeof ary[5]);
    console.log(ary.length);

    ary.length = 7      // Creates an empty value at end of the array of no value initialized.

    console.log(ary);

    ary.length = 3      // Remove remaining elements from array which came after ary's length goes upto 3.

    console.log(ary);

}


// Array Constructor

// The Array() constructor is a built-in global function in JavaScript used to instantiate new arrays.

{
    const tempArry = new Array(10)

    console.log(tempArry.length);

    console.log(tempArry[0]);
}

// Array Concate Method

{
    let arr1 = [1, 2, 3, 4, 5]

    let arr2 = ["a", "b", "c", "d"]

    let conctArray = arr1.concat(arr2)

    console.log(conctArray);
    
    console.log(...arr1, ...arr2);
    
}
