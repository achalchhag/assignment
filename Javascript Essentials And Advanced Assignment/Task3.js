/*** 
 * Task 1:
o Write a JavaScript program to check if a number is positive, negative, or zero using
an if-else statement.
Task 2:
o Create a JavaScript program using a switch statement to display the day of the week
based on the user input (e.g., 1 for Monday, 2 for Tuesday, etc.). */

let number = prompt("Enter a number:");
number = Number(number); 
if (number > 0) {
  console.log("The number is positive.");
} else if (number < 0) {
  console.log("The number is negative.");
} else {
  console.log("The number is zero.");
}

//2
let day = prompt("Enter a number (1-7) to get the day of the week:");
day = Number(day);
switch (day) {
  case 1:
    console.log("Monday");
    break;
  case 2:
    console.log("Tuesday");
    break;
  case 3:
    console.log("Wednesday");
    break;
  case 4:
    console.log("Thursday");
    break;
  case 5:
    console.log("Friday");
    break;
  case 6:
    console.log("Saturday");
    break;
  case 7:
    console.log("Sunday");
    break;
  default:
    console.log("Invalid input. Please enter a number between 1 and 7.");
}


