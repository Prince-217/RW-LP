window.addEventListener("scroll", () => {
    console.log("Page is scrolling...");
    
    if (window.scrollY > 50) {
        document.getElementById("navbar").style.backgroundColor = "blueviolet"
        document.getElementById("navbar").style.color = "white"
    }
    else {
        document.getElementById("navbar").style.backgroundColor = ""
        document.getElementById("navbar").style.color = ""
    }
    
    
    if (window.scrollY > 600) {
        document.body.style.backgroundColor = "#d0e8ff"
    }
    if (window.scrollY > 1200) {
        document.body.style.backgroundColor = "#d0ffd6"
    }
    if (window.scrollY > 1800) {
        document.body.style.backgroundColor = "#ffd6d6"
    }
    if (window.scrollY < 10) {
        document.body.style.backgroundColor = ""
    }
    
    
    if (window.scrollY > 300) {
        document.getElementById("topBtn").style.display = "block"
    }
    else {
        document.getElementById("topBtn").style.display = ""
    }
    
})

window.onscroll = function(){
    document.getElementById("scrollInfo").innerText = `Scroll: ${window.scrollY}px`
}

document.getElementById("topBtn").addEventListener("click", () => {
    window.scrollTo({
        top: 0,
        behavior: "smooth"
    })
})

