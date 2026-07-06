#include <bits/stdc++.h>
using namespace std;

vector<int> pairSum(vector<int> &vec, int target)
{
  for (int i = 0; i < vec.size(); i++)
  {
    for (int j = i + 1; j < vec.size(); j++)
    {
      int sum = vec[i] + vec[j];
      if (sum == target)
      {
        return {i, j};
      }
    }
  }
  return {-1, -1};
}

vector<int> pairSumBetter(vector<int> &vec, int target)
{
  int start = 0;
  int end = vec.size() - 1;
  while (start < end)
  {
    int sum = vec[start] + vec[end];
    if (sum == target)
      return {start, end};
    else if (target < sum)
      start++;
    else
      end--;
  }
  return {-1, -1};
}

int main()
{
  vector<int> vec = {2, 7, 11, 14};
  int target = 25;
  vector<int> res = pairSum(vec, target);
  cout << res[0] << " " << res[1] << endl;
  return 0;
}