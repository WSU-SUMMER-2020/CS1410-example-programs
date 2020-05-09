// FILE: ex02-day_of_week_scoped.cpp
#include <iostream>
#include <string>
using namespace std;

enum class DayOfWeek { SUN = 1, MON, TUE, WED, THU, FRI, SAT};

string nameDayOfWeek(DayOfWeek d){
  switch(d){
    case DayOfWeek::SUN: return "Sunday";
    case DayOfWeek::MON: return "Monday";
    case DayOfWeek::TUE: return "Tuesday";
    case DayOfWeek::WED: return "Wednesday";
    case DayOfWeek::THU: return "Thursday";
    case DayOfWeek::FRI: return "Friday";
    case DayOfWeek::SAT: return "Saturday";
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
