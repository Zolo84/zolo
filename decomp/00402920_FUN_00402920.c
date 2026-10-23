// FUN_00402920 @ 402920 size=237

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00402920(int param_1,double *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (_DAT_007e3340 < param_2[1]) {
    iVar5 = *(int *)(param_2 + 2);
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(param_2 + 5);
    iVar5 = *(int *)((int)param_2 + 0x2c);
  }
  if (*param_2 < _DAT_007e32f0) {
    iVar6 = *(int *)((int)param_2 + 0x14);
  }
  else {
    iVar6 = *(int *)(param_2 + 4);
  }
  iVar3 = (iVar6 - iVar7) + -1;
  iVar1 = *(int *)((int)param_2 + 0x54);
  iVar2 = *(int *)(param_2 + 2);
  puVar4 = (undefined1 *)(iVar1 * iVar5 + *(int *)(param_2 + 10) + iVar7);
  iVar5 = iVar2 - iVar5;
  iVar6 = iVar7 * 2 + 3;
  iVar8 = ((iVar5 - iVar2) + iVar7) * 2 + 5;
  iVar7 = (((iVar5 + iVar2 * -2 + 1) * iVar5 + (iVar7 + 2) * iVar7) - iVar2) + 1;
  if (_DAT_007e3340 < param_2[1]) {
    *puVar4 = *(undefined1 *)(param_1 + 600);
  }
  if (0 < iVar3) {
    do {
      if (iVar7 < 0) {
        puVar4 = puVar4 + 1;
        iVar5 = iVar8 + 2;
        iVar8 = iVar6;
      }
      else {
        puVar4 = puVar4 + (1 - iVar1);
        iVar5 = iVar8 + 4;
      }
      iVar7 = iVar7 + iVar8;
      iVar6 = iVar6 + 2;
      iVar3 = iVar3 + -1;
      *puVar4 = *(undefined1 *)(param_1 + 600);
      iVar8 = iVar5;
    } while (iVar3 != 0);
  }
  return;
}


