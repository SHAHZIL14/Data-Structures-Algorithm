#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout << "Enter the size of the square.";
  cin >> n;
  int number = 1;
  for (int row = 0; row < n; row++)
  {
    for (int column = 0; column < n; column++)
    {
      cout << number << ' ';
      number += 1;
    }
    cout << endl;
  }
  return 0;
}