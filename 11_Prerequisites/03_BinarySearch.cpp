#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &v, int target)
{
  int start = 0;
  int end = v.size() - 1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (target == v[mid])
    {
      return mid;
    }
    else
    {
      if (target < v[mid])
      {
        end = mid - 1;
      }
      else
        start = mid + 1;
    }
  }
  return -1;
}

int main()
{
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = 10;
  cout << binarySearch(v, 5);
  return 0;
}

// 1. Conditions for binary search.
// -> Elements must be sorted in ascending or descending order.

// 2. Algorithm ->
//  -> We find the mid of the array
//  -> Compare it with our target
//     -> if yes return
//     -> else
//       -> if target is less than mid
//         -> we have to limit the size from start to mid-1
//       -> else
//         -> we have to limit the size from mid+1 to end
//   -> Repeat the steps until return
