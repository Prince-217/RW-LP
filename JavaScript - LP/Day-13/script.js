// Javascript Map() and set()

const libraryMang = new Map([
    ["B001", { title: "The Alchemist", author: "Paulo Coelho", available: true }],
    ["B002", { title: "Atomic Habits", author: "James Clear", available: false }],
    ["B003", { title: "Deep Work", author: "Cal Newport", available: true }],
    ["B004", { title: "Rich Dad Poor Dad", author: "Robert Kiyosaki", available: true }],
    ["B005", { title: "Ikigai", author: "Francesc Miralles", available: false }]
])


console.log(libraryMang.get("B003"));

console.log(libraryMang.has("B005"));

libraryMang.get("B002").available = true


libraryMang.delete("B004")

console.log(libraryMang.keys());

console.log(libraryMang.size);

function getInfo(value, key, map) {
    console.log(`${key} -> ${value.title} by ${value.author} | Available : ${value.available}`);
}

libraryMang.forEach(getInfo)

const visitors = new Set(["Prince", "Meera", "Raj", "Prince", "Sana", "Meera", "Arjun", "Raj", "Prince"])

console.log(visitors.size);
console.log(visitors.has("Sana"));

visitors.add("Vivek")
visitors.delete("Raj")

console.log("============ Unique Visitors ============");

// const iterator = visitors.values()

// console.log(`${iterator.next().value}`);
// console.log(`${iterator.next().value}`);
// console.log(`${iterator.next().value}`);
// console.log(`${iterator.next().value}`);
// console.log(`${iterator.next().value}`);


function getInfoSet(value1, value2, set) {
    console.log(`${value2}`);
}

visitors.forEach(getInfoSet)

console.log("=========================================");

console.log(Array.from(visitors));

const unavailableBooks = new Set()

function forUnavailable(value, key, map) {
    if (value.available == false) {
        unavailableBooks.add(value.title)
        console.log(value.title);
    }
}

console.log("========== Unavailable Books ============");

libraryMang.forEach(forUnavailable)

console.log("=========================================");

console.log(Array.from(libraryMang));

for (let [index, value] of libraryMang.entries()) {
    console.log(index, value);
}