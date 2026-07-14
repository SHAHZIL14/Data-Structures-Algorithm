#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
  int maxProfit = 0;
  int buy = 0;
  for (int i = 1; i < prices.size(); i++)
  {
    int profit = prices[i] - prices[buy];
    if (profit <= 0)
      buy = i;
    else
    {
      maxProfit = max(maxProfit, profit);
    }
  }
  return maxProfit;
}
int main()
{
  vector<int> prices = {1, 2, 3, 4, 5};
  cout << maxProfit(prices);
  return 0;
}