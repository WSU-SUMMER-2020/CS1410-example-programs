// FILE: ex04-characters.cpp
#include <iostream>
#include <cctype>

using namespace std;

int main() {
  char ch = 'y';
  cout << isalnum(ch) << endl;
  cout << isalpha(ch) << endl;
  cout << isblank(ch) << endl;
  cout << isdigit('5') << endl;
  cout << islower(ch) << endl;
  cout << isupper(ch) << endl;
  cout << isspace(ch) << endl;
  cout << static_cast<char>(tolower(ch)) << endl;
  cout << static_cast<char>(toupper(ch)) << endl;
  
  return 0;
}
