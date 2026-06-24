#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Loops:
  // Loops are essential for repeating a specific block of code multiple times.

  // while Loop: Executes as long as the specified condition remains true. It is best used when the number of iterations is not known beforehand.
  // for Loop: Typically used when the number of iterations is fixed. It combines initialization, condition checking, and increment/update in one line.
  // do-while Loop: Ensures that the code block executes at least once, as the condition is checked after the execution of the code block.
  // Key Keyword: break is used to exit a loop prematurely, which is particularly useful in optimization (e.g., stopping a prime number check once a factor is found).

  // Example : Printing something for N times.
  string s;
  int n;
  cout << "Enter the sentence you wanna print :";
  getline(cin,s);
  cout << "Enter the times you wanna print : ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << s <<endl;
  }

  return 0;
}