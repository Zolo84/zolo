// FUN_00584270 @ 584270 size=117

uint FUN_00584270(uint param_1,uint param_2,int param_3)

{
  if (0xff < (int)param_1) {
    param_1 = 0xff;
  }
  if (0xff < (int)param_2) {
    param_2 = 0xff;
  }
  if (0xff < param_3) {
    param_3 = 0xff;
  }
  if (DAT_00857744 == 0) {
    return ((param_1 & 0xfffffff8) << 5 | param_2 & 0xfffffffc) << 3 | param_3 >> 3;
  }
  if (DAT_00857744 == 1) {
    return ((param_1 & 0xfffffff8) << 5 | param_2 & 0xfffffff8) << 2 | param_3 >> 3;
  }
  return param_1 & 0xffff0000;
}


