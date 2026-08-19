// JavaScript Array Methods

// 1. push()
// 2. pop()
// 3. unshift()
// 4. shift()
// 5. indexOf()
// 6. lastIndexOf()
// 7. includes()
// 8. join()
// 9. slice()
// 10. splice()
// 11. reverse()
// 12. sort()
// 13. fill()


// push()

{
    const animals = ["pigs", "goats", "sheep"]

    const count = animals.push("cows")

    console.log(count);

    console.log(animals);
    
    animals.push("chickens", "cats", "dogs")

    console.log(animals);
    
}




// pop()

{
    const plants = ["broccoli", "cauliflower", "cabbage", "kale", "tomato"]

    console.log(plants.pop());

    console.log(plants);
    
    plants.pop()

    console.log(plants);
    
    
}




// shift() & unshift()

{
    const ary = [1, 2, 3]

    console.log(ary.shift(1));

    console.log(ary);

    ary.unshift(4, 5)
    
    console.log(ary);
    
}




// indexOf() & lastIndexof()

{
    const insects = ["ant", "bison", "camel", "duck", "bison"]

    console.log(insects.indexOf("bison"));

    console.log(insects.indexOf("bison", 2));
    
    console.log(insects.indexOf("giraffe"));
    
    console.log(insects.lastIndexOf("bison"));

    console.log(insects.lastIndexOf("duck"));
    
}




// includes()

{
    const ary = [1, 2, 3, "Cat", "Dog"]

    console.log(ary.includes(2));
    
    console.log(ary.includes("Cat"));
    
    console.log(ary.includes("at"));
    
}



// join()

{
    const elements = ["Fire", "Air", "Water"]

    console.log(elements.join());
    
    console.log(elements.join(""));
    
    console.log(elements.join("-"));

}




// slice()

{
    const animals = ["Cat", "Elephant", "Fox", "Lion", "Tiger"]

    console.log(animals.slice(2));

    console.log(animals.slice(2, 4));

    console.log(animals.slice(-3));
    
    console.log(animals.slice(0, -3));
    
}




// splice()

{
    const months = ["Jan", "Mar", "April", "June"]

    months.splice(1, 0, "Feb")

    console.log(months);

    months.splice(4, 1, "May")
    
    console.log(months);
    
    months.splice(5, 0, "Jun", "Jul", "Aug", "Sept")

    console.log(months);
    
}



// reverse()

{
    const ary = ["one", "two", "three"]

    console.log(`Array :- ${ary}\nReversed Array :- ${ary.reverse()}`);
    
}



// sort()

{
    const month = ["Feb", "Dec", "Jul", "Jan"]

    console.log(month.sort());

    const nums = [1, 10000, 45, 3, 50]

    console.log(nums.sort());
    
}



// fill()

{
    const ary = [1, 2, 3, 4, 5]

    console.log(ary.fill(0, 2, 4));

    console.log(ary.fill(2, 2));

    console.log(ary.fill(6));
    
}




// copywithin() method

{

    //This method modifies an array in place by shallow copying a portion of it to another position within the same array without changing its total length.

    const numbers = [1, 2, 3, 4, 5]

    console.log(numbers);
    
    let cpyw = numbers.copyWithin(0, 1, 4)

    console.log(cpyw);

}




// flat() method

{

    let arr = [1 , [2 , 3] , [4 , [5 , [6]]]]

    console.log(arr.flat(3));
    
}




// flatmap() method

{

    let arr = [1, 2, 3]

    let result = arr.flatMap(x => [[x , x * 2]])

    console.log(result.flat());
    
}   




// foreach() method

{

    let arr = [34, 45, 64]

    arr.forEach((value, index) => {console.log(value, index)
    })
}




// filter() method

{

    let ary = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

    let ary2 = ary.filter(x => x >= 5)

    ary2.map(num => console.log(num))
        
}




// some()

{

    let ary = [3, 54, 23, 6, 36, 8, 32, 43]

    console.log(ary.some(x => x >= 30));
    
}




// every()

{

    let ary = [3, 54, 23, 6, 36, 8, 32, 43]

    console.log(ary.every(x => x >= 30));
    
}




// reduce()

{

    let nums = [1, 2, 3, 4, 5]

    let sum = nums.reduce((acc, curr) => acc + curr, 0);

    console.log(sum);
    
}




// reduceRight()

{

    let nums = [1, 2, 3, 4, 5]

    let total = nums.reduceRight((acc, curr) => acc - curr);

    console.log(total);
}




// entries()

{

    let ary = [10, 20 , 30, 40, 50]

    for(let[index, value] of ary.entries()){
        console.log(index, value);
    }
}




// keys()

{

    let ary = [10, 20 , 30, 40, 50]

    for(let key of ary.keys()){
        console.log(key);
    }
}




// value()

{

    let ary = [10, 20 , 30, 40, 50]

    for(let value of ary.values()){
        console.log(value);
    }
}