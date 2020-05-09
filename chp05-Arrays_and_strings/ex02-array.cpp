//FILE: ex02-array.cpp
#include <iostream>
#include <array>
#include <cmath>
#include <iomanip>
using namespace std;

void printHeader(){
  cout << "\n" << setw(5) << "p" << setw(5) << "2^p" << endl;
  cout << "    ======\n";
}

int main () {
  array<int, 6> numbers = { 1, 2, 4, 8, 16, 32};
  printHeader();
  for(int m : numbers){
    cout << setw(5) << log2(m) << setw(5) << m << endl;
  }

  printHeader();
  sort(numbers.begin(), numbers.end());
  for(int i = 0; i < numbers.size(); i++){
    cout << setw(5) << log2(numbers.at(i)) << setw(5) << numbers.at(i) << endl;
  }

  printHeader();
  for(auto i = numbers.begin(); i != numbers.end(); i++){
    cout << setw(5) << log2(*i) << setw(5) << *i << endl;
  }

  return 0;
}
