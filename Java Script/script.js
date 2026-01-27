// window.console.log("Hello");
// console.log("Hello");
// console.log(window);
// console.dir(document);
// console.dir(document.body);//object
// console.log(document.body);//html version of object
// console.dir(document.head);
// console.log(document.head);
// console.dir(document.body.childNodes[1]);
// let heading = document.getElementById("heading");//h1
// console.dir(heading);
// let headings = document.getElementsByClassName("heading");
// console.dir(headings);
// console.log(headings);

// let button = document.getElementById("myId");
// console.dir(button);
// console.log(button);

// let parahs = document.getElementsByTagName("p");
// console.dir(parahs);

//Query Selector

// let firstEl= document.querySelector(".myClass")//first element
// console.dir(firstEl)

// let allEl = document.querySelectorAll(".myClass")
// console.dir(allEl)

// let div = document.querySelector("div")
// console.dir(div);

// let heading=document.querySelector("h1");

//Practice Question 1
//Create a H2 heading elements with text- "Hello Javascript".Append "from Apna College students"to this text using JS.
// let h2 = document.querySelector("h2");
// console.log(h2)
// h2.innerText = h2.innerText + "from Apna College students";

//Practice Question 2
//Create 3 divs with common class name- "box".Access them and add some unique text to each of them.
// let divs= document.querySelectorAll(".box");
// let idx=1;
// for (let div of divs){
//     div.innerText = `new inner value ${idx}`;
//     idx++;
// }
// divs[0].innerText = "New Unique Value1";
// divs[1].innerText = "New Unique Value2";
// divs[2].innerText = "New Unique Value3";

// let div = document.querySelector("div")
// console.log(div);

//Attributes

// let id= div.getAttribute("id");
// console.log(id)
// let name= div.getAttribute("name");
// console.log(name);

// let para = document.querySelector("p");
// console.log(para.getAttribute("class"));
// console.log(para.setAttribute("class","newclass"));

// Style
// let div = document.querySelector("div");
// div.style.backgroundColor = "green";
// div.style.backgroundColor = "pink";
// div.style.visibility="hidden";

//create elements
// let newBtn = document.createElement("button");
// newBtn.innerText = "Click Me!";

//insert elements

// let div = document.querySelector("div")
// div.append(newBtn);
// div.prepend(newBtn);
// div.before(newBtn);
// div.after(newBtn);

// let newheading = document.createElement("h1");
// newheading.innerHTML = "<i> Hello </i>";
// document.querySelector("body").prepend(newheading);

// let para = document.querySelector("p");
// para.remove();

//Practice Question 3
//Create a new button element.Give it a text "click me",background color red and text color of white.
//Insert the button as the first element inside the body tag.

// let newBtn = document.createElement("button")
// newBtn.innerText = "Click Me";
// newBtn.style.color = "white";
// newBtn.style.backgroundColor = "red";
// document.querySelector("body").prepend(newBtn);

/*Create a <p> tag in html,give it a class and some styling.
Now create a new class in CSS and try to append this class to the <p> element.
Did you notice, how you overwrite the class name when you add a new one? 
Solve this problem using classList.*/

// let para = document.querySelector("p");
// para.classList.add("newclass");
// para.classList.remove("newclass");