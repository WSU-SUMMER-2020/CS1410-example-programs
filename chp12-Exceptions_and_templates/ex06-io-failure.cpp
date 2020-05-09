// FILE: ex06-io-failure.cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  ifstream fin;
  fin.exceptions (ios::failbit | ios::badbit);
  try {
    fin.open ("test.txt");
    while(!fin.eof()) {
      string line;
      getline(fin, line);
      cout << line;
    }
    fin.close();
  } catch (ifstream::failure e) {
    cerr << "Error occurred: " << e.code() << " - " << e.what() << endl;
  }

  return 0;
}
