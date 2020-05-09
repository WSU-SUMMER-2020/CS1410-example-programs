// FILE: ex04-circle_area_and_perimeter.cpp
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

// Prototypes
double perimeter(double); 
double area(double);
  
const double pi = 3.14; // Global

// Definitions
double perimeter(double radius){
  double p = 2 * pi * radius; // Local
  return p;
}

double area(double radius){
  double a = pi * radius * radius; // Local
  return a;
}

/* Calculates the factorial of a given number */
int main() {
  double radius = 5.0;

  cout << "Radius: " << radius << endl;
  cout << "Perimeter: " << perimeter(radius) << endl; 
  cout << "Area: " << area(radius) << endl; 
  
  return 0;
}
