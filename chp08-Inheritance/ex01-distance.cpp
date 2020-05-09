// FILE: ex01-distance.cpp
#include <iostream>
#include <cmath>
using namespace std;

class Distance{
private:
  static unsigned int objectCount;
  static double centimetersPerInch;
  int feet;
  int inches;

public:
  Distance(): feet(0), inches(0){ objectCount++; }
  Distance(int f, int n): feet(f), inches(n){ objectCount++; }
  void show();
  Distance add(const Distance d);
  double toCentimeters(){
    return (feet * 12 + inches) * centimetersPerInch;
  }

  double toMeters(){ return toCentimeters() / 100; }
  static Distance add(const Distance d1, const Distance d2);
  static unsigned int getObjectCount(){  return objectCount; }
};

unsigned int Distance::objectCount = 0;
double Distance::centimetersPerInch = 2.54;

void Distance::show(){
  cout << feet << "\' " << inches << "\" ("
       << toCentimeters() << " cm, "
       << toMeters() << "m) ";
}

Distance Distance::add(const Distance d){
  feet += d.feet + (inches + d.inches) / 12;
  inches = (inches + d.inches) % 12;

  return *this;
}

Distance Distance::add(const Distance d1, const Distance d2){
  Distance temp;
  temp.add(d1);
  temp.add(d2);

  return temp;
}

int main(){
  Distance d1;
  d1.add(Distance(8, 9));

  Distance d2(11, 6);
  Distance d3 = Distance(7, 11);
  Distance d4(d3);

  cout << "\n        1 = "; d1.show();
  cout << "\n        2 = "; d2.show();
  cout << "\n        3 = "; d3.show();
  cout << "\n1 + 2 + 3 = "; d1.add(d2).add(d3).show();
  cout << "\n        1 = "; d1.show();
  cout << "\n        4 = "; d4.show();
  cout << "\n        5 = "; Distance::add(d1, d2).show();
  cout << endl;
  cout << Distance::getObjectCount() << endl;

  return 0;
}
