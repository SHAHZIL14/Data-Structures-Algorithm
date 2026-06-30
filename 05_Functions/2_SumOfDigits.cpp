#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(){
  int number;
  cout << "Enter a number: ";
  cin>>number;
  for(int i = 0 ; i<number; i++){
    int sum = 0 ;
    while (number>0){
      int digit = number%10;
      sum+=digit;
      number = number/10;
    }
    return sum;
  }
}
int main()
{
  cout<<sumOfDigits();
  return 0;
}