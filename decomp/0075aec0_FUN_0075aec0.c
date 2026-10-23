// FUN_0075aec0 @ 75aec0 size=102

void __thiscall FUN_0075aec0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    if (param_2 < 8) {
      if (param_2 < 0) {
        param_2 = 0;
      }
    }
    else {
      param_2 = 7;
    }
    iVar1 = FUN_0075a0f0(param_2);
    iVar1 = (-(uint)(*(char *)(iVar1 + 0x1e) != '\0') & 100) + 100;
    if (iVar1 < param_3) {
      *(float *)(param_1 + 0x24 + param_2 * 4) = (float)iVar1;
      return;
    }
    if (param_3 < 0) {
      param_3 = 0;
    }
    *(float *)(param_1 + 0x24 + param_2 * 4) = (float)param_3;
  }
  return;
}


