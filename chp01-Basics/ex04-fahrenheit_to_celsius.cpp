// FILE: ex04-fahrenheit_to_celsius.cpp
#include <iostream>
using namespace std;

/* Converts a given Fahrenheit temperature to an 
   equivalent Celsius value */
int main(){
  double f_temp; // To be entered
  double c_temp; // To be calculated

  cout << "Temperature in fahrenheit:\n";
  cin >> f_temp;
  c_temp = (f_temp - 32) * 5.0 / 9.0;  
  cout << "Temperature in Celsius is: " << c_temp << '\n';

  return 0;
}

