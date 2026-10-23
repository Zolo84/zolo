// FUN_00402e00 @ 402e00 size=235

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00402e00(int param_1,double *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*param_2 < _DAT_007e3320) {
    iVar8 = 0;
    iVar6 = -*(int *)(param_2 + 2);
  }
  else {
    iVar8 = *(int *)(param_2 + 4);
    iVar6 = *(int *)((int)param_2 + 0x24);
  }
  if (_DAT_007e3318 < param_2[1]) {
    iVar3 = *(int *)((int)param_2 + 0x14) - iVar8;
  }
  else {
    iVar3 = (*(int *)(param_2 + 5) - iVar8) + -1;
  }
  iVar1 = *(int *)((int)param_2 + 0x54);
  iVar2 = *(int *)(param_2 + 2);
  puVar4 = (undefined1 *)(iVar1 * iVar6 + *(int *)(param_2 + 10) + iVar8);
  iVar6 = iVar2 + iVar6;
  iVar5 = iVar8 * 2 + 3;
  iVar7 = ((iVar6 - iVar2) + iVar8) * 2 + 5;
  iVar6 = (((iVar6 + iVar2 * -2 + 1) * iVar6 + (iVar8 + 2) * iVar8) - iVar2) + 1;
  if (*param_2 < _DAT_007e3320) {
    *puVar4 = *(undefined1 *)(param_1 + 600);
  }
  if (0 < iVar3) {
    do {
      if (iVar6 < 0) {
        puVar4 = puVar4 + 1;
        iVar8 = iVar7 + 2;
        iVar7 = iVar5;
      }
      else {
        puVar4 = puVar4 + iVar1 + 1;
        iVar8 = iVar7 + 4;
      }
      iVar6 = iVar6 + iVar7;
      iVar5 = iVar5 + 2;
      iVar3 = iVar3 + -1;
      *puVar4 = *(undefined1 *)(param_1 + 600);
      iVar7 = iVar8;
    } while (iVar3 != 0);
  }
  return;
}


