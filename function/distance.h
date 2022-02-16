#ifndef DEFINE_H
#define DEFINE_H
#include "../define.h"
#endif

/*
平面上の2点間の距離
*/
double distance(double x1, double y1, double x2, double y2){
  
  double horizontal = pow(x1-x2,2.0);
  double vertical = pow(y1-y2,2.0);

  return sqrt(horizontal+vertical);
}