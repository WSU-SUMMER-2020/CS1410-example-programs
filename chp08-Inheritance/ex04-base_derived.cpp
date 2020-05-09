// FILE: ex04-base_derived.cpp
#include <iostream>
using namespace std;

class Base {
private:
  int i, j;
protected:
  int k;
public:
  void show_i_j_k() { cout << i << j << k; }
};

class Derived : public Base {
private:
  int m;
};

class Derived2 : public Derived {
private:
  int n;
};