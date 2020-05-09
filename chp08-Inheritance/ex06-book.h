#ifndef _BOOK_H_
#define _BOOK_H_

#include "ex06-publication.h"

class Book : public Publication {
private:
  int pageCount;

public:
  Book();
  Book(const std::string&, float, int);
  int getPageCount() const;
  void setPageCount(int);
  
  void getData();
  void showData();
};

#endif