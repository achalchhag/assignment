/**Task 1:
Write a function greetUser that accepts a user’s name as a parameter and displays
agreeting message (e.g., "Hello, John!").

Task 2:
Create a JavaScript function calculateSum that takes two numbers as parameters,
adds them, and returns the result */

//1
function greetUser(name) {
    console.log(`Hello, ${name}!`);
}

greetUser("John");


//2
function calculateSum(a, b) {
    return a + b;
}

let result = calculateSum(5, 10);
console.log(result);
