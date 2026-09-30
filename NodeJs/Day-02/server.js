const http = require('http');
const fs = require('fs');
const port = 4000;

const request = (req, res) => {
    let fileName = "";

    switch (req.url){
        case "/page1":
            fileName = "./index.html";
            break;
        case "/home":
            fileName = "./pages/home.html";
            break;
    }

    fs.readFile(fileName, (err, result) => {
        if(!err){
            res.end(result)
        }
    })
}

const server = http.createServer(request);

server.listen(port, (err) => {

    if(!err){
        console.log(`http://localhost:${port}`);
        return false;
    }

    console.log('nodejs server not running');

})