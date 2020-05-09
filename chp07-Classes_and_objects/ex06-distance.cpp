// FILE: ex06-distance.cpp
#include <iostream>
using namespace std;

class Distance {
private:
  int feet;
  float inches;
public:
  Distance() : feet(0), inches(0.0) {}

  Distance(int f, float n) : feet(f), inches(n) {}

  void getDistance();

  void showDistance();
};

void Distance::getDistance(){
  cout << "Feet: "; cin >> feet;
  cout << "Inches: "; cin >> inches;
}

void Distance::showDistance(){ 
  cout << feet << "\' " << inches << '\"'; 
}

int main() {
  Distance d1;
  Distance d2(11, 6.25);
  d1.getDistance();

  cout << "\nd1 = ";
  d1.showDistance();
  cout << "\nd2 = ";
  d2.showDistance();

  return 0;
}
  