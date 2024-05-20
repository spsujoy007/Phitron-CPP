const mealDiv = document.getElementById("mealsection")
const btn = document.getElementById("submitbtn")
const inputdata = document.getElementById("inputfield")
const modalcard = document.getElementById("modalcard")
const modal = document.getElementById("modal")

const fetchData = async (query)=>{
    const res = await fetch(`https://www.themealdb.com/api/json/v1/1/search.php?s=${query}`)
    const data = await res.json()

    mealDiv.innerHTML = ""
    if(!data.meals){
        console.log('nai');
        mealDiv.innerHTML += `<h1>No meals founded with <span class="highlight">"${query}"</span></h1>`
    }else{
        console.log('ache');
    }
    data.meals.map(meal => mealDiv.innerHTML += `
        <div onClick={openModal(${meal.idMeal})} class="card">
            <img src="${meal.strMealThumb}"/>
            <div class="carddetail">
                <h1>${meal.strMeal}</h1>
                <p>${meal.strInstructions.slice(0,125)}...</p>
            </div>
        </div>
    `)

   
}

fetchData("")

btn.addEventListener("click", () => {
    fetchData(inputdata.value)
})


const openModal = async(id) =>{

    // modalcard.innerHTML = `
    //     <div class="modalcontent">
    //     <img src="https://i0.wp.com/fortbendseniors.org/wp-content/uploads/2019/01/blank-white-square-thumbnail.jpg?ssl=1"/>
    //     <div class="modaldetail">
    //         <h1>loading...</h1>
    //         <p>loading...</p>

    //         <div class="moreinfo">
    //             <h5><i class="fa-solid fa-utensils"></i> loading...</h5>
    //             <h5><i class="fa-solid fa-location-dot"></i> loading...</h5>
    //         </div>
    //     </div>
    //     </div>
    // `
    const res = await fetch(`https://www.themealdb.com/api/json/v1/1/lookup.php?i=${id}`)
    const data = await res.json()
    const meal = data.meals[0]


    modalcard.innerHTML = `
        <div class="modalcontent">
        <img src="${meal.strMealThumb}"/>
        <div class="modaldetail">
            <div class="icon">
                <i onclick="closeModal()" class="fa-solid fa-circle-xmark"></i>
            </div>
            <h1>${meal.strMeal}</h1>
            <p>${meal.strInstructions.slice(0,600)}</p>

            <div class="moreinfo">
                <h5><i class="fa-solid fa-utensils"></i> ${meal.strCategory}</h5>
                <h5><i class="fa-solid fa-location-dot"></i> ${meal.strArea}</h5>
            </div>
        </div>
        </div>
    `

    modalcard.style.display = 'flex'
    modal.style.display = 'flex'

}

const closeModal = () =>{
    modal.style.display = 'none'
    modalcard.style.display = 'none'
}