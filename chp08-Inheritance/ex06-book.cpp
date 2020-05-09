#include "ex06-book.h"
using namespace std;

Book::Book():Publication("", 0.0), pageCount(0){}
Book::Book(const string& t, float p, int c): Publication(t, p), pageCount(c){}

int Book::getPageCount() const { return pageCount; }
void Book::setPageCount(int c){ pageCount = c; }
  
void Book::getData() {
  Publication::getData();
  cout << "Enter page count: ";
  cin >> pageCount;
  cin.ignore();
}
  
void Book::showData() {
  Publication::showData();
  cout << "Page count: " << pageCount << endl;
}
