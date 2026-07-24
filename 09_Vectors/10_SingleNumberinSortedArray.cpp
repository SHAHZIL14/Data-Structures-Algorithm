#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int> &A)
{
  int n = A.size();
  if (n == 1)
    return A[0];
  int st = 0;
  int en = n - 1;
  while (st <= en)
  {
    int m = st + (en - st) / 2;
    if (m == 0 && A[0] != A[1])
      return A[m];
    if (m == n - 1 && A[n - 1] != A[n - 2])
      return A[m];
    if (A[m - 1] != A[m] && A[m] != A[m + 1])
      return A[m];
    if (m % 2 == 0)
    {
      if (A[m - 1] == A[m])
        en = m - 1;
      else
        st = m + 1;
    }
    else
    {
      if (A[m - 1] == A[m])
        st = m + 1;
      else
        en = m - 1;
    }
  }
  return -1;
}

int main()
{
  vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 4, 8};
  cout << singleNonDuplicate(nums);
  return 0;
}