#ifndef _ADDITION_H_
#define _ADDITION_H_

#include "ex01-operation.h"

class Addition : public Operation {
private:
  double first;
  double second;
  
public:
  Addition(double f, double s);
  double perform();
};

#endif

