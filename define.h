#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <complex> //複素数

#include "MT.h"

#define Pt 23.0 //送信電力 [dBm]

#define F 2400000000.0 //周波数 920MHz or 2.4GHz
#define C 299792458.0 //光速

#define D_Break 10.0 //ブレークポイント (高さ0.5m, 周波数2.4GHzの時 最低値=8.012)
#define N 3.5 //減衰係数

double Lambda = C/F; //波長 約0.1249 (f=2.4GHz), 約0.3258 (f=920MHz)
//double Pr_1m = Pt + 20.0*log10(Lambda/(4.0*M_PI)); //受信電力 (1m) [dB]

#define L 1000 //素波数
#define T_s 128 //シンボル周期
