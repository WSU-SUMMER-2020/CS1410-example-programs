// FILE: ex04-early_binding.cpp
#include <iostream>
using namespace std;

class Base {
public:
  void show() { cout << "Base\n"; }
};

class Derived1 : public Base {
public:
  void show() { cout << "Derived1\n"; }
};

class Derived2 : public Base {
public:
  void show() { cout << "Derived2\n"; }
};

int main() {
  Derived1 d1;
  Derived2 d2, d3;

  Base *ptr; // Using a pointer
  ptr = &d1;
  ptr->show();

  ptr = &d2;
  ptr->show();

  Base &b = d3; // Using a reference
  b.show();

  return 0;
}