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

void insertionSort(vector<int> &v)
{
  for (int i = 1; i < v.size(); i++)
  {
    int current = v[i];
    int previous = i - 1;
    while (previous >= 0 && v[previous] > current)
    {
      v[previous + 1] = v[previous];
      previous--;
    }
    v[previous + 1] = current;
  }
}

int main()
{
  vector<int> v = {4, 1, 5, 2, 3};
  printList(v);
  insertionSort(v);
  printList(v);
  return 0;
}