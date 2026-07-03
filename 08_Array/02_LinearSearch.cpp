#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[] , int size , int target){
  for(int i = 0 ;  i < size ; i++){
    if(arr[i] == target) return i;
  }
  return -1;
}

int main() {
  int arr[] = {1,6,2,29,23,0};
  int size = 6;
  cout<<linearSearch(arr,size,100);
  return 0;
}