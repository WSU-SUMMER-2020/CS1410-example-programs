// FILE: ex03-divide-v2.cpp
#include <iostream>
#include <stdexcept>
using namespace std;

double divide(double number, double by){
  if(by == 0){
    throw runtime_error("divide by zero");
  }

  return number / by;
}

int main(){
  double x, y;
  cout << "Enter two numbers: " << endl;
  cin >> x >> y;
  try{
    cout << "= " << divide(x, y) << endl;
  } catch(runtime_error& e){
    cout << "Error occurred: " << e.what() << endl;
  }

  return 0;
}