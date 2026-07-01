#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal()
{
  int number;
  cout << "Enter any binary number:";
  cin >> number;
  int ans = 0;
  int pow = 1;
  while (number > 0)
  {
    int digit = number % 10;
    if (digit != 0 && digit != 1)
    {
      cout << "Invalid binary number!"<<endl;
      return -1;
    }
    number /= 10;
    ans += digit * pow;
    pow *= 2;
  }
  return ans;
}

int main()
{
  cout << binaryToDecimal();
  return 0;
}