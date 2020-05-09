// FILE: ex01-rooms.cpp
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct Distance {
  int feet;
  int inches;
};

struct Room{
  Distance width;
  Distance length;
};

const int ROOMS = 3;

string dist2str(Distance);
string room2str(Room);
string house2str(Room[]);

int main() {
  Room house[ROOMS] = {
    {{12, 10}, {11, 0}},
    {{10, 5}, {10, 5}},
    {{14, 8}, {12, 4}}
  };
  cout << house2str(house);
  return 0;
}

string house2str(Room house[ROOMS]){
  stringstream out;
  // Your code goes here
  return out.str();
}

string room2str(Room r){
  stringstream out;
  o// Your code goes here
  return out.str();
}

string dist2str(Distance d){
  stringstream out;
  // Your code goes here
  return out.str();
}
