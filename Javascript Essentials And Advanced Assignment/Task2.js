/**Create a JavaScript program to perform the following:
1 Add, subtract, multiply, and divide two numbers using arithmetic operators.
2 Use comparison operators to check if two numbers are equal and if one
number is greater than the other.
3 Use logical operators to check if both conditions (e.g., a > 10 and b < 5) are
true. */

let a = 20;
let b = 5;
console.log(`Addition: ${a} + ${b} = ${a + b}`);
console.log (`Subtraction: ${a} - ${b} = ${a - b}`);
console.log(`Multiplication: ${a} * ${b} = ${a * b}`);
console.log(`Division: ${a} / ${b} = ${a / b}`);

//2
let a2 = 20;
let b2 = 5;
console.log(`Is a equal to b? ${a2 == b2}`);
console.log(`Is a greater than b? ${a2 > b2}`);
console.log(`Is a less than b? ${a2 < b2}`);

//3
let a3 = 20;
let b3 = 5;
console.log(`Is a greater than 10 AND b less than 5? ${a3 > 10 && b3 < 5}`);
