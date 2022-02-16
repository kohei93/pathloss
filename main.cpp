

/*
出力用コマンド
set xrange [0.0:1.0]
set yrange [0.0:1.0]
set size ratio -1
set xtics 0, 0.1, 1
set mxtics 5
set ytics 0, 0.1, 1  
set mytics 5
set grid
set key left top
plot "dat/~" w lp lw 3 ps 3 lc rgb "black" title "~"
*/

#ifndef DEFINE_H
#define DEFINE_H
#include "./define.h"
#endif

#ifndef FUNCTION_H
#define FUNCTION_H
#include "./function.h"
#endif

int main(void){
  double x1 = 0.0, y1 = 0.0; //座標(0,0)
  double x2 = 50.0, y2 = 50.0; //座標 (50,50);
  double v = 0.0; //受信機の速度

  init_genrand((unsigned)time(NULL)); //

  double pr = setReceivedPower(x1,y1,x2,y2,v);
  printf("%lf\n",pr);

  return 0;
}

