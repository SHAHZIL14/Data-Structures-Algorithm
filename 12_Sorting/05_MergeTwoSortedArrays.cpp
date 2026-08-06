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

void mergeTwoSortedArray(vector<int> &a, int m, vector<int> &b, int n)
{
  int i = m - 1;
  int j = n - 1;
  int idx = (m + n) - 1;
  while (i >= 0 && j >= 0)
  {
    if (b[j] >= a[i]) a[idx--] = b[j--];
    else a[idx--] = a[i--];
  }
  while(j>=0)  a[idx--] = b[j--];
}

int main()
{
  vector<int> a = {1, 2, 3, 0, 0, 0};
  int m = 3;
  vector<int> b = {2, 5, 6};
  int n = 3;
  printList(a);
  mergeTwoSortedArray(a, m, b, n);
  printList(a);
  return 0;
}