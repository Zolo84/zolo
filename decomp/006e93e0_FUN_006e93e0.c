// FUN_006e93e0 @ 6e93e0 size=649

undefined4 * __fastcall FUN_006e93e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007da1ef;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_LAB_007f7f58;
  local_4 = 0;
  FUN_00425a80(&DAT_0082eeb0);
  local_4._0_1_ = 1;
  FUN_00583720();
  *(undefined4 *)((int)param_1 + 0x12) = &PTR_FUN_007e3858;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007e386c;
  local_4._0_1_ = 2;
  *param_1 = &PTR_FUN_007f7f28;
  *(undefined4 *)((int)param_1 + 0x12) = &PTR_LAB_007f7f14;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007f7f10;
  puVar1 = operator_new(0x1e);
  local_4._0_1_ = 3;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_005c0c70();
    local_4._0_1_ = 4;
    FUN_00418f40();
    *puVar1 = &PTR_FUN_007e36fc;
    *(undefined ***)((int)puVar1 + 0x12) = &PTR_LAB_007e36e8;
    *(undefined ***)((int)puVar1 + 0x1a) = &PTR_LAB_007e36e4;
  }
  *(undefined4 **)((int)param_1 + 0x2a) = puVar1;
  local_4._0_1_ = 2;
  iVar2 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  iVar6 = *(int *)(iVar2 + 0x10);
  iVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  *(int *)((int)param_1 + 0x2e) = iVar6 + *(int *)(iVar3 + 0x10) + iVar6 * 4;
  pvVar4 = operator_new(0x72);
  local_4._0_1_ = 5;
  if (pvVar4 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    iVar6 = *(int *)(DAT_00bd1bac + 4);
    if (*(int *)(DAT_00bd1bac + 8) <= *(int *)((int)param_1 + 0x2e) + 0x300) {
      iVar6 = iVar6 + -0x100;
    }
    piVar5 = (int *)FUN_00434930(iVar6 + -0x28,*(int *)(iVar2 + 0x10) * 5,0,0);
  }
  *(int **)((int)param_1 + 0x26) = piVar5;
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(*piVar5 + 0x34))
            (((*(int *)(DAT_00bd1bac + 8) <= *(int *)((int)param_1 + 0x2e) + 0x300) - 1 & 0xffffff00
             ) + 0x108,
             *(int *)(iVar2 + 0x10) / 2 + *(int *)(iVar2 + 0x10) * -7 + *(int *)(DAT_00bd1bac + 8));
  pvVar4 = operator_new(0xaa);
  pvStack_c._0_1_ = 6;
  if (pvVar4 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00433570(s_GFX_interface_button_historylog__0086f22c,0,0xffffffff);
  }
  *(int **)((int)param_1 + 0x1e) = piVar5;
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,2);
  (**(code **)(*piVar5 + 0x18))
            (0x100,(*(int *)(DAT_00bd1bac + 8) - *(int *)((int)param_1 + 0x2e)) + -0xf);
  *(undefined1 *)(*(int *)((int)param_1 + 0x1e) + 0x68) = 1;
  *(undefined4 *)(*(int *)((int)param_1 + 0x1e) + 0x88) = 0x3c;
  pvVar4 = operator_new(0xaa);
  if (pvVar4 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00433570(s_GFX_interface_button_historylog__0086f204,0,0xffffffff);
  }
  *(int **)((int)param_1 + 0x22) = piVar5;
  (**(code **)(*piVar5 + 0x18))
            (0x100,(*(int *)(DAT_00bd1bac + 8) - *(int *)((int)param_1 + 0x2e)) + -0xf);
  *(undefined1 *)(*(int *)((int)param_1 + 0x22) + 0x68) = 1;
  *(undefined4 *)(*(int *)((int)param_1 + 0x22) + 0x88) = 0x3c;
  *(undefined1 *)((int)param_1 + 0x32) = 1;
  ExceptionList = pvVar4;
  return param_1;
}


