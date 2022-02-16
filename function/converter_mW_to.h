#ifndef DEFINE_H
#define DEFINE_H
#include "../define.h"
#endif

/*
dBm → mW (要確認, 返り値の型の形式をpackets[][][]と合わせる必要)
*/
double converter_mW_to(double pr){
  return 10*log10(pr);
}
