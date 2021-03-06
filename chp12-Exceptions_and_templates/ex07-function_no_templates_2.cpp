// FILE: ex07-function_no_templates_2.cpp
#include <iostream>
#include <string>
using namespace std;

double lesserOf(double n, double m){
  return n < m ? n : m;
}

string lesserOf(string n, string m){
  return n < m ? n : m;
}

int main(){
  cout << lesserOf(78, 9) << endl;
  cout << lesserOf('D', 'G') << endl;
  cout << lesserOf(4.3, 7.8) << endl;
  cout << lesserOf("Mark", "Jake");

  return 0;
}
