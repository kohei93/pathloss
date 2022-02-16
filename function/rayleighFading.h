#ifndef DEFINE_H
#define DEFINE_H
#include "../define.h"
#endif

/*
レイリーフェージングによる減衰計算
参考
ディジタル移動通信の電波伝搬基礎, 唐沢好男, pp135-136
*/
std::complex<double> rayleighFading(double v){
  double t=0.0; //シンボル周期で離散化された時間??? (i)
  double f_D = v/Lambda; //最大ドップラー周波数

  //初期化
  std::complex<double> h(0.0,0.0); //フェージング周波数

  //フェージング係数の計算
  for(int k=0;k<L;k++){
    double theta = genrand_real1() * (2.0*M_PI); //入射角
    double phi = genrand_real1() * (2.0*M_PI); //位相オフセット

    double re = cos(2*M_PI*f_D*T_s*t*cos(theta) + phi); //実部
    double im = sin(2*M_PI*f_D*T_s*t*cos(theta) + phi); //虚部
    h += std::complex<double>(re,im);
  }

  //伝搬チャネル
  return h/sqrt((double)L);
}
