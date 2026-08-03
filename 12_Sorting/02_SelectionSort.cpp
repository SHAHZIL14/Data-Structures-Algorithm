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

void selectionSort(vector<int> &v)
{
  for (int i = 0; i < v.size() - 1; i++)
  {
    int smallest = i;
    for(int j=i+1 ; j<v.size(); j++){
      if(v[j]<v[smallest]) smallest = j;
    }
    swap(v[i],v[smallest]);
  }
}

int main()
{
  vector<int> v = {4, 1, 5, 2, 3};
  printList(v);
  selectionSort(v);
  printList(v);
  return 0;
}