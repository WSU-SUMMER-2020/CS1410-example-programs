#include "ex06-book.h"
#include "ex06-audio.h"
using namespace std;

int main(){
  Book b;
  Audio a;
  
  cout << "\nPublication #1 (Book)" << endl;
  b.getData();
  
  cout << "\nPublication #2 (Audio)" << endl;
  a.getData();
  
  b.showData();
  a.showData();
  
  return 0;
}