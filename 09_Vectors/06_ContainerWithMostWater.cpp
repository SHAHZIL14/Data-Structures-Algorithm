#include <bits/stdc++.h>
using namespace std;
int maxArea(vector<int> &height)
{
  int maxArea = 0;
  int leftPillar = 0;
  int rightPillar = height.size() - 1;

  while (leftPillar < rightPillar)
  {
    int length = min(height[leftPillar], height[rightPillar]);
    int breadth = rightPillar - leftPillar;
    int area = length * breadth;
    maxArea = max(maxArea, area);
    if (height[leftPillar] < height[rightPillar])
    {
      leftPillar++;
    }
    else
    {
      rightPillar--;
    }
  }

  return maxArea;
}
int main()
{
  vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  cout << maxArea(height);
  return 0;
}