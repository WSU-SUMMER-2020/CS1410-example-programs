// FILE: ex11-struct_ptr_2.cpp
#include <iostream>
using namespace std;
struct Time {
  int hrs;
  int min;
  int sec;
};
int main()
{
  Time* t = new Time;
  t->hrs = 11;
  t->min = 45;
  t->sec = 17;
  
  cout << t->hrs << ":" << t->min
       << ":" << t->sec << endl;
  
  delete t;
  return 0;
}

