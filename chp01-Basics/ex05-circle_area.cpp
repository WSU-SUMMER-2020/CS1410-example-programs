// FILE: ex05-circle_area.cpp
#include <iostream>
using namespace std;

/* Calculates the area of a circle of a given radius */
int main() {
  float radius; // To be entered
  const float PI = 3.14159F;

  cout << "Radius of circle:\n";
  cin >> radius;
  
  float area = PI * radius * radius;
  cout << "Area: " << area << endl; 
  
  return 0;
}

