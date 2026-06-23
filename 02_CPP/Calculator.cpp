#include <bits/stdc++.h>
using namespace std;

int main()
{
  cout << "Welcome to your calculator.\n";
  int operation, a, b;
  cout << "1 -> Addition" << endl
       << "2 -> Substraction" << endl
       << "3 -> Multiplication" << endl
       << "4 -> Division" << endl;
  cin >> operation;
  cout << "A?" << endl;
  cin >> a;
  cout << "B?" << endl;
  cin >> b;
  switch (operation)
  {
  case 1:
    cout << (a + b);
    break;
  case 2:
    cout << (a - b);
    break;
  case 3:
    cout << (a * b);
    break;
  case 4:
    cout << (a / b);
    break;

  default:
    cout << "Enter values between 1-4 only";
    break;
  }
  return 0;
}