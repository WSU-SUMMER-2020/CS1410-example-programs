// FILE: ex02-draw.cpp
#include <iostream>
#include "canvas.h"
using namespace std;

int main(){
  canvas::Text c1(80, 30, '*');
  c1.strokePoint(25, 22);
  c1.strokeLine(20, 2, 30, 10);
  c1.strokeRect(10, 12, 50, 8);
  c1.strokeCircle(35, 16, 4);
  c1.fillRect(40, 22, 10, 5);
  c1.draw();

  canvas::SVG c2(240, 90);
  c2.strokePoint(75, 66);
  c2.strokeLine(60, 6, 90, 30);
  c2.strokeRect(30, 36, 150, 24);
  c2.strokeCircle(105, 48, 12);
  c2.fillRect(120, 66, 30, 15);
  c2.draw();

  canvas::HTML5 c3(240, 90);
  c3.strokePoint(75, 66);
  c3.strokeLine(60, 6, 90, 30);
  c3.strokeRect(30, 36, 150, 24);
  c3.strokeCircle(105, 48, 12);
  c3.fillRect(120, 66, 30, 15);
  c3.draw();

  return 0;
}


