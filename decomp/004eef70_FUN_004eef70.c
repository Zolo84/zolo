// FUN_004eef70 @ 4eef70 size=158

void __thiscall FUN_004eef70(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_2;
  if (0x74ff < param_2) {
    iVar5 = param_2 + -0x7500;
  }
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0x7500;
  }
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (0x2cff < param_3) {
    param_3 = 0x2cff;
  }
  iVar3 = *(int *)(param_1 + 8 + param_3 * 4);
  iVar4 = *(int *)(param_1 + 4);
  iVar6 = iVar4 + iVar3 * 4;
  sVar2 = *(short *)(iVar4 + iVar3 * 4);
  while (sVar2 <= iVar5) {
    psVar1 = (short *)(iVar6 + 4);
    iVar6 = iVar6 + 4;
    iVar3 = iVar3 + 1;
    sVar2 = *psVar1;
  }
  if (0 < param_5) {
    param_2 = param_5;
    do {
      *param_4 = (int)*(short *)(iVar4 + -2 + iVar3 * 4);
      iVar5 = iVar5 + 1;
      param_4 = param_4 + 1;
      if (0x74ff < iVar5) {
        iVar3 = *(int *)(param_1 + 8 + param_3 * 4);
        iVar5 = 0;
      }
      iVar4 = *(int *)(param_1 + 4);
      if (*(short *)(iVar4 + iVar3 * 4) <= iVar5) {
        iVar3 = iVar3 + 1;
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


