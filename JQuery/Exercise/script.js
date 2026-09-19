// Q1. -------------------------------------------------------

const ans1 = document.getElementById("ans1")

if (jQuery !== undefined) {
    ans1.innerText = "Yes, jQuery is loaded."
}
else {
    ans1.innerText = "No, jQuery is not loaded."
}


// Q2. -------------------------------------------------------


$("#scrollTopBtn").click(function () {
    $(window).scrollTop(0);
})


// Q3. -------------------------------------------------------

$("#animateBtn").click(function () {
    $(this).animate({ height: '100px', width: '200px' }, 600)
})


// Q4. -------------------------------------------------------

$("#fadeInBtn").click(function () {
    $("#fadebox").fadeIn("slow")
})


// Q5. -------------------------------------------------------

document.getElementById("checkbox").addEventListener("change", () => {
    
    if ($("#checkbox").is(":checked")) {
        $("#checkBtn").prop("disabled", false)
        $("#checkBtn").prop("cursor", "pointer")
        $("#checkBtn").click(function(){
            alert("Check Box Checked...!!")
        })        
    } else {
        $("#checkBtn").prop("disabled", true)
        $("#checkBtn").prop("cursor", "not-allowed")
    }
    
})

// Q6. -------------------------------------------------------

$("#printBtn").click(function(){
    window.print()
})


// Q7. -------------------------------------------------------

$("#maxLengthInput").attr('maxlength', '10')


// Q8. -------------------------------------------------------

$("#forgetBoldWords").css("font-weight", "normal")


// Q9. -------------------------------------------------------

$("#parentDiv").click(function(){
    $(this).append(`<div class="p-3 w-fit bg-slate-400 text-black">Appended Div</div>`)
})


// Q 10 & 11 -------------------------------------------------------

const student = {
    name: "Alex",
    age: 19,
    course: "MERN Stack",
    dob: "21 July, 2007"
}

$.each(student, function(key, value){
    $("#jsonValues").append(`<li><span class="font-semibold">${key}:</span> ${value}</li>`)
})


// Q12. -------------------------------------------------------

$("#knowInput").click(function(){
    alert(`Input Value(Q12): "${$("#inputText").val()}"`)
})


// Q13. -------------------------------------------------------

$("#changeInput").click(function(){
    $("#inputChange").val("Hello world...!!")
})