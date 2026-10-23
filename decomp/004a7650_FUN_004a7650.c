// FUN_004a7650 @ 4a7650 size=63

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004a7650(int param_1,int param_2)

{
  char cVar1;
  
  if ((&DAT_0089cad8)[param_2] != 0) {
    if (_DAT_007e3374 <= *(float *)(*(int *)(param_1 + 0x244) + 0x32)) {
      cVar1 = FUN_005861c0(param_2);
      if (cVar1 == '\0') {
        return 1;
      }
    }
  }
  return 0;
}


