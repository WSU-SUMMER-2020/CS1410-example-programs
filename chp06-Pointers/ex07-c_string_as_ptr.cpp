// FILE: ex07-c_string_as_ptr.cpp
#include <iostream>
using namespace std;

int main() {
  char str[] = "Greetings1"; 
  const char* sptr = "Greetings2";

  while(*sptr){
    cout << sptr++ << endl;
    /*
     * What happens when you uncomment the
     * following line?
     */
    // cout << str++ << endl;
  }

  return 0;
}

