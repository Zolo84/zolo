// FUN_00467370 @ 467370 size=39

float10 __thiscall FUN_00467370(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0x1e;
  if (param_2 == 1) {
    iVar1 = 0x19;
  }
  return (float10)*(float *)(&DAT_00ad3670 + param_2 * 4) *
         (float10)*(float *)(param_1 + 0x11a9c + iVar1 * 0x18);
}


