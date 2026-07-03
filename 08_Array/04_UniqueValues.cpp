#include <bits/stdc++.h>
using namespace std;

int uniqueElement(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int count = 0;

    for (int j = 0; j < n; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
      }
    }

    if (count == 1)
    {
      return arr[i];
    }
  }

  return -1; // No unique element found
}

int main()
{
  int arr[] = {2, 3, 5, 4, 5, 3, 4};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Unique element: " << uniqueElement(arr, n);

  return 0;
}