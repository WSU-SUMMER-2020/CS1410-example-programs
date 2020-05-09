// FILE: ex02-day_of_week.cpp
#include <iostream>
#include <string>
using namespace std;

enum DayOfWeek { SUN = 1, MON, TUE, WED, THU, FRI, SAT};

string nameDayOfWeek(DayOfWeek d){
  switch(d){
    case SUN: return "Sunday";
    case MON: return "Monday";
    case TUE: return "Tuesday";
    case WED: return "Wednesday";
    case THU: return "Thursday";
    case FRI: return "Friday";
    case SAT: return "Saturday";
    default: return "";
  }
}

int main() {
  int d;
  DayOfWeek day;

  cout << "Enter a day number (1 through 7): ";
  cin >> d;
  day = static_cast<DayOfWeek>(d);
  cout << "Day of week: " << nameDayOfWeek(day) << endl;

  return 0;
}
