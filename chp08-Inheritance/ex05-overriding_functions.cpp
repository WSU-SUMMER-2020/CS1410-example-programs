// FILE: ex05-overriding_functions.cpp
#include <iostream>
#include <string>
using namespace std;

class Base {
public:
  void print(){ cout << "Printed from Base" << endl; }
};

class Derived : public Base {
public:
  void print(){ cout << "Printed from Derived" << endl; }
};

class Derived2 : public Derived {};

int main(){
  Base().print();
  Derived().print();
  Derived2().print();
}