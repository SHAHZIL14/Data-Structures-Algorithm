#include<bits/stdc++.h>
using namespace std;

int main()
{
  // Conditional statements :

  // Conditional statements allow a program to make decisions based on specific conditions, executing different blocks of code accordingly.

  // if-else Statements: The standard structure for checking a boolean condition. If the condition is true, the if block executes; otherwise, the else block executes.
  // else-if: Used for evaluating multiple conditions sequentially. It allows for more complex logic, such as grading systems.
  // Ternary Operator: A concise, one-line alternative to simple if-else statements, formatted as: condition ? expression_if_true : expression_if_false;.
  // Good Practices: Always use curly braces {} to define code blocks, even for a single statement, to maintain code readability and prevent errors.

  // Example: To check if the current user is eligible for claiming driving license or not.
  int age;
  cout << "Enter your age : ";
  cin >> age;
  if (age >= 18)
  {
    cout << "User is eligible";
  }
  else
  {
    cout << "User is not eligible";
  }
  return 0;
}