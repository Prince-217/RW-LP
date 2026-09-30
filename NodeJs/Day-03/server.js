import express from 'express';

const app = express()

const port = 3000


app.use(express.json())


app.get('/', (req, res) => {
    res.send("Welcome to Express.js")
})

app.get('/about', (req, res) => {
    res.send("This is About Page")
})

app.get('/contact', (req, res) => {
    res.send("This is contact page")
})

app.get('/person', (req, res) => {
    const person = {
        id : 1,
        name : 'Rahul',
        age : 22,
        email : "rahul@gmail.com"
    }

    res.json(person)
})

const person = [
    {
        id: 1,
        name: 'Rahul',
        age: 22,
        gmail: "rahul@gmail.com"
    },
    {
        id: 2,
        name: "Raj",
        age: 23,
        gmail: "raj123@gmail.com"
    },
    {
        id: 3,
        name: "Mehul",
        age: 21,
        gmail: "mehul123@gmail.com"
    },
    {
        id: 4,
        name: "Alex",
        age: 25,
        gmail: "alexjohn189@gmail.com"
    }
]

app.get('/persons', (req, res) => {
    res.json(person)
})

app.get('/persons/:id', (req, res) => {
    const id = req.params.id;
    const persons = person.filter(item => item.id == id)
    res.send(persons)
})

app.listen(port, () => {
    console.log(`Sever start in port ${port}`);
})