#ifndef _PUBLICATION_H_
#define _PUBLICATION_H_

#include <iostream>
#include <string>

class Publication{
private:
  std::string title;
  float price;

public:
  Publication(const std::string&, float);
  const std::string& getTitle() const;
  void setTitle(std::string);
  float getPrice() const;
  void setPrice(float);
  
  void getData();
  void showData();
};

#endif
