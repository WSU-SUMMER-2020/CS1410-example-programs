// FILE: ex03-numbers.cpp
#include <iostream>
#include <fstream> 
using namespace std;

int main () {
  ifstream in("ex03-numbers.txt");
  
  int n, m;
  while(in >> n >> m){
    cout << n << " + " << m  << " = " << n + m << endl;
  }
  
  in.close();

  return 0;
}

