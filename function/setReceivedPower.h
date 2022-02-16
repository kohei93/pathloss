#ifndef DEFINE_H
#define DEFINE_H
#include "../define.h"
#endif

#ifndef CONVERTER_DB_TO_H
#define CONVERTER_DB_TO_H
#include "./converter_mW_to.h"
#endif

#ifndef PATHLOSS_H
#define PATHLOSS_H
#include "./pathloss.h"
#endif

#ifndef RAYLEIGHFADING_H
#define RAYLEIGHFADING_H
#include "./rayleighFading.h"
#endif

/*
受信電力値の計算
*/
double setReceivedPower(double x1, double y1, double x2, double y2, double v){
  std::complex<double> fading = rayleighFading(v); //レイリーフェージング[真値]・(複素振幅)
  double pathloss_dB = pathloss(x1, y1, x2, y2); //パスロス[dB]
  double fading_dB = converter_mW_to(pow(std::abs(fading),2)); //レイリーフェージング[dB]
  return Pt + pathloss_dB + fading_dB;
  // return Pt + pathloss_dB;
}

