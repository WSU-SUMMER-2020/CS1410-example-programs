// FILE: ex01-distance.cpp
#include "ex01-distance.h"
using namespace std;

Distance::Distance(): feet(0), inches(0){}

Distance::Distance(int f, int n): feet(f), inches(n){}

void Distance::show() const{
  cout << feet << "\' " << inches << '\"' << endl;
}

Distance Distance::add(const Distance& d) const{
  Distance temp = *this;
  temp.feet += d.feet + (temp.inches + d.inches) / 12;
  temp.inches = (temp.inches + d.inches) % 12;

  return temp;
}

int main(){
  Distance d1;
  Distance d2(11, 6);
  Distance d3 = d1.add(Distance(8, 9));

  d1.show();
  d2.show();
  d3.show();

  return 0;
}
  