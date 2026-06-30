Functions in C++

Introduction to Functions
Functions are fundamental blocks in programming. They allow us to organize code, reduce redundancy, and improve readability by grouping specific tasks that need to be executed repeatedly.

Anatomy of a Function
Return Type: Defines the type of value the function returns (e.g., int, float, void if nothing is returned).

Function Name: A unique identifier used to call the function.

Parameters: Inputs accepted by the function, defined inside parentheses.

Function Body: The block of code within curly braces {} that performs the actual task.

Function Definition vs. Calling

Definition: The logic written to define what the function does.

Calling (Invoking): Triggering the execution of the function by using its name followed by parentheses. A function will not execute unless it is explicitly called.
Parameters and Arguments

Parameters: The variables defined in the function signature (the input placeholders).

Arguments: The actual values passed to the function when it is called.

Literals: Actual fixed values (like numbers 1, 10, 15) passed as arguments. These are immutable.


Memory Management in Functions
Stack Memory: Functions are stored in the computer's memory using a structure called the "Call Stack."
Stack Frames: When a function is called, a new layer called a "Stack Frame" is created in the memory, which holds the function's local variables and parameters.
Scope: Variables defined within a function exist only within that function's stack frame. Once the function finishes and returns, its stack frame is removed, and local variables are destroyed.

Return Statement: Terminates the function and sends control back to the calling function. Any code written after the return statement within a function will not be executed.

Pass by Value
When primitive data types (int, float, char, etc.) are passed to a function, C++ uses Pass by Value.

This means a copy of the argument is created for the function.
Changes made to the parameter inside the function do not affect the original variable in the calling function (e.g., the main function).

Key Concepts Summary
Redundancy: Avoiding unnecessary repetition of code by wrapping logic in functions is a hallmark of good programming.

Return Types: Use void if the function does not return a value. Use specific types if it returns data.

Modularity: Breaking down complex tasks (like factorial or binomial coefficient calculation) into smaller, reusable functions makes the code easier to manage and debug.

Common Mathematical Logic in Functions

Summation: Initializing a sum variable to 0 and adding values within a loop.
Factorial: Initializing a factorial variable to 1 and multiplying by current index 
