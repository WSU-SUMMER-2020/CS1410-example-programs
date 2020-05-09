// FILE: ex10-new_operator_2.cpp
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n:" << endl;
  cin >> n;

  int* scores = new int[n];

  // Process scores here

  delete[] scores;

  return 0;
}



