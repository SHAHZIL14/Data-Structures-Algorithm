#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Nested Loops:
  // Nested loops involve placing one loop inside another. This is commonly used for pattern printing (such as stars or numeric shapes).

  // The outer loop typically controls the number of lines or major iterations.
  // The inner loop handles the task to be performed within each line.

  // Example : Printing Square
  int size;
  cout << "Give us the size of the square: ";
  cin >> size;
  for(int row = 0 ; row < size; row++){
    for(int col = 0 ; col < size ; col++){
      cout<<" * ";
    }
    cout<<endl;
  }
  return 0;
}