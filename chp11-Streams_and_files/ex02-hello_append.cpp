// FILE: ex02-hello_append.cpp
#include <fstream>
using namespace std;

int main () {
  ofstream out("hello.txt", ios::app);
  
  out << "Hello World!" << endl;
  
  out.close();

  return 0;
}

