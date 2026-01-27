77;
"Harry bhai"
false
console.log("Opertors in Js")
let a = 10;
let b = 4;
console.log("a + b =", a+b)
console.log("a - b = ", a-b)
console.log("a / b =", a/b)
console.log("a * b =", a*b)
console.log("a ^ b =", a**b)


let comp1 = 6;
let comp2 = 7;
console.log("comp1 == comp2 is", comp1 == comp2);

// Switch
const exp = 'Mangoes';

switch (exp) {
    case 'oranges':
        console.log('Oranges are $0.59 a pound.');
        break;
    case 'Mangoes':
    case 'Pappayas':
        console.log("Mangoes and Papayas are $2.79 a pound.");
        //expected output: "Mangoes and Papayas are $2.79 a pound."
        break;
    default:
        console.log(`Sorry,we are out of ${exp}.`);
}

// ternary Operators
a = 16;
console.log("You can",(a>18? "drive":"not drive"));