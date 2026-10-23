// FUN_0074d240 @ 74d240 size=1046

undefined4 *
FUN_0074d240(undefined4 *param_1,void *param_2,int param_3,int param_4,undefined4 param_5,
            char *param_6,uint param_7)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  int local_34;
  int local_30;
  undefined4 local_2c;
  void *local_28;
  int iStack_24;
  undefined1 local_1c [4];
  char *pcStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007df883;
  pvStack_c = ExceptionList;
  cVar2 = *param_6;
  if ((cVar2 == '+') || (cVar2 == '-')) {
    local_30 = 1;
  }
  else if ((cVar2 == '0') && ((param_6[1] == 'x' || (param_6[1] == 'X')))) {
    local_30 = 2;
  }
  else {
    local_30 = 0;
  }
  ExceptionList = &pvStack_c;
  FUN_0074c2a0(&local_34);
  local_4 = 0;
  FUN_00798acc();
  local_4._0_1_ = 1;
  uVar4 = FUN_0074c210();
  piVar5 = (int *)FUN_00799548(uVar4,1);
  if (piVar5 == (int *)0x0) {
    cVar2 = FUN_0079959e();
    if (cVar2 == '\0') {
      FUN_0074c8e0(s_missing_locale_facet_0087486c);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_28,&DAT_00826e30);
    }
    piVar5 = DAT_00d4c250;
    if (DAT_00d4c250 == (int *)0x0) {
      local_28 = operator_new(0x18);
      local_4._0_1_ = 2;
      if (local_28 == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0074d7a0(0);
      }
      local_4._0_1_ = 1;
      piVar5 = (int *)FUN_0074dc20(uVar4);
      DAT_00d4c250 = piVar5;
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00798b68();
  local_4 = 0xffffffff;
  if ((local_34 != 0) && (puVar6 = (undefined4 *)FUN_0074c240(), puVar6 != (undefined4 *)0x0)) {
    (**(code **)*puVar6)(1);
  }
  FUN_0074d780(local_1c);
  local_4 = 3;
  uVar3 = (**(code **)(*piVar5 + 8))();
  local_2c = CONCAT31(local_2c._1_3_,uVar3);
  pcVar8 = (char *)&DAT_007f0c98;
  if (pcStack_18 != (char *)0x0) {
    pcVar8 = pcStack_18;
  }
  bVar1 = false;
  if ('\0' < *pcVar8) {
    pcVar8 = (char *)&DAT_007f0c98;
    if (pcStack_18 != (char *)0x0) {
      pcVar8 = pcStack_18;
    }
    bVar1 = false;
    cVar2 = *pcVar8;
    uVar9 = param_7;
    while (((cVar2 != '\x7f' && ('\0' < cVar2)) && ((uint)(int)cVar2 < uVar9 - local_30))) {
      uVar9 = uVar9 - (int)cVar2;
      FUN_007a9270(param_6 + uVar9 + 1,param_6 + uVar9,(param_7 - uVar9) + 1);
      param_6[uVar9] = ',';
      param_7 = param_7 + 1;
      if ('\0' < pcVar8[1]) {
        pcVar8 = pcVar8 + 1;
      }
      bVar1 = true;
      cVar2 = *pcVar8;
    }
  }
  uVar9 = *(uint *)(param_4 + 0x14);
  if (((int)uVar9 < 1) || (uVar9 <= param_7)) {
    local_34 = 0;
  }
  else {
    local_34 = uVar9 - param_7;
  }
  uVar9 = *(uint *)(param_4 + 0xc) & 0x1c0;
  if (uVar9 != 0x40) {
    iVar10 = local_34;
    iVar7 = local_30;
    pcVar8 = param_6;
    if (uVar9 == 0x100) {
      for (; local_28 = param_2, iVar7 != 0; iVar7 = iVar7 + -1) {
        if ((param_3 == 0) || (iVar10 = FUN_0074c900(*pcVar8), iVar10 == -1)) {
          local_28 = (void *)CONCAT31(local_28._1_3_,1);
        }
        param_2 = local_28;
        pcVar8 = pcVar8 + 1;
      }
      param_6 = param_6 + local_30;
      param_7 = param_7 - local_30;
      for (iVar10 = local_34; iVar10 != 0; iVar10 = iVar10 + -1) {
        FUN_0074d720(param_5);
      }
      local_34 = 0;
    }
    else {
      for (; local_28 = param_2, iVar10 != 0; iVar10 = iVar10 + -1) {
        if ((param_3 == 0) || (iVar7 = FUN_0074c900(param_5), iVar7 == -1)) {
          local_28 = (void *)CONCAT31(local_28._1_3_,1);
        }
        param_2 = local_28;
      }
      local_34 = 0;
    }
  }
  if (bVar1) {
    while( true ) {
      iVar7 = FUN_007a9a90(param_6,&DAT_0087488c);
      pcVar8 = param_6;
      for (iVar10 = iVar7; iVar10 != 0; iVar10 = iVar10 + -1) {
        FUN_0074d720(*pcVar8);
        pcVar8 = pcVar8 + 1;
      }
      if (param_7 - iVar7 == 0) break;
      if ((char)local_2c != '\0') {
        local_28 = param_2;
        iStack_24 = param_3;
        FUN_0074d720(local_2c);
        param_2 = local_28;
        param_3 = iStack_24;
      }
      param_6 = param_6 + iVar7 + 1;
      param_7 = (param_7 - iVar7) - 1;
    }
  }
  else {
    for (; param_7 != 0; param_7 = param_7 - 1) {
      FUN_0074d720(*param_6);
      param_6 = param_6 + 1;
    }
  }
  *(undefined4 *)(param_4 + 0x14) = 0;
  for (iVar10 = local_34; iVar10 != 0; iVar10 = iVar10 + -1) {
    if ((param_3 == 0) || (iVar7 = FUN_0074c900(param_5), iVar7 == -1)) {
      uVar9 = (uint)param_2 >> 8;
      param_2 = (void *)CONCAT31((int3)uVar9,1);
    }
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_00674910(1);
  ExceptionList = pvStack_c;
  return param_1;
}


