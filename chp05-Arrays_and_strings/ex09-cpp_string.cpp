// FILE: ex09-cpp_string.cpp
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
  string s1("Quick! Send for "
    "Count Nero.");
  string s2("Lord");
  string s3("Don't ");

  s1.erase(0, 7);
  s1.replace(9, 5, s2);
  s1.replace(0, 1, "s");
  s1.insert(0, s3);
  s1.erase(s1.size()-1, 1);
  s1.append(3, '!');
  
  int x = s1.find(' ');

  while(x < s1.size()) {
    s1.replace(x, 1, "/");
    x = s1.find(' ');
  }

  cout << "s1: " << s1 << endl;

  transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
  cout << "s1: " << s1 << endl;

  transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
  cout << "s1: " << s1 << endl;

  return 0;
}
