// Database, MongoDB, Mongoose

import express from 'express'
import mongoose from 'mongoose'

const app = express()
const PORT = 3000

const studentSchema = new mongoose.Schema({
    name:String,
    age:Number,
    email:String,
    course:String
})

const Student = mongoose.model("Student", studentSchema)

mongoose.connect("mongodb+srv://naiprince345_db_user:prince_9094@prince-cluster.fbf9gt3.mongodb.net/?appName=Prince-Cluster").then(() => {
    console.log("MongoDB Connected Successfully");

    const student = new Student({
        name:"Prince",
        age:20,
        email:"prince3@gmail.com",
        course:"FSD",
    })

    return student.save()
    
}).then(() => {
    console.log("Student added successfully.");
}).catch((err) => {
    console.log("MongoDB connection failed.");
    console.log(err);
})

app.get("/", (req, res) => {
    res.send("Welcome to Node.Js Application")
})

app.listen(PORT, () => {
    console.log(`Server start on port ${PORT}`);
})