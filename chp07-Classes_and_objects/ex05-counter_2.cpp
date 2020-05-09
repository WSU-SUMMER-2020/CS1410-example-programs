// FILE: ex02-counter_2.cpp
#include <iostream>
using namespace std;

class Counter {
private:
  unsigned count;
  int step;
public:
  Counter() : count(0), step(1) {}

  Counter(unsigned c) : count(c), step(1) {}

  Counter(unsigned c, int s) : count(c), step(s) {}

  void increment() { count = count + step; }

  int current() { return count; }

  ~Counter() {}
};

int main(){
  //TODO

  
  delete c1; delete c2; delete c3;
}

