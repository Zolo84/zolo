// FUN_0070d2b0 @ 70d2b0 size=367

void __fastcall FUN_0070d2b0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007dbb20;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f864c;
  param_1[2] = &PTR_LAB_007f8634;
  local_4 = 7;
  piVar3 = *(int **)((int)param_1 + 0x1272);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    FUN_00796cd8(piVar3);
    piVar3 = piVar1;
  }
  *(undefined4 *)((int)param_1 + 0x1272) = 0;
  *(undefined4 *)((int)param_1 + 0x1276) = 0;
  *(undefined4 *)((int)param_1 + 0x127a) = 0;
  (**(code **)(param_1[0x8eb] + 0x10))();
  param_1[0x8eb] = &PTR_LAB_007e3ff0;
  iVar4 = param_1[0x8ec];
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  param_1[0x8ec] = 0;
  param_1[0x8ed] = 0;
  param_1[0x8ee] = 0;
  local_4._1_3_ = (undefined3)(local_4 >> 8);
  local_4._0_1_ = 5;
  FUN_0072bb40();
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_0072bb40();
  *(undefined ***)((int)param_1 + 0x126e) = &PTR_LAB_007f8660;
  iVar4 = *(int *)((int)param_1 + 0x1272);
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x1272) = 0;
  *(undefined4 *)((int)param_1 + 0x1276) = 0;
  *(undefined4 *)((int)param_1 + 0x127a) = 0;
  local_4._1_3_ = (undefined3)(local_4 >> 8);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0072bb40();
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007f8690;
  iVar4 = *(int *)((int)param_1 + 0x16);
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_00428200();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


