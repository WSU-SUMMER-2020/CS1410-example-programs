// FILE: ex07-c_array_of_days.cpp
#include <iostream>

using namespace std;

int main()
{
  const int DAYS = 7; // Number of strings in array
  const int MAX = 10; // Size of each string

  char day_names[DAYS][MAX] = {
    "Sunday", "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday"
  };

  for(int j = 0; j < DAYS; j++){
    cout << day_names[j] << endl;
  }

  return 0;
}
