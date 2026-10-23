// FUN_004c815f @ 4c815f size=2231

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_004c815f(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  float fVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  float10 fVar6;
  int iVar7;
  int local_134;
  undefined4 *local_130;
  int *local_12c;
  int local_128;
  int *local_124;
  int local_120;
  undefined4 *local_11c;
  int *local_118;
  int local_114;
  undefined4 *local_e0;
  int local_94;
  undefined1 local_90;
  int *local_8c;
  int *local_88;
  undefined1 local_84;
  int *local_80;
  float local_7c;
  int local_78;
  bool local_74;
  undefined3 uStack_73;
  undefined4 *local_70;
  int local_6c;
  int local_68;
  int *local_64;
  int *local_60;
  int local_5c;
  float local_58;
  undefined4 *local_54;
  int local_50;
  undefined1 local_4c;
  undefined **local_48;
  int local_44;
  uint local_40;
  int local_3c;
  undefined **local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  undefined1 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_007bf1bf;
  local_10 = ExceptionList;
  local_20 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_24 = &PTR_FUN_007e7c38;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_48 = &PTR_FUN_007e7c1c;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_38 = &PTR_LAB_007e5e04;
  local_8._1_3_ = 0;
  local_8._0_1_ = 2;
  ExceptionList = &local_10;
  pvVar3 = operator_new(0xe);
  local_8._0_1_ = 3;
  if (pvVar3 == (void *)0x0) {
    local_114 = 0;
  }
  else {
    local_114 = FUN_004cfd80(param_1,0,0);
  }
  local_8._0_1_ = 2;
  local_30 = local_114;
  if (local_2c == 0) {
    local_34 = local_114;
  }
  else {
    _DAT_00000008 = local_114;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    local_4c = 1;
  }
  if (param_1 == param_2) {
    local_84 = 1;
    local_8._0_1_ = 1;
    local_38 = &PTR_LAB_007e5e04;
    local_2c = local_2c + 1;
    FUN_0045b910();
    local_8 = (uint)local_8._1_3_ << 8;
    local_48 = &PTR_FUN_007e7c1c;
    FUN_004cf670();
    local_8 = 0xffffffff;
    local_24 = &PTR_FUN_007e7c38;
    FUN_004cf450();
  }
  else {
    local_50 = param_1 + 0x3a;
    local_2c = local_2c + 1;
    for (local_54 = *(undefined4 **)(param_1 + 0x3e); local_54 != (undefined4 *)0x0;
        local_54 = (undefined4 *)local_54[2]) {
      local_5c = *(int *)*local_54;
      if (*(int *)(local_5c + 0x4c) == 0) {
        fVar6 = (float10)(**(code **)*param_3)(local_5c);
        local_58 = (float)fVar6;
        if (_DAT_007e3380 <= local_58) {
          local_8c = operator_new(0xc);
          puVar1 = local_1c;
          if (local_8c == (int *)0x0) {
            local_118 = (int *)0x0;
          }
          else {
            *local_8c = local_5c;
            local_8c[1] = (int)local_58;
            local_8c[2] = 0;
            local_118 = local_8c;
          }
          local_88 = local_118;
          local_60 = local_118;
          pvVar3 = operator_new(0xe);
          local_8._0_1_ = 4;
          if (pvVar3 == (void *)0x0) {
            local_11c = (undefined4 *)0x0;
          }
          else {
            local_11c = (undefined4 *)FUN_004cfdc0(local_60,puVar1,0);
          }
          local_8._0_1_ = 2;
          local_1c = local_11c;
          if (local_18 == 0) {
            local_20 = local_11c;
          }
          else {
            puVar1[2] = local_11c;
          }
          if (local_44 == 0) {
            local_40 = 1;
            local_3c = 1;
            local_18 = local_18 + 1;
            pvVar3 = operator_new(0xc);
            local_8._0_1_ = 5;
            if (pvVar3 == (void *)0x0) {
              local_120 = 0;
            }
            else {
              local_120 = FUN_004cfe00(local_60,0,0);
            }
            local_8._0_1_ = 2;
            local_44 = local_120;
          }
          else {
            local_40 = local_40 + 1;
            if ((uint)(local_3c << 1) <= local_40) {
              local_3c = local_3c << 1;
            }
            local_18 = local_18 + 1;
            FUN_004cfe30(local_60,local_40,local_3c,local_3c);
          }
        }
      }
    }
    while (local_40 != 0) {
      if (local_40 == 0) {
        local_124 = (int *)0x0;
      }
      else {
        uVar4 = FUN_004cf950();
        local_124 = (int *)FUN_004cfa90(uVar4);
      }
      iVar7 = local_30;
      local_64 = local_124;
      local_68 = *local_124;
      pvVar3 = operator_new(0xe);
      local_8._0_1_ = 6;
      if (pvVar3 == (void *)0x0) {
        local_128 = 0;
      }
      else {
        local_128 = FUN_004cfd80(local_68,iVar7,0);
      }
      local_8._0_1_ = 2;
      local_30 = local_128;
      if (local_2c == 0) {
        local_34 = local_128;
      }
      else {
        *(int *)(iVar7 + 8) = local_128;
      }
      if (local_68 == param_2) {
        local_2c = local_2c + 1;
        FUN_004c9f81();
        if (local_64[2] == 0) {
          FUN_004cf3b0(*local_64);
        }
        else {
          FUN_004cf3b0(*local_64);
          FUN_004ccf50(param_4);
        }
        local_e0 = local_20;
        while (local_e0 != (undefined4 *)0x0) {
          puVar1 = (undefined4 *)local_e0[2];
          FUN_00796cd8(*local_e0);
          FUN_00796cd8(local_e0);
          local_e0 = puVar1;
        }
        local_20 = (undefined4 *)0x0;
        local_1c = (undefined4 *)0x0;
        local_18 = 0;
        local_90 = 1;
        local_8._0_1_ = 1;
        local_38 = &PTR_LAB_007e5e04;
        FUN_0045b910();
        local_8 = (uint)local_8._1_3_ << 8;
        local_48 = &PTR_FUN_007e7c1c;
        FUN_004cf670();
        local_8 = 0xffffffff;
        local_24 = &PTR_FUN_007e7c38;
        FUN_004cf450();
        ExceptionList = local_10;
        return local_90;
      }
      local_6c = local_68 + 0x3a;
      local_2c = local_2c + 1;
      for (local_70 = *(undefined4 **)(local_68 + 0x3e); local_70 != (undefined4 *)0x0;
          local_70 = (undefined4 *)local_70[2]) {
        iVar7 = *(int *)*local_70;
        uVar5 = (uint)(*(int *)(iVar7 + 0x4c) == 0);
        local_78 = iVar7;
        if (uVar5 != 0) {
          FUN_00459da0(local_34);
          (*(code *)local_38[0xb])(&local_94,uVar5,iVar7);
          _local_74 = CONCAT31(uStack_73,local_94 != 0);
          if (local_94 == 0) {
            fVar6 = (float10)(**(code **)*param_3)(local_78);
            local_7c = (float)fVar6;
            if (local_78 == param_2) {
              local_7c = 0.0;
            }
            if (_DAT_007e3380 <= local_7c) {
              local_12c = operator_new(0xc);
              puVar1 = local_1c;
              if (local_12c == (int *)0x0) {
                local_12c = (int *)0x0;
              }
              else {
                fVar2 = (float)local_64[1];
                *local_12c = local_78;
                local_12c[1] = (int)(fVar2 + local_7c);
                local_12c[2] = (int)local_64;
              }
              local_80 = local_12c;
              pvVar3 = operator_new(0xe);
              local_8._0_1_ = 7;
              if (pvVar3 == (void *)0x0) {
                local_130 = (undefined4 *)0x0;
              }
              else {
                local_130 = (undefined4 *)FUN_004cfdc0(local_80,puVar1,0);
              }
              local_8._0_1_ = 2;
              local_1c = local_130;
              if (local_18 == 0) {
                local_20 = local_130;
              }
              else {
                puVar1[2] = local_130;
              }
              if (local_44 == 0) {
                local_40 = 1;
                local_3c = 1;
                local_18 = local_18 + 1;
                pvVar3 = operator_new(0xc);
                local_8._0_1_ = 8;
                if (pvVar3 == (void *)0x0) {
                  local_134 = 0;
                }
                else {
                  local_134 = FUN_004cfe00(local_80,0,0);
                }
                local_8._0_1_ = 2;
                local_44 = local_134;
              }
              else {
                local_40 = local_40 + 1;
                if ((uint)(local_3c << 1) <= local_40) {
                  local_3c = local_3c << 1;
                }
                local_18 = local_18 + 1;
                FUN_004cfe30(local_80,local_40,local_3c,local_3c);
              }
            }
          }
        }
      }
    }
    FUN_004cfc90(&local_24);
    local_8._0_1_ = 1;
    local_38 = &PTR_LAB_007e5e04;
    FUN_0045b910();
    local_8 = (uint)local_8._1_3_ << 8;
    local_48 = &PTR_FUN_007e7c1c;
    FUN_004cf670();
    local_8 = 0xffffffff;
    local_24 = &PTR_FUN_007e7c38;
    FUN_004cf450();
    local_84 = 0;
  }
  ExceptionList = local_10;
  return local_84;
}


