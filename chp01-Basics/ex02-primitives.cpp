// FILE: ex02-primitives.cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  char c;
  short s;
  int i;
  long l;
  long long ll;
  unsigned char uc;
  unsigned short us;
  unsigned int ui;
  unsigned long ul;
  unsigned long long ull;
  float f;
  double d;
  long double ld;
  bool b;

  cout << setw(20) << "Data Type" << setw(20) << "Size (in bytes)" << endl;
  cout << "----------------------------------------" << endl;
  cout << setw(20) << "char" << setw(20) << sizeof(c) << endl;
  cout << setw(20) << "short" << setw(20) << sizeof(s) << endl;
  cout << setw(20) << "int" << setw(20) << sizeof(i) << endl;
  cout << setw(20) << "long" << setw(20) << sizeof(l) << endl;
  cout << setw(20) << "long long" << setw(20) << sizeof(ll) << endl;
  cout << setw(20) << "unsigned char" << setw(20) << sizeof(uc) << endl;
  cout << setw(20) << "unsigned short" << setw(20) << sizeof(us) << endl;
  cout << setw(20) << "unsigned int" << setw(20) << sizeof(ui) << endl;
  cout << setw(20) << "unsigned long" << setw(20) << sizeof(ul) << endl;
  cout << setw(20) << "unsigned long long" << setw(20) << sizeof(ull) << endl;
  cout << setw(20) << "float" << setw(20) << sizeof(f) << endl;
  cout << setw(20) << "double" << setw(20) << sizeof(d) << endl;
  cout << setw(20) << "long double" << setw(20) << sizeof(ld) << endl;
  cout << setw(20) << "bool" << setw(20) << sizeof(b) << endl;

  return 0;
}