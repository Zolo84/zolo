// FUN_005280a0 @ 5280a0 size=194

int FUN_005280a0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_8;
  
  iVar5 = param_2;
  iVar9 = 0;
  iVar1 = *(int *)(param_2 + 0x12);
  local_8 = 0;
  param_2 = *(int *)(param_2 + 0x290);
  if (param_2 < 1) {
    return 0;
  }
  iVar8 = 0;
  do {
    iVar7 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar5 + 0x298) + iVar8));
    if ((*(int *)(iVar7 + 0x254) != 8) && (*(int *)(iVar7 + 0x254) != 9)) {
      piVar4 = *(int **)(*(int *)(iVar7 + 0x1c2) + 4);
      while (piVar4 != (int *)0x0) {
        piVar2 = (int *)piVar4[2];
        piVar3 = (int *)*piVar4;
        piVar4 = piVar2;
        iVar9 = local_8;
        if (((piVar3[0x92] == param_1) && (cVar6 = (**(code **)(*piVar3 + 0x28))(), cVar6 != '\0'))
           && (iVar7 = FUN_00523f70(), iVar7 == iVar1)) {
          (**(code **)(*piVar3 + 0x10))();
          iVar9 = FUN_00508160();
          iVar9 = local_8 + iVar9;
          local_8 = iVar9;
        }
      }
    }
    iVar8 = iVar8 + 0xc;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return iVar9;
}


