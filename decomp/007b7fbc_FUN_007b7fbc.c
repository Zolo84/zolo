// FUN_007b7fbc @ 7b7fbc size=49

undefined4 FUN_007b7fbc(byte param_1,uint param_2,byte param_3)

{
  if ((*(byte *)((int)&DAT_00dc5a20 + param_1 + 1) & param_3) == 0) {
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = *(ushort *)(&DAT_0087cdda + (uint)param_1 * 2) & param_2;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  return 1;
}


