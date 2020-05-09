// FILE: ex07-factorial_recursive.cpp
#include <iostream>
using namespace std;

unsigned long factorial(unsigned int); 

/* Calculates the factorial of a given number */
int main() {
  unsigned int n;

  cout << "Enter positive number:" << endl; cin >> n;
  cout << "Factorial: " << factorial(n) << endl; 
  
  return 0;
}

unsigned long factorial(unsigned int n){
  if(n == 0 || n == 1){
    return 1;
  }else{
    return n * factorial(n - 1);
  }
}

