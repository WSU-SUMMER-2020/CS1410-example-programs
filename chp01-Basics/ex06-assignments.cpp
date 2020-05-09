// FILE: ex06-assignments.cpp
#include <iostream>
using namespace std;

int main() {
  int ans = 27;

  ans += 10;    //same as: ans = ans + 10;
  cout << ans << ", ";
  ans -= 7;     //same as: ans = ans - 7;
  cout << ans << ", ";
  ans *= 2;     //same as: ans = ans * 2;
  cout << ans << ", ";
  ans /= 3;     //same as: ans = ans / 3;
  cout << ans << ", ";
  ans %= 3;     //same as: ans = ans % 3;
  cout << ans << endl;

  return 0;
}

