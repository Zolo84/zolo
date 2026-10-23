// FUN_00441fe0 @ 441fe0 size=609

void __fastcall FUN_00441fe0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  iVar1 = FUN_005841a0();
  *(int *)(param_1 + 0x40) = iVar1 + -1;
  iVar1 = FUN_005841b0();
  *(int *)(param_1 + 0x44) = iVar1 + -1;
  iVar4 = *(int *)(param_1 + 0x1c) / *(int *)(param_1 + 0x4a) + -1;
  iVar5 = *(int *)(param_1 + 0x18) / *(int *)(param_1 + 0x4a) + -1;
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x1c) + 0x18))(0,0);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x1c) + 0x10))(0);
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x20) + 0x18))
            (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x4a),0);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x20) + 0x10))(0);
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  iVar1 = 1;
  if (1 < iVar5) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x18) + 0x18))
                (*(int *)(param_1 + 0x4a) * iVar1,0);
      (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x18) + 0x10))(0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar5);
  }
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x4a);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x18))(0);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x10))(0);
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  iVar2 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x4a);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 8) + 0x18))
            (iVar2,*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x4a));
  (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 8) + 0x10))(0);
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  iVar3 = 1;
  if (1 < iVar5) {
    do {
      iVar4 = iVar1;
      (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x14) + 0x18))
                (*(int *)(param_1 + 0x4a) * iVar3,
                 *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x4a));
      (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x14) + 0x10))(0);
      iVar3 = iVar3 + 1;
      iVar1 = iVar4;
    } while (iVar3 < iVar5);
  }
  iVar3 = 1;
  if (1 < iVar4) {
    do {
      iVar6 = iVar3;
      FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
      (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x10) + 0x18))
                (0,*(int *)(param_1 + 0x4a) * iVar3);
      (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x10) + 0x10))(0);
      FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
      (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x14) + 0x18))
                (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x4a),
                 *(int *)(param_1 + 0x4a) * iVar2);
      (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x14) + 0x10))(0);
      FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
      iVar3 = 1;
      if (1 < iVar5) {
        do {
          iVar4 = iVar1;
          (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0xc) + 0x18))
                    (*(int *)(param_1 + 0x4a) * iVar3,*(int *)(param_1 + 0x4a) * iVar6);
          (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0xc) + 0x10))(0);
          iVar3 = iVar3 + 1;
          iVar1 = iVar4;
        } while (iVar3 < iVar5);
      }
      iVar3 = iVar6 + 1;
    } while (iVar3 < iVar4);
  }
  return;
}


