// FILE: ex03-ptr_assignment.cpp
#include <iostream>
using namespace std;

int main() {
  int var1 = 11; 

  int* iptr = &var1;
  cout << var1 << endl << *iptr << endl;
  
  *iptr = 53;
  cout << var1 << endl;
  
  return 0;
}

