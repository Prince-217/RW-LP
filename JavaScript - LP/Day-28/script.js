// API Concept
// Dog API
// Corona API
// Cricket API
// Movie API


// Corona API


function getCovidInfo() {

    const val = document.querySelector("#country");
    const country = String(val.value).toLowerCase();
    const ctHd = document.getElementById("countryHeader");
    const population = document.getElementById("population");
    const totalCs = document.getElementById("totalCases");
    const recv = document.getElementById("recovered");
    const active = document.getElementById("activeCase");
    const critical = document.getElementById("criticalCase");

    fetch(`https://disease.sh/v3/covid-19/countries/${country}`)
        .then(response => {
            return response.json();
        })
        .then(data => {
            ctHd.innerText = `${data.country}`
            population.innerText = `Total Population: ${data.population}`
            totalCs.innerText = `Total Cases: ${data.cases}`
            recv.innerText = `Recovered Cases: ${data.recovered}`
            active.innerText = `Active Cases: ${data.active}`
            critical.innerText = `Critical Cases: ${data.critical}`
        })
        .catch(err => {
            console.log(err);
        })
}

// DOG API

function getDog() {
    let dog = document.getElementById("dogimg")
    fetch("https://dog.ceo/api/breeds/image/random")
        .then(response => {
            return response.json()
        })
        .then(data => {
            dog.setAttribute("src", `${data.message}`)
            dog.setAttribute("height", "500");
            dog.setAttribute("width", "500");
        })
}