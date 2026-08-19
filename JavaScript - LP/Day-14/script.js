// Javascript Math Object

// Smart Shopping Discount Calculator
console.log("==================== Math Object ====================");
console.log("");
console.log("");

const items = [
    { itemName: "Laptop", origPrice: 45999.75 },
    { itemName: "Phone", origPrice: 18499.50 },
    { itemName: "Headphone", origPrice: 2999.99 },
    { itemName: "Smartwatch", origPrice: 8750.50 },
    { itemName: "Charger", origPrice: 1249.10 }
]

const discRates = [0.15, 0.1, 0.2, 0.05, 0]


console.log("=========== Shopping Bill ============");

for (let i = 0; i < items.length; i++) {

    let prc = Math.round(items[i].origPrice - (discRates[i] * items[i].origPrice))
    console.log(`${items[i].itemName} : ₹${items[i].origPrice} -> After ${discRates[i] * 100}% discount -> ₹${prc}`);
}

console.log("======================================");


// Math.floor() always rounds a number down to the nearest integer, while Math.ceil() always rounds a number up to the nearest integer.

console.log(Math.floor(items[0].origPrice - (discRates[0] * items[0].origPrice)));

console.log(Math.ceil(items[1].origPrice - (discRates[1] * items[1].origPrice)));


const origiPrices = items.map(itm => itm.origPrice)

console.log("Most Expensive :", Math.max(...origiPrices));
console.log("Cheapest :", Math.min(...origiPrices));

console.log(`EMI Total : ₹${Math.round(items[0].origPrice * Math.pow((1 + 0.01), 12))}`);

console.log(`Warehouse Side : ${Math.sqrt(1764)} ft`);

console.log(`Stock Difference : ${Math.abs(473 - 500)}`);

console.log(`Your Coupon Code : SAVE-${Math.floor(Math.random() * (9999 - 1000) + 1000)}`);

console.log(`Display Area : ${(Math.PI * 7 * 7).toFixed(2)} sq.m`);

console.log(`Headphones (trunc) : ${Math.trunc(items[2].origPrice - (discRates[2] * items[2].origPrice))}`);

console.log(`Growth log value : ${Math.log(100)}`);


const couponCodes = []

for (let i = 0; i < 3; i++) {
    couponCodes.push(`SAVE-${Math.floor(Math.random() * (9999 - 1000) + 1000)}`)
}

console.log(`Coupen Codes : ${couponCodes}`);



// Javascript Date Object
console.log("");
console.log("");

console.log("==================== Date Object ====================");
console.log("");
console.log("");


let date1 = new Date()

console.log(date1);

let date2 = Date.now()
console.log(date2);

console.log(`${Date.parse(2026-7-16)}`);

const todayDate = new Date()

console.log(`${todayDate.getDate()}`);
console.log(`${todayDate.getDay()}`);
console.log(`${todayDate.getFullYear()}`);

todayDate.setFullYear(2007)

console.log(todayDate);
