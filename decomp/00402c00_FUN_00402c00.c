// FUN_00402c00 @ 402c00 size=254

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00402c00(int param_1,double *param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*param_2 < _DAT_007e3330) {
    iVar4 = -*(int *)(param_2 + 2);
    iVar5 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4);
    iVar5 = *(int *)((int)param_2 + 0x24);
  }
  if (_DAT_007e3328 < param_2[1]) {
    iVar2 = -(*(int *)((int)param_2 + 0x14) + iVar4);
  }
  else {
    iVar2 = (*(int *)(param_2 + 5) - iVar4) + -1;
  }
  iVar1 = *(int *)((int)param_2 + 0x54);
  iVar8 = *(int *)(param_2 + 2);
  pbVar3 = (byte *)(iVar1 * iVar5 + *(int *)(param_2 + 10) + iVar4);
  iVar4 = iVar8 + iVar4;
  iVar6 = -iVar5;
  iVar5 = iVar5 * -2 + 3;
  iVar7 = (((iVar4 + iVar8 * -2 + 1) * iVar4 + (iVar6 + 2) * iVar6) - iVar8) + 1;
  iVar4 = ((iVar6 - iVar8) + iVar4) * 2 + 5;
  if (*param_2 < _DAT_007e3330) {
    *pbVar3 = *pbVar3 ^ *(byte *)(param_1 + 600);
  }
  while (0 < iVar2) {
    if (iVar7 < 0) {
      pbVar3 = pbVar3 + -iVar1;
      iVar8 = iVar4 + 2;
      iVar4 = iVar5;
    }
    else {
      pbVar3 = pbVar3 + (1 - iVar1);
      iVar8 = iVar4 + 4;
      *pbVar3 = *(byte *)(param_1 + 600);
      iVar2 = iVar2 + -1;
    }
    iVar7 = iVar7 + iVar4;
    iVar5 = iVar5 + 2;
    iVar4 = iVar8;
  }
  return;
}


