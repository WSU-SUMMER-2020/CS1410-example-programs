// FILE: ex03-point.h
#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>
#include <string>
#include "canvas.h"

class Point {
private:
  int x, y;

public:
  Point();

  Point(int, int);

  int getX() const;
  void setX(int x);
  int getY() const;
  void setY(int y);

  std::string str() const;
  void show();
  void draw(canvas::Base&) const;
};

#endif
