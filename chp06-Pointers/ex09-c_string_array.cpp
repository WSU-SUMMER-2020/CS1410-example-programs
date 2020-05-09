// FILE: ex09-c_string_array.cpp
#include <iostream>

using namespace std;

int main()
{
  const int DAYS = 7;

  const char* day_names[DAYS] = {
    "Sunday", "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday"
  };

  for(int j = 0; j < DAYS; j++){
    cout << day_names[j] << endl;
  }

  return 0;
}

