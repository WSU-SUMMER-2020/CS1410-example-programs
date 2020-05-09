// FILE: ex05-complex.cpp

#include "ex05-complex.h"
#include <iomanip>
using namespace std;

// Constructor
Complex::Complex (double r, double i) : real(r), imaginary(i) { }

// Operator += as in c1 += c2
Complex& Complex::operator+= (const Complex & rval) {
  real += rval.real;
  imaginary += rval.imaginary;
  return *this;
}

// Operator += as in c1 += 2.6
Complex& Complex::operator+= (double value) {
  real += value;
  return *this;
}

// Operator ++c (prefix ++): increment real by 1
Complex& Complex::operator++ () {
  ++real;
  return *this;
}

// Operator c++ (postfix ++): increment real by 1
Complex Complex::operator++(int) {
  Complex preIncrement(*this);
  ++real;
  return preIncrement;
}

// Operator ++ as in c1 == c2
bool Complex::operator==(const Complex& rval) const {
  return (real == rval.real && imaginary == rval.imaginary);
}

// Operator ++ as in c1 != c2
bool Complex::operator!= (const Complex & rval) const {
  return !(*this == rval);
}

// Operator << as in cout << c
ostream& operator<< (ostream & out, const Complex & c) {
  out << '(' << c.real << ',' << c.imaginary << ')';
  return out;
}

// Operator >> as in cin >> c
istream& operator>> (istream & in, Complex & c) {
  // Not validating input
  char trash;
  in >> trash >> c.real >> trash >> c.imaginary >> trash;
  return in;
}

int main(){
  cout << fixed << setprecision(2);

  Complex c1(3.1, 4.2);
  cout << c1 << endl;
  Complex c2(3.1);
  cout << c2 << endl;

  Complex c3(c2);
  c3 += c1;
  cout << c3 << endl;
  c3 += 2.3;
  cout << c3 << endl;

  std::cout << ++c3 << endl;
  std::cout << c3++ << endl;
  std::cout << c3   << endl;

  Complex c5;
  cout << "Enter a complex number in (real,imag): ";
  cin >> c5;
  if (cin.good()) {
    cout << c5 << endl;
  } else {
    cerr << "Invalid input" << endl;
  }

  return 0;
}