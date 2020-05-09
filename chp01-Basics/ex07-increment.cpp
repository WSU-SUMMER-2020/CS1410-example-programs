// FILE: ex07-increment.cpp
#include <iostream>
using namespace std;

/* Shows the difference between a prefix and a postfix
   increment operator ++ */
int main() {
  int count = 10;

  cout << "count=" << count << endl;  
  cout << "count=" << ++count << endl; 
  cout << "count=" << count << endl;  
  cout << "count=" << count++ << endl; 
  cout << "count=" << count << endl;  
  
  return 0;
}

