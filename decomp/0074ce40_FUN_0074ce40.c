// FUN_0074ce40 @ 74ce40 size=1021

undefined4
FUN_0074ce40(undefined4 param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5,
            char *param_6,int param_7,size_t param_8)

{
  void **ppvVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *pvVar8;
  undefined1 *puVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  size_t _MaxCount;
  int local_2c;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007df84b;
  pvStack_c = ExceptionList;
  uVar4 = *(uint *)(param_4 + 0x14);
  if (((int)uVar4 < 1) || (uVar4 <= param_7 + param_8)) {
    local_2c = 0;
  }
  else {
    local_2c = (uVar4 - param_7) - param_8;
  }
  uVar4 = *(uint *)(param_4 + 0xc) & 0x1c0;
  iVar13 = (int)param_2;
  ppvVar1 = &pvStack_c;
  if (uVar4 != 0x40) {
    ppvVar1 = &pvStack_c;
    local_20 = (int)param_2;
    if (uVar4 == 0x100) {
      ppvVar1 = &pvStack_c;
      if ((param_8 != 0) &&
         ((cVar2 = *param_6, cVar2 == '+' || (ppvVar1 = &pvStack_c, cVar2 == '-')))) {
        local_1c = param_3;
        ExceptionList = &pvStack_c;
        FUN_0074d720(cVar2);
        param_6 = param_6 + 1;
        param_8 = param_8 - 1;
        param_3 = local_1c;
        ppvVar1 = ExceptionList;
      }
      for (; ExceptionList = ppvVar1, local_1c = param_3, local_2c != 0; local_2c = local_2c + -1) {
        FUN_0074d720(param_5);
        param_3 = local_1c;
        ppvVar1 = ExceptionList;
      }
      local_2c = 0;
      iVar13 = local_20;
      ppvVar1 = ExceptionList;
    }
    else {
      for (; ExceptionList = ppvVar1, local_1c = param_3, local_2c != 0; local_2c = local_2c + -1) {
        FUN_0074d720(param_5);
        ppvVar1 = ExceptionList;
        param_3 = local_1c;
      }
      local_2c = 0;
      iVar13 = local_20;
      ppvVar1 = ExceptionList;
    }
  }
  ExceptionList = ppvVar1;
  _MaxCount = param_8;
  puVar5 = (undefined4 *)FUN_007a9a85();
  pvVar6 = _memchr(param_6,(int)*(char *)*puVar5,_MaxCount);
  if (pvVar6 != (void *)0x0) {
    FUN_0074c2a0(&local_20);
    local_4 = 0;
    FUN_00798acc();
    local_4._0_1_ = 1;
    uVar7 = FUN_0074c210();
    param_2 = (int *)FUN_00799548(uVar7,1);
    if (param_2 == (int *)0x0) {
      cVar2 = FUN_0079959e();
      if (cVar2 == '\0') {
        FUN_0074c8e0(s_missing_locale_facet_0087486c);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(&local_18,&DAT_00826e30);
      }
      param_2 = DAT_00d4c250;
      if (DAT_00d4c250 == (int *)0x0) {
        pvVar8 = operator_new(0x18);
        local_4._0_1_ = 2;
        if (pvVar8 == (void *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_0074d7a0(0);
        }
        local_4._0_1_ = 1;
        DAT_00d4c250 = (int *)FUN_0074dc20(uVar7);
        param_2 = DAT_00d4c250;
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00798b68();
    local_4 = 0xffffffff;
    if ((local_20 != 0) && (puVar5 = (undefined4 *)FUN_0074c240(), puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    iVar11 = (int)pvVar6 - (int)param_6;
    iVar12 = iVar11 + 1;
    pcVar10 = param_6;
    local_18 = iVar13;
    local_14 = param_3;
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      FUN_0074d720(*pcVar10);
      pcVar10 = pcVar10 + 1;
    }
    uVar3 = (**(code **)(*param_2 + 4))();
    param_3 = local_14;
    iVar13 = local_18;
    FUN_0074d720(uVar3);
    param_6 = param_6 + iVar12;
    param_8 = param_8 - iVar12;
  }
  pvVar6 = _memchr(param_6,0x65,param_8);
  if (pvVar6 != (void *)0x0) {
    iVar11 = (int)pvVar6 - (int)param_6;
    iVar12 = iVar11 + 1;
    pcVar10 = param_6;
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      FUN_0074d720(*pcVar10);
      pcVar10 = pcVar10 + 1;
    }
    for (; local_18 = iVar13, local_14 = param_3, param_7 != 0; param_7 = param_7 + -1) {
      FUN_0074d720(0x30);
      iVar13 = local_18;
      param_3 = local_14;
    }
    param_7 = 0;
    puVar9 = &DAT_0083f6ec;
    if ((*(byte *)(param_4 + 0xc) & 4) == 0) {
      puVar9 = &DAT_00874888;
    }
    FUN_0074d720(CONCAT31((int3)((uint)puVar9 >> 8),*puVar9));
    param_6 = param_6 + iVar12;
    param_8 = param_8 - iVar12;
  }
  for (; param_8 != 0; param_8 = param_8 - 1) {
    FUN_0074d720(*param_6);
    param_6 = param_6 + 1;
  }
  for (; param_7 != 0; param_7 = param_7 + -1) {
    FUN_0074d720(0x30);
  }
  *(undefined4 *)(param_4 + 0x14) = 0;
  FUN_0074d660(param_1,iVar13,param_3,param_5,local_2c);
  ExceptionList = pvStack_c;
  return param_1;
}


