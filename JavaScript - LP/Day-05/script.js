// Mega Project: "Online Exam & Store Checkout System" (Console)


let studentName = "Prince"
let rollNo = 7
let marks = [78, 89, 82, 89, 94]

console.log(typeof studentName);
console.log(typeof rollNo);
console.log(typeof marks);

let welcomeMsg = `Hello ${studentName} (Roll no :- ${rollNo})`
console.log(welcomeMsg);

function calculateTotal(...subjectMarks){
    let total = 0
    for(let m of subjectMarks){
        total += m;
    }
    return total;
}

let total = calculateTotal(...marks)
let percentage = (total / (marks.length * 100)) * 100

console.log(`Total: ${total}, Percentage: ${percentage.toFixed(2)}%`)

let grade = percentage >= 90 ? "A+"
          : percentage >= 80 ? "A"
          : percentage >= 60 ? "B"
          : percentage >= 40 ? "C"
          : "F";

console.log(`Grade: ${grade}`);

let allPassed = marks.every(m => m >= 33);
let overallPass = allPassed && percentage >= 33;

console.log(overallPass ? "Result: PASS" : "Result: FAIL")

let basepoints = 10
let rewardpoints = overallPass ? basepoints << 2 : basepoints >> 1

console.log(`Reward points earned :- ${rewardpoints}`);

const VIEW = 1;
const BUY = 2;
const DISCOUNT = 4;

let userAccess = overallPass ? (VIEW | BUY | DISCOUNT) : VIEW;

let canBuy = (userAccess & BUY) !== 0;
let hasDiscount = (userAccess & DISCOUNT) !== 0;

console.log(`Can buy: ${canBuy}, Has discount: ${hasDiscount}`);


let studentProfile = {
  name: studentName,
  rollNo: rollNo,
  address: {
    city: "Ahmedabad"
  }
};

let city = studentProfile.address?.city ?? "City not provided";
let phone = studentProfile.contact?.phone ?? "Phone not provided";

console.log(`City: ${city}`);
console.log(`Phone: ${phone}`);


function buyItems(...items) {
  return items;
}

let booksCart = ["Notebook", "Pen"];
let extraCart = ["Eraser", "Pencil"];
let fullCart = canBuy ? buyItems(...booksCart, ...extraCart) : [];

console.log("Cart:", fullCart);

let itemPrices = [50, 20, 10, 15];
let subtotal = itemPrices.reduce((sum, price) => sum + price, 0);

let discount = hasDiscount ? rewardpoints : 0;
let finalBill = subtotal - discount > 0 ? subtotal - discount : 0;

console.log(`Subtotal: ₹${subtotal}, Discount: ₹${discount}, Final Bill: ₹${finalBill}`);

let receipt = "===== RECEIPT =====\n" +
  "Student: " + studentName + "\n" +
  "Grade: " + grade + "\n" +
  "Reward Points: " + rewardpoints + "\n" +
  "City: " + city + "\n" +
  "Items: " + fullCart.join(", ") + "\n" +
  "Final Bill: ₹" + finalBill;

console.log(receipt);