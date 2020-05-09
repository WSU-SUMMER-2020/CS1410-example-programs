// FILE: ex04-counter.cpp
#include <iostream>
#include <string>
using namespace std;

class Counter {
private:
  int count;
  int initial;
protected:
  int step;
public:
  Counter(int i): initial(i), count(i), step(1){}
  int next(){ return count += step; }
  int prev(){ return count -= step; }
  int current(){ return count; }
  void reset(){ count = initial; }
};

class CounterDown : public Counter {
public:
  CounterDown(int i): Counter(i){
    step = -1;
  }
};

int main(){
  Counter c(0);
  CounterDown d(100);
  
  c.next();
   cout << c.current() << endl;
  
  d.next();
  cout << d.current() << endl;  
  
  return 0;
}