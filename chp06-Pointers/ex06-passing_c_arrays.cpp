// FILE: ex06-passing_c_arrays.cpp
#include <iostream>
using namespace std;

void swap(int elements[]){
  int temp = elements[0];
  elements[0] = elements[1];
  elements[1] = temp;
}

void swap2(int* ptr){
  int temp = *ptr;
  *ptr = *(ptr + 1);
  *(ptr + 1) = temp;
}

int main() {
  int vals[] = {11, 17};

  cout << "Initially:" << endl;
  cout << *vals << ", " << *(vals + 1) << endl;

  swap(vals);
  cout << "After swap:" << endl;
  cout << *vals << ", " << *(vals + 1) << endl;

  swap2(vals);
  cout << "After swap2:" << endl;
  cout << *vals << ", " << *(vals + 1) << endl;

  return 0;
}
