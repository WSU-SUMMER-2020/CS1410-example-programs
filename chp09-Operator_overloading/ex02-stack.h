// FILE: ex02-stack.h
#ifndef _STACK_H_
#define _STACK_H_

#include <iostream>
#include <iomanip>
#include <cmath>

class Stack{
private:
  int top;
  int size;
  int* list;

public:
  Stack(int s);
  Stack(Stack&);

  void push(int);
  int pop();
  void show() const;

  ~Stack();
};

#endif
