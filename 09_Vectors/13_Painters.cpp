#include <bits/stdc++.h>
using namespace std;

int getSum(vector<int> &boards)
{
  int sum = 0;
  for (int board : boards)
    sum += board;
  return sum;
}

bool isValid(vector<int> &boards, int maxTime, int painters)
{
  int painterAllocated = 1;
  int timeTaken = 0;
  for (int i = 0; i < boards.size(); i++)
  {
    if(boards[i]>maxTime) return false;
    if (timeTaken + boards[i] <= maxTime){
      timeTaken += boards[i];
    }
    else
    {
      painterAllocated++;
      timeTaken = boards[i];
    }
    if(painterAllocated>painters) return false;
  }
  return true;
}

int minTime(vector<int> &boards, int painters)
{
  int answer = -1;
  int start = 0;
  int end = getSum(boards);
  while (start <= end)
  {
    int middle = start + (end - start) / 2;
    if (isValid(boards,middle,painters))
    {
      answer = middle;
      end = middle - 1;
    }
    else
    {
      start = middle + 1;
    }
  }
  return answer;
}

int main()
{
  vector<int> boards = {40,30,10,20};
  int painters = 2;
  cout<<minTime(boards,painters);
  return 0;
}