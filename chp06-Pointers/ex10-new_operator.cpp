// FILE: ex10-new_operator.cpp
#include <iostream>
using namespace std;

int main() {
  double* score = new double;

  cout << "Enter score:" << endl;
  cin >> *score;

  // Process score here

  delete score;

  return 0;
}
