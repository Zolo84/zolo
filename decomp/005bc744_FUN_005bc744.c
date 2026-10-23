// FUN_005bc744 @ 5bc744 size=789

undefined * __thiscall FUN_005bc744(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_8c;
  int local_80;
  int local_74;
  int local_30;
  undefined *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007cc49d;
  local_10 = ExceptionList;
  local_30 = param_3;
  ExceptionList = &local_10;
  cVar1 = (**(code **)(*param_2 + 0x28))(param_1);
  if ((cVar1 != '\0') && (iVar2 = (**(code **)(*param_2 + 0x10))(), *(int *)(iVar2 + 0x2ae) != 0)) {
    iVar2 = (**(code **)(*param_2 + 0x10))();
    local_30 = *(int *)(*(int *)(iVar2 + 0x2ae) + 0xc);
  }
  iVar2 = DAT_00ab27b4 + local_30 * 0x4b2;
  iVar3 = DAT_00ab27b4 + param_4 * 0x4b2;
  cVar1 = FUN_00525660();
  if (cVar1 == '\0') {
    local_8 = 2;
    cVar1 = (**(code **)(*param_2 + 0x28))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_2 + 0x30))();
      if (cVar1 == '\0') {
        local_14 = (undefined *)FUN_00430cc0(param_2,iVar2,iVar3);
      }
      else {
        local_14 = (undefined *)FUN_00430cc0(param_2,iVar2,iVar3);
      }
    }
    else {
      local_14 = (undefined *)FUN_00430cc0(param_2,iVar2,iVar3);
    }
    FUN_00405ad0(s_UnitServer__movetime__d_00859404,local_14);
    if ((int)local_14 < 1) {
      local_14 = (undefined *)0x1;
    }
    local_8._0_1_ = 1;
    local_74 = 0;
    while (local_74 != 0) {
      iVar2 = *(int *)(local_74 + 8);
      FUN_00796cd8(local_74);
      local_74 = iVar2;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_80 = 0;
    while (local_80 != 0) {
      iVar2 = *(int *)(local_80 + 8);
      FUN_00796cd8(local_80);
      local_80 = iVar2;
    }
    local_8 = 0xffffffff;
    local_8c = 0;
    while (local_8c != 0) {
      iVar2 = *(int *)(local_8c + 8);
      FUN_00796cd8(local_8c);
      local_8c = iVar2;
    }
  }
  else {
    local_14 = &DAT_00989680;
  }
  ExceptionList = local_10;
  return local_14;
}


