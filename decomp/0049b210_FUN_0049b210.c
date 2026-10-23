// FUN_0049b210 @ 49b210 size=72

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0049b210(int param_1,float param_2,char param_3)

{
  int iVar1;
  
  iVar1 = FUN_0044ab40();
  if (param_3 != '\0') {
    FUN_0044ad90((float)iVar1 * param_2);
  }
  return (float10)*(float *)(param_1 + 0x37ee) * (float10)*(float *)(param_1 + 0x11a8c) *
         (float10)_DAT_00d7ca64 * (float10)((float)iVar1 * param_2);
}


