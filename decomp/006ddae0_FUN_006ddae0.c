// FUN_006ddae0 @ 6ddae0 size=636

void __fastcall FUN_006ddae0(int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBP;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int local_30;
  int iStack_28;
  int iStack_24;
  undefined **local_20;
  undefined4 local_1c;
  void *local_18;
  undefined4 local_14;
  undefined1 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007d9a73;
  pvStack_c = ExceptionList;
  iVar7 = 0x74;
  local_1c = 0;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_20 = &PTR_FUN_007e5258;
  local_4 = 0;
  piVar6 = (int *)(param_1 + 0x7c);
  local_30 = 6;
  ExceptionList = &pvStack_c;
  do {
    iVar2 = *(int *)(*(int *)(*piVar6 + 0x56) + 0x10);
    iVar1 = (**(code **)(*(int *)*piVar6 + 4))();
    piVar6 = piVar6 + 1;
    iVar7 = iVar7 + 5 + iVar1 * iVar2;
    local_30 = local_30 + -1;
  } while (local_30 != 0);
  iVar2 = (**(code **)(**(int **)(DAT_00d615c6 + 0x22) + 4))();
  if (iVar2 != 0) {
    iVar2 = FUN_00415be0();
    iVar7 = iVar7 + iVar2;
  }
  iVar2 = (**(code **)(**(int **)(DAT_00d615ca + 0x22) + 4))();
  if (iVar2 != 0) {
    iVar2 = FUN_00415be0();
    iVar7 = iVar7 + iVar2;
  }
  iVar2 = (**(code **)(**(int **)(DAT_00d615c2 + 0x22) + 4))();
  if (iVar2 != 0) {
    iVar2 = FUN_00415be0();
    iVar7 = iVar7 + iVar2;
  }
  iStack_28 = (*(int *)(DAT_00bd1bac + 4) + -0x100) / 2 + -0xa0;
  iStack_24 = *(int *)(DAT_00bd1bac + 8) / 2 - iVar7 / 2;
  FUN_00441c10(&iStack_28,0x140,iVar7,0x10,0xff,0);
  pvVar3 = operator_new(0x72);
  local_4._0_1_ = 1;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00434930(0x140,0,0,0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined4 *)(param_1 + 0x9c) = uVar4;
  FUN_00434f70(*(undefined4 *)(param_1 + 0x10));
  uVar4 = 0;
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x34))(0,iVar7 + -0x2e);
  *(int *)(param_1 + 0xa0) = iVar7 + -0x2e;
  iVar2 = 8;
  do {
    FUN_00434f70(*(undefined4 *)(param_1 + 0x10));
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_006ddd60(*(undefined4 *)(param_1 + 0x6c));
  iVar2 = 0x11;
  iVar1 = FUN_00415be0();
  iVar5 = 0;
  *(int *)(param_1 + 0xa0) = (iVar7 - iVar1 * unaff_EBP) + -0x36;
  piVar6 = (int *)(param_1 + 0x74);
  do {
    if (iVar5 < 5) {
      (**(code **)(*(int *)*piVar6 + 0x34))(0x50,iVar2);
    }
    else {
      (**(code **)(*(int *)*piVar6 + 0x34))(0x10,iVar2);
    }
    (**(code **)(*(int *)(*piVar6 + 0x12) + 0x10))(0);
    uVar8 = *(undefined4 *)(*(int *)(*piVar6 + 0x56) + 0x10);
    iVar7 = (**(code **)(*(int *)*piVar6 + 4))();
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 1;
    iVar2 = iVar7 * unaff_EBP + 5 + iVar2;
  } while (iVar5 < 8);
  FUN_004353e0(uVar4,uVar8);
  (**(code **)(*(int *)(*(int *)(param_1 + 0x9c) + 0x12) + 0x10))(0);
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  FUN_006d4270(param_1);
  ExceptionList = local_18;
  return;
}


