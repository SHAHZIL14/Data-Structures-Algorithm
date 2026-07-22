#include <bits/stdc++.h>
using namespace std;

int searchRotatedSortedArray(vector<int> &nums, int target)
{
  int start = 0;
  int end = nums.size() - 1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (target == nums[mid])
      return mid;
    if (nums[start] <= nums[mid])
    {
      // Left Half Sorted
      if (nums[start] <= target && target <= nums[mid])
        // Target is in left half
        end = mid - 1;
      else
        // Target is in right half
        start = mid + 1;
    }
    else
    {
      // Right Half Sorted
      if (nums[mid] <= target && target <= nums[end])
        // Target is in right half
        start = mid + 1;
      else
        // Target is in left half
        end = mid - 1;
    }
  }
  return -1;
}

int main()
{
  vector<int> v = {3, 4, 5, 6, 7, 0, 1, 2};
  int target = 1;
  cout << searchRotatedSortedArray(v, target);
  return 0;
}