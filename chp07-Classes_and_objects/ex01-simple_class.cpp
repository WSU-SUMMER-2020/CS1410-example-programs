// FILE: ex01-simple_class.cpp
#include <iostream>
using namespace std;

class SimpleClass {
private:
  int someData;
public:
  void setData(int d) { someData = d; }

  void showData() {
    cout << "Data is " << someData << endl;
  }
};

int main(){
  SimpleClass s1, s2;
    
  s1.setData(500); 
  s2.setData(187);
  s1.showData();    
  s2.showData();
   
  return 0;
}

