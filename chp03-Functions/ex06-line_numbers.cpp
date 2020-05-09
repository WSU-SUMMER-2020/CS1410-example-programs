// FILE: ex06-line_numbers.cpp
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Prototype
void printLineNo(std::string);

int main() {
  printLineNo("Welcome to C++ programming!");
  printLineNo("Glad you are here!");
  printLineNo("Enjoy!");
}

// Definition
void printLineNo(string text){
  static int lineNo = 1; // Runs on first call only
  
  cout << setw(3) << lineNo << " " << text << endl;
  lineNo++;
}

