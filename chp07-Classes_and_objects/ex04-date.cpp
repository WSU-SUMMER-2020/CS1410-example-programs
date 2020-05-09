// FILE: ex04-date.cpp
#include <iostream>
#include <iomanip>
using namespace std;

class Date {
private:
  int month, day, year;
public:
  void setDate(int mm, int dd, int yyyy){
    month = mm;
    day = dd;
    year = yyyy;
  }

  void showDate() {
    cout << "The date is " << setfill('0')
         << setw(2) << month << '/'
         << setw(2) << day << '/'
         << setw(2) << year % 100 << endl;
  }
};

int main(){
  Date d;
  d.setDate(10, 17, 2018);
  d.showDate();

  return 0;
}

