#include <bits/stdc++.h>
using namespace std;

int binaryExponentiation(float x, int n)
{
  long long power = n;

  if (power < 0)
  {
    x = 1 / x;
    power = -power;
  }

  double ans = 1.0;

  while (power > 0)
  {
    if (power % 2 == 1)
    {
      ans *= x;
    }
    x *= x;
    power /= 2;
  }

  return ans;
}

int main()
{
  float x = 2.0000;
  int n = 10;
  cout << binaryExponentiation(x, n);
  return 0;
}