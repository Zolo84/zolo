// FUN_005bd0c9 @ 5bd0c9 size=2167

undefined4 FUN_005bd0c9(int *param_1)

{
  int iVar1;
  short sVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  undefined4 *local_168;
  undefined4 *local_164;
  int local_160;
  int local_15c;
  undefined4 local_158;
  int local_148;
  int local_13c;
  int local_130;
  uint local_124;
  int local_118;
  int local_10c;
  int local_ac;
  int local_98;
  int local_80;
  uint local_78;
  undefined4 local_68;
  short local_64;
  undefined4 *local_60;
  undefined **local_5c;
  int local_58;
  undefined **local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_34;
  int local_30;
  int local_2c;
  undefined **local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined ***local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007cc565;
  local_10 = ExceptionList;
  local_30 = param_1[3];
  local_2c = *(int *)((int)param_1 + 0x13a);
  ExceptionList = &local_10;
  FUN_004ee3c0();
  local_5c = &PTR_FUN_007e8694;
  local_8 = 0;
  FUN_004ee3c0();
  local_48 = &PTR_FUN_007e8b48;
  local_8._0_1_ = 1;
  FUN_005212f0();
  local_28 = &PTR_FUN_007e8b90;
  local_8 = CONCAT31(local_8._1_3_,2);
  local_14 = (undefined ***)0x0;
  cVar4 = (**(code **)(*param_1 + 0x28))();
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(*param_1 + 0x30))();
    if (cVar4 == '\0') {
      local_14 = &local_28;
    }
    else {
      local_14 = &local_48;
    }
  }
  else {
    local_14 = &local_5c;
  }
  uVar5 = FUN_004e9370(local_2c);
  uVar6 = FUN_004e9370(local_30);
  local_34 = FUN_00431220(param_1,uVar6,uVar5);
  uVar7 = (*(code *)(*local_14)[2])();
  uVar9 = uVar7 & 0xff;
  if ((uVar7 & 0xff) == 0) {
    uVar5 = (*(code *)(*local_14)[1])();
    FUN_00405ad0(s_UnitServer__Found_a_path_of_leng_00859478,uVar5);
    pvVar8 = operator_new(0xc);
    local_8._0_1_ = 3;
    if (pvVar8 == (void *)0x0) {
      local_158 = 0;
    }
    else {
      local_158 = FUN_005667e0(param_1 + 6,1,local_14);
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_00565bc0(local_158);
    if (local_30 < 1) {
      cVar4 = (**(code **)(*param_1 + 0x30))();
      if (cVar4 == '\0') {
        (**(code **)(*param_1 + 0x10))();
        local_160 = FUN_0051b230();
      }
      else {
        (**(code **)(*param_1 + 0x18))();
        local_160 = FUN_0051b230();
      }
      local_15c = local_160;
    }
    else {
      local_15c = DAT_00ab27b4 + local_30 * 0x4b2;
    }
    iVar10 = DAT_00ab27b4 + local_2c * 0x4b2;
    FUN_004ee3c0();
    local_8._0_1_ = 4;
    FUN_004ee3c0();
    local_8._0_1_ = 5;
    FUN_004ee3c0();
    local_8 = CONCAT31(local_8._1_3_,6);
    cVar4 = (**(code **)(*param_1 + 0x28))();
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(*param_1 + 0x30))();
      if (cVar4 == '\0') {
        local_80 = FUN_00430cc0(param_1,local_15c,iVar10);
      }
      else {
        local_80 = FUN_00430cc0(param_1,local_15c,iVar10);
      }
    }
    else {
      local_80 = FUN_00430cc0(param_1,local_15c,iVar10);
    }
    FUN_00405ad0(s_UnitServer__movetime__d_008594a0,local_80);
    if (local_80 < 1) {
      local_80 = 1;
    }
    local_68 = *(int *)(DAT_00893530 + 0x14);
    local_64 = *(short *)(DAT_00893530 + 0x18);
    FUN_0042db80(-*(int *)((int)param_1 + 0x13e));
    sVar2 = local_64;
    iVar10 = local_68;
    param_1[0x8a] = local_68;
    *(short *)(param_1 + 0x8b) = local_64;
    FUN_0042db80(local_80);
    *(int *)((int)param_1 + 0x222) = local_68;
    *(short *)((int)param_1 + 0x226) = local_64;
    local_164 = operator_new(0xc);
    local_8._0_1_ = 7;
    if (local_164 == (undefined4 *)0x0) {
      local_164 = (undefined4 *)0x0;
    }
    else {
      FUN_005c03a0(0x2f,param_1 + 6);
      *local_164 = &PTR_FUN_007e9fdc;
      iVar1 = local_164[1];
      *(int *)(iVar1 + 0xe) = iVar10;
      *(short *)(iVar1 + 0x12) = sVar2;
      iVar10 = local_164[1];
      *(int *)(iVar10 + 0x14) = local_68;
      *(short *)(iVar10 + 0x18) = local_64;
    }
    local_8._0_1_ = 6;
    FUN_00565c70(local_164);
    FUN_00405ad0(s_UnitServer__Scheduling_move_for___008594bc,*(undefined4 *)((int)param_1 + 0x1a),
                 local_2c,(int)local_64,(int)local_68._2_1_,(int)local_68._1_1_);
    local_168 = operator_new(0xc);
    local_8._0_1_ = 8;
    if (local_168 == (undefined4 *)0x0) {
      local_168 = (undefined4 *)0x0;
    }
    else {
      FUN_004c0a70(0x3c,&DAT_0088f24c);
      *local_168 = &PTR_FUN_007e7784;
      iVar10 = local_168[1];
      *(int *)(iVar10 + 0xe) = param_1[6];
      *(short *)(iVar10 + 0x12) = (short)param_1[7];
      *(undefined2 *)(iVar10 + 0x14) = (undefined2)local_2c;
    }
    local_8._0_1_ = 6;
    local_60 = local_168;
    param_1[0x91] = (int)local_168;
    FUN_00565af0(local_168,&local_68);
    local_8._0_1_ = 5;
    local_10c = local_98;
    while (local_10c != 0) {
      iVar10 = *(int *)(local_10c + 8);
      FUN_00796cd8(local_10c);
      local_10c = iVar10;
    }
    local_8._0_1_ = 4;
    local_118 = local_ac;
    while (local_118 != 0) {
      iVar10 = *(int *)(local_118 + 8);
      FUN_00796cd8(local_118);
      local_118 = iVar10;
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    local_124 = local_78;
    while (uVar9 = local_78, local_124 != 0) {
      uVar9 = *(uint *)(local_124 + 8);
      local_78 = FUN_00796cd8(local_124);
      local_124 = uVar9;
    }
  }
  uVar3 = local_34;
  iVar10 = CONCAT31((int3)(uVar9 >> 8),local_34);
  local_8._0_1_ = 1;
  local_28 = &PTR_LAB_007e518c;
  local_130 = local_24;
  while (local_130 != 0) {
    iVar10 = *(int *)(local_130 + 8);
    FUN_00796cd8(local_130);
    local_130 = iVar10;
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_8 = (uint)local_8._1_3_ << 8;
  local_48 = &PTR_LAB_007e518c;
  local_13c = local_44;
  while (local_13c != 0) {
    iVar10 = *(int *)(local_13c + 8);
    FUN_00796cd8(local_13c);
    local_13c = iVar10;
  }
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_8 = 0xffffffff;
  local_5c = &PTR_LAB_007e518c;
  local_148 = local_58;
  while (local_148 != 0) {
    iVar10 = *(int *)(local_148 + 8);
    FUN_00796cd8(local_148);
    local_148 = iVar10;
  }
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)iVar10 >> 8),uVar3);
}


