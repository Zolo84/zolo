// FUN_0068a1e0 @ 68a1e0 size=201

int __fastcall FUN_0068a1e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  piVar2 = *(int **)(param_1 + 4);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    piVar3 = *(int **)(*(int *)(DAT_00ab27b4 + 0x1c2 + *(int *)(*piVar2 + 4) * 0x4b2) + 4);
    while (piVar2 = piVar1, piVar3 != (int *)0x0) {
      piVar2 = (int *)piVar3[2];
      iVar4 = *piVar3;
      if (param_1 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = param_1 + 0x12;
      }
      piVar3 = piVar2;
      if (*(int *)(iVar4 + 500) == iVar5) {
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x22) + 4))();
        iVar6 = iVar6 + iVar4;
      }
    }
  }
  piVar2 = *(int **)(param_1 + 0x12e);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    piVar3 = *(int **)(*(int *)(DAT_00ab27b4 + 0x1c2 + *piVar2 * 0x4b2) + 4);
    while (piVar2 = piVar1, piVar3 != (int *)0x0) {
      piVar2 = (int *)piVar3[2];
      iVar4 = *piVar3;
      if (param_1 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = param_1 + 0x12;
      }
      piVar3 = piVar2;
      if (*(int *)(iVar4 + 500) == iVar5) {
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x22) + 4))();
        iVar6 = iVar6 + iVar4;
      }
    }
  }
  return iVar6;
}


