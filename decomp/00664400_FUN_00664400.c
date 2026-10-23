// FUN_00664400 @ 664400 size=586

int __fastcall FUN_00664400(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iStack_8;
  
  uVar8 = 1;
  if (*(int *)(*(int *)(param_1 + 10) + 0x117e4) < 1) {
    return *(int *)(param_1 + 10);
  }
  (**(code **)(*(int *)(param_1 + 0xde) + 0x14))();
  iVar4 = FUN_006a9d50();
  if (iVar4 == 1) {
LAB_00664444:
    uVar8 = 3;
  }
  else if (iVar4 == 2) {
    uVar8 = 2;
  }
  else if (iVar4 == 0x31) goto LAB_00664444;
  iVar4 = (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x198) + 4))();
  if (iVar4 == 0) {
    iVar4 = FUN_006a9d50();
    if (iVar4 == 1) {
      uVar5 = FUN_00664320(5);
      FUN_0049a100(uVar5);
      uVar5 = FUN_00664320(0x15);
      FUN_0049a100(uVar5);
      uVar5 = FUN_00664320(0x38a);
      FUN_0049a100(uVar5);
      uVar5 = 0x549;
    }
    else if (iVar4 == 2) {
      uVar5 = FUN_00664320(0x20);
      FUN_0049a100(uVar5);
      uVar5 = 0x16d;
    }
    else {
      iVar4 = iVar4 + -0x31;
      if (iVar4 != 0) goto LAB_0066455b;
      uVar5 = FUN_00664320(0x279);
      FUN_0049a100(uVar5);
      uVar5 = FUN_00664320(0x2fd);
      FUN_0049a100(uVar5);
      uVar5 = 0x297;
    }
    uVar5 = FUN_00664320(uVar5);
    iVar4 = FUN_0049a100(uVar5);
  }
  else {
    iVar4 = *(int *)(param_1 + 10);
    puVar3 = *(undefined4 **)(*(int *)(iVar4 + 0x120) + 0x19c);
    while (puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar3[2];
      iVar4 = FUN_004e9370(*puVar3);
      puVar3 = puVar1;
      if (*(int *)(iVar4 + 0x3d8) == *(int *)(param_1 + 10)) {
        iVar4 = FUN_0049a100(*(undefined4 *)(iVar4 + 0x12));
      }
    }
  }
LAB_0066455b:
  if ((uVar8 < 2) && (iVar4 = (**(code **)(*(int *)(param_1 + 0xde) + 4))(), iVar4 == 0)) {
    iVar6 = FUN_0044e1d0();
    iVar4 = 0;
    if (iVar6 != 0) {
      iVar6 = 0;
      iStack_8 = 0;
      iVar7 = FUN_0044e1d0();
      iVar4 = iVar7 + 0x28;
      piVar9 = *(int **)(iVar7 + 0x2c);
      if (*(int **)(iVar7 + 0x2c) != (int *)0x0) {
        do {
          piVar2 = (int *)piVar9[2];
          iVar4 = *piVar9;
          if ((*(int *)(iVar4 + 0x46a) != 0) && (iVar7 = FUN_004ece90(), iVar7 != 0)) {
            FUN_004ed140();
            __ftol();
            FUN_004ece90();
            FUN_00527b40();
            __ftol();
            FUN_004ed1a0();
            iVar7 = __ftol();
            if (iVar6 < iVar7) {
              iStack_8 = *(int *)(iVar4 + 0x12);
              iVar6 = iVar7;
            }
          }
          piVar9 = piVar2;
        } while (piVar2 != (int *)0x0);
        iVar4 = 0;
        if (iStack_8 != 0) {
          iVar4 = FUN_0049a100(iStack_8);
        }
      }
    }
  }
  return iVar4;
}


