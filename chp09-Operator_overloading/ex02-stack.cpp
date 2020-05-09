// FILE: ex02-stack.cpp
#include "ex02-stack.h"
using namespace std;

Stack::Stack(int s): size(s), top(0) {
  list = new int[size];
}

Stack::Stack(Stack& s): size(s.size), top(s.top) {
  list = new int[size];
}

void Stack::push(int item) {
  if (top == size) {
    cout << "Stack is full." << endl;
    return;
  }

  list[top] = item;
  top++;
}

int Stack::pop(){
  if(top == 0){
    cout << "Stack is empty." << endl;
    return HUGE_VAL;
  }

  top--;
  return list[top];
}

void Stack::show() const{
  int i = top - 1;
  while (i >= 0) {
    cout << setw(2) << (i == top - 1 ? "> " : " ") << list[i] << endl;
    i--;
  }

  cout << top << " items found.\n" << endl;
}

Stack::~Stack(){
  delete[] list;
}

int main()
{
  Stack s(4);

  s.push(20);
  s.push(60);
  s.show();

  s.pop();
  s.show();
}
