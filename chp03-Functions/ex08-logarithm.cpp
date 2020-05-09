// FILE: ex08-logarithm.cpp
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

// Prototypes with default argument
double logarithm(double, double = 10.0);

// Definition
double logarithm(double x, double b) {
  return log(x) / log(b);
}

/* Calculates the factorial of a given number */
int main() {
  cout << logarithm(100.0) << endl; // calls logarithm(100.0, 10.0)
  cout << logarithm(4.0, 2.0) << endl; // calls logarithm(4.0, 2.0)

  return 0;
}
