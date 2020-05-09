// FILE: ex05-enter_quote_with_blanks.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  const int MAX = 20;
  char quote[MAX];

  cout << "Enter quote:\n";
  cin.getline(quote, MAX);

  cout << "\'" << quote << "\'" << endl;

  return 0;
}