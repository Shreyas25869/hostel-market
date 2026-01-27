// CALLBACKS, PROMISES & ASYNC-AWAIT
// asynchronous programming in JavaScript

// console.log("one");
// console.log("two");
// setTimeout(() => {
//     console.log("hello");
// },4000);
// console.log("three");  
// console.log("four");

// Callbacks

// function sum(a,b) {
//     console.log(a+b);
// }

// function calculator(a,b,sumCallback) {
//     console.log("Calculating sum...");
//     sumCallback(a,b);
// }

// calculator(1,2,sum); // passing sum function as a callback
// //or
// calculator(1,2,(a,b) => {
//     console.log(a+b);
// });

// const hello = () => {
//     console.log("hello");
// };

// setTimeout(hello,3000); // callback function after 3 seconds

// // Callback Hell

// //nesting
// //nested if-else
// let age = 19;
// if(age>=18) {
//     if(age >= 60){
//         console.log("senior citizen");
//     } else {
//         console.log("middle");
//     }
// } else {
//     console.log("minor");
// }

// for(let i=0; i<5; i++) {
//     for(let j=0; j<5; j++) {
//         console.log(j);
//     }
// }

// Callback Hell

// function getData(dataId,getNextData) {
//     setTimeout(() => {
//         console.log("data",dataId);
//         if(getNextData) {
//             getNextData();
//         }
//     },2000);
// }

// getData(1, () => {
//     console.log("Getting data 2....");
//     getData(2,() =>{
//         console.log("Getting data 3....");
//         getData(3,() => {
//             console.log("Getting data 4....");
//             getData(4);
//         });
//     });
// });

//Promises

// let promise = new Promise((resolve,reject) => {
//     console.log("I am a promise");
//     reject("some error occurred");
// });
 
// function getData(dataId,getNextData) {
//     return new Promise((resolve,reject) => {
//         setTimeout(() => {
//             // console.log("data", dataId);
//             // resolve("success");
//             reject("error")
//             if(getNextData) {
//                 resolve(getNextData);
//             }
//         }, 5000);
//     });
// }

// const getPromise = () => {
//     return new Promise((resolve,reject) => {
//         console.log("I am a promise");
//         //resolve("success");
//         reject("some error");
//     })
// }

// let promise = getPromise();
// promise.then((res) => {
//     console.log("promise fulfilled",res);
// });

// promise.catch((err) => {
//     console.log("rejected",err);
// });

// function asyncfunc1() {
//     return new Promise((resolve,reject) => {
//         setTimeout(() => {
//             console.log("data 1");
//             resolve("success");
//         },4000);
//     })
// }

// function asyncfunc2() {
//     return new Promise ((resolve,reject) => {
//         setTimeout(() => {
//             console.log("data 2");
//             resolve("success");
//         },4000);
//     })
// }

// console.log("Fetching Data1...");
// asyncfunc1().then((res => {
//     console.log("Fetching Data2...")
//     asyncfunc2().then((res) => {});
// }));



// function getData(dataId) {
//    return new Promise((resolve,reject) => {
//      setTimeout(() => {
//         console.log("data",dataId);
//         resolve("success");
//     },5000);
//    })
// }
// Using Promises
// console.log("Fetching Data1...");
// getData(1)
//     .then((res) => {
//         console.log("Fetching Data2...");
//         return getData(2);
//     })
//     .then((res) => {
//         console.log("Fetching Data3...");
//         return getData(3); 
//     })
//     .then((res) => {
//         console.log("success")
//     });

// Using Async/Await

// function api() {
//     return new Promise((resolve,reject) => {
//         setTimeout(() => {
//             console.log("weather data");
//             resolve(200);
//         },2000);
//     });
// }

// async function getWeatherData() {
//     await api(); //1st
//     await api(); //2nd
//     console.log("Weather data fetched");
// }

//async await function

// function getData(dataId) {
//    return new Promise((resolve,reject) => {
//      setTimeout(() => {
//         console.log("data",dataId);
//         resolve("success");
//     },5000);
//    })
// }

// Using Async/Await
// async function getAllData() {
//     console.log("Fetching Data1...");
//     await getData(1);
//     console.log("Fetching Data2...");
//     await getData(2);
//     console.log("Fetching Data3...");
//     await getData(3);
//     console.log("Fetching Data4...");
//     await getData(4);
//     console.log("All data fetched successfully");
// }

//IIFE

// (async function getAllData() {
//     console.log("Fetching Data1...");
//     await getData(1);
//     console.log("Fetching Data2...");
//     await getData(2);
//     console.log("Fetching Data3...");
//     await getData(3);
//     console.log("Fetching Data4...");
//     await getData(4);
//     console.log("All data fetched successfully");
// }) ();


