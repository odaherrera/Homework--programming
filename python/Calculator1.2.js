//Calculator
let number1 = parseInt(prompt("Enter the first number : "));
let oper = prompt("Enter the operator : ");
let number2 = parseInt(prompt("Enter the second number : "));

if (oper =="+")
alert ("The sum of" + number1 + "and" + number2 + "is :" + (number1+number2));
else if (oper =="-")
alert ("The difference of" + number1 + "and" + number2 + "is :" + (number1-number2));
else if (oper =="*")
alert ("The multiplication of" + number1 + "and" + number2 + "is :" + (number1*number2));
else if (oper =="/")
alert ("The divide of" + number1 + "and" + number2 + "is :" + (number1/number2));
else 
alert ("Invalid imput!!");

