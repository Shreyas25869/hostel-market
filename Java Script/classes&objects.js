// const student = {
//     fullName: "Hiten Ranjan",
//     marks: 94.4,
//     printMarks: function() {
//         console.log("marks = ",this.marks);//student.marks
//     }
// };

// const employee = {
//     calcTax() {//method 1
//         console.log("tax rate is 10%");
//     },
//     calctax2 : function () {//method 2
//         console.log("tax rate is 10%");
//     }
// }

// const karanArjun = {
//     salary: 50000,
// };
// const karanArjun2 = {
//     salary: 50000,
// };
// const karanArjun3 = {
//     salary: 50000,
// };
// const karanArjun4 = {
//     salary: 50000,
// };
// const karanArjun5 = {
//     salary: 50000,
// };
// const karanArjun6 = {
//     salary: 50000,
// };

// karanArjun.__proto__ = employee;

// Classes

// class ToyotaCar {
//     constructor(brand,mileage) {
//         console.log("creating new object");
//         this.brand = brand;
//         this.mileage = mileage;
//     }
//     start() {
//         console.log("start");
//     }

//     stop() {
//         console.log("stop");
//     }

// }

// let fortuner = new ToyotaCar("fortuner",10); //constructor
// console.log(fortuner)
// let lexus = new ToyotaCar("lexus",12); //constructor
// console.log(lexus)

// Inheritance

// class Parent {
//     hello() {
//         console.log("hello");
//     }
// }

// class Child extends Parent {}

// let obj = new Child();

// class Person {
//     constructor() {
//         this.species = "homo sepiens";
//     }
//     eat() {
//         console.log("eat")
//     }

//     sleep() {
//         console.log("sleep");
//     }
// }

// class Engineer extends Person {
//     work() {
//         console.log("solve problems, build something");
//     }
// }

// let hitenObj = new Engineer();

// class Doctor extends Person {
//     work() {
//         console.log("treats patients");
//     }
// }

// super keyword

// class Person {
//     constructor(name) {
//         this.species = "homo sepiens";
//         this.name = name;
//     }
//     eat() {
//         console.log("eat")
//     }
// }

// class Engineer extends Person {
//     constructor(name) {
//         super(name); //to envoke parent class constructor
//     }
//     work() {
//         super.eat();
//         console.log("solve problems, build something")
//     }
// }

// let engObj = new Engineer("hiten")

//Practice Question 2
//You are creating a website for your college. Create a class "User" with 2 properties, name and email.
//It also has a method called veiwData() that allows user to veiw website data.

// let DATA = "secret info";

// class User {
//     constructor (name,email) {
//         this.name = name;
//         this.email = email;
//     }

//     veiwData() {
//         console.log("data = ",DATA);
//     }
// }

// let student1 = new User("hiten","abc@gmail.com");
// let student2 = new User("shradha","cdf@gmail.com");

// let teacher1 = new User("dean","dean@gmail.com")

// Practice Question 2
//Create a new class called "Admin" which inherits from "User". Add a new method called editData to Admin that allows it to edit website data.

// let DATA = "secret info";

// class User {
//     constructor (name,email) {
//         this.name = name;
//         this.email = email;
//     }

//     veiwData() {
//         console.log("data = ",DATA);
//     }
// }

// let student1 = new User("hiten","abc@gmail.com");
// let student2 = new User("shradha","cdf@gmail.com");
// let teacher1 = new User("dean","dean@gmail.com");

// class Admin extends User {
//     constructor(name,email){
//         super(name, email); 
//     }
//     editData() {
//         DATA = "some new data"
//         console.log("data updated to: ", DATA);
//     }
// }

// let admin1 = new Admin("admin","admin@gmsil.com");

//ERROR HANDLING

//try-catch

// let a = 5;
// let b = 10;
// console.log("a = ",a);
// console.log("b = ",b);
// console.log("a+b = ",a+b);
// try{
//     console.log("a+b", a+c);//error
// } catch(err){
//     console.log(err);
// }
// console.log("a+b = ",a+b);
// console.log("a+b = ",a+b);
// console.log("a+b = ",a+b);
// console.log("a+b = ",a+b);

