#include <bits/stdc++.h>
using namespace std;

int factorial(int k)
{
  int fact = 1;
  for (int i = 1; i <= k; i++)
  {
    fact *= i;
  }
  return fact;
}

int binomialCoefficient(int n, int r)
{
  int nFactorial = factorial(n);
  int rFactorial = factorial(r);
  int nMinusRFactorial = factorial(n - r);
  int binomialCoff = nFactorial / (rFactorial * nMinusRFactorial);
  return binomialCoff;
}

int main()
{
  cout<<binomialCoefficient(6,3);
  return 0;
}