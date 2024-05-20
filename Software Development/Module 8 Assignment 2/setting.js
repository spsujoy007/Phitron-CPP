const playercard = document.getElementById("playercard")
const submitButton = document.getElementById("submit")
const searchInput = document.getElementById("searchInput")

let selectedPlayers = []

const fetchData = async(query) =>{
    playercard.innerHTML = ""
    const res = await fetch(`https://www.thesportsdb.com/api/v1/json/3/searchplayers.php?p=${query}`)
    const data = await res.json()

    data.player.slice(0,10).map(({idPlayer, strPlayer, strThumb, strNationality, strTeam, strSport}) => playercard.innerHTML += `
        <div class="card">
        <img src=${strThumb ? strThumb : "https://static.vecteezy.com/system/resources/thumbnails/039/845/041/small_2x/flat-illustration-in-grayscale-avatar-user-profile-person-icon-anonymous-profile-profile-picture-for-social-media-profiles-icons-screensaver-free-vector.jpg"} alt="">
        <div class="content">
            <h2 class="name">${strPlayer}</h2>
            <div class="moreinfo">
                <p><span class="tag">Nationality</span> <span class="taginfo">${strNationality}</span></p>
                <p><span class="tag">Team</span> <span class="taginfo">${strTeam}</span></p>
                <p><span class="tag">Sport</span> <span class="taginfo">${strSport}</span></p>
            </div>
            <p>Theodore James Perkins (born September 3, 1984) is an American professional...</p>
        </div>
        <div class="buttongroup">
            <button onClick={selectPlayer(${idPlayer})}>Add To Group</button>
            <button>Details</button>
        </div>
    </div>
    `)
}

fetchData("")

submitButton.addEventListener("click", () => {
    fetchData(searchInput.value)
    // console.log(searchInput.value);
})

const selectPlayer = async(id) => {
    const res = await fetch(`https://www.thesportsdb.com/api/v1/json/3/lookupplayer.php?id=${id}`)
    const data = await res.json()
    selectedPlayers.push(data.players[0])
    console.log(selectedPlayers);
    // selectedPlayers.find(p => p.idPlayer === idPlayer)?
    // use it for already selected player 
}
