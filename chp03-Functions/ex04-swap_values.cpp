// FILE: ex04-swap_values.cpp
#include <iostream>
using namespace std;

void swapValues(int&, int&); // prototype
int main() {
  int x = 10;
  int y = 15;

  cout << "x = " << x << ", y = " << y << endl;
  swapValues(x, y);
  cout << "x = " << x << ", y = " << y << endl;

  return 0;
}
// Definition
void swapValues(int& n, int& m){
  int o = n;
  n = m;
  m = o;
}
