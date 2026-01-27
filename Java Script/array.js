//Arrays
//Create Arrays
// let marks = [97,82,75,64,36];
// console.log(marks);
// console.log(marks.length);

//Array Indices
// console.log(marks[0])//97
// console.log(marks[1])//82

//Looping Over Arrays

// let heroes = ["ironman","thor","hulk","shaktiman","spiderman","antman"];
//for loop
// for(indx=0; indx<heroes.length; indx++){
//     console.log(heroes[indx]);
// }
//for-of loop
// for(let hero of heroes){
//     console.log(hero)
// }

// let cities = ["delhi","pune","mumbai","hyderabad","gurgaon"]

// for(let city of cities){
//     console.log(city.toUpperCase());
// }

//Practice Question 1
//For a given array with marks of students ->[85,97,44,37,76,60]
//Find the average marks of the entire class.

// marks = [85,97,44,37,76,60]
// console.log("Marks = ",marks)
// sum = 0
// for(let mark of marks){
//     sum= sum + mark;
// }
// avg=sum/marks.length;
// console.log("Average = ",avg);
// console.log(`Average of the class is ${avg}`);

//Practice Question 2
/* For a given array with prices of 5 items -> [250,645,300,900,50]
All items have an offer of 10% OFF on them. Change the array to store final price after applying offer.*/

// let prices = [250,645,300,900,50];
// offer = prompt("Enter the percent of offer to be applied: ");
// for (i=0;i<prices.length;i++){
//     prices[i]=prices[i]-prices[i]*(offer/100)
// }
// console.log(prices);

// let i = 0;
// percent = prompt("Enter the offer percentage: ")
// offer = percent/100
// for (let price of prices){
//     prices[i] = prices[i] - price*offer;
//     i++;
// }
// console.log(prices);

//Array Methods

// let foodItems = ["potato","apple","litchi","tomato"]
// foodItems.push("coconut");
// console.log(foodItems);
// console.log(foodItems.pop());
// console.log(foodItems);
// console.log(foodItems.toString());

// let marvel = ["thor","spiderman","ironman"];
// let dc_heroes = ["superman","batman"];
// let indianHeroes = ["shaktiman","krish"];

// let heroes = marvel.concat(dc_heroes,indianHeroes);
// console.log(heroes);

// marvel.unshift("antman");

// let val = marvel.shift();
// console.log("deleted",val);

// let marvel = ["thor","spiderman","ironman","antman","Dr. strange"];
// console.log(marvel);
// console.log(marvel.slice(1,3));

// //replacing 2 element 3,4 with 101,102
// let arr = [1,2,3,4,5,6,7];
// // arr.splice(2,2,101,102);
// // console.log(arr);

// //Add Element
// arr.splice(2,0,101)
// console.log(arr)

// arr.splice()
// console.log(arr)//no change in array

//Practice Question 3
/* Create an array to store companies -> "Bloomberg","Microsoft","Uber","Google","IBM","Netflix"
a. Remove the first company from the array
b. Remove Uber and Add Ola in its place
c. Add Amazon at the end
*/

// let companies = ["Bloomberg","Microsoft","Uber","Google","IBM","Netflix"];

// companies.shift()
// console.log(companies)
// companies.splice(1,1,"Ola");
// console.log(companies);
// companies.push("Amazon");
// console.log(companies);

