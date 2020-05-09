// FILE: ex08-function_template.cpp
#include <iostream>
using namespace std;

template<typename T>
T lesserOf(T n, T m){
  return n < m ? n : m;
}

int main(){
  cout << lesserOf<int>(78, 9) << endl;
  cout << lesserOf<char>('D', 'G') << endl;
  cout << lesserOf<double>(4.3, 7.8) << endl;
  cout << lesserOf<string>("Mark", "Jake");
  return 0;
}
