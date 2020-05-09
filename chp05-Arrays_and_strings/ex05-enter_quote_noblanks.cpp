// FILE: ex05-enter_quote_noblanks.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  const int MAX = 20;
  char quote[MAX];

  cout << "Enter quote:\n";
  cin >> setw(MAX) >> quote;

  cout << "\'" << quote << "\'" << endl;

  return 0;
}