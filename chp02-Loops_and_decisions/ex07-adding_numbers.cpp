// FILE: ex07-adding_numbers.cpp
#include <iostream>
using namespace std;

/* Adding positive numbers and printing the result */
int main() {
  int n = 0;
  long sum = 0L;

  while(n != -1){
    cout << "Enter a positive number:" << endl; cin >> n;
    if(n == -1){
      break;
    } else if(n < -1){
      cout << "Invalid number was entered; must be positive." << endl;
      continue;
    } 
    
    sum += n;
  }
  
  cout <<  "Total: " << sum << endl;

  return 0;
}
