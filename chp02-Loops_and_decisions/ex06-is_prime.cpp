// FILE: ex06-is_prime.cpp
#include <iostream>
using namespace std;

/* Determines whether a given number is a prime number */
int main() {
  unsigned long n; 
  bool prime = true;          

  cout << "Enter a number: " << endl; cin >> n; 
  for(unsigned int j = 2; j <= n / 2; j++) {
    if(n % j == 0) {
      prime = false;
      break;
    }
  }

  cout << n << " is " << (prime ? "a prime." : "not a prime.") << endl;

  return 0;
}



