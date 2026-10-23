// FUN_00402830 @ 402830 size=228

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00402830(int param_1,double *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  
  if (*param_2 < _DAT_007e3348) {
    iVar5 = *(int *)(param_2 + 2);
    iVar6 = 0;
  }
  else {
    iVar5 = *(int *)(param_2 + 4);
    iVar6 = *(int *)((int)param_2 + 0x24);
  }
  if (_DAT_007e32f0 < param_2[1]) {
    iVar3 = iVar5 - *(int *)((int)param_2 + 0x14);
  }
  else {
    iVar3 = (iVar5 - *(int *)(param_2 + 5)) + -1;
  }
  iVar2 = *(int *)((int)param_2 + 0x54);
  iVar7 = *(int *)(param_2 + 2);
  iVar4 = iVar7 - iVar5;
  pbVar8 = (byte *)(iVar2 * iVar6 + *(int *)(param_2 + 10) + iVar5);
  iVar5 = iVar6 * 2 + 3;
  iVar1 = ((iVar4 - iVar7) + iVar6) * 2 + 5;
  iVar6 = (((iVar4 + iVar7 * -2 + 1) * iVar4 + (iVar6 + 2) * iVar6) - iVar7) + 1;
  if (*param_2 < _DAT_007e3348) {
    *pbVar8 = *pbVar8 ^ *(byte *)(param_1 + 600);
  }
  while (0 < iVar3) {
    if (iVar6 < 0) {
      pbVar8 = pbVar8 + iVar2;
      iVar7 = iVar1 + 2;
      iVar1 = iVar5;
    }
    else {
      pbVar8 = pbVar8 + iVar2 + -1;
      iVar7 = iVar1 + 4;
      iVar3 = iVar3 + -1;
      *pbVar8 = *(byte *)(param_1 + 600);
    }
    iVar6 = iVar6 + iVar1;
    iVar5 = iVar5 + 2;
    iVar1 = iVar7;
  }
  return;
}


