// FILE: ex05-centimize.cpp
#include <iostream>
using namespace std;

double centimizeByVal(double len){ return len * 2.54; }
void centimizeByRef(double& len){ len = len * 2.54; }
void centimizeByPtr(double* len){ *len = *len * 2.54; }

int main() {
  double n = 11;
  cout << n << endl;
  cout << centimizeByVal(n) << endl << n << "\n\n";

  centimizeByRef(n);
  cout << n << endl;

  n = 12; cout << "\n" << n << endl;
  centimizeByPtr(&n);
  cout << n << endl;

  return 0;
}
