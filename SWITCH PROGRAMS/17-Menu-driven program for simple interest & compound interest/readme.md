# Menu-Driven Program for Simple Interest & Compound Interest

## Author
Parth Ajmera

## Description
This C program calculates simple interest and compound interest based on the user's choice in a menu-driven interface. It uses standard input/output functions from `stdio.h` and implements the menu using a `switch` statement to select the desired calculation. The program demonstrates basic arithmetic operations and control flow in C.

## Features
- Menu-driven interface to choose between Simple Interest and Compound Interest calculations.
- Input for principal amount, rate of interest, and time period.
- Calculates and displays the interest and total amount accordingly.
- Uses `switch` for clean and efficient menu handling.
- Suitable for beginners learning conditional statements and basic financial formulas.

## How It Works
- The user is presented with a menu to choose the interest type.
- Based on the choice entered, the program reads the principal, rate, and time values.
- For simple interest, formula used is:  
  **Simple Interest = (Principal × Rate × Time) / 100**
- For compound interest, formula used is:  
  **Compound Interest = Principal × ( (1 + Rate/100)^Time - 1 )**
- The program outputs the calculated interest and the total amount (principal + interest).