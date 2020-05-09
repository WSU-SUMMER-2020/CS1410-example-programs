// FILE: ex02-divide-v1.cpp
#include <iostream>
using namespace std;

double divide(double number, double by){
  if(by == 0){
    throw by;
  }

  return number / by;
}

int main(){
  double x, y;
  cout << "Enter two numbers: " << endl;
  cin >> x >> y;
  try{
    cout << "= " << divide(x, y) << endl;
  } catch(double e){
    cout << "Error occurred: divide by zero." << endl;
  }

  return 0;
}