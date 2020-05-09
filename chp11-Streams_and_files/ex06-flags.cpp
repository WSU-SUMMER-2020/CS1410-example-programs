// FILE: ex06-flags.cpp
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
  cout << left << setw(6) << "DEC"
       << setw(6) << "OCT"
       << setw(6) << "hex"
       << setw(6) << "HEX" << endl;

  for(int i = 1; i <= 20; i += 2){
    cout << setw(6) << dec << i
         << setw(6) << oct << i
         << setw(6) << nouppercase << hex << i
         << setw(6) << uppercase << hex << i << endl;
  }

  cout << left;
  for(int i = 0; i <= 9; i++) {
    cout << i << ": " << setw(10)
         << setprecision(i) << sqrt(2) << endl;
  }

  cout << right;
  for(int i = 0; i <= 9; i++) {
    cout << i << ": " << setw(10)
         << setprecision(i) << sqrt(2) << endl;
  }

  return 0;
}
