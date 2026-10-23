// FUN_004a24e0 @ 4a24e0 size=1655

undefined4 __thiscall
FUN_004a24e0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined2 param_6)

{
  undefined1 uVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined **local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined **local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bde96;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004734e0();
  local_20 = &PTR_FUN_007e5258;
  local_4 = 0;
  pvVar3 = operator_new(0xe);
  local_4._0_1_ = 1;
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00473a90(param_2);
  }
  local_4._0_1_ = 0;
  iVar5 = iVar4;
  if (local_14 != 0) {
    *(int *)(local_18 + 8) = iVar4;
    iVar5 = local_1c;
  }
  local_1c = iVar5;
  local_18 = iVar4;
  local_14 = local_14 + 1;
  FUN_004734e0();
  iVar4 = local_18;
  local_34 = &PTR_FUN_007e5258;
  local_4._0_1_ = 2;
  pvVar3 = operator_new(0xe);
  local_4._0_1_ = 3;
  if (pvVar3 == (void *)0x0) {
    local_18 = 0;
  }
  else {
    local_18 = FUN_00473a90(param_3);
  }
  local_4._0_1_ = 2;
  uVar1 = (undefined1)local_4;
  local_4._0_1_ = 2;
  iVar8 = local_14 + 1;
  iVar5 = local_18;
  if (local_14 != 0) {
    *(int *)(iVar4 + 8) = local_18;
    iVar5 = local_1c;
  }
  local_1c = iVar5;
  local_14 = iVar8;
  if (param_2 == 0) {
    iVar4 = *(int *)(param_1 + 6);
    iVar5 = FUN_00584c90();
    if (iVar5 != iVar4) goto LAB_004a2817;
    if (param_3 == 0) {
      FUN_00446d10(&param_6);
      uVar6 = param_4;
      uVar7 = param_5;
      FUN_00490f60(param_4,param_5);
      cVar2 = FUN_00586370(uVar6,uVar7);
      if (cVar2 == '\x01') goto LAB_004a2817;
      FUN_00446d10(&param_6);
      uVar6 = FUN_00485f30(param_4);
      FUN_00490f60(uVar6);
      cVar2 = FUN_00586400(uVar6,param_4);
      if (cVar2 == '\x01') goto LAB_004a2817;
      FUN_00446d10(&param_6);
      uVar6 = FUN_00485f30(param_5);
      FUN_00490f60(uVar6);
      cVar2 = FUN_00586400(uVar6,param_5);
      if (cVar2 == '\x01') goto LAB_004a2817;
      FUN_00446d10(&param_6);
    }
    else {
      FUN_00446d10(&param_6);
      pppuVar10 = &local_34;
      uVar6 = param_4;
      FUN_00490f60(pppuVar10,param_4);
      cVar2 = FUN_00586400(pppuVar10,uVar6);
      if (cVar2 == '\x01') goto LAB_004a2817;
      FUN_00446d10(&param_6);
      uVar6 = param_5;
      FUN_00490f60(param_4,param_5);
      cVar2 = FUN_00586370(param_4,uVar6);
      if (cVar2 == '\x01') goto LAB_004a2817;
      FUN_00446d10(&param_6);
      uVar6 = FUN_00485f30(param_5);
      FUN_00490f60(uVar6);
      cVar2 = FUN_00586400(uVar6,param_5);
      if (cVar2 == '\x01') goto LAB_004a2817;
    }
    uVar6 = FUN_00485f30();
    uVar7 = FUN_00485f30(uVar6);
    FUN_00490f60(uVar7);
    cVar2 = FUN_005864e0(uVar7,uVar6);
    if (cVar2 != '\x01') {
LAB_004a2af3:
      local_34 = &PTR_LAB_007e3ff0;
      iVar4 = local_30;
      while (iVar4 != 0) {
        iVar4 = *(int *)(iVar4 + 8);
        FUN_00796cd8();
      }
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_20 = &PTR_LAB_007e3ff0;
      iVar4 = local_1c;
      while (iVar4 != 0) {
        iVar4 = *(int *)(iVar4 + 8);
        FUN_00796cd8();
      }
      ExceptionList = local_c;
      return 0;
    }
  }
  else if (param_2 == *(int *)(param_1 + 6)) {
    if (param_3 != 0) {
      pppuVar10 = &local_34;
      pppuVar9 = &local_20;
      local_4._0_1_ = uVar1;
      FUN_00490f60(pppuVar9,pppuVar10);
      cVar2 = FUN_005864e0(pppuVar9,pppuVar10);
      if (cVar2 == '\x01') {
        local_34 = &PTR_LAB_007e3ff0;
        iVar4 = local_30;
        while (iVar4 != 0) {
          iVar4 = *(int *)(iVar4 + 8);
          FUN_00796cd8();
        }
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_20 = &PTR_LAB_007e3ff0;
        iVar4 = local_1c;
        while (iVar4 != 0) {
          iVar4 = *(int *)(iVar4 + 8);
          FUN_00796cd8();
        }
        ExceptionList = local_c;
        return 1;
      }
      pppuVar10 = &local_34;
      uVar6 = param_4;
      FUN_00490f60(pppuVar10,param_4);
      cVar2 = FUN_00586400(pppuVar10,uVar6);
      if (cVar2 == '\x01') {
        local_34 = &PTR_LAB_007e3ff0;
        iVar4 = local_30;
        while (iVar4 != 0) {
          iVar4 = *(int *)(iVar4 + 8);
          FUN_00796cd8();
        }
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_20 = &PTR_LAB_007e3ff0;
        iVar4 = local_1c;
        while (iVar4 != 0) {
          iVar4 = *(int *)(iVar4 + 8);
          FUN_00796cd8();
        }
        ExceptionList = local_c;
        return 1;
      }
      FUN_00490f60(param_4,param_5);
      cVar2 = FUN_00586370(param_4,param_5);
      if (cVar2 == '\x01') {
        local_34 = &PTR_LAB_007e3ff0;
        iVar4 = local_30;
        while (iVar4 != 0) {
          iVar4 = *(int *)(iVar4 + 8);
          FUN_00796cd8();
        }
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_20 = &PTR_LAB_007e3ff0;
        iVar4 = local_1c;
        while (iVar4 != 0) {
          iVar4 = *(int *)(iVar4 + 8);
          FUN_00796cd8();
        }
        ExceptionList = local_c;
        return 1;
      }
      goto LAB_004a2af3;
    }
    pppuVar10 = &local_20;
    uVar6 = param_5;
    FUN_00490f60(pppuVar10,param_5);
    cVar2 = FUN_00586400(pppuVar10,uVar6);
    if (cVar2 != '\x01') {
      uVar6 = param_4;
      uVar7 = param_5;
      FUN_00490f60(param_4,param_5);
      cVar2 = FUN_00586370(uVar6,uVar7);
      if (cVar2 != '\x01') {
        uVar6 = FUN_00485f30(param_4);
        FUN_00490f60(uVar6);
        cVar2 = FUN_00586400(uVar6,param_4);
        if (cVar2 != '\x01') {
          uVar6 = FUN_00485f30(param_5);
          FUN_00490f60(uVar6);
          cVar2 = FUN_00586400(uVar6,param_5);
          if (cVar2 == '\x01') {
            local_34 = &PTR_LAB_007e3ff0;
            iVar4 = local_30;
            while (iVar4 != 0) {
              iVar4 = *(int *)(iVar4 + 8);
              FUN_00796cd8();
            }
            local_30 = 0;
            local_2c = 0;
            local_28 = 0;
            local_20 = &PTR_LAB_007e3ff0;
            iVar4 = local_1c;
            while (iVar4 != 0) {
              iVar4 = *(int *)(iVar4 + 8);
              FUN_00796cd8();
            }
            ExceptionList = local_c;
            return 1;
          }
          uVar6 = FUN_00485f30();
          uVar7 = FUN_00485f30(uVar6);
          FUN_00490f60(uVar7);
          cVar2 = FUN_005864e0(uVar7,uVar6);
          if (cVar2 == '\x01') {
            local_34 = &PTR_LAB_007e3ff0;
            iVar4 = local_30;
            while (iVar4 != 0) {
              iVar4 = *(int *)(iVar4 + 8);
              FUN_00796cd8();
            }
            local_30 = 0;
            local_2c = 0;
            local_28 = 0;
            local_20 = &PTR_LAB_007e3ff0;
            iVar4 = local_1c;
            while (iVar4 != 0) {
              iVar4 = *(int *)(iVar4 + 8);
              FUN_00796cd8();
            }
            ExceptionList = local_c;
            return 1;
          }
          goto LAB_004a2af3;
        }
      }
    }
  }
LAB_004a2817:
  local_4 = (uint)local_4._1_3_ << 8;
  local_34 = &PTR_LAB_007e3ff0;
  FUN_004309c0();
  local_4 = 0xffffffff;
  local_20 = &PTR_LAB_007e3ff0;
  FUN_004309c0();
  ExceptionList = local_c;
  return 1;
}


