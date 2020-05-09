//FILE: ex03-vector.cpp
#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector<int> numbers;
  int n;
  cout << "Enter integers (or any letter to stop): ";
  while(cin >> n){
    numbers.push_back(n);
  }

  for(int m : numbers){
    cout << "= " << m << endl;
  }

  sort(numbers.begin(), numbers.end());
  for(int i = 0; i < numbers.size(); i++){
    cout << "+ " << numbers.at(i) << endl;
  }

  reverse(numbers.begin(), numbers.end());
  for(vector<int>::iterator i = numbers.begin(); i != numbers.end(); i++){
    cout << "- " << *i << endl;
  }

  vector<int>::iterator i = numbers.begin();
  while(i != numbers.end()){
    cout << "- " << *i++ << endl;
  }

  return 0;
}
