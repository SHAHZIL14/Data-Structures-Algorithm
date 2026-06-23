1. Getting Started: Output in C++
Output Statement: Use cout (part of the iostream library) to display text. Syntax: cout << "Text";.
Terminator: Every statement in C++ must end with a semicolon (;), which acts like a full stop.
Case Sensitivity: C++ is case-sensitive. Commands like cout must be entirely in lowercase.
New Lines: Use endl or "\n" to move to the next line. "\n" is often preferred in competitive programming for being slightly faster.

2. Program Structure (Boilerplate)
Every C++ file requires a basic structure to execute:

#include: The preprocessor directive that enables input/output operations.
using namespace std;: Allows usage of standard library components without the std:: prefix.
int main() { ... }: The entry point where program execution begins.
return 0;: A good programming practice to signal that the program finished successfully.

3. Variables & Data Types
Variables act as containers for data. They must be declared with a specific data type:

int: Stores integers (e.g., 25). Uses 4 bytes of memory.
char: Stores a single character (e.g., 'A'). Uses 1 byte. Internally, characters are stored using their ASCII values (e.g., 'A' is 65).
float: Stores decimal numbers (e.g., 3.14). Uses 4 bytes. Requires an f suffix (e.g., 3.14f) to distinguish from double.
bool: Stores logical values (true or false). Uses 1 byte. Internally, true maps to 1 and false to 0.

4. Type Casting & Conversion
Implicit Conversion: The compiler automatically upgrades smaller types to larger types (e.g., char to int) to prevent data loss.
Explicit Casting: The programmer manually converts data using the syntax (type) value. Note: Casting a floating-point number to an int truncates the decimal part rather than rounding it.

5. Input in C++
Use cin to accept user input. Syntax: cin >> variable_name;.
Before input, cin reads values from the standard input stream (keyboard).

6. Operators
Arithmetic Operators: Standard math operations (+, -, *, /, %). The % (modulo) operator returns the remainder of a division.
Relational Operators: Compare values (==, !=, <, >, <=, >=). They return 1 for true and 0 for false.
Logical Operators: Used for complex conditions:
&& (Logical AND): Returns true if all conditions are true.
|| (Logical OR): Returns true if at least one condition is true.
! (Logical NOT): Reverses the boolean value.
Unary Operators:
Increment (++): Adds 1. ++a (pre-increment) updates before use; a++ (post-increment) updates after use.
Decrement (--): Subtracts 1. Same pre/post logic applies.

7. Programming Logic Practice
The standard workflow for a C++ program involves: Taking Input 
 Performing Operations 
 Returning/Printing Output.