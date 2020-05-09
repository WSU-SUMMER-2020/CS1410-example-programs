// FILE: ex09-word_counter.cpp
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <iomanip>
#include <string>
using namespace std;

int main() {
  // A vector of words to ignore counting.
  vector<string> ignoreWords = {
      "A", "AN", "THE", "IS", "ARE", "BE", "WAS", "WERE",
      "DO", "DOES", "AND", "OR", "OF", "ON", "IN", "WOULD",
      "CAN", "ALSO", "WITH", "ANY", "FOR", "WILL", "OF"
  };

  // TODO: define two maps (list of key and valud pairs) for recording counts:
  //        1. countPerWord (pairs of string and integer)
  //        2. countPerLetter (pairs of character and integer).

  // TODO: reading input text file


  // TODO: printing word counts to output file


  // TODO: Adding letter histogram to output file


  return 0;
}
