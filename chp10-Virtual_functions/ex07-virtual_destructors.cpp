// FILE: ex07-virtual_destructors.cpp
#include <iostream>
using namespace std;
class Base {
public:
  virtual void show() { cout << "Base\n"; }
  virtual ~Base(){ cout << "~Base\n"; }
};

class Derived1 : public Base {
public:
  void show() { cout << "Derived1\n"; }
  virtual ~Derived1(){ cout << "~Derived1\n"; }
};

int main(){
  Base* ptr = new Derived1; // Using a pointer
  ptr->show();
  Base& b = *ptr; // Using a reference
  b.show();
  delete ptr;

  return 0;
}
