// FUN_0044d1d0 @ 44d1d0 size=977

/* WARNING: Removing unreachable block (ram,0x0044d4bf) */
/* WARNING: Removing unreachable block (ram,0x0044d432) */
/* WARNING: Removing unreachable block (ram,0x0044d3f5) */
/* WARNING: Removing unreachable block (ram,0x0044d453) */
/* WARNING: Removing unreachable block (ram,0x0044d465) */
/* WARNING: Removing unreachable block (ram,0x0044d4f6) */
/* WARNING: Removing unreachable block (ram,0x0044d508) */
/* WARNING: Removing unreachable block (ram,0x0044d527) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0044d1d0(int param_1,float param_2,float param_3,int param_4,char param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007bbc18;
  local_c = ExceptionList;
  if (*(int *)(param_4 + 0x12) == 0) {
    return 1;
  }
  bVar1 = *(char *)(DAT_00893750 + 0x11d) != '\0' || *(char *)(DAT_00893530 + 0x14) == '\x17';
  if (param_2 < _DAT_007e3380) {
    param_2 = 0.0;
  }
  if (param_3 < param_2) {
    param_3 = param_2;
  }
  param_2 = param_2 * _DAT_007e5dcc;
  ExceptionList = &local_c;
  if (((*(int *)(param_4 + 0x254) != 8) &&
      (ExceptionList = &local_c, *(int *)(param_4 + 0x254) != 9)) &&
     (ExceptionList = &local_c, *(int *)(param_4 + 0x482) != 0)) {
    local_4 = 0;
    ExceptionList = &local_c;
    iVar2 = FUN_004e9f80(param_1);
    iVar3 = FUN_004e9370(iVar2);
    if ((iVar2 < 1) || (*(int *)(iVar3 + 0x3d8) == 0)) {
LAB_0044d3a6:
      local_4 = 0xffffffff;
      FUN_0045a0f0();
      ExceptionList = local_c;
      return 0;
    }
    iVar6 = *(int *)(iVar3 + 0x482);
    uVar4 = FUN_0044e1b0();
    iVar5 = FUN_004e9370(uVar4);
    if (iVar6 != *(int *)(iVar5 + 0x482)) {
      iVar6 = *(int *)(iVar3 + 0x3d8);
      if (iVar6 != param_1) {
        iVar5 = FUN_004a0750();
        if (*(int *)(iVar5 + 0x3d8) == iVar6) {
          iVar6 = *(int *)(iVar6 + 0x117de);
        }
        else {
          iVar6 = *(int *)(iVar6 + 0x117f0);
        }
        if (iVar6 == iVar2) {
          if (param_5 == '\0') {
            if (*(float *)(*(int *)(iVar3 + 0x3d8) + 0x39b4) < param_2) {
              ExceptionList = local_c;
              return 0;
            }
            ExceptionList = local_c;
            return 1;
          }
          if (((bVar1) &&
              (*(float *)(iVar3 + 0x268) = param_3 + *(float *)(iVar3 + 0x268),
              *(int *)(param_4 + 0x3d8) == param_1)) && (iVar2 = FUN_004e9f40(), 0 < iVar2)) {
            uVar4 = FUN_004e9f40();
            iVar2 = FUN_004e9370(uVar4);
            *(float *)(iVar2 + 0x268) = param_3 + *(float *)(iVar2 + 0x268);
          }
          if (param_2 <= *(float *)(*(int *)(iVar3 + 0x3d8) + 0x39b4)) {
            FUN_0049eae0(-param_2);
            ExceptionList = local_c;
            return 1;
          }
          goto LAB_0044d3a6;
        }
      }
      if ((param_5 != '\0') && (bVar1)) {
        *(float *)(iVar3 + 0x268) = param_3 + *(float *)(iVar3 + 0x268);
      }
      if (*(float *)(iVar3 + 0x280) < param_2) {
        *(undefined4 *)(iVar3 + 0x280) = 0;
        ExceptionList = local_c;
        return 0;
      }
      if (param_5 != '\0') {
        *(float *)(iVar3 + 0x280) = *(float *)(iVar3 + 0x280) - param_2;
      }
      ExceptionList = local_c;
      return 1;
    }
  }
  local_4 = 0xffffffff;
  if ((param_5 != '\0') && (bVar1)) {
    iVar2 = FUN_004a0750();
    *(float *)(iVar2 + 0x268) = param_3 + *(float *)(iVar2 + 0x268);
  }
  if (*(float *)(param_1 + 0x39b4) < param_2) {
    ExceptionList = local_c;
    return 0;
  }
  if (param_5 != '\0') {
    FUN_0049eae0(-param_2);
  }
  ExceptionList = local_c;
  return 1;
}


