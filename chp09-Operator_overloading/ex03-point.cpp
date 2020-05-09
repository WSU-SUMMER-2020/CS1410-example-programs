// FILE: ex03-point.cpp

#include "ex03-point.h"
using namespace std;

Point::Point() : Point(0, 0) {}
Point::Point(int x, int y) : x(x), y(y) {}

int Point::getX() const {
  return x;
}

void Point::setX(int x) {
  Point::x = x;
}

int Point::getY() const {
  return y;
}

void Point::setY(int y) {
  Point::y = y;
}

string Point::str() const {
  return "P(" + to_string(x) + ", " + to_string(y) + ")";
}

void Point::show() {
  cout << str();
}

void Point::draw(canvas::Base& c) const {
  c.strokePoint(x, y);
}

int main(){
  Point p(25, 22);
  p.show();
  cout << endl;

  Point q(14, 35);
  q.show();
  cout << endl;

  return 0;
}