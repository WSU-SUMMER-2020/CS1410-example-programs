// FILE: ex02-some_struct.cpp
#include <iostream>
#include <string>
using namespace std;

struct SomeClass {
  int number;
  string name;
};

int main(){
  SomeClass c;
  c.number = 5;
  c.name = "A label for ";
  cout << c.name << c.number << endl;

  return 0;
}