// FUN_00583ac0 @ 583ac0 size=624

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00583ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c8f8c;
  local_c = ExceptionList;
  if (DAT_00bd1bb8 == '\0') {
    ExceptionList = &local_c;
    FUN_00429a00(s_DD_Is_not_initialized_properly__00857794);
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = &local_c;
  FUN_00429a00(s_Setting_Mode__00857784);
  if (param_4 == 0) {
    FUN_0057a760(param_1,param_2,param_3,1);
    pvVar2 = operator_new(0x25e);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      DAT_00bd1bac = 0;
    }
    else {
      DAT_00bd1bac = FUN_004010a0(param_1,param_2,param_3,1);
    }
    local_4 = 0xffffffff;
    pvVar2 = operator_new(0x25e);
    local_4 = 1;
    if (pvVar2 != (void *)0x0) {
      DAT_00bd1bb0 = FUN_004010a0(param_1,param_2,param_3,2);
      goto LAB_00583c23;
    }
  }
  else {
    FUN_0057a760(param_1,param_2,param_3,0);
    pvVar2 = operator_new(0x25e);
    local_4 = 2;
    if (pvVar2 == (void *)0x0) {
      DAT_00bd1bac = 0;
    }
    else {
      DAT_00bd1bac = FUN_004010a0(param_1,param_2,param_3,1);
    }
    local_4 = 0xffffffff;
    pvVar2 = operator_new(0x25e);
    local_4 = 3;
    if (pvVar2 != (void *)0x0) {
      DAT_00bd1bb0 = FUN_004010a0(*(undefined4 *)(DAT_00bd1bb4 + 0x32),
                                  *(undefined4 *)(DAT_00bd1bb4 + 0x2e),param_3,2);
      goto LAB_00583c23;
    }
  }
  DAT_00bd1bb0 = 0;
LAB_00583c23:
  local_4 = 0xffffffff;
  FUN_00406140(*(undefined4 *)(DAT_00bd1bb4 + 0x1e),DAT_00bd1bb4 + 0x26);
  _DAT_00bd1538 = *(undefined4 *)(DAT_00bd1bb4 + 0x32);
  _DAT_00bd153c = *(undefined4 *)(DAT_00bd1bb4 + 0x2e);
  DAT_00bd1530 = 0;
  DAT_00bd1534 = 0;
  FUN_00429a00(s_Mode_Set__00857778);
  iVar1 = *(int *)(DAT_00bd1bb4 + 0x516);
  if (iVar1 == 0x7e0) {
    DAT_00857744 = 0;
    _DAT_0088cee8 = iVar1;
    FUN_00413be0();
    ExceptionList = local_c;
    return 1;
  }
  if (iVar1 != 0x3e0) {
    DAT_00857744 = 2;
    FUN_00429a00(s_Unknown_RGBFormat____d__r__d_g___0085774c,*(undefined4 *)(DAT_00bd1bb4 + 0x50e),
                 *(undefined4 *)(DAT_00bd1bb4 + 0x512),*(undefined4 *)(DAT_00bd1bb4 + 0x516),
                 *(undefined4 *)(DAT_00bd1bb4 + 0x51a));
    ExceptionList = local_c;
    return 0;
  }
  DAT_00857744 = 1;
  _DAT_0088cee8 = iVar1;
  FUN_00413be0();
  ExceptionList = local_c;
  return 1;
}


