// FILE: ex05-not-found.cpp
#include <iostream>
#include <stdexcept>
using namespace std;

int find(int* data, int value, unsigned size){
  for(int j = 0; j < size; j++){
    if(data[j] == value){
      return j;
    }
  }

  throw runtime_error(to_string(value) + " not found");
}

const unsigned MAX = 8;
int main(){
  int numbers[] = {2, 5, 8, 6, 9, 1, 0, 7};

  try {
    cout << find(numbers, 4, MAX) << endl;
    cout << find(numbers, 9, MAX) << endl;
  } catch(runtime_error& e){
    cout << e.what() << endl;
  }
}
