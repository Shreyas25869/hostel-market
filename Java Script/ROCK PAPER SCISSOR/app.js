let userScore = 0;
let compScore =0;

const userScorePara = document.querySelector("#user-score");
const compScorePara = document.querySelector("#comp-score");
const choices = document.querySelectorAll(".choice");
const msg = document.querySelector("#msg");

const genComputerChoice = () => {
    const options = ["rock","paper","scissors"];
    const randIndx = Math.floor(Math.random()*3);
    return options[randIndx];
    //rock, paper, scissors 
};

const drawGame = () => {
    msg.innerText = "Its A Draw! Play Again";
    msg.style.backgroundColor = "";
}

const showWinner = (userWin,userChoice,compChoice) => {
    if (userWin) {
        userScore++;
        userScorePara.innerText = userScore;
        msg.innerText = `You Win! Your ${userChoice} beats ${compChoice}`;
        msg.style.backgroundColor = "green";
    } else {
        compScore++;
        compScorePara.innerText = compScore;
        msg.innerText = `You Loose! ${compChoice} beats your ${userChoice}`;
        msg.style.backgroundColor = "red";
    }
};

const playGame = (userChoice) => {
    //Generate computer choice
    const compChoice = genComputerChoice();

    if (userChoice  === compChoice) {
        //Draw Game
        drawGame();
    } else {
        let userWin = true;
        if (userChoice === "rock") {
            //paper, scissors
            userWin = compChoice === "paper" ? false : true;
        } else if(userChoice ==="paper"){
            //rock, scissors
            userWin = compChoice === "scissors" ? false:true;
        } else {
            //paper,rock
            userwin = compChoice === "rock" ? false:true;
        }
        showWinner(userWin,userChoice,compChoice);
    }
};

choices.forEach((choice) =>{
    choice.addEventListener("click",() => {
        const userChoice = choice.getAttribute("id");
        playGame(userChoice);
    });
});