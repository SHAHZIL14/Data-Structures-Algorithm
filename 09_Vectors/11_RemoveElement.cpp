#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>&v,int val){
  int idx = 0;
  for(int i = 0 ; i<v.size(); i++){
    if(v[i]!=val){
      v[idx] = v[i];
      idx++;
    }
  }
  return idx;
}

int main(){
  vector<int> v = {0, 1, 2, 2, 3, 0, 4, 2};
  int val = 2;
  cout<<removeElement(v,val);
  return 0;
}