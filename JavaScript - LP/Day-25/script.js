// Promises in js

let steps = true;
let stpid = 1

function step(time, message){
    return new Promise((resolve, reject) => {
        if(steps){
            setTimeout(() => {
                
                let ele = document.createElement("h3");
                ele.setAttribute("id", `stpId${stpid}`);
                
                document.body.appendChild(ele);

                document.getElementById(`stpId${stpid}`).innerText = `Step: ${stpid}\n${message}`;
                resolve();

                stpid++;

            }, time)
        }else{
            reject("A step breaks....");
        }
    })
}

step(1000, "Open the Google Play Store (Android) or Apple App Store (iOS) on your smartphone.")
.then(() => step(1000,"Type the name of the food delivery app (e.g., Zomato, Swiggy, Uber Eats) into the search bar."))
.then(() => step(1000,"Tap Install or Get to download the app onto your device."))
.then(() => step(1000,"Open the installed app from your home screen or app drawer."))
.then(() => step(1000,"Grant the necessary permissions, such as device location and notification access."))
.then(() => step(1000,"Enter your mobile phone number or email address to register a new account."))
.then(() => step(1000,"Input the One-Time Password (OTP) sent to your phone to verify your login."))
.then(() => step(1000,"Set up your delivery address by confirming your current GPS location or typing it manually."))
.then(() => step(1000,"Add specific address details, including your house/flat number, floor, building name, and nearby landmark."))
.then(() => step(1000,"Explore the home screen to browse featured restaurants, cuisines, and ongoing discount offers."))
.then(() => step(1000,"Use the search bar to find a specific dish, cuisine, or restaurant name."))
.then(() => step(1000,"Apply filters such as dietary preference (Veg/Non-Veg), ratings, delivery time, or price."))
.then(() => step(1000,"Tap on a restaurant to view its complete menu and read customer reviews."))
.then(() => step(1000,"Select the item you want to order and choose any customizations like size, spice level, or extra toppings."))
.then(() => step(1000,"Tap Add to Cart or Add for every dish you wish to purchase."))
.then(() => step(1000,"Open your cart to review the selected food items, quantities, and prices."))
.then(() => step(1000,"Check the delivery address selected on the checkout screen to ensure it is accurate."))
.then(() => step(1000,"Add specific cooking or delivery instructions (e.g., don't ring doorbell or leave at door)."))
.then(() => step(1000,"Tap Apply Coupon or View Offers to select the best available promo code."))
.then(() => step(1000,"Check the final bill breakdown, including food total, taxes, packaging, and delivery fees."))
.then(() => step(1000,"Select your preferred payment method, such as UPI, Credit/Debit Card, Net Banking, Wallet, or Cash on Delivery."))
.then(() => step(1000,"Complete the payment authorization using your bank PIN, password, or transaction OTP."))
.then(() => step(1000,"Wait on the order confirmation screen while the restaurant accepts your order."))
.then(() => step(1000,"Monitor the status updates as the restaurant prepares and packs your food."))
.then(() => step(1000,"Track the delivery partner in real-time on the live map once the food is picked up."))
.then(() => step(1000,"Note down the delivery verification OTP if generated in your app."))
.then(() => step(1000,"Receive the call from the delivery partner or answer the door when they arrive at your location."))
.then(() => step(1000,"Collect your food package, share the delivery OTP if prompted, and pay the cash amount if you selected Cash on Delivery."))