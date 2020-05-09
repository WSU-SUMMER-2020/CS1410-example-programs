// FILE: ex01-distance.h
#ifndef _DISTANCE_H_
#define _DISTANCE_H_

#include <iostream>
#include <string>
#include <cmath>

class Distance{
private:
  int feet;
  int inches;

public:
  Distance();
  Distance(int, int);
  void show() const;
  Distance add(const Distance& d) const;
};

#endif



