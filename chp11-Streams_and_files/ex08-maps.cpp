// FILE: ex08-maps.cpp
#include <iostream>
#include <map>
using namespace std;

int main () {
  map<string, double> grades;

  // Adds for pairs to the grades map.
  grades["X0001"] = 89.5;
  grades["X0002"] = 90.0;
  grades["X0003"] = 81.2;
  grades["X0004"] = 77.9;

  cout << grades["X0003"] << endl; // Prints 81.2

  // Reading a key that does not exist yet
  cout << grades["X0005"] << endl; // Prints 0

  for(auto pair : grades){
    cout << "ID= " << pair.first << ", "
         << "GRADE= " << pair.second << endl;
  }

  return 0;
}
