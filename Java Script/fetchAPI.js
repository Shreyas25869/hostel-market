// const URL = "https://jsonplaceholder.typicode.com/users";
// const factPara = document.querySelector("#fact");
// const btn = document.querySelector("#btn");
// let promise = fetch(URL);
// console.log(promise);


// const getFacts = async() => {
//     console.log("getting data....");
//     let response = await fetch(URL);
//     console.log(response);
//     let data = await response.json();
//     factPara.innerHTML = data[1].name + " is a user from " + data[1].address.city;
//     console.log(data);
// };

// function getFacts() {
//     fetch(URL).then(response => {
//         return response.json();
//     })
//     .then ((data) => {
//         console.log(data);
//         factPara.innerText =  data[1].name ;
//     });
// }



// btn.addEventListener("click", getFacts);