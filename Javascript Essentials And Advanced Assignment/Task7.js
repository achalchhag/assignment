/**
Task:
Create a JavaScript object car with properties brand, model, and year. Use
JavaScriptto:
Access and print the car’s brand and model.
Update the year property.
Add a new property color to the car object
 */

let car = {
    brand: "Toyota",
    model: "Corolla",
    year: 2022
};

console.log("Brand:", car.brand);  
console.log("Model:", car.model);  

car.year = 2025;
console.log("Updated Year:", car.year);

car.color = "Red";
console.log("Car Color:", car.color);

console.log(car);
