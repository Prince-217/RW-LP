// Student task manager


let remTask = document.getElementById("taskList")

document.getElementById("removeBtn").addEventListener("click", () => {
    remTask.removeChild(remTask.children[1])
})

document.getElementById("deleteBtn").addEventListener("click", () => {
    document.getElementById("taskContainer").remove()
})

let oldTtl = document.getElementById("pageTitle")

let newTtl = document.createElement("h2")
newTtl.innerText = "📋 My Daily Task List"

document.getElementById("replaceBtn").addEventListener("click", () => {
    document.body.replaceChild(newTtl, oldTtl);
})

document.getElementById("traverseBtn").addEventListener("click", () => {
    console.log("===== Traversal info =====");

    let element = document.getElementById("taskList")
    console.log("Parent:", element.parentElement);
    console.log("Children:", element.children);
    console.log("First Child:", element.firstElementChild);
    console.log("Last Child:", element.lastElementChild);
    console.log("Next Sibling:", element.nextElementSibling);
    console.log("Previous Sibling:", element.previousElementSibling);

    console.log("===========================");
    
})

document.getElementById("hoverBtn").addEventListener("mouseenter", () => {
    document.getElementById("hoverBtn").innerText = "You entered! 👋"
    document.getElementById("hoverBtn").style.backgroundColor = "Blue"
    document.getElementById("hoverBtn").style.color = "white"
})

document.getElementById("hoverBtn").addEventListener("mouseleave", () => {
    document.getElementById("hoverBtn").innerText = "Hover Me"
    document.getElementById("hoverBtn").style.backgroundColor = ""
    document.getElementById("hoverBtn").style.color = ""
})

document.getElementById("hoverBtn").addEventListener("dblclick", () => {
    console.log("Button Double Clicked!");
})

document.getElementById("taskForm").addEventListener("submit", function(event){
    event.preventDefault();

    let input = document.getElementById("newTask")

    if(input.value.length == 0) console.log("⚠️ Please enter a task!");
    else{
        
        let nwTsk = document.createElement("li")
        
        nwTsk.innerText = input.value

        document.getElementById("taskList").appendChild(nwTsk)
        
        document.getElementById("taskCount").innerText = `Total Tasks: ${document.getElementById("taskList").children.length}`
        
        console.log(`✅ Task added: ${input.value}`);
        
        input.value = "";
    }
    
})