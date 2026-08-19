{

    let mins = 0
    let secs = 0
    let milsecs = 0

    let timer;

    function start() {
        timer = setInterval(() => {
            milsecs++

            if (milsecs == 100) {
                milsecs = 0
                secs++
            }

            if (secs == 60) {
                secs = 0
                mins++
            }

            document.getElementById("minutes").innerText = String(mins).padStart(2, "0")

            document.getElementById("seconds").innerText = String(secs).padStart(2, "0")

            document.getElementById("milsecs").innerText = String(milsecs).padStart(2, "0")

        }, 10)
    }

    function stop() {
        clearInterval(timer)
    }

    function reset() {
        clearInterval(timer)

        mins = 0
        secs = 0
        milsecs = 0

        document.getElementById("minutes").innerText = String(mins).padStart(2, "0")

        document.getElementById("seconds").innerText = String(secs).padStart(2, "0")

        document.getElementById("milsecs").innerText = String(milsecs).padStart(2, "0")

    }
}
