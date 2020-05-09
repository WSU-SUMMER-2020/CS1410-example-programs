#include "ex06-publication.h"
using namespace std;

Publication::Publication(const string& t, float p): title(t), price(p){}

const string& Publication::getTitle() const { return title; }
void Publication::setTitle(string t){ title = t; }
float Publication::getPrice() const { return price; }
void Publication::setPrice(float p){ price = p; }

void Publication::getData(){
  cout << "Enter title: ";
  getline(cin, title);

  cout << "Enter price: ";
  cin >> price;
  cin.ignore();
}

void Publication::showData(){
  cout << "Title: " << title << endl;
  cout << "Price: " << price << endl;
}
