/**Task:
Write a JavaScript program that attempts to divide a number by zero. 
Use trycatchto handle the error and display an appropriate error message. */

function divideNumbers(a, b) {
    try {
        if (b === 0) {
            throw new Error("Error: Cannot divide by zero!");
        }
        console.log(`Result: ${a / b}`);
    } catch (error) {
        console.log(error.message);
    }
}
divideNumbers(10, 2);
divideNumbers(5, 0); 