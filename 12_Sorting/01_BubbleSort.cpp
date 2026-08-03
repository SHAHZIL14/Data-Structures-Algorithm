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

void bubbleSort(vector<int> &v)
{
  for (int i = 0; i < v.size() - 1; i++)
  {
    //current element = v[i];
    for (int j = i + 1; j < v.size(); j++)
    {
      // If current element is greater then next we swap both positions.
      if (v[i] > v[j])
        swap(v[i], v[j]);
    }
  }
}

int main()
{
  vector<int> v = {4,1,5,2,3};
  printList(v);
  bubbleSort(v);
  cout<<"\n\n";
  printList(v);
  return 0;
}