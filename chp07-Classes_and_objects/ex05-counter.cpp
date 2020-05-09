// FILE: ex05-counter.cpp
#include <iostream>
using namespace std;

class Counter {
private:
  unsigned int count;
public:
  Counter() : count(0) {
    cout << "init " << count << endl;
  }

  void increment() { count++; }

  int current() { return count; }

  ~Counter() {
    cout << "fini " << count << endl;
  }
};

int main(){
  Counter c1, c2;
  cout << "Count_1: " << c1.current() << endl; 
  cout << "Count_2: " << c2.current() << endl;
  c1.increment();
  c2.increment();
  cout << "Count_1: " << c1.current() << endl; 
  cout << "Count_2: " << c2.current() << endl;
}

