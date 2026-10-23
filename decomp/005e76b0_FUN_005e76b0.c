// FUN_005e76b0 @ 5e76b0 size=541

void __thiscall FUN_005e76b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 unaff_retaddr;
  undefined4 uVar11;
  
  iVar6 = FUN_00653050(param_2);
  if (iVar6 == 0) {
    iVar6 = param_1 + 200;
    iVar7 = FUN_00428ee0(iVar6);
    if ((iVar7 == 0) || (iVar7 == 8)) {
      iVar6 = (**(code **)(**(int **)(*(int *)(param_1 + 0x90) + 0x21e5a) + 4))();
      if (iVar6 != 0) {
        FUN_00652f50();
        FUN_0061eab0(param_2);
        return;
      }
      FUN_0064c090(0xb);
      FUN_0061eab0(param_2);
      return;
    }
    iVar7 = (**(code **)(**(int **)(param_1 + 0xc4) + 4))(param_2);
    if ((iVar7 == 0) &&
       (iVar7 = (**(code **)(*(int *)(*(int *)(param_1 + 0x178) + 0x12) + 4))(param_2), iVar7 == 0))
    {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x17c) + 0x12) + 4))(param_2);
    }
    iVar7 = 0;
    iVar8 = FUN_00428ee0(iVar6);
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = iVar8 + -8;
    }
    if ((*(int *)(iVar8 + 0x74) == 7) || (*(int *)(iVar8 + 0x74) == 8)) {
      iVar6 = FUN_00428ee0(iVar6);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = iVar6 + -8;
      }
      iVar6 = (**(code **)(**(int **)(iVar6 + 0x80) + 0xc))();
      piVar4 = *(int **)(iVar6 + 4);
      while (piVar4 != (int *)0x0) {
        piVar1 = (int *)piVar4[2];
        puVar3 = *(undefined4 **)(*piVar4 + 0x26);
        while (piVar4 = piVar1, puVar3 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)puVar3[2];
          cVar5 = (**(code **)(*(int *)*puVar3 + 0x14))();
          puVar3 = puVar2;
          if (cVar5 != '\0') {
            iVar7 = iVar7 + 1;
          }
        }
      }
    }
    else {
      iVar6 = FUN_00428ee0(iVar6);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = iVar6 + -8;
      }
      (**(code **)(**(int **)(iVar6 + 0x80) + 0xc))();
      iVar7 = FUN_00527b40();
    }
    iVar6 = (**(code **)(**(int **)(param_1 + 0x178) + 4))();
    iVar8 = FUN_00428ee0(param_1 + 200);
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = iVar8 + -8;
    }
    (**(code **)(**(int **)(iVar8 + 0x84) + 0xc))();
    iVar8 = FUN_00527b40();
    iVar9 = (**(code **)(**(int **)(param_1 + 0x17c) + 4))();
    if ((iVar9 != iVar8) || (iVar6 != iVar7)) {
      iVar6 = FUN_00428ee0(param_1 + 200);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = iVar6 + -8;
      }
      uVar11 = 1;
      uVar10 = (**(code **)(**(int **)(iVar6 + 0x80) + 0xc))(1);
      FUN_005e8810(*(undefined4 *)(param_1 + 0x178),uVar10,uVar11);
      uVar11 = 0;
      uVar10 = (**(code **)(**(int **)(iVar6 + 0x84) + 0xc))(0);
      FUN_005e8810(*(undefined4 *)(param_1 + 0x17c),uVar10,uVar11);
    }
    FUN_0061eab0(unaff_retaddr);
  }
  return;
}


