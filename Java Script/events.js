// let btn1 = document.querySelector("#btn1");
// btn1.onclick = () => {
//     console.log("btn1 was clicked");
//     let a = 25;
//     a++;
//     console.log(a);//26
// };

// let div = document.querySelector("div")
// div.onmouseover = (e) =>{
//     console.log(e);
//     console.log(e.type);
//     console.log(e.target);
//     console.log(e.clientX,e.clientY);
// }; 

// btn1.onclick = (e) => {
//     console.log(e);
//     console.log(e.type);
//     console.log(e.target);
//     console.log(e.clientX,e.clientY);
// };

// btn1.addEventListener("click",(e)=>{
//     console.log("button1 was clicked");
//     console.log(e);
//     console.log(e.type);
// });

// btn1.addEventListener("click",()=>{
//     console.log("button1 was clicked 2");
// });

// const handler3 = () => {
//     console.log("button1 was clicked 3");
// };

// btn1.addEventListener("click",()=>{
//     console.log("button1 was clicked 4");
// });

// btn1.addEventListener("click",handler3);

// btn1.removeEventListener("click",handler3);

//Practice Question 1
//Create a toggle button that changes the screen to dark-mode when clicked and light-mode when clicked again.

// let modeBtn = document.querySelector("#mode");
// let currmode = "light"; //dark

//Method 1

// modeBtn.addEventListener("click",() => {
//     if(currmode === "light"){
//         currmode = "dark";
//         document.querySelector("body").style.backgroundColor = "black";
//     } else {
//         currmode = "light";
//         document.querySelector("body").style.backgroundColor = "white";
//     }
//     console.log(currmode);
// });

//Method 2

// modeBtn.addEventListener("click",() => {
//     if(currmode === "light"){
//         currmode = "dark";
//         document.querySelector("body").classList.add("dark");
//         document.querySelector("body").classList.remove("light");
//     } else {
//         currmode = "light";
//         document.querySelector("body").classList.add("light");
//         document.querySelector("body").classList.remove("dark");
//     }
//     console.log(currmode);
// });

//Practice Question 2
//Create a simple mouse hover program that makes changes on website when mouse is hovered.

// let para = document.querySelector("#hover");
// const hover = (event) => {
//         event.target.style.color = "orange";
//         setTimeout(() => {
//             event.target.style.color = "";
//         },500);
// };

// console.log(hover)
// para.addEventListener("mouseover",hover,false);

