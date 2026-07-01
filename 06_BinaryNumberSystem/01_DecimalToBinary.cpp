#include <bits/stdc++.h>
using namespace std;

int decToBin()
{
  int decimalNumber;
  cout << "Enter the value of decimal number:";
  cin >> decimalNumber;
  int answer = 0;
  int power = 1;
  while (decimalNumber > 0)
  {
    int remainder = decimalNumber % 2;
    decimalNumber /= 2;
    answer += remainder * power;
    power *= 10;
  }

  return answer;
}

int main()
{
  cout<<decToBin();
  return 0;
}