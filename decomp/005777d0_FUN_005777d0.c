// FUN_005777d0 @ 5777d0 size=537

void __fastcall FUN_005777d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007c8969;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007eac5c;
  piVar7 = (int *)0x0;
  local_4 = 3;
  piVar8 = (int *)param_1[0xe];
  while (piVar8 != (int *)0x0) {
    piVar7 = (int *)piVar8[2];
    if ((undefined4 *)*piVar8 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar8)(1);
    }
    FUN_00796cd8(piVar8);
    piVar8 = piVar7;
  }
  param_1[0xe] = piVar7;
  param_1[0xf] = piVar7;
  param_1[0x10] = piVar7;
  (**(code **)(param_1[0xd] + 0x14))();
  FUN_00796cd8(DAT_00bd00f0);
  DAT_00bd00f0 = piVar7;
  CloseHandle(DAT_00bd00f4);
  param_1[0xd] = &PTR_LAB_007eac90;
  piVar8 = (int *)param_1[0xe];
  while (piVar8 != piVar7) {
    piVar1 = (int *)piVar8[2];
    FUN_00796cd8(piVar8);
    piVar8 = piVar1;
  }
  param_1[0xe] = piVar7;
  param_1[0xf] = piVar7;
  param_1[0x10] = piVar7;
  *(undefined ***)((int)param_1 + 0x22) = &PTR_LAB_007eacc0;
  piVar8 = *(int **)((int)param_1 + 0x26);
  while (piVar8 != piVar7) {
    piVar1 = (int *)piVar8[2];
    FUN_00796cd8(piVar8);
    piVar8 = piVar1;
  }
  *(int **)((int)param_1 + 0x26) = piVar7;
  *(int **)((int)param_1 + 0x2a) = piVar7;
  *(int **)((int)param_1 + 0x2e) = piVar7;
  param_1[4] = &PTR_LAB_007ead48;
  piVar8 = (int *)param_1[5];
  while (piVar8 != piVar7) {
    piVar1 = (int *)piVar8[2];
    FUN_00796cd8(piVar8);
    piVar8 = piVar1;
  }
  param_1[5] = piVar7;
  param_1[6] = piVar7;
  param_1[7] = piVar7;
  piVar8 = (int *)param_1[1];
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_007ead2c;
  if (piVar8 != piVar7) {
    uVar6 = param_1[2];
    if (uVar6 == 1) {
      iVar4 = *piVar8;
      FUN_00796cd8(piVar8);
      param_1[1] = 0;
    }
    else {
      uVar2 = param_1[3];
      uVar3 = uVar2 >> 1;
      uVar5 = uVar2 + uVar3;
      if (uVar6 < uVar5) {
        piVar8 = piVar8 + 1;
        uVar5 = uVar2;
      }
      else {
        piVar8 = piVar8 + 2;
      }
      if (uVar3 == 1) {
        iVar4 = *(int *)*piVar8;
        FUN_00796cd8((int *)*piVar8);
        *piVar8 = (int)piVar7;
      }
      else {
        iVar4 = FUN_00579600(uVar6,uVar5,uVar3);
      }
    }
    uVar6 = param_1[2] - 1;
    param_1[2] = uVar6;
    if (uVar6 < (uint)param_1[3]) {
      param_1[3] = (uint)param_1[3] >> 1;
    }
    while ((iVar4 != 0 && (piVar7 = (int *)param_1[1], piVar7 != (int *)0x0))) {
      if (uVar6 == 1) {
        iVar4 = *piVar7;
        FUN_00796cd8(piVar7);
        param_1[1] = 0;
      }
      else {
        uVar2 = param_1[3];
        uVar3 = uVar2 >> 1;
        uVar5 = uVar2 + uVar3;
        if (uVar6 < uVar5) {
          piVar7 = piVar7 + 1;
          uVar5 = uVar2;
        }
        else {
          piVar7 = piVar7 + 2;
        }
        if (uVar3 == 1) {
          iVar4 = *(int *)*piVar7;
          FUN_00796cd8((int *)*piVar7);
          *piVar7 = 0;
        }
        else {
          iVar4 = FUN_00579600(uVar6,uVar5,uVar3);
        }
      }
      uVar6 = param_1[2] - 1;
      param_1[2] = uVar6;
      if (uVar6 < (uint)param_1[3]) {
        param_1[3] = (uint)param_1[3] >> 1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}


