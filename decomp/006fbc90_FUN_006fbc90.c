// FUN_006fbc90 @ 6fbc90 size=271

undefined4 * __thiscall FUN_006fbc90(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007db2ce;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00433f00();
  *param_1 = &PTR_FUN_007f83e4;
  param_1[2] = &PTR_LAB_007f83e0;
  *(int *)((int)param_1 + 0x2e) = param_2;
  local_4 = 0;
  if (*(int *)(DAT_00d685a6 + 0x277e + param_2 * 4) == 0) {
    uVar2 = FUN_004af740(param_2);
    *(undefined4 *)((int)param_1 + 0x32) = uVar2;
    pvVar3 = operator_new(0x7e);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (pvVar3 != (void *)0x0) {
      uVar2 = FUN_0044b1c0(param_2);
      piVar4 = (int *)FUN_00414c80(uVar2);
      goto LAB_006fbd52;
    }
  }
  else {
    uVar2 = FUN_0053a978();
    *(undefined4 *)((int)param_1 + 0x32) = uVar2;
    pvVar3 = operator_new(0x7e);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (pvVar3 != (void *)0x0) {
      uVar2 = FUN_0053a8fa();
      piVar4 = (int *)FUN_00414c80(uVar2);
      goto LAB_006fbd52;
    }
  }
  piVar4 = (int *)0x0;
LAB_006fbd52:
  *(int **)((int)param_1 + 0x36) = piVar4;
  local_4 = local_4 & 0xffffff00;
  (**(code **)(*piVar4 + 0x34))(0x19);
  iVar1 = *(int *)((int)param_1 + 0x36);
  *(undefined4 *)(iVar1 + 0x22) = 0;
  *(undefined4 *)(iVar1 + 0x26) = 5;
  *(undefined1 *)(iVar1 + 0x67) = 0;
  uVar2 = FUN_00413d60(s_flag_palette_bmp_0083c738);
  FUN_00415f20(uVar2);
  ExceptionList = param_1;
  return param_1;
}


