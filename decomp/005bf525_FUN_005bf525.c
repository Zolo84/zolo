// FUN_005bf525 @ 5bf525 size=1791

void FUN_005bf525(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *local_1c4;
  void *local_1c0;
  uint local_1a4;
  undefined *local_15c [4];
  undefined *local_14c;
  undefined *local_148;
  undefined *local_144;
  undefined *local_140;
  undefined *local_13c;
  undefined *local_138;
  int local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 *local_128;
  uint local_124;
  undefined4 local_120;
  undefined *local_11c;
  undefined4 *local_118;
  undefined1 local_114 [63];
  undefined1 local_d5;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007cc5bf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_0051c480();
  local_120 = 0xffffffff;
  local_11c = &DAT_00be19d8 + *(int *)(param_1[0x92] + 6) * 0x12;
  cVar3 = (**(code **)(*param_1 + 0x2c))();
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*param_1 + 0x30))();
    if (cVar3 != '\0') {
      local_11c = &DAT_00be3310 + *(int *)(param_1[0x92] + 6) * 0x12;
      local_120 = 0xfffffffd;
    }
  }
  else {
    local_11c = &DAT_00cb8588 + *(int *)(param_1[0x92] + 6) * 0x12;
    local_120 = 0xfffffffe;
  }
  local_124 = local_124 & 0xffffff00;
  local_128 = *(undefined4 **)(local_11c + 4);
  while (local_128 != (undefined4 *)0x0) {
    puVar1 = local_128 + 2;
    local_12c = *local_128;
    local_128 = (undefined4 *)*puVar1;
    if (((local_124 & 0xff) == 0) &&
       (cVar3 = FUN_005beaed(param_1[0x92],local_12c,local_120), cVar3 == '\0')) {
      local_124 = CONCAT31(local_124._1_3_,1);
      FUN_007a74f0(local_114,local_12c);
    }
  }
  if ((local_124 & 0xff) == 0) {
    local_130 = 0;
    cVar3 = (**(code **)(*param_1 + 0x2c))();
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*param_1 + 0x30))();
      if (cVar3 == '\0') {
        iVar4 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
        if (iVar4 < 6) {
          local_130 = FUN_0042b6c9(s_UNITNAMECORPS_00859900);
        }
        else {
          local_130 = FUN_0042b6c9(s_UNITNAMEARMY_00859910);
        }
      }
      else {
        local_130 = FUN_0042b6c9(s_UNITNAMEAIRFLEET_008598ec);
      }
    }
    else {
      iVar4 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
      if (iVar4 < 6) {
        local_130 = FUN_0042b6c9(s_UNITNAMESQUADRON_008598c8);
      }
      else {
        local_130 = FUN_0042b6c9(s_UNITNAMEFLEET_008598dc);
      }
    }
    local_134 = 1;
    while( true ) {
      local_15c[0] = &DAT_00859920;
      local_15c[1] = &DAT_00859924;
      local_15c[2] = &DAT_00859928;
      local_15c[3] = &DAT_0085992c;
      local_14c = &DAT_00859930;
      local_148 = &DAT_00859934;
      local_144 = &DAT_00859938;
      local_140 = &DAT_0085993c;
      local_13c = &DAT_00859940;
      local_138 = &DAT_00859944;
      if (local_134 % 100 == 0xd) {
        uVar6 = local_130;
        uVar5 = FUN_0042b6c9(&DAT_00859948);
        FUN_007a630a(local_114,s__d_s__s_0085994c,local_134,uVar5,uVar6);
      }
      else if (local_134 % 100 == 0xc) {
        uVar6 = local_130;
        uVar5 = FUN_0042b6c9(&DAT_00859954);
        FUN_007a630a(local_114,s__d_s__s_00859958,local_134,uVar5,uVar6);
      }
      else if (local_134 % 100 == 0xb) {
        uVar6 = local_130;
        uVar5 = FUN_0042b6c9(&DAT_00859960);
        FUN_007a630a(local_114,s__d_s__s_00859964,local_134,uVar5,uVar6);
      }
      else {
        uVar6 = local_130;
        uVar5 = FUN_0042b6c9(local_15c[local_134 % 10]);
        FUN_007a630a(local_114,s__d_s__s_0085996c,local_134,uVar5,uVar6);
      }
      cVar3 = FUN_005beaed(param_1[0x92],local_114,local_120);
      if (cVar3 == '\0') break;
      local_134 = local_134 + 1;
    }
  }
  local_d5 = 0;
  local_1c4 = operator_new(0xc);
  local_8 = 0;
  if (local_1c4 == (undefined4 *)0x0) {
    local_1c4 = (undefined4 *)0x0;
  }
  else {
    iVar4 = param_1[0x92];
    local_1c0 = operator_new(0x54);
    local_8._0_1_ = 1;
    if (local_1c0 == (void *)0x0) {
      local_1c0 = (void *)0x0;
    }
    else {
      FUN_0042d2d0();
      *(undefined2 *)((int)local_1c0 + 8) = 0;
      *(undefined4 *)((int)local_1c0 + 10) = 0;
      *(undefined2 *)((int)local_1c0 + 0xe) = 0;
      *(undefined4 *)((int)local_1c0 + 0x10) = 0;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_1c4[1] = local_1c0;
    *(undefined1 *)(local_1c4 + 2) = 0;
    *(undefined1 *)((int)local_1c4 + 9) = 1;
    *local_1c4 = &PTR_LAB_007e3ebc;
    *local_1c4 = &PTR_FUN_007ea07c;
    *(undefined1 *)((int)local_1c4 + 10) = 0;
    *(undefined2 *)local_1c4[1] = 0x3a;
    iVar2 = local_1c4[1];
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar4 + 4);
    *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(iVar4 + 8);
    local_1a4 = local_1a4 & 0xff000000;
    iVar4 = local_1c4[1];
    *(uint *)(iVar4 + 2) = local_1a4;
    *(undefined2 *)(iVar4 + 6) = 0;
    *local_1c4 = &PTR_FUN_007ea05c;
    iVar4 = local_1c4[1];
    *(int *)(iVar4 + 0xe) = param_1[6];
    *(short *)(iVar4 + 0x12) = (short)param_1[7];
    FUN_007a74f0(local_1c4[1] + 0x14,local_114);
  }
  local_8 = 0xffffffff;
  local_118 = local_1c4;
  FUN_00565c30(local_1c4);
  ExceptionList = local_10;
  return;
}


