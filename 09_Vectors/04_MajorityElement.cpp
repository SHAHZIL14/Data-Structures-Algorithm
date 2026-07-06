#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &vec)
{
  for (int i = 0; i < vec.size(); i++)
  {
    int frequency = 1;
    for (int j = i + 1; j < vec.size(); j++)
    {
      if (vec[i] == vec[j])
        frequency++;
    }
    if (frequency > floor(vec.size() / 2))
    {
      return vec[i];
    }
  }
  return -1;
}

int majorityElementBetter(vector<int> &vec)
{
  sort(vec.begin(), vec.end());
  int freq = 1;
  int ans = -1;
  for (int i = 0; i < vec.size(); i++)
  {
    if (vec[i + 1] == vec[i])
      freq++;
    else
    {
      if (freq > (vec.size() / 2))
        return vec[i];
      freq = 1;
    }
  }
  return ans;
}

int mooresAlgorithm(vector<int> &vec)
{
  int ans = -1;
  int frequency = 0;
  for (int i = 0; i < vec.size(); i++)
  {
    if (frequency == 0)
    {
      ans = vec[i];
    }
    if (vec[i] == ans)
      frequency++;
    else
      frequency--;
  }
  return ans;
}

int main()
{
  vector<int> vec = {1, 2, 1, 2, 2};
  cout << majorityElementBetter(vec);
  return 0;
}