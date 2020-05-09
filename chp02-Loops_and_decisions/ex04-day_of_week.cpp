// FILE: ex04-day_of_week.cpp
#include <iostream>
#include <string>
using namespace std;

/* Prints the day of week for a given day (1 to 7). */
int main() {
  short day;
  string name;

  cout << "Enter a day number (between 1 and 7):" << endl; 
  cin >> day;
  
  if (day == 1){ name = "Sunday"; }
  else if (day == 2){ name = "Monday"; } 
  else if (day == 3){ name = "Tuesday"; }
  else if (day == 4){ name = "Wednesday"; }
  else if (day == 5){ name = "Thursday"; }
  else if (day == 6){ name = "Friday"; }
  else if (day == 7){ name = "Saturday"; }
  else { name = "invalid day"; }
  
  cout << "Day of the week is " << name << endl;

  return 0;
}



