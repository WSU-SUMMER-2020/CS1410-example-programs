// FILE: find_function.cpp
#include <iostream>
using namespace std;

template <class T, class S>
int find(T* data, T value, S size){
  for(S j = 0; j < size; j++){
    if(data[j] == value){
      return j;
    }
  }

  return -1;
}

const unsigned int MAX = 8;
int main(){
  char vowels[MAX] = {'A', 'E', 'I', 'O', 'U', 'Y'};

  cout << find(vowels, 'X', MAX) << endl;                 // Returns -1
  cout << find<char, unsigned>(vowels, 'U', MAX) << endl; // Returns  4

  return 0;
}
