#include <bits/stdc++.h>
using namespace std;
int sumAndProduct(int arr[], int size)
{
  int sum = 0;
  int product = 1;
  for (int i = 0; i < size; i++)
  {
    sum = sum + arr[i];
    product = product * arr[i];
  }
  cout << "sum:" << sum << endl;
  cout << "product:" << product << endl;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = 5;

  sumAndProduct(arr, size);
  return 0;
}