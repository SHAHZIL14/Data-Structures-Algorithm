#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout<<"Enter the value of n:";
  cin>>n;
  int number = 65;
  for(int row = 1 ; row<=n; row++){
    for(int column = 1 ; column <= row; column++){
      cout<<char(number)<<" ";
      number+=1;
    }
    cout<<endl;
  }  
  return 0;
}