/* 
 * Task 1:
o Write a JavaScript program using a for loop to print numbers from 1 to 10.
Task 2:
o Create a JavaScript program that uses a while loop to sum all even numbers
between 1 and 20.
Task 3:
o Write a do-while loop that continues to ask the user for input until they enter
anumber greater than 10 */

//1
for (let i = 1; i <= 10; i++) {
    console.log(i);
}

//2
let sum = 0;
let number = 1;
const limit = 100; 
while (number <= limit) {
    if (number % 2 === 0) {
        sum += number;
    }
    number++;
}

console.log(`The sum of all even numbers up to ${limit} is: ${sum}`);

//3
let userInput;
do {
    userInput = Number(prompt("Enter a number > 10:"));
} while (userInput <= 10);
console.log("Valid number entered:", userInput);

