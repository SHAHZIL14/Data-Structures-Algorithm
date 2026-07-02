Bitwise Operators, Scope, and Data Types
This summary covers key miscellaneous concepts in C++ that are essential for Data Structures and Algorithms (DSA).

1. Bitwise Operators
Bitwise operators perform operations on the binary representation of numbers.

Bitwise AND (&): Returns 1 if both bits are 1; otherwise, returns 0.
Bitwise OR (|): Returns 1 if at least one of the bits is 1; returns 0 only if both bits are 0.
Bitwise XOR (^): Returns 1 if bits are different; returns 0 if bits are the same.
Left Shift (<<): Shifts bits to the left. a << b is equivalent to a * 2^b.
Right Shift (>>): Shifts bits to the right. a >> b is equivalent to a / 2^b.

2. Operator Precedence & Associativity
When an expression has multiple operators, C++ follows a specific hierarchy:

Precedence: Determines the order of operations. Unary operators (like ++, --, !) have the highest priority, followed by arithmetic, then relational, logical, and finally assignment operators.

Associativity: If operators have the same precedence, associativity rules determine the direction (e.g., most arithmetic operators are evaluated left-to-right, while assignment is right-to-left).

Overriding: You can force a specific order of execution by wrapping expressions in parentheses ().

3. Variable Scope
Scope defines the region of a program where a variable is accessible.

Local Scope: Variables declared inside functions, blocks (curly braces {}), or if-else/loop structures are only accessible within that specific block.

Global Scope: Variables declared outside of all functions are accessible throughout the entire file.

4. Data Type Modifiers
Modifiers change the storage capacity or sign properties of standard data types.

Size Modifiers:
long: Increases storage capacity (ensures at least 4 bytes).
short: Decreases storage capacity (uses 2 bytes).
long long: Further increases capacity (usually 8 bytes).

Sign Modifiers:
signed: (Default) Can store both positive and negative numbers.
unsigned: Stores only positive numbers, effectively doubling the positive range by using the sign bit as a data bit.