// FILE: ex01-print_stars.cpp
#include <iostream>
using namespace std;

void printStars(); // Function prototype

int main() {
  printStars(); // Function invocation
  cout << "Hello, World!" << endl;
  printStars(); // Function invocation
  
  return 0;
}

// Function definition
void printStars(){
  for(int i = 0; i < 40; i++){
    cout << '*';
  }
  cout << endl;
} 
