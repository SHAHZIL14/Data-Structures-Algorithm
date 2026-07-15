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

vector<int> productExceptSelf(vector<int> &nums)
{
  vector<int> answer(nums.size(), 1);
  int suffix = 1;
  for (int i = 1; i < nums.size(); i++)
  {
    answer[i] = answer[i - 1] * nums[i - 1];
  }
  for (int i = nums.size() - 2; i >= 0; i--)
  {
    suffix *= nums[i + 1];
    answer[i] *= suffix;
  }
  return answer;
}

int main()
{
  vector<int> nums = {1, 2, 3, 4};
  vector<int> answer = productExceptSelf(nums);
  printList(answer);
  return 0;
}