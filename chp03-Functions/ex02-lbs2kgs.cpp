// FILE: ex02-lbs2kgs.cpp
#include <iostream>
using namespace std;

double lbs2kgs(double); // Function prototype

// Converts pounds to kilograms
int main(){
  double lbs, kgs;

  cout << "Enter weight in pounds:\n"; cin >> lbs;
  kgs = lbs2kgs(lbs);
  cout << "Weight in kilograms: " << kgs << endl;

  return 0;
}

// Function definition
double lbs2kgs(double pounds){
  double kilograms =  0.453592 * pounds;
  return kilograms;
}

