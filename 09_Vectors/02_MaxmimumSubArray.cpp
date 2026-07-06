#include <bits/stdc++.h>
using namespace std;

// BruteForce
int maximumSubArraySum(vector<int> &vec)
{
  int maxSum = INT_MIN;
  for (int start = 0; start < vec.size(); start++)
  {
    for (int end = start; end < vec.size(); end++)
    {
      int sum = 0;
      for (int i = start; i < end; i++)
      {
        sum += vec[i];
      }
      maxSum = max(maxSum, sum);
    }
  }
  return maxSum;
}

// Better
int maximumSubArraySumBetter(vector<int> &vec)
{
  int maxSum = INT_MIN;
  for (int start = 0; start < vec.size(); start++)
  {
    int currentSum = 0;
    for (int end = start; end < vec.size(); end++)
    {
      currentSum += vec[end];
      maxSum = max(maxSum, currentSum);
    }
  }
  return maxSum;
}

int kadanesAlgorithm(vector<int> &vec)
{
  int maxSum = INT_MIN;
  int currentSum = 0;
  for (int value : vec)
  {
    currentSum += value;
    maxSum = max(maxSum, currentSum);
    if (currentSum < 0)
      currentSum = 0;
  }
  return maxSum;
}

int main()
{
  vector<int> vec = {3, -4, 5, 4, -1, 7, -8};
  cout << kadanesAlgorithm(vec);
  return 0;
}