// FUN_0058d800 @ 58d800 size=463

undefined4 * __fastcall FUN_0058d800(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int unaff_EBX;
  undefined4 uStack_30;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c9a8c;
  pvStack_c = ExceptionList;
  uStack_30 = 0x58d82c;
  ExceptionList = &pvStack_c;
  FUN_0058ed20();
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = &PTR_LAB_007eb078;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *param_1 = &PTR_FUN_007eb024;
  param_1[2] = &PTR_LAB_007eb020;
  uStack_30 = 0x58d86f;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uStack_30 = 0x58d88b;
    uVar2 = FUN_00414c80();
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)param_1 + 0x12a) = uVar2;
  uStack_30 = 0x58d8a0;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uStack_30 = 0x58d8bc;
    uVar2 = FUN_00414c80();
  }
  *(undefined4 *)((int)param_1 + 0x12e) = uVar2;
  pvVar1 = (void *)0x6e;
  uStack_30 = 100;
  local_4 = CONCAT31(local_4._1_3_,1);
  (**(code **)(**(int **)((int)param_1 + 0x12a) + 0x18))();
  iVar5 = **(int **)((int)param_1 + 0x12e);
  iVar3 = (**(code **)(**(int **)((int)param_1 + 0x12a) + 0x28))(&stack0xffffffe4);
  iVar3 = *(int *)(iVar3 + 4);
  iVar4 = FUN_00415be0();
  (**(code **)(iVar5 + 0x18))(100,iVar3 + -4 + iVar4);
  iVar4 = FUN_00415be0();
  iVar5 = (**(code **)(**(int **)((int)param_1 + 0x12a) + 0x28))(&stack0xffffffd8);
  iVar5 = *(int *)(iVar5 + 4);
  iVar6 = FUN_00415bd0();
  (**(code **)(**(int **)((int)param_1 + 0x12e) + 0x28))(&stack0xffffffd4);
  piVar7 = (int *)(**(code **)(**(int **)((int)param_1 + 0x12e) + 0x28))(&uStack_30);
  iVar3 = piVar7[1];
  *(int *)((int)param_1 + 0x132) = *piVar7 + 2;
  *(int *)((int)param_1 + 0x136) = iVar3;
  iVar3 = 0;
  do {
    iVar5 = iVar4 / 6 + iVar5;
    unaff_EBX = iVar6 / 6 + unaff_EBX;
    *(int *)((int)&DAT_00857fd4 + iVar3) = iVar5;
    *(int *)((int)&DAT_00857fe8 + iVar3) = unaff_EBX;
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x14);
  ExceptionList = pvVar1;
  return param_1;
}


