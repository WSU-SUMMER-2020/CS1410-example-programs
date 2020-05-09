// FILE: ex05-day_of_week_using_switch.cpp
#include <iostream>
#include <string>
using namespace std;

/* Prints the day of week for a given day (1 to 7). */
int main() {
  short day; string name = "";

  cout << "Enter a day number(between 1 and 7):" << endl; cin >> day;
  switch(day){
    case 1:  name = "Sunday"; break;
    case 2:  name = "Monday"; break;
    case 3:  name = "Tuesday"; break;
    case 4:  name = "Wednesday"; break;
    case 5:  name = "Thursday"; break;
    case 6:  name = "Friday"; break;
    case 7:  name = "Saturday"; break;
    default: name = "invalid day";
  }
  
  cout << "Day of the week is " << name << endl;
  
  return 0;
}



