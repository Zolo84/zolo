// FUN_004050a0 @ 4050a0 size=207

void __thiscall FUN_004050a0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  int iStack_8;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  iVar8 = param_1[6] / 2;
  puVar4 = (undefined2 *)(iVar2 + iVar8 * param_3 * 2);
  iStack_8 = param_4 - param_3;
  piVar7 = (int *)(param_2 + param_3 * 8);
  piVar5 = (int *)(param_2 + 0x6400 + param_3 * 8);
  do {
    iVar2 = *piVar7;
    iVar1 = *piVar5;
    if (iVar2 < iVar1) {
      iVar9 = piVar7[1];
      puVar4 = puVar4 + iVar2;
      iVar2 = iVar1 - iVar2;
      iVar3 = (piVar5[1] - iVar9) / iVar2;
      puVar10 = puVar4;
      if (-1 < iVar2 + -1) {
        do {
          iVar6 = iVar9 >> 0x10;
          puVar10 = puVar4 + 1;
          iVar9 = iVar9 + iVar3;
          iVar2 = iVar2 + -1;
          *puVar4 = *(undefined2 *)(param_5 + iVar6 * 2);
          puVar4 = puVar10;
        } while (iVar2 != 0);
      }
      puVar4 = puVar10 + (iVar8 - iVar1);
    }
    else {
      puVar4 = puVar4 + iVar8;
    }
    piVar7 = piVar7 + 2;
    piVar5 = piVar5 + 2;
    iStack_8 = iStack_8 + -1;
  } while (-1 < iStack_8);
  (**(code **)(*param_1 + 0xc))();
  return;
}


