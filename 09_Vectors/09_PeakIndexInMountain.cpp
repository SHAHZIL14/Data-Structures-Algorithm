#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountain(vector<int> &v)
{
  int start = 0;
  int end = v.size() - 2;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (v[mid - 1] < v[mid] && v[mid] > v[mid + 1])
      return v[mid];
    else
    {
      if (v[mid - 1] < v[mid])
        start = mid + 1;
      else
        end = mid - 1;
    }
  }
  return -1;
}

int main()
{
  vector<int> v = {0, 3, 8, 9, 5, 2};
  cout<<"Peak Index : "<< peakIndexInMountain(v);
  return 0;
}