// FUN_00402b10 @ 402b10 size=237

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00402b10(int param_1,double *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  
  if (_DAT_007e3330 < param_2[1]) {
    iVar6 = -*(int *)(param_2 + 2);
    iVar7 = 0;
  }
  else {
    iVar6 = *(int *)(param_2 + 5);
    iVar7 = *(int *)((int)param_2 + 0x2c);
  }
  if (*param_2 < _DAT_007e3338) {
    iVar4 = (-1 - *(int *)((int)param_2 + 0x14)) - iVar6;
  }
  else {
    iVar4 = (*(int *)(param_2 + 4) - iVar6) + -1;
  }
  iVar2 = *(int *)((int)param_2 + 0x54);
  iVar3 = *(int *)(param_2 + 2);
  pbVar8 = (byte *)(iVar2 * iVar7 + *(int *)(param_2 + 10) + iVar6);
  iVar6 = iVar6 + iVar3;
  iVar5 = iVar7 * 2 + 3;
  iVar1 = ((iVar6 - iVar3) + iVar7) * 2 + 5;
  iVar6 = (((iVar6 + iVar3 * -2 + 1) * iVar6 + (iVar7 + 2) * iVar7) - iVar3) + 1;
  if (_DAT_007e3330 < param_2[1]) {
    *pbVar8 = *pbVar8 ^ *(byte *)(param_1 + 600);
  }
  while (0 < iVar4) {
    if (iVar6 < 0) {
      pbVar8 = pbVar8 + iVar2;
      iVar7 = iVar1 + 2;
      iVar1 = iVar5;
    }
    else {
      pbVar8 = pbVar8 + iVar2 + 1;
      iVar7 = iVar1 + 4;
      iVar4 = iVar4 + -1;
      *pbVar8 = *(byte *)(param_1 + 600);
    }
    iVar6 = iVar6 + iVar1;
    iVar5 = iVar5 + 2;
    iVar1 = iVar7;
  }
  return;
}


