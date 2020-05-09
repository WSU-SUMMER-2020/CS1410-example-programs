// FILE: ex06-copy_c_string_2.cpp
#include <iostream>
#include <cstring>

using namespace std;

int main() {
 char quote[] = "To be or not to be.";
 char quote2[40];

 strcpy(quote2, quote);

 cout << '\"' << quote2 << '\"' << endl;

 return 0;
}