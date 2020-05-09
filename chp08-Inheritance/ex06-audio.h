#ifndef _AUDIO_H_
#define _AUDIO_H_

#include "ex06-publication.h"

class Audio : public Publication {
private:
  int playingTime;

public:
  Audio();
  Audio(const std::string&, float, int);
  int getPlayingTime() const;
  void setPlayingTime(int);

  void getData();
  void showData();
};

#endif