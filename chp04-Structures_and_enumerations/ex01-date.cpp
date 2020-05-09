#include <iostream>
#include <string>

using namespace std;

struct Date {
  int day;
  int month;
  int year;
};

string dateString(Date);

int main(){
  Date mlk_day = {15, 1, 2018};

  cout << dateString(mlk_day) << endl;

  return 0;
}

string dateString(Date d){
  string str = "";
  switch(d.month){
    case  1: str += "January"; break;
    case  2: str += "February"; break;
    case  3: str += "March"; break;
    case  4: str += "April"; break;
    case  5: str += "May"; break;
    case  6: str += "June"; break;
    case  7: str += "July"; break;
    case  8: str += "August"; break;
    case  9: str += "September"; break;
    case 10: str += "October"; break;
    case 11: str += "November"; break;
    case 12: str += "December"; break;
  };
  str += " " + to_string(d.day) + ", " + to_string(d.year);
  return str;
}

