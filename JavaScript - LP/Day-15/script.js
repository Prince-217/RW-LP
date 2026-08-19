// Javascript Number()

console.log("===================== Number() =====================");

// Number()

console.log(Number("42500.50"));
console.log(Number(true));
console.log(Number(false));
console.log(Number(null));
console.log(Number("abc"));

// isInteger()

console.log("==================== isInteger() ====================");


console.log(Number.isInteger(500));
console.log(Number.isInteger(99.99));
console.log(Number.isInteger(0));
console.log(Number.isInteger(-200));
console.log(Number.isInteger(45.0));


const accInfo = [
    {accNo: "ACC001", accHolder: "Prince", accBal: 125000.6789, accTrans: [5000, -2000, 15000, -500]},
    {accNo: "ACC002", accHolder: "Meera", accBal: -500.50, accTrans: [1000, -2000, 300]},
    {accNo: "ACC003", accHolder: "Raj", accBal: 99999999999999999, accTrans: [100, 200]},
    {accNo: "ACC004", accHolder: "Sana", accBal: "hello", accTrans: [500]},
]

// isFinite()

console.log("==================== isFinite() ====================");


console.log(Number.isFinite(accInfo[2].accBal));
console.log(Number.isFinite(Infinity));
console.log(Number.isFinite(-Infinity));
console.log(Number.isFinite(1000));


// isNaN()

console.log("==================== isNaN() ====================");


if (Number.isNaN(Number(accInfo[3].accBal))) {
    console.log("⚠️ Warning: ACC004 has invalid balance!")
}


// toFixed()
console.log("==================== toFixed() ====================");

console.log(`Balance: ${accInfo[0].accBal.toFixed(2)}`);



// toPrecision()
console.log("==================== toPrecision() ====================");

let num = accInfo[0].accBal

// console.log("Balance: ",num.toPrecision(6));

console.log(num.toPrecision(6));


// toString()
console.log("==================== toString() ====================");

console.log(`${accInfo[0].accBal.toString()}`);

let numTstr = 255

console.log(numTstr.toString(2));
console.log(numTstr.toString(16));



// MAX_SAFE_INTEGER & MIN_SAFE_INTEGER & isSafeInteger()

console.log("==================== MAX_SAFE_INTEGER & MIN_SAFE_INTEGER & isSafeInteger() ====================");


console.log(Number.MAX_SAFE_INTEGER);
console.log(Number.MIN_SAFE_INTEGER);


if(!Number.isSafeInteger(accInfo[2].accBal)){
    console.log("⚠️ Warning: ACC003 balance exceeds safe integer limit!");
}


// parseInt() and parseFloat()

console.log("==================== parseInt() and parseFloat()  ====================");


console.log(Number.parseInt("5000.99 INR"));
console.log(Number.parseFloat("5000.99 INR"));



// EPSILON()

console.log(0.1 + 0.2 === 0.3);

console.log(Math.abs(0.1 + 0.2 - 0.3) < Number.EPSILON);


// Extra Works

for(let [key, value] of accInfo.entries()){
    
    if(Number.isNaN(Number(value.accBal))){
        continue
    }
    else{
        console.log(`========== Account: ${value.accNo} ==========`);
        console.log(`Holder: ${value.accHolder}`);
        console.log(`Balance: ${Number(value.accBal)}`);
        console.log(`Transaction: ${value.accTrans}`);
    }
    
}

let totalBalance = 0

for(let value of accInfo.values()){
    if(Number.isNaN(Number(value.accBal))) continue;
    else{
        totalBalance += value.accBal
    }
}

console.log(`Total Balance: ₹${totalBalance.toFixed(2)}`);
