// FILE: ex10-binary_files.cpp
#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

class NameCard{
private:
  string name, title, dept;
public:
  NameCard(){}
  NameCard(string n, string t, string d): name(n), title(t), dept(d){}
  string getName(){ return name; }
  string getTitle(){ return title; }
  string getDept(){ return dept; }
};

int main () {
  // Writing an object to a binary file
  ofstream out("card.dat", ios::binary);
  NameCard* c = new NameCard("John Roberts",
                             "Dr.", "Psychology");
  out.write(reinterpret_cast<char*>(c), sizeof(NameCard));
  out.close(); 
  
  // Reading an object from a binary file
  NameCard d;
  ifstream in("card.dat", ios::binary);
  
  in.read(reinterpret_cast<char*>(&d), sizeof(NameCard));
  cout << d.getName() << endl
       << d.getTitle() << endl
       << d.getDept() << endl;
    
  in.close();
  
  return 0;
}

