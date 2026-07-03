#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr1[] = {1, 2, 2, 3, 4};
  int arr2[] = {2, 2, 4, 5};

  int n = sizeof(arr1) / sizeof(arr1[0]);
  int m = sizeof(arr2) / sizeof(arr2[0]);

  bool visited[m] = {false};

  cout << "Intersection: ";

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (arr1[i] == arr2[j] && !visited[j])
      {
        cout << arr1[i] << " ";
        visited[j] = true; // Prevents using the same element again
        break;
      }
    }
  }

  return 0;
}