#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<int> &stalls, int minimumValue, int cows)
{
  int lastCowStalled = stalls[0];
  int cowsStalled = 1;
  for(int i=0; i<stalls.size(); i++){
    if(stalls[i]-lastCowStalled>=minimumValue){
      cowsStalled++;
      lastCowStalled = stalls[i];
    }
    if(cowsStalled == cows) return true;
  }
  return false;
}

int maximumOfMinimumDistance(vector<int> &stalls, int cows)
{
  //Sorting.
  sort(stalls.begin(), stalls.end());

  // Ranging Answer.
  int start = stalls[0];
  int end = stalls[stalls.size() - 1] - stalls[0];

  // Initializing Answer.
  int answer = -1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    // If Answer is valid , try to find greater.
    if (isValid(stalls , mid , cows))
    {
      answer = mid;
      start = mid + 1;
    }
    //  Else go with lesser and check again.
    else
    {
      end = mid - 1;
    }
  }
  return answer;
}

int main()
{
  vector<int> stalls = {1, 2, 8, 4, 9};
  int cows = 3;
  cout << maximumOfMinimumDistance(stalls, cows);
  return 0;
}