//FUNCTIONS IN JS

// function myfunction(msg,n){ //parameter -> input
//     console.log(msg*n);
// }
// //Nan error -> Not a number
// myfunction("I Love JS",100);//argument

//Function -> 2 numbers, sum

// function sum(x,y){
//     //local variables -> scope
//     s = x + y;
//     return s;
// }

// let val = sum(3,4);
// console.log(x);
// console.log(val);

//Arrow Functions
//a part of Modern JS
//Sum Function

// function sum(a,b){

//     return a+b;

// }

// const add  = (a,b) =>{
    
//     return a+b;

// }

//Practice Question 1
//Create a function using the "function" keyword that takes a String as an argument and returns the number of vowels in the string.

// function vow(str){
//     count = 0
//     for (let v of str){
//         if (v === "a"||"e"||"i"||"o"||"u"){
//             count++
//         }
//     }
//     return count
// }

// console.log(vow("aeiou"));

// const vow = (str)=> {
//     count = 0;
//     for (let v of str){
//         if (v === "a"||"e"||"i"||"o"||"u"){
//             count++;
//         }
//     }
//     return count;
// }

// console.log(vow("aeiou"));

//forEach Loop in Arrays

// let arr = ["pune","delhi","mumbai","puri"];

// arr.forEach((val,indx,arr)=>{ //value at each index
//     console.log(val.toUpperCase(),indx,arr);
// });

//Practice Question 2
//For a given array of numbers, print the square of each value using the forEach loop.

// arr = [1,2,3,4,5,6]

//Method 1
// arr.forEach((val)=>{
//     console.log(val**2);
// });

//Method 2
// let calcsquare = (arr)=>{
//     console.log(arr**2)
// }

// arr.forEach(calcsquare)

//some more array methods
//MAP

// let nums = [67,52,39]

// let newarr = nums.map((val) => {
//     return val**2;
// });

// console.log(newarr) 

//FILTER

// let arr = [1,2,3,4,5,6,7]

// let evenArr = arr.filter((val) => {
//     return val % 2 === 0;
// });

// console.log(evenArr);

//REDUCE

// let arr = [1,2,3,4]

// const output = arr.reduce((acc,curr) => {
//     return acc + curr;
// });
// console.log(output); //10

//Greatest Amoung Them
// let ar = [5,6,2,1,3];

// const output = ar.reduce((prev,curr) => {
//     return prev > curr ? prev : curr;
// });

// console.log(output);

//Practice Question 3
//We are given array of marks of students. Filter out of the marks of students that scored 90+.
// let arr = [87,93,64,99,86]

// const output = arr.filter((val)=>{
//     return val > 90;
// });

// console.log(output);

/* Take a number n as input from user. Create an array of numbers from 1 to n.
Use the reduce method to calculate sum of all numbers in the array.
Use the reduce method to calculate product of all numbers in the array. */

// n = prompt("Enter the number: ")

// let arr = [];

// for(let i = 0; i < n; i++){
//     arr[i]= i + 1;
// }
// console.log(arr);

// const output = arr.reduce((prev,curr) => {
//     return prev + curr;
// });

// console.log("Sum of all the number from 1 to n is:",output);

// const output2 = arr.reduce((prev,curr) =>{
//     return prev * curr;
// });
// console.log("The product of all the numbers from 1 to n is:",output2);
