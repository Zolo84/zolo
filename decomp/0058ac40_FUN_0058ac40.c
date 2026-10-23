// FUN_0058ac40 @ 58ac40 size=67

void __thiscall FUN_0058ac40(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x16) == *(int *)(param_1 + 0x16)) {
    iVar2 = 6;
    pfVar1 = (float *)(param_1 + 0x2e);
    do {
      iVar2 = iVar2 + -1;
      *pfVar1 = *(float *)((param_2 - param_1) + (int)pfVar1) + *pfVar1;
      pfVar1 = pfVar1 + 1;
    } while (iVar2 != 0);
    return;
  }
  iVar2 = 6;
  pfVar1 = (float *)(param_1 + 0x2e);
  do {
    iVar2 = iVar2 + -1;
    *pfVar1 = *pfVar1 - *(float *)((int)pfVar1 + (param_2 - param_1));
    pfVar1 = pfVar1 + 1;
  } while (iVar2 != 0);
  return;
}


