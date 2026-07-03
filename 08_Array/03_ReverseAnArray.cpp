#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << '\t';
  }
  cout<<endl;
}

void reverseAnArray(int arr[], int size)
{
  int left = 0, right = size - 1;
  while (left < right)
  {
    swap(arr[left], arr[right]);
    left++;
    right--;
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = 10;
  printArray(arr, size);
  reverseAnArray(arr, size);
  printArray(arr, size);
  return 0;
}