// FILE: ex01-main.cpp
#include <iostream>
#include "ex01-operation.h"
#include "ex01-addition.h"
using namespace std;

extern int no_of_additions_performed;

int main(){
  Operation* a = new Addition(23, 17);
  cout << "Result of opr #" 
       << no_of_additions_performed 
       << ": " 
       << a->perform()
       << endl;
  
  delete dynamic_cast<Addition *>(a);
}

