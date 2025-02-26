function waitfor3s(resolve) {
    setTimeout(resolve , 10000)
}

function setTimeoutpromisified() {
    return new Promise(waitfor3s(main));
} 

function main() {
    console.log("hii")
}

setTimeoutpromisified().then(main);