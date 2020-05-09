// FILE: ex03-maximum.cpp
#include <iostream>
using namespace std;

/* Calculates the maximum of two numbers */
int main() {
  double x, y;

  cout << "First number:" << endl; cin >> x;
  cout << "Second number:" << endl; cin >> y;
  
  if (x >= y){
    cout << "Maximum is: " << x << endl;
  } else {
    cout << "Maximum is:" << y << endl;
  }
  
  return 0;
}
