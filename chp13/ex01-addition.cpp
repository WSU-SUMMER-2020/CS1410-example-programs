// FILE: ex01-addition.cpp
#include "ex01-addition.h"
int no_of_additions_performed = 0; // Global variable definition

Addition::Addition(double f, double s): first(f), second(s) {
  no_of_additions_performed++;
}

double Addition::perform(){
  return first + second;
}

