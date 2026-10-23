// FUN_005c4a90 @ 5c4a90 size=180

void __fastcall FUN_005c4a90(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(*(int *)(param_1 + 0x8c) + 0x36) + -0x10;
  iVar7 = *(int *)(*(int *)(param_1 + 0x8c) + 0x32) + -0x10;
  (**(code **)(**(int **)(param_1 + 0x80) + 0x14))(iVar7,iVar6);
  iVar4 = FUN_00415be0();
  iVar4 = iVar4 + iVar6;
  iVar6 = iVar4;
  piVar3 = *(int **)(*(int *)(param_1 + 0x8c) + 4);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    piVar2 = (int *)*piVar3;
    piVar3 = piVar1;
    if (0 < *(int *)((int)piVar2 + 0x12)) {
      iVar5 = (**(code **)(*piVar2 + 0x18))();
      iVar6 = iVar6 + iVar5;
    }
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x8c) + 0x2a) + iVar4;
  if (iVar5 < iVar6) {
    iVar6 = iVar5;
  }
  for (; iVar4 < iVar6; iVar4 = iVar4 + iVar5) {
    (**(code **)(**(int **)(param_1 + 0x84) + 0x14))(iVar7,iVar4);
    iVar5 = FUN_00415be0();
  }
  (**(code **)(**(int **)(param_1 + 0x88) + 0x14))(iVar7,iVar4);
  return;
}


