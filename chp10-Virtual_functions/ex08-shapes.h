// FILE: ex08-shapes.h
#ifndef _SHAPES_H_
#define _SHAPES_H_

#include <string>
#include "canvas.h"

class Point {
private:
  int x, y;

public:
  Point(int, int);
  int getX() const;
  int getY() const;
  std::string str() const;
  void draw(canvas::Base &c) const;
};

class Line {
private:
  Point a, b;

public:
  Line(Point, Point);
  std::string str() const;
  void draw(canvas::Base &c) const;
};

class Rectangle {
protected:
  Point p;
  int width, height;

public:
  Rectangle(Point, int, int);
  std::string str() const;
  void stroke(canvas::Base &c) const;
  void fill(canvas::Base &c) const;
};

class Square : public Rectangle {
public:
  Square(Point, int);
};

#endif
