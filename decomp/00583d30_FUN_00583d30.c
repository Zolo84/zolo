// FUN_00583d30 @ 583d30 size=473

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00583d30(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c8fb6;
  local_c = ExceptionList;
  if (DAT_00bd1bb8 == '\0') {
    return 0;
  }
  ExceptionList = &local_c;
  if (DAT_00bd1bb0 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    (**(code **)*DAT_00bd1bb0)(1);
  }
  if (param_4 == 0) {
    FUN_0057a760(param_1,param_2,param_3,1);
    pvVar2 = operator_new(0x25e);
    uStack_4 = 0;
    if (pvVar2 != (void *)0x0) {
      DAT_00bd1bb0 = (undefined4 *)FUN_004010a0(param_1,param_2,param_3,2);
      goto LAB_00583e09;
    }
  }
  else {
    FUN_0057a760(param_1,param_2,param_3,0);
    pvVar2 = operator_new(0x25e);
    uStack_4 = 1;
    if (pvVar2 != (void *)0x0) {
      DAT_00bd1bb0 = (undefined4 *)
                     FUN_004010a0(*(undefined4 *)(DAT_00bd1bb4 + 0x32),
                                  *(undefined4 *)(DAT_00bd1bb4 + 0x2e),param_3,2);
      goto LAB_00583e09;
    }
  }
  DAT_00bd1bb0 = (undefined4 *)0x0;
LAB_00583e09:
  uStack_4 = 0xffffffff;
  FUN_00406140(*(undefined4 *)(DAT_00bd1bb4 + 0x1e),DAT_00bd1bb4 + 0x26);
  _DAT_00bd1538 = *(undefined4 *)(DAT_00bd1bb4 + 0x32);
  _DAT_00bd153c = *(undefined4 *)(DAT_00bd1bb4 + 0x2e);
  DAT_00bd1530 = 0;
  DAT_00bd1534 = 0;
  FUN_00405ad0(s_RGBFormat____d__r__d_g__d_b__d_008577b8,*(undefined4 *)(DAT_00bd1bb4 + 0x50e),
               *(undefined4 *)(DAT_00bd1bb4 + 0x512),*(undefined4 *)(DAT_00bd1bb4 + 0x516),
               *(undefined4 *)(DAT_00bd1bb4 + 0x51a));
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
    ExceptionList = local_c;
    return 0;
  }
  DAT_00857744 = 1;
  _DAT_0088cee8 = iVar1;
  FUN_00413be0();
  ExceptionList = local_c;
  return 1;
}


