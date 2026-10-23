// FUN_00402d00 @ 402d00 size=244

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00402d00(int param_1,double *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (_DAT_007e3320 < param_2[1]) {
    iVar5 = 0;
    iVar7 = -*(int *)(param_2 + 2);
  }
  else {
    iVar5 = *(int *)(param_2 + 5);
    iVar7 = *(int *)((int)param_2 + 0x2c);
  }
  if (*param_2 < _DAT_007e3328) {
    iVar3 = *(int *)((int)param_2 + 0x14) + -1 + iVar5;
  }
  else {
    iVar3 = (iVar5 - *(int *)(param_2 + 4)) + -1;
  }
  iVar1 = *(int *)((int)param_2 + 0x54);
  iVar2 = *(int *)(param_2 + 2);
  puVar4 = (undefined1 *)(iVar1 * iVar7 + *(int *)(param_2 + 10) + iVar5);
  iVar7 = iVar2 + iVar7;
  iVar6 = -iVar5;
  iVar5 = iVar5 * -2 + 3;
  iVar8 = ((iVar7 - iVar2) + iVar6) * 2 + 5;
  iVar7 = (((iVar7 + iVar2 * -2 + 1) * iVar7 + (iVar6 + 2) * iVar6) - iVar2) + 1;
  if (_DAT_007e3320 < param_2[1]) {
    *puVar4 = *(undefined1 *)(param_1 + 600);
  }
  if (0 < iVar3) {
    do {
      if (iVar7 < 0) {
        iVar6 = iVar8 + 2;
        iVar8 = iVar5;
        iVar2 = -1;
      }
      else {
        iVar6 = iVar8 + 4;
        iVar2 = iVar1 + -1;
      }
      puVar4 = puVar4 + iVar2;
      iVar7 = iVar7 + iVar8;
      iVar5 = iVar5 + 2;
      iVar3 = iVar3 + -1;
      *puVar4 = *(undefined1 *)(param_1 + 600);
      iVar8 = iVar6;
    } while (iVar3 != 0);
  }
  return;
}


