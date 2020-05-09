// FILE: ex10-class_templates_2.cpp
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
// a.h
template <typename T>
class A{
public:
  A(T);
  void show();
  ~A();
private:
  T m;
};

// a.cpp
template <typename T>
A<T>::A(T a): m(a){}

template <typename T>
void A<T>::show(){
  cout << m << endl;
}

template <typename T>
A<T>::~A(){}

int main(){
  A<int> a(56);
  a.show();

  return 0;
}
