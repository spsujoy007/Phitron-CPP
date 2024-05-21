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
            <button id=${idPlayer} onClick={selectPlayer(${idPlayer})}>Add To Group</button>
            <button onClick={openModal(${idPlayer})}>Details</button>
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

    if(selectedPlayers.length < 11){
        selectedPlayers.push(data.players[0])
        // change the button when select
        const btn = document.getElementById(`${id}`)
        btn.innerText = "Added"
        btn.style.backgroundColor = "black"
        btn.removeAttribute(id)
        const counting = document.getElementById("counting")
        const count = parseInt(counting.innerText)+1
        counting.innerText = count.toString()
        // selectPlayer.map(p => playersDiv.innerHTML += `<p>${p.strPlayer}</p>`)
        showSelectedPlayers()
        
    }
    else{
        alert("Already selected 11 Players")
    }
    
}

const playersDiv = document.getElementById("selectedPlayersMain")
const showSelectedPlayers = () =>{
    playersDiv.innerHTML = ""
    const reversPlayers = [...selectedPlayers].reverse();
    reversPlayers.map(({idPlayer, strPlayer, strThumb, strNationality, strTeam, strSport}) => 
        playersDiv.innerHTML += `
        <div class="singlePlayer">
            <img src=${strThumb ? strThumb : "https://static.vecteezy.com/system/resources/thumbnails/039/845/041/small_2x/flat-illustration-in-grayscale-avatar-user-profile-person-icon-anonymous-profile-profile-picture-for-social-media-profiles-icons-screensaver-free-vector.jpg"} alt="">
            <div class="details">
                <h2>${strPlayer}</h2>
                <p>${strSport}</p>
            </div>
        </div>
    `)
}


const modalmain = document.getElementById("modalmain")
const modalBanner = document.getElementById("modalBanner")
const openModal = async(id)=>{
    const res = await fetch(`https://www.thesportsdb.com/api/v1/json/3/lookupplayer.php?id=${id}`)
    const data = await res.json()
    const modalMain = document.getElementById("modalmain")
    const {idPlayer, strPlayer, strThumb, strGender, dateBorn, strNationality, strTeam, strSport, strFacebook, strTwitter, strInstagram} = data.players[0]
    modalMain.innerHTML += `
        <div class="modal">
        <img src=${strThumb ? strThumb : "https://static.vecteezy.com/system/resources/thumbnails/039/845/041/small_2x/flat-illustration-in-grayscale-avatar-user-profile-person-icon-anonymous-profile-profile-picture-for-social-media-profiles-icons-screensaver-free-vector.jpg"} alt="">
        <div class="modalDetails">
            <div class="closediv">
                <h2 class="primary-color">Yohann Pel</h2>
                <i onclick="closeModal()" class="fa-solid fa-circle-xmark"></i>
            </div>
            <div class="modalinfo">
                <p>Yohan Alexandre Mady Boli (born 17 November 1993) is a professional footballer who plays as a forward for Qatar Stars League side Qatar. Born in France, he represented Ivory Coast internationally. International career Boli was born in France and is Ivorian by descent. He debuted for the Ivory Coast in a 2-1 loss to Gabon for 2018 FIFA World Cup qualification on 2 September 2017. </p>
                <div class="otherinfo">
                    <p><span>Natinality: </span> ${strNationality}</p>
                    <p><span>Team: </span> ${strTeam}</p>
                    <p><span>Sport: </span> ${strSport}</p>
                    <p><span>Birthdate: </span> ${dateBorn}</p>
                    <p><span>Gender: </span> ${strGender}</p>
                </div>
                <div class="iconmain">
                    <div class="icons">
                        ${
                            strFacebook &&
                            `<a target="_blank" href="https://${strFacebook}"><i class="fa-brands fa-facebook"></i></a>`
                        }
                        ${
                            strTwitter &&
                            `<a target="_blank" href="https://${strTwitter}"><i class="fa-brands fa-twitter"></i></a>`
                        }
                        ${
                            strInstagram &&
                            `<a target="_blank" href="https://${strInstagram}"><i class="fa-brands fa-instagram"></i></i></a>`
                        }
                    </div>
                </div>
            </div>
        </div>
    </div>
    `
    modalmain.style.display = "block"
    modalBanner.style.display = "block"
}

const closeModal = () =>{
    modalmain.style.display = "none"
    modalBanner.style.display = "none"
}