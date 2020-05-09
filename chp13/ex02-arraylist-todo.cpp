// FILE: ex02-arraylist-todo.cpp
// arraylist.h
#ifndef _ARRYLIST_H_
#define _ARRYLIST_H_

#include <iostream>
#include <initializer_list>
#include <algorithm>
using namespace std;

template<typename T>
class ArrayList {
  // TODO
};

#endif

// arraylist.cpp
// TODO

// main.cpp
int main() {
  ArrayList<int> one(7);
  ArrayList<int> two = one;
  ArrayList<int> three;
  ArrayList<int> four = { 4, 8, 16 };

  two[2] = 99;

  for (int i = 0; i <one.size(); i++) {
    cout << setw(7) << "one: " << one[i] << endl;
  }
  cout << endl;
  for (int i = 0; i < two.size(); i++) {
    cout << setw(7) << "two: " << two[i] << endl;
  }
  cout << endl;
  three << 99 << 88 << 77 << 66 << 55 << 44 << 33 << 22 << 11;
  for (int i = 0; i < three.size(); i++) {
    cout << setw(7) << "three: " << three[i] << endl;
  }
  cout << endl;
  for (int i = 0; i < four.size(); i++) {
    cout << setw(7) << "four: " << four[i] << endl;
  }

  one = four;
  cout << endl;
  for (int i = 0; i <one.size(); i++) {
    cout << setw(7) << "one: " << one[i] << endl;
  }

  three.remove().remove().remove();
  cout << endl;
  for (int e : three) {
    cout << setw(7) << "three: " << e << endl;
  }

  return 0;
}