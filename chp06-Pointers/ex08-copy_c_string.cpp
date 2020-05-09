// FILE: ex08-copy_c_string.cpp
#include <iostream>
using namespace std;

void copystr(char desc[], char src[]){
  for(int i = 0; i < strlen(src); i++){
    desc[i] = src[i];
  }
  
  desc[strlen(src)] = '\0';
}

void copystr2(char* desc, const char* src){
  while(*src){
    *desc++ = *src++;
  }
  
  *desc = '\0';
}

int main() {
  char str[] = "Greetings1";
  const char* sptr = "Greetings2";

  char s[20];
  copystr(s, str);
  cout << s << endl;
  
  copystr2(s, sptr);
  cout << s << endl;

  return 0;
}

