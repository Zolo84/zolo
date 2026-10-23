// FUN_00590070 @ 590070 size=341

void __thiscall
FUN_00590070(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  if ((param_4 == 0) || (iVar2 = FUN_004129c4(param_2), param_4 < iVar2 + 0xc)) {
    param_4 = FUN_004129c4(param_2);
    param_4 = param_4 + 0xc;
  }
  iVar2 = FUN_0043ffb0();
  iVar10 = param_1[iVar2 + 0x5a] + param_4;
  iVar2 = FUN_0058fb20(param_2,param_3,param_4);
  *(undefined4 *)(iVar2 + 0xb2) = param_5;
  FUN_00592540(iVar2);
  iVar2 = FUN_0043ffb0();
  param_1[iVar2 + 0x5a] = iVar10;
  *(int *)((int)param_1 + 0x15e) = iVar10;
  if (*(int **)(param_1[0x47] + 4) != (int *)0x0) {
    iVar2 = 0;
    piVar9 = *(int **)(param_1[0x47] + 4);
    do {
      piVar1 = (int *)piVar9[2];
      iVar6 = *piVar9;
      iVar7 = *(int *)(iVar2 + 0x16c + (int)param_1);
      iVar8 = *(int *)(iVar2 + 0x168 + (int)param_1);
      iVar3 = (**(code **)(*param_1 + 0x24))();
      iVar4 = FUN_00415bd0();
      iVar5 = (**(code **)(*param_1 + 0x20))();
      *(int *)(iVar6 + 0xaa) = ((iVar7 + iVar8) / 2 - iVar4 / 2) + iVar5;
      *(int *)(iVar6 + 0xae) = iVar3 + 2;
      iVar2 = iVar2 + 4;
      piVar9 = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  iVar2 = (**(code **)(*param_1 + 0x24))();
  iVar6 = (**(code **)(*param_1 + 0x20))();
  iVar7 = (**(code **)(*param_1 + 0x24))();
  iVar8 = (**(code **)(*param_1 + 0x20))();
  param_1[0x4d] = iVar8 + 1 + param_1[0x5a];
  param_1[0x4e] = iVar7 + 1;
  param_1[0x4f] = iVar6 + iVar10;
  param_1[0x50] = iVar2 + 0x17;
  return;
}


