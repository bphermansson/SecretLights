// Effects array
#include <cstdint>
struct lightValues 
{
  uint8_t eff;
  int len;
} lv;
lightValues intEff[ 15 ];

void effects() {
  lv.eff = 46;
  lv.len = 5000;
  intEff[0] = lv;
  lv.eff = 12;
  lv.len = 6000;
  intEff[1] = lv;
  lv.eff = 7;
  lv.len = 5000;
  intEff[2] = lv;
  lv.eff = 32;
  lv.len = 4000;
  intEff[3] = lv;
  lv.eff = 42;
  lv.len = 5000;
  intEff[4] = lv;
  lv.eff = 47;
  lv.len = 7000;
  intEff[5] = lv;
  lv.eff = 55;
  lv.len = 4000;
  intEff[6] = lv;
  lv.eff = 49;
  lv.len = 5000;
  intEff[7] = lv;
  lv.eff = 9;
  lv.len = 5000;
  intEff[8] = lv;
  lv.eff = 14;
  lv.len = 5000;
  intEff[9] = lv;
  lv.eff = 19;
  lv.len = 5000;
  intEff[10] = lv;
  lv.eff = 47;
  lv.len = 25000;
  intEff[11] = lv;
}  
  