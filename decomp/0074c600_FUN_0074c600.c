// FUN_0074c600 @ 74c600 size=729

undefined4 *
FUN_0074c600(undefined4 *param_1,void *param_2,int param_3,int param_4,undefined4 param_5,
            char param_6)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_30;
  void *local_2c;
  int iStack_28;
  char local_1c;
  undefined4 *puStack_18;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007df823;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0074c2a0(&local_30);
  local_4 = 0;
  FUN_00798acc();
  local_4._0_1_ = 1;
  uVar3 = FUN_0074c210();
  iVar4 = FUN_00799548(uVar3,1);
  if (iVar4 == 0) {
    cVar2 = FUN_0079959e();
    if (cVar2 == '\0') {
      FUN_0074c8e0(s_missing_locale_facet_0087486c);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_2c,&DAT_00826e30);
    }
    if (DAT_00d4c250 == 0) {
      local_2c = operator_new(0x18);
      local_4._0_1_ = 2;
      if (local_2c == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0074d7a0(0);
      }
      local_4._0_1_ = 1;
      DAT_00d4c250 = FUN_0074dc20(uVar3);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00798b68();
  local_4 = 0xffffffff;
  if ((local_30 != 0) && (puVar5 = (undefined4 *)FUN_0074c240(), puVar5 != (undefined4 *)0x0)) {
    (**(code **)*puVar5)(1);
  }
  local_1c = param_6;
  FUN_00674910(0);
  local_4 = 3;
  if ((*(uint *)(param_4 + 0xc) & 0x4000) == 0) {
    if (DAT_007f33d8 - uStack_14 < 2) {
      FUN_00798b7d();
    }
    iVar4 = uStack_14 + 1;
    cVar2 = FUN_00674e40(iVar4,0);
    if (cVar2 != '\0') {
      *(char *)((int)puStack_18 + uStack_14) = (param_6 != '\0') + '0';
      FUN_00674e20(iVar4);
    }
  }
  else {
    if (param_6 == '\0') {
      uVar3 = FUN_0074d6e0(&local_2c);
      local_4._0_1_ = 5;
      FUN_00674710(uVar3,0,DAT_007f33d8);
    }
    else {
      uVar3 = FUN_0074d700(&local_2c);
      local_4._0_1_ = 4;
      FUN_00674710(uVar3,0,DAT_007f33d8);
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_00674910(1);
  }
  uVar1 = *(uint *)(param_4 + 0x14);
  if (((int)uVar1 < 1) || (uVar1 <= uStack_14)) {
    iVar4 = 0;
  }
  else {
    iVar4 = uVar1 - uStack_14;
  }
  if ((*(uint *)(param_4 + 0xc) & 0x1c0) != 0x40) {
    for (; local_2c = param_2, iStack_28 = param_3, iVar4 != 0; iVar4 = iVar4 + -1) {
      FUN_0074d720(param_5);
      param_2 = local_2c;
      param_3 = iStack_28;
    }
    iVar4 = 0;
  }
  uVar1 = uStack_14;
  puVar5 = puStack_18;
  if (puStack_18 == (undefined4 *)0x0) {
    puVar5 = &DAT_007f0c98;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    FUN_0074d720(*(undefined1 *)puVar5);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *(undefined4 *)(param_4 + 0x14) = 0;
  local_2c = param_2;
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    if ((param_3 == 0) || (iVar6 = FUN_0074c900(param_5), iVar6 == -1)) {
      local_2c = (void *)CONCAT31(local_2c._1_3_,1);
    }
  }
  local_4 = 0xffffffff;
  *param_1 = local_2c;
  param_1[1] = param_3;
  FUN_00674910(1);
  ExceptionList = pvStack_c;
  return param_1;
}


