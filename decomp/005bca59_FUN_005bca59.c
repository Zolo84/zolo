// FUN_005bca59 @ 5bca59 size=1648

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005bca59(int *param_1,int param_2,int param_3,int param_4,short param_5)

{
  char cVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *local_100;
  undefined4 local_fc;
  undefined4 *local_f8;
  int local_f4;
  int local_f0;
  int local_e0;
  int local_d4;
  int local_c8;
  int local_68;
  int local_58;
  short local_54;
  int local_4c;
  int local_34;
  int local_20;
  undefined4 local_1c;
  short local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007cc4f5;
  local_10 = ExceptionList;
  if (param_2 < 1) {
    ExceptionList = &local_10;
    cVar1 = (**(code **)(*param_1 + 0x30))();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x10))();
      local_f4 = FUN_0051b230();
    }
    else {
      (**(code **)(*param_1 + 0x18))();
      local_f4 = FUN_0051b230();
    }
    local_f0 = local_f4;
  }
  else {
    local_f0 = DAT_00ab27b4 + param_2 * 0x4b2;
    ExceptionList = &local_10;
  }
  iVar4 = DAT_00ab27b4 + param_3 * 0x4b2;
  FUN_004ee3c0();
  local_8 = 0;
  FUN_004ee3c0();
  local_8._0_1_ = 1;
  FUN_004ee3c0();
  local_8 = CONCAT31(local_8._1_3_,2);
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x30))();
    if (cVar1 == '\0') {
      local_20 = FUN_00430cc0(param_1,local_f0,iVar4);
    }
    else {
      local_20 = FUN_00430cc0(param_1,local_f0,iVar4);
    }
  }
  else {
    local_20 = FUN_00430cc0(param_1,local_f0,iVar4);
  }
  FUN_00405ad0(s_UnitServer__movetime__d_00859420,local_20);
  if (local_20 < 1) {
    local_20 = 1;
  }
  local_58 = *(int *)(DAT_00893530 + 0x14);
  local_54 = *(short *)(DAT_00893530 + 0x18);
  param_1[0x8a] = local_58;
  *(short *)(param_1 + 0x8b) = local_54;
  local_1c = local_58;
  local_18 = local_54;
  FUN_0042db80(local_20);
  cVar1 = FUN_0042dd70(DAT_00893530 + 0x14);
  if (cVar1 != '\0') {
    local_1c = param_4;
    local_18 = param_5;
    FUN_0042db80(local_20);
    local_58 = param_4;
    local_54 = param_5;
    param_1[0x8a] = param_4;
    *(short *)(param_1 + 0x8b) = param_5;
  }
  *(int *)((int)param_1 + 0x222) = local_1c;
  *(short *)((int)param_1 + 0x226) = local_18;
  local_f8 = operator_new(0xc);
  local_8._0_1_ = 3;
  if (local_f8 == (undefined4 *)0x0) {
    local_f8 = (undefined4 *)0x0;
  }
  else {
    FUN_005c03a0(0x2f,param_1 + 6);
    *local_f8 = &PTR_FUN_007e9fdc;
    iVar4 = local_f8[1];
    *(int *)(iVar4 + 0xe) = local_58;
    *(short *)(iVar4 + 0x12) = local_54;
    iVar4 = local_f8[1];
    *(int *)(iVar4 + 0x14) = local_1c;
    *(short *)(iVar4 + 0x18) = local_18;
  }
  local_8._0_1_ = 2;
  FUN_00565c70(local_f8);
  FUN_00405ad0(s_UnitServer__Scheduling_move_for___0085943c,*(undefined4 *)((int)param_1 + 0x1a),
               param_3,(int)local_18,(int)local_1c._2_1_,(int)local_1c._1_1_);
  local_100 = operator_new(0xc);
  local_8._0_1_ = 4;
  if (local_100 == (undefined4 *)0x0) {
    local_100 = (undefined4 *)0x0;
  }
  else {
    pvVar2 = operator_new(0x16);
    local_8._0_1_ = 5;
    if (pvVar2 == (void *)0x0) {
      local_fc = 0;
    }
    else {
      local_fc = FUN_00540a90();
    }
    local_8._0_1_ = 4;
    FUN_0042d320(local_fc);
    local_8._0_1_ = 6;
    *local_100 = &PTR_FUN_007e78f0;
    *(undefined1 *)((int)local_100 + 10) = 0;
    *(undefined2 *)local_100[1] = 0x3c;
    iVar4 = local_100[1];
    *(undefined4 *)(iVar4 + 8) = _DAT_0088f24c;
    *(undefined2 *)(iVar4 + 0xc) = DAT_0088f24e._2_2_;
    puVar3 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar4 = local_100[1];
    *(undefined4 *)(iVar4 + 2) = *puVar3;
    *(undefined2 *)(iVar4 + 6) = *(undefined2 *)(puVar3 + 1);
    *local_100 = &PTR_FUN_007e7784;
    iVar4 = local_100[1];
    *(int *)(iVar4 + 0xe) = param_1[6];
    *(short *)(iVar4 + 0x12) = (short)param_1[7];
    *(undefined2 *)(iVar4 + 0x14) = (undefined2)param_3;
  }
  local_8._0_1_ = 2;
  local_14 = local_100;
  param_1[0x91] = (int)local_100;
  FUN_00565af0(local_100,&local_1c);
  local_8._0_1_ = 1;
  local_c8 = local_4c;
  while (local_c8 != 0) {
    iVar4 = *(int *)(local_c8 + 8);
    FUN_00796cd8(local_c8);
    local_c8 = iVar4;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_d4 = local_34;
  while (local_d4 != 0) {
    iVar4 = *(int *)(local_d4 + 8);
    FUN_00796cd8(local_d4);
    local_d4 = iVar4;
  }
  local_8 = 0xffffffff;
  local_e0 = local_68;
  while (local_e0 != 0) {
    iVar4 = *(int *)(local_e0 + 8);
    FUN_00796cd8(local_e0);
    local_e0 = iVar4;
  }
  ExceptionList = local_10;
  return;
}


