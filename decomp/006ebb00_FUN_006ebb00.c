// FUN_006ebb00 @ 6ebb00 size=1749

void FUN_006ebb00(int param_1,undefined4 param_2,char *param_3,int param_4,undefined2 param_5,
                 undefined4 param_6,int param_7)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007da300;
  local_c = ExceptionList;
  iVar5 = param_1 * 0x1a;
  if ((&DAT_00d3635a)[iVar5] == '\0') {
    iVar5 = -1;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *param_3;
      param_3 = param_3 + 1;
    } while (cVar1 != '\0');
    if (iVar5 == -2) {
      return;
    }
    ExceptionList = &local_c;
    FUN_0079168d();
    FUN_007a630a(&DAT_00d37fd4);
    pvVar3 = operator_new(0x16);
    local_4 = 7;
    if (pvVar3 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_006e9330();
    }
    *(int *)(iVar5 + 4) = param_4;
    *(int *)(iVar5 + 8) = param_7;
    local_4 = 0xffffffff;
    FUN_006ec1f0();
    if (iVar5 == 0) {
      ExceptionList = local_c;
      return;
    }
    FUN_006e97f0();
    ExceptionList = local_c;
    return;
  }
  if ((param_1 == 0x6d) || (param_1 == 0x6f)) {
    ExceptionList = &local_c;
    uVar2 = _rand();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    if (uVar2 != 0) {
      if (uVar2 == 1) {
        (**(code **)(*DAT_00bd0e18 + 0x20))();
      }
      goto LAB_006ebb89;
    }
    iVar4 = *DAT_00bd0e18;
  }
  else {
    iVar4 = *DAT_00bd0e18;
    ExceptionList = &local_c;
  }
  (**(code **)(iVar4 + 0x20))();
LAB_006ebb89:
  FUN_007a630a();
  FUN_007a630a();
  switch(*(undefined4 *)(&DAT_00d36354 + iVar5)) {
  case 0:
    pvVar3 = operator_new(0x96);
    local_4 = 0;
    if (pvVar3 != (void *)0x0) {
      FUN_006e3640();
    }
    local_4 = 0xffffffff;
    FUN_0043e900();
    FUN_0042b6c9();
    FUN_006e3920();
    break;
  case 1:
    pvVar3 = operator_new(0x9e);
    local_4 = 2;
    if (pvVar3 != (void *)0x0) {
      FUN_006e2f10();
    }
    local_4 = 0xffffffff;
    FUN_0043e900();
    FUN_0042b6c9();
    FUN_0042b6c9();
    FUN_006e3430();
    break;
  case 2:
    pvVar3 = operator_new(0xa4);
    local_4 = 1;
    if (pvVar3 != (void *)0x0) {
      FUN_00446d10(&param_5);
      FUN_006e2530(param_2);
    }
    local_4 = 0xffffffff;
    FUN_0043e900();
    FUN_0042b6c9();
    FUN_0042b6c9();
    FUN_006e2d10();
    break;
  case 3:
    if (param_7 == -1) {
      if (param_4 < 1) {
        if (*(int *)(&DAT_00d36350 + iVar5) == 0) {
          pvVar3 = operator_new(0xae);
          local_4 = 5;
          if (pvVar3 != (void *)0x0) {
            FUN_006e1e50(param_2);
          }
          local_4 = 0xffffffff;
          FUN_00584270(0xd0);
          FUN_004136a0();
          FUN_0043e1b0(4);
          FUN_00584270(0xff);
          FUN_004136a0();
          FUN_0043e1b0(5);
          FUN_00584270(0xd0);
          FUN_004136a0();
          FUN_0043e1b0(6);
          FUN_0043e900();
          FUN_0042b6c9();
        }
        else {
          pvVar3 = operator_new(0xae);
          local_4 = 6;
          if (pvVar3 != (void *)0x0) {
            FUN_006e1e50(param_2);
          }
          local_4 = 0xffffffff;
          FUN_00584270();
          FUN_004136a0();
          FUN_0043e550();
          FUN_0043e900();
          FUN_0043e580();
          FUN_0042b6c9();
        }
        FUN_0042b6c9();
        FUN_006e2330();
      }
      else {
        pvVar3 = operator_new(0xae);
        local_4 = 4;
        if (pvVar3 != (void *)0x0) {
          FUN_006e15b0(param_2);
        }
        local_4 = 0xffffffff;
        FUN_00584270();
        FUN_004136a0();
        FUN_0043e550();
        FUN_0043e900();
        FUN_0043e580();
        FUN_0042b6c9();
        FUN_0042b6c9();
        FUN_006e1bc0();
      }
    }
    else {
      pvVar3 = operator_new(0xae);
      local_4 = 3;
      if (pvVar3 != (void *)0x0) {
        FUN_006e0d30(param_2);
      }
      local_4 = 0xffffffff;
      FUN_00584270();
      FUN_004136a0();
      FUN_0043e550();
      FUN_0043e900();
      FUN_0043e580();
      FUN_0042b6c9();
      FUN_0042b6c9();
      FUN_006e1320();
    }
  }
  ExceptionList = local_c;
  return;
}


