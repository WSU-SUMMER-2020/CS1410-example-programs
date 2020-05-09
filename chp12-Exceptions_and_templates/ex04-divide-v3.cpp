// FILE: ex04-divide-v3.cpp
#include <iostream>
#include <stdexcept>
using namespace std;

class DivisionByZero : public runtime_error{
public:
  DivisionByZero(): runtime_error("divide by zero"){}
};

double divide(double number, double by){
  if(by == 0){
    throw DivisionByZero();
  }

  return number / by;
}

int main(){
  double x, y;
  cout << "Enter two numbers: " << endl;
  cin >> x >> y;
  try{
    cout << "= " << divide(x, y) << endl;
  } catch(DivisionByZero& e){
    cout << "Error occurred: " << e.what() << endl;
  }

  return 0;
}