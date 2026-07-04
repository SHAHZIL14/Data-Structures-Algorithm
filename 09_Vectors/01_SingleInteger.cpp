#include <bits/stdc++.h>
using namespace std;

int singleInteger(vector<int> &nums)
{
  int zor = 0;
  for (int value : nums)
  {
    zor ^= value;
  }
  return zor;
}
int main()
{
  
  return 0;
}