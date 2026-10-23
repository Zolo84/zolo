// FUN_00402ef0 @ 402ef0 size=257

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00402ef0(int param_1,double *param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (_DAT_007e3310 < param_2[1]) {
    iVar7 = *(int *)(param_2 + 2);
    iVar4 = 0;
  }
  else {
    iVar7 = *(int *)(param_2 + 5);
    iVar4 = *(int *)((int)param_2 + 0x2c);
  }
  if (*param_2 < _DAT_007e3318) {
    iVar6 = *(int *)((int)param_2 + 0x14);
  }
  else {
    iVar6 = *(int *)(param_2 + 4);
  }
  iVar1 = (iVar7 - iVar6) + -1;
  iVar6 = *(int *)((int)param_2 + 0x54);
  iVar8 = *(int *)(param_2 + 2);
  pbVar2 = (byte *)(iVar6 * iVar4 + *(int *)(param_2 + 10) + iVar7);
  iVar3 = -iVar4;
  iVar7 = iVar8 - iVar7;
  iVar4 = iVar4 * -2 + 3;
  iVar5 = (((iVar7 + iVar8 * -2 + 1) * iVar7 + (iVar3 + 2) * iVar3) - iVar8) + 1;
  iVar7 = ((iVar3 - iVar8) + iVar7) * 2 + 5;
  if (_DAT_007e3310 < param_2[1]) {
    *pbVar2 = *pbVar2 ^ *(byte *)(param_1 + 600);
  }
  while (0 < iVar1) {
    if (iVar5 < 0) {
      pbVar2 = pbVar2 + -iVar6;
      iVar8 = iVar7 + 2;
      iVar7 = iVar4;
    }
    else {
      pbVar2 = pbVar2 + (-1 - iVar6);
      iVar8 = iVar7 + 4;
      *pbVar2 = *(byte *)(param_1 + 600);
      iVar1 = iVar1 + -1;
    }
    iVar5 = iVar5 + iVar7;
    iVar4 = iVar4 + 2;
    iVar7 = iVar8;
  }
  return;
}


