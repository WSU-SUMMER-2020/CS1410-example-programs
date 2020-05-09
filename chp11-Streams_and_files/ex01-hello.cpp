// FILE: ex01-hello.cpp
#include <fstream>
using namespace std;

int main () {
  ofstream out("hello.txt");
  
  out << "Hello World!" << endl;
  
  out.close();

  return 0;
}

