#include "ex06-audio.h"
using namespace std;

Audio::Audio():Publication("", 0.0), playingTime(0){}
Audio::Audio(const string& t, float p, int m): Publication(t, p), playingTime(m){}

int Audio::getPlayingTime() const { return playingTime; }
void Audio::setPlayingTime(int t){ playingTime = t; }

void Audio::getData(){
  Publication::getData();
  cout << "Enter playing time: ";
  cin >> playingTime;
  cin.ignore();
}

void Audio::showData(){
  Publication::showData();
  cout << "Playing time: " << playingTime << endl;
}
