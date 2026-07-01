Binary Number System Notes

Introduction to Number Systems
A number system is defined by the number of unique digits used to represent values.

Decimal Number System (Base 10): Uses 10 digits (0-9). This is the system used in daily human communication.

Binary Number System (Base 2): Used by computers because they operate on two states (0 and 1).

Other Systems:
Octal: Base 8.
Hexadecimal: Base 16 (6 + 10).

Decimal to Binary Conversion
-> To convert a decimal number to binary, perform repeated division by 2.
-> Keep track of the remainder at each step.
-> The binary equivalent is obtained by reading the remainders in reverse order (from the last remainder to the first).
Binary to Decimal Conversion
-> To convert binary to decimal, multiply each binary digit by
, where represents the position of the digit (starting from 0 at the rightmost bit).
-> Sum the results of these multiplications to get the final decimal value.

Logic & Implementation
Decimal to Binary Code Logic:
Use a loop that runs while the number is greater than 0.
Extract the remainder using the modulo operator (number % 2).
Build the binary number by multiplying the remainder by increasing powers of 10 (1, 10, 100, ...).
Update the number by dividing it by 2.
Binary to Decimal Code Logic:
Use a loop that runs while the number is greater than 0.
Extract the last digit using modulo 10 (number % 10).
Multiply this digit by increasing powers of 2 (
) and add to the total.
Remove the last digit from the binary number by dividing by 10.
Binary Addition Rules
(carry 1 to the next position).
Two's Complement
Used to represent negative numbers in computer memory.
Steps to calculate Two's Complement:
Find the binary representation of the positive number.

One's Complement: Flip all bits (change 0s to 1s and 1s to 0s).
Two's Complement: Add 1 to the result of the One's Complement.
The Most Significant Bit (MSB) acts as the sign bit: 0 for positive, 1 for negative.
