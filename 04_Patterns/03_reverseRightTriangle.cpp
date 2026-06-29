#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout<<"Enter the value of n:";
  cin>>n;
  for(int row = 1 ; row <=n; row++){
    for(int column = row; column > 0; column--){
      cout<<column<<" ";
    }
    cout<<'\n';
  }  
  return 0;
}