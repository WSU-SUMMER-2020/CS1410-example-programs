// FILE: ex06-copy_c_string.cpp
#include <iostream>
#include <cstring>

using namespace std;

int main() {
 char quote[] = "To be or not to be.";
 char quote2[40];

 for(int i = 0; i < strlen(quote); i++){
   quote2[i] = quote[i];
 }

 quote2[strlen(quote)] = '\0';

 cout << '\"' << quote2 << '\"' << endl;

 return 0;
}