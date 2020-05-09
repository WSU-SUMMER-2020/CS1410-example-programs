// FILE: ex03-increment_by_2.cpp
#include <iostream>
using namespace std;

int incrementBy2(int); // Function prototype

int main() {
  int n = 15;
  
  cout << "n = " << n << endl;
  cout << "n = " << incrementBy2(n) << endl;
  cout << "n = " << n << endl;

  return 0;
}

// Function definition
int incrementBy2(int n){
  return ++(++n);
}

