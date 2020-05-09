// FILE: ex02-dereference_ptr.cpp
#include <iostream>
using namespace std;

int main() {
  int var1 = 11; 
  int var2 = 22;

  int* iptr = &var1;
  cout << var1 << endl << *iptr << endl;
  
  iptr = &var2;
  cout << var2 << endl << *iptr << endl;
  
  return 0;
}

