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

void sortColorsBrute(vector<int> &v)
{
  sort(v.begin(), v.end());
}

void sortColorsBetter(vector<int> &v, int n)

{
  int zero = 0;
  int one = 0;
  int two = 0;
  for (int value : v)
  {
    if (value == 0)
      zero++;
    if (value == 1)
      one++;
    if (value == 2)
      two++;
  }
  int idx = 0;
  while (zero)
  {
    v[idx] = 0;
    zero--;
    idx++;
  }
  while (one)
  {
    v[idx] = 1;
    one--;
    idx++;
  }
  while (two)
  {
    v[idx] = 2;
    two--;
    idx++;
  }
}

// Dutch National Flag Algorithm:
// DNF algorithm works on a vision according to which  we metaphorically divide the whole array or vector into three sub array.
// One is for 0's , second is for 1's and third is for 2's. For that we have three partitions. Low , mid and high.
// We assume that 0->low-1 will keep 0's , low->mid-1 will keep 1's , mid->high will be unsorted and high+1->n-1 will keep 2's.
// We start traversing from mid -> high initializing mid = 0 , high = n-1.
// If we encounter 0 as mid , we put it behind low -> we swap it with low and increment low, hence low-1 will have zero.
// If we encounter 1 as mid , we put it behind mid -> we increment mid, hence mid-1 will have one.
// If we encounter 2 as mid , we put it ahead of high -> we swap it with high and we decrement high, hence high+1 will have two.
// We do it until the unsorted array we assume got empty as -> mid > high . We assume mid->high will be unsorted , if mid>high logically
//  our unsorted array will be empty.

void sortColorsOptimal(vector<int> &v)
{
  int n = v.size();
  int low = 0, mid = 0, high = n - 1;
  while (mid <= high)
  {
    if (v[mid] == 0)
    {
      swap(v[low], v[mid]);
      low++;
      mid++;
    }
    else if (v[mid] == 1)
      mid++;
    else
    {
      swap(v[high], v[mid]);
      high--;
    }
  }
}
int main()
{
  vector<int> v = {0, 2, 1, 1, 0, 1, 2, 2, 1};
  printList(v);
  sortColorsOptimal(v);
  printList(v);

  return 0;
}