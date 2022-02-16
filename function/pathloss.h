#ifndef DEFINE_H
#define DEFINE_H
#include "../define.h"
#endif

#ifndef DISTANCE_H
#define DISTANCE_H
#include "./distance.h"
#endif

/*
n乗則減衰計算(パスロス) (n=3.5)
参考
Wireless Communications second edition, Andreas F. Molisch, pp49,54
*/
double pathloss(double x1, double y1, double x2, double y2){
  double d = distance(x1, y1, x2, y2); //送受信間距離計算
  double pathloss; //パスロス[dB]

if(d<D_Break){
    pathloss = 20*log10(Lambda/(4.0*M_PI)) - 20.0*log10(d);
  }else{
    pathloss = 20*log10(Lambda/(4.0*M_PI)) - 20.0*log10(D_Break) - 10.0*N*log10(d/D_Break);
  }
  return pathloss;
}
