// FILE: ex04-numbers_error_checked.cpp
#include <iostream>
#include <fstream> 
using namespace std;

int main () {
  ifstream in("ex03-numbers.txt");
  
  int n, m;
  while(!in.eof()){
    in >> n >> m;
    if(in.good()){
      cout << n << " + " << m  << " = " << n + m << endl;
    }
  }
  
  in.close();

  return 0;
}

