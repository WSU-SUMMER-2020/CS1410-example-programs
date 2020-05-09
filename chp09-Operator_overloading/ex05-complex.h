// FILE: ex05-complex.h

#ifndef _COMPLEX_H_
#define _COMPLEX_H_

#include <iostream>
#include <string>

class Complex {
private:
  double real, imaginary;

public:
  Complex(double = 0, double = 0);

  // Binary operators
  Complex& operator+=(const Complex&);
  Complex& operator+=(double);
  bool operator==(const Complex&) const;
  bool operator!=(const Complex&) const;

  // friend binary operators
  friend std::ostream& operator<<(std::ostream&, const Complex&);
  friend std::istream& operator>>(std::istream&, Complex&);

  //Unary operators
  Complex& operator++();
  Complex operator++(int);
  double& operator[](int);
};

#endif
