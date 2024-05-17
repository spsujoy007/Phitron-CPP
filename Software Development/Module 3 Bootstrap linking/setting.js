const myform = document.getElementById("myform")

myform.addEventListener("submit", (event) => {
    event.preventDefault()
    const form = event.target
    const name = form.name.value
    const localData = JSON.parse(localStorage.getItem("userdata")) // get the old items or check
    if(!localData){ // if localdata not in storage
        localStorage.setItem("userdata", JSON.stringify([{username: name}]))
    }

    // const newdata = 
    localStorage.setItem("userdata", JSON.stringify([...localData, {username: name}]))
    form.reset() // for reset form value
})
console.log(localData)