/**Task 1:
Declare an array of fruits (["apple", "banana", "cherry"]). Use JavaScript to:
Add a fruit to the end of the array.
Remove the first fruit from the array.
Log the modified array to the console.

Task 2:
Write a program to find the sum of all elements in an array of numbers */

//1
let fruits = ["apple", "banana", "cherry"];
fruits.push("orange");
fruits.shift();
console.log(fruits);

//2
function findSum(arr) {
    let sum = 0;
    for (let i = 0; i < arr.length; i++) {
        sum= arr[i]+sum;
    }
    return sum;
}
let numbers = [1, 2, 3, 4, 5];
console.log(findSum(numbers));
