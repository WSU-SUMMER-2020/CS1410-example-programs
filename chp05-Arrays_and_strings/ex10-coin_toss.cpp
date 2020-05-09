#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  int tosses[] = {0, 0}; // An array of two: one for each face

  srand(time(NULL)); // To make sure new generated numbers are
                     // created with every run of the program.
  for(int i = 0; i < 100; i++){
    int toss = rand() % 2; // Toss will be either 0 or 1
    tosses[toss]++;        // Count how many 0's and 1's and
                           // save results to the tosses array.
  }

  cout << "Heads: " << tosses[0] << endl
       << "Tails: " << tosses[1] << endl;

  return 0;
}
