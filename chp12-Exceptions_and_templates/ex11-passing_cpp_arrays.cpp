// FILE: ex11-passing_cpp_arrays.cpp
#include <iostream>
#include <array>
using namespace std;

template <typename T, size_t S>
void swap3(array<T,S>& elements){
  int temp = elements[0];
  elements[0] = elements[1];
  elements[1] = temp;
}

int main() {
  array<int, 2> vals= {11, 17};

  cout << "Initially:" << endl;
  cout << vals[0] << ", " << vals[1] << endl;
  swap3(vals);
  cout << "After swap3:" << endl;
  cout << vals.at(0) << ", " << vals.at(1) << endl;
  
  return 0;
}
