// FILE: ex04-array_as_ptr.cpp
#include <iostream>
#include <iomanip>
using namespace std;

void printPrimesUnder10(){
  int primes[] = {2, 3, 5, 7}; 
  for(int i = 0; i < 4; i++){
    cout << setw(5) << (i == 0 ? "ARRY>" : "") 
         << primes[i] << endl;
  }
}
void printPrimesUnder10_2(){
  int primes[] = {2, 3, 5, 7}; 
  for(int i = 0; i < 4; i++){
    cout << setw(5) << (i == 0 ? "APTR>" : "") 
         << *(primes + i) << endl;
  }
}

void printPrimesUnder10_3(){
  int primes[] = {2, 3, 5, 7};
  int* iptr = primes;
  for(int i = 0; i < 4; i++){
    cout << setw(5) << (i == 0 ? "PTR>" : "")
         << *iptr++ << endl;
  }
}

int main() {
  printPrimesUnder10();
  printPrimesUnder10_2();
  printPrimesUnder10_3();

  return 0;
}

