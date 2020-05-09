// FILE: ex04-date_2.cpp
#include <iostream>
#include <iomanip>
using namespace std;

class Date {
private:
  int month, day, year;
public:
  Date(int mm, int dd, int yy) : month(mm), day(dd), year(yy) {}

  void showDate() {
    cout << "The date is " << setfill('0')
         << setw(2) << month << '/'
         << setw(2) << day << '/'
         << setw(2) << year % 100 << endl;
  }

  ~Date(){}
};

int main(){
  Date d1(10, 17, 2017);
  d1.showDate();
  int y(2018);
  Date d2 = Date(1, 23, y);
  d2.showDate();
}