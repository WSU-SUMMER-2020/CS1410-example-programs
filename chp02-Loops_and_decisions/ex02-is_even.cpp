// FILE: ex02-is_even.cpp
#include <iostream>
using namespace std;

/* Tells if a given integer is even */
int main() {
  int x;

  cout << "Enter number:" << endl; cin >> x;
  
  if (x % 2 == 0){
    cout << x << " is even." << endl;
  } 
  
  return 0;
}

