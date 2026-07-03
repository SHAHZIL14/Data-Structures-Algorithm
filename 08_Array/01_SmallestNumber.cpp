#include <bits/stdc++.h>
using namespace std;
int findSmallest(int arr[], int size)
{
  int smallest = INT_MAX;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < smallest)
    {
      smallest = arr[i];
    }
  }
  return smallest;
}

int main()
{
  int size;
  cout << "Enter the size of the array:";
  cin >> size;
  int arr[size];
  cout << "Enter values of the array:"<<endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout<<"Smallest value you entered in array : " << findSmallest(arr, size);
  return 0;
}