// FILE: ex08-shapes.cpp
#include <iostream>
#include <string>
#include "ex08-shapes.h"
using namespace std;

// Point
Point::Point(int x, int y) : x(x), y(y) {}

int Point::getX() const {
  return x;
}

int Point::getY() const {
  return y;
}

string Point::str() const{
  return "P(" + to_string(x) + ", " + to_string(y) + ")";
}

void Point::draw(canvas::Base &c) const {
  c.strokePoint(x, y);
}

// Line
Line::Line(Point a, Point b) : a(a), b(b) {}

string Line::str() const{
  return "L" + a.str() + "->" + b.str();
}

void Line::draw(canvas::Base &c) const {
  c.strokeLine(a.getX(), a.getY(), b.getX(), b.getY());
}

// Rectangle
Rectangle::Rectangle(Point p, int w, int h) : p(p), width(w), height(h) {}

string Rectangle::str() const{
  return "R" + p.str() + "[" + to_string(width) + "," + to_string(height) + "]";
}

void Rectangle::stroke(canvas::Base &c) const {
  c.strokeRect(p.getX(), p.getY(), width, height);
}

void Rectangle::fill(canvas::Base &c) const {
  c.fillRect(p.getX(), p.getY(), width, height);
}

// Square
Square::Square(Point p, int w) : Rectangle(p, w, w) {}


// main.cpp
int main(){
  canvas::Text c(80, 30, 'W');
  Point p(10, 15);
  p.draw(c);

  Line({30, 12}, {56, 26}).draw(c);

  Square s({20, 8}, 5);
  s.fill(c);

  Rectangle* r = new Rectangle({37, 3}, 12, 5);
  r->stroke(c);

  c.draw();

  return 0;
}