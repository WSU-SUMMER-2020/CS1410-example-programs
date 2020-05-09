// FILE: ex01-factorial_while.cpp
#include <iostream>
using namespace std;

/* Calculates the factorial of a given number */
int main() {
  unsigned int n;
  unsigned long factorial = 1;

  cout << "Enter positive number:" << endl; cin >> n;
  
  while (n >= 1){
    factorial *= n;
    n--;
  }
  
  cout << "Factorial: " << factorial << endl; 
  
  return 0;
}

