// const API = "http://localhost:3000/books";
const API = "https://dummyjson.com/quotes";

let quoteArray = [];

const fetchApi = async () => {
    let cldata = await fetch(API);
    let resdata = await cldata.json();

    quoteArray.push(resdata);
}

const getData = async () => {
    await fetchApi();
    const ary = quoteArray[0].quotes;
    ary.map((item, index) => {

        const div = document.createElement("div");
        div.setAttribute("id",`d${index+1}`)

        document.body.appendChild(div)

        document.getElementById(`d${index+1}`).innerText = `
            Quote ID: ${index+1}\nQuote: ${item.quote}\nAuthor: ${item.author}
        `
    })
}

getData()
