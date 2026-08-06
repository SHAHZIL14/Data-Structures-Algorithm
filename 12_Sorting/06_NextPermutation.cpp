#include <bits/stdc++.h>
using namespace std;

void printList(vector<int> &v)
{
  for (auto it : v)
  {
    cout << it << '	';
  }
  cout << endl;
}

void nextPermutation(vector<int> &A)
{
  int pivot = -1;
  int n = A.size();
  // Finding Pivot
  for (int i = n - 2; i >= 0; i--)
  {
    if (A[i] < A[i + 1])
    {
      pivot = i;
      break;
    }
  }
  // If not pivot just return the reversed array.
  if (pivot == -1)
  {
    reverse(A.begin(), A.end());
    return;
  }
  else
  {
    // Find the right most which is greater than pivot.
    int rightMost = -1;
    for (int i = n - 1; i >= 0; i--)
    {
      if (A[i] > A[pivot])
      {
        rightMost = i;
        break;
      }
    }
    swap(A[pivot], A[rightMost]);
    reverse(A.begin() + pivot + 1, A.end());
    return;
  }
}

int main()
{
  vector<int> nums = {3, 2, 1};
  printList(nums);
  nextPermutation(nums);
  printList(nums);
  return 0;
}