// FILE: ex01-exceptions.cpp
#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include <vector>
using namespace std;

struct Point {int x, y;};
struct Square {
  Point p;
  int width;

  Square(Point p, int w) : p(p) {
    if (w > 0) {
      width = w;
    } else {
      throw runtime_error("negative width!");
    }
  }
  void show(){
    cout << "(" << p.x << "," << p.y
         << ")[" << width << "]" << endl;
  }
};

int quotient(int x, int y){
  if(y == 0){
    throw runtime_error("divide by zero!");
  }

  return x /y;
}

int main() {
  try {
    Square s({12, 30}, -20);
    s.show();

    int x = 0, y = 5, z;
    string feet = "n12";
    vector<int> counts = {3, 6, 4, 1, 9};

    cout << quotient(y, x) << endl;
    cout << stoi(feet);

    ifstream fin("not_found.file");
    fin.exceptions(ios::failbit | ios::badbit);
    fin.close();

    std::string().at(1);
  } catch(...) {
    try {
      rethrow_exception(current_exception());
    }catch(exception& e){
      cout << "Error occurred: " << e.what() << endl;
    }
  }
  
  return 0;
}