console.log("===== getElementsById =====");

document.getElementById("boardTitle").innerText = "Welcome to RW Skill Education - Student Board"

console.log(`Board Title: ${document.getElementById("boardTitle").innerText}`);

document.getElementById("footerMsg").innerText = "Updated by: Prince | DOM Task"

console.log(`Footer: ${document.getElementById("footerMsg").innerText}`);



console.log("===== getElementsByClassName =====");

let elemAry = document.getElementsByClassName("notice")

console.log(`Total Notices: ${elemAry.length}`);

elemAry[0].innerText = "📢 Exam date has been changed to 20th August"

for(let i of elemAry){
    console.log(i.innerText)
}




console.log("===== getElementsByTagName =====");


let tagAry = document.getElementsByTagName("td")

console.log(`Total TDs: ${tagAry.length}`);

for(let i of tagAry){
    console.log(i.innerText);
    i.style.backgroundColor = "yellow"
}




console.log("===== getElementsByName =====");


let nameAry = document.getElementsByName("studentName")

console.log(`Total Students: ${nameAry.length}`);

nameAry.forEach((x) => {
    console.log(x.innerText);
})

nameAry[4].innerText = "Arjun Sharma"




let deptAry = document.getElementsByName("studDept")

deptAry.forEach((x) => {
    if(x.innerText == "Full Stack Development"){
        x.innerText = x.innerText.toUpperCase()
    }
})

let tagAry2 = document.getElementsByTagName("th")

console.log(`Total THs: ${tagAry2.length}`);
