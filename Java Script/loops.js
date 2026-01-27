//Loops in JS
// for Loop
//print apna college 5 times
// for (i =1;i <=5; i++){
//     console.log("Apna College")//5 times executed
// }
// console.log("Loop has ended")

// Calculate sum of 1 to 5
// let sum = 0;
// for (let i=1; i<=5;i++){
//     sum=sum + i;
// }
// console.log("sum =", sum)
// console.log("loop has ended");

// for (let i =1;i <=5; i++){
//     console.log("i =",i);//5 times executed
// }
// console.log(i) // gives error because i is a block code var

//Infinite Loop
// for (let i=1; i>=0; i++){
//     console.log("i =",i);
// }

//while Loop

// let i=1;
// while(i<=5){
//     console.log("Apna College");
//     i++;
// }

//do-while Loop

// let i=20;
// do{
//     console.log("Apna College");
//     i++;
// }while (i<=10);

// let i=1;
// do{
//     console.log("i =",i);
//     i++;
// } while (i<=5);

//for-of Loop

// let str = "Hiten"

// for (let i of str){ //itterator --> characters (automatic)
//     console.log("i =",i)
// }

// let str = "JavaScript"
// let size = 0;
// for (let val of str){
//     console.log("val =",val)
//     size++ ;//only for counting the length of str
// }
// console.log("String size =",size)//10

//for-in Loop

// let student = {
//     name: "Hiten Ranjan",
//     age: 20,
//     cgpa: 7.5,
//     isPass: true
// };

// for (let key in student){
//     console.log(key)
// }

// for (let key in student){
//     console.log("key =",key," Value =",student[key]);
// }

//Practice Question 1
//Print all even numbers from 0 to 100.

// for (i=0; i<=100; i++){
//     if(i % 2 === 0){
//         console.log("Even Number =",i)
//     }
// }

//Practice Question 2
//Create a game where you start with any random game number. Ask the user to keep guessing the game number until the user enters correct value.
// let gameNum = '25';
// let userNum = prompt("Guess the game number : ");

// while (userNum != gameNum){
//     userNum = prompt("You entered wrong number. Guess again : ");
// }
// console.log("Congratulations, you entered the right number");

//Strings

//create string
// let str="Hiten Ranjan"
// console.log(str)

//string length
// len=str.length
// console.log(len)

//string indices
// console.log(str[8]);//n

//Template Literals 
// let specialString = `This is a template literal`
// console.log(typeof specialString)//string

// let obj = {
//     item: "pen",
//     price: 10,
// };

// console.log("the cost of",obj.item,"is",obj.price,"rupees");
//instead of above think we can use template literals like this
// let output=`the cost of ${obj.item} is ${obj.price} rupees`;
// console.log(output)

//Escape character
// let str = "Apna\nCollege"
// let str="Apna\tCollege"
// console.log(str)
// console.log(str.length)

//String methods in js
// let str = "ApnaCollege"
// str = str.toUpperCase();
// console.log(str)
// str = str.toLowerCase();
// console.log(str)
// let str="     Apna College    "
// str=str.trim();
// console.log(str);//trims leftmost and rightmost spaces of string only

// let str="0123456"
// console.log(str.slice(1,3));//12

// let str="hello"
// console.log(str.replaceAll("l","m"))

// let str="IloveJS"
// console.log(str.charAt(3));//v

//Practice Question 1
/*Prompt the user to enter their full name.Generate a username for them based on the input.
Start username with @, followed by their full name and ending with the fullname length.*/
//eg: user name = "shradhakhapra",username should be "@shradhakhapra13"

// userName = prompt("Enter your username: ")
// len=userName.length
// finalName = `@${userName}${len}` 
// console.log(finalName)
