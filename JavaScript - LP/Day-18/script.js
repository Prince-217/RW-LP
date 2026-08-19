// const { createElement } = require("react");

console.log("===== getAttribute() =====");

let webLink = document.getElementById("websiteLink")

console.log(`href: ${webLink.getAttribute("href")}\ntarget: ${webLink.getAttribute("target")}`);


console.log("===== setAttribute() =====");

document.getElementById("portalLink").setAttribute("href", "https://student.rwskill.in/")
document.getElementById("portalLink").setAttribute("target", "_blank")
document.getElementById("portalLink").setAttribute("class", "navlink")

console.log(document.getElementById("portalLink"));



console.log("===== removeAttribute() & hasAttribute() =====");

let prtLink = document.getElementById("portalLink")

prtLink.removeAttribute("class");

console.log(`Has class attribute: ${prtLink.hasAttribute("class")}`);


function makeUrgent(){
    document.getElementById("noticeBox").classList.add("urgent")
}

function makeNormal(){
    document.getElementById("noticeBox").classList.remove("urgent", "resolved")
}

function toggleNotice(){
    document.getElementById("noticeBox").classList.toggle("notice")
}

function makeResolved(){
    document.getElementById("noticeBox").classList.replace("urgent", "resolved")
}

function checkUrgent(){
    console.log("===== checkUrgent (on button click) =====");
    
    if(document.getElementById("noticeBox").classList.contains("urgent")){
        console.log("Is Urgent: ",true);
    }
    else{
        console.log("Is Urgent: ",false);
    }
}

let elem1 = document.createElement("p")
let elem2 = document.createElement("p")
let elem3 = document.createElement("p")

elem1.innerText = "📢 Exam date: 20th August"
elem2.innerText = "📢 Result date: 15th September"
elem3.innerText = "📢 New batch starts: 1st October"

elem1.classList.add("notice")
elem2.classList.add("notice")
elem3.classList.add("notice")

document.getElementById("board").appendChild(elem1)
document.getElementById("board").appendChild(elem2)
document.getElementById("board").appendChild(elem3)


let elemUrgent = document.createElement("p")

elemUrgent.classList.add("urgent")

elemUrgent.innerText = "⚠️ Fee payment URGENT — last date tomorrow!"

document.getElementById("board").appendChild(elemUrgent)

let newAddElements = document.getElementById("board").getElementsByTagName("p")

console.log(newAddElements);

for(let ele of newAddElements){
    if(ele.classList.contains("urgent")){
        console.log(ele);
    }
}
