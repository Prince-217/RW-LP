// Student registration form :


const fullname = document.getElementById("fullName")
const email = document.getElementById("email")
const age = document.getElementById("age")
const msg = document.getElementById("msg")
const phone = document.getElementById("phone")
const pswd = document.getElementById("password")
const cnfmpswd = document.getElementById("confirmPassword")

const stdinf = document.getElementById("studInfo")

let form = document.getElementById("regForm")

{

    form.addEventListener("submit", (e) => {

        e.preventDefault()

        if (fullname.value == "") {
            msg.style.color = "red"
            msg.innerText = "*Name is required*"
            return
        }
        else if (fullname.value.length < 3) {
            msg.style.color = "red"
            msg.innerText = "*Name must be at least 3 characters*"
            return
        }
        else if (email.value == "") {
            msg.style.color = "red"
            msg.innerText = "*Email is required*"
            return
        }
        else if (age.value == "") {
            msg.style.color = "red"
            msg.innerText = "*Age is required*"
            return
        }

        let emailPattern = /^[A-Z0-9._%+-]+@[A-Z0-9.-]+\.[A-Z]{2,}$/i
        let phonePattern = /^[0-9]{10}$/

        if (!emailPattern.test(email.value)) {
            msg.style.color = "red"
            msg.innerText = "Invalid Email Format"
            return
        }

        if (!phonePattern.test(phone.value)) {
            msg.style.color = "red"
            msg.innerText = "Phone must be 10 digits"
            return
        }

        try {

            if (age.value < 15) {
                throw "*Age must be 15 or above.*"
            }
            else if (age.value > 60) {
                throw "*Age must be 60 or below.*"
            }
            else if (pswd.value.length < 6) {
                throw "*Password must be at least 6 characters*"
            }
            else if (pswd.value !== cnfmpswd.value) {
                throw "*Passwords do not match*"
            }
            else {
                msg.style.color = "green"
                msg.innerText = "✅ Registration Successful!"

                stdinf.innerHTML = `
                    <h2>Student Info</h2>
                    <p>Name: ${fullname.value}</p>
                    <p>Email: ${email.value}</p>
                    <p>Age: ${age.value}</p>
                    <p>Phone: ${phone.value}</p>
                    <p>Password: ${cnfmpswd.value}</p>
                `
            }


        } catch (error) {
            msg.style.color = "red"
            msg.innerText = error
        }
    })
}

