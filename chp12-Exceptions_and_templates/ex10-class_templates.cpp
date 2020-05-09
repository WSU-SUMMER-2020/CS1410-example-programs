// FILE: ex10-class_templates.cpp
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
// a.h
template <typename T>
class A{
public:
  A(T a): m(a){}
  void show(){
    cout << m << endl;
  }
  ~A(){}
private:
  T m;
};


// a.cpp
int main(){
  A<int> a(56);
  a.show();

  return 0;
}