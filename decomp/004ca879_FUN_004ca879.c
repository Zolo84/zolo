// FUN_004ca879 @ 4ca879 size=2868

void __thiscall FUN_004ca879(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *local_208;
  undefined4 *local_204;
  int *local_1f4;
  undefined4 *local_1b0;
  undefined1 local_198 [4];
  undefined1 local_194 [4];
  int local_190;
  int *local_18c;
  int *local_188;
  int local_184;
  int local_180;
  int *local_17c;
  int *local_178;
  int *local_174;
  int local_170;
  int *local_16c;
  undefined1 local_168 [4];
  int *local_164;
  int local_160;
  int local_15c;
  int *local_158;
  int local_154;
  int *local_150;
  undefined1 local_14c [4];
  int local_148;
  int *local_144;
  int local_140;
  int local_13c;
  int local_138;
  int *local_134;
  undefined1 local_130 [4];
  int *local_12c;
  undefined1 *local_128;
  undefined4 *local_124;
  undefined4 *local_120;
  undefined4 *local_11c;
  undefined4 local_118;
  undefined4 *local_114;
  int local_110;
  int local_10c;
  int *local_108;
  int *local_104;
  int *local_100;
  undefined1 local_fc [4];
  int *local_f8;
  int local_f4;
  int local_f0;
  int *local_ec;
  int local_e8;
  int *local_e4;
  undefined1 local_e0 [4];
  int local_dc;
  int *local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int *local_c8;
  int *local_c4;
  undefined1 local_c0 [4];
  int *local_bc;
  undefined4 local_b8;
  undefined4 *local_b4;
  int *local_b0;
  int *local_ac;
  int *local_a8;
  undefined1 local_a4;
  int *local_a0;
  int *local_9c;
  int *local_98;
  int *local_94;
  int *local_90;
  undefined4 *local_8c;
  undefined4 local_88 [2];
  int *local_80;
  undefined4 *local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 *local_64;
  undefined1 local_60;
  int *local_5c;
  int local_58;
  int *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int *local_30;
  int local_2c;
  undefined **local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  undefined1 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007bf286;
  local_10 = ExceptionList;
  local_ac = (int *)param_1[0xb];
  ExceptionList = &local_10;
  local_14 = local_ac;
  while (local_14 != (int *)0x0) {
    local_b0 = local_14;
    piVar1 = (int *)local_14[2];
    local_80 = local_14;
    local_3c = *local_14;
    *(undefined4 *)(local_3c + 0x482) = 0;
    local_14 = piVar1;
  }
  local_c4 = (int *)FUN_004ce890(0,0);
  local_2c = 0;
  local_8 = 0;
  local_b4 = (undefined4 *)param_1[0xb];
  local_b8 = *local_b4;
  local_bc = local_c4;
  local_8c = local_b4;
  local_88[0] = local_b8;
  local_30 = local_c4;
  FUN_004ce730(local_c0,local_c4,local_88);
  local_c8 = (int *)param_1[0xb];
  local_cc = *local_c8;
  *(int **)(local_cc + 0x482) = param_1;
  local_90 = local_c8;
  while (local_d0 = local_2c, local_2c != 0) {
    local_d8 = local_30;
    local_d4 = local_30[1];
    local_40 = *(int *)(local_d4 + 8);
    local_e4 = local_30;
    local_dc = local_30[1];
    FUN_004ce820(local_e0,local_dc);
    local_44 = *(int *)(local_40 + 0x290);
    for (local_48 = 0; local_48 < local_44; local_48 = local_48 + 1) {
      local_e8 = *(int *)(*(int *)(local_40 + 0x298) + local_48 * 0xc);
      local_4c = DAT_00ab27b4 + local_e8 * 0x4b2;
      local_ec = *(int **)(local_4c + 0x3d8);
      if ((local_ec == param_3) && (local_f0 = *(int *)(local_4c + 0x482), local_f0 == 0)) {
        *(int **)(local_4c + 0x482) = param_1;
        local_100 = local_30;
        local_f8 = local_30;
        local_f4 = local_4c;
        FUN_004ce730(local_fc,local_30,&local_4c);
      }
    }
  }
  local_38 = local_38 & 0xffffff00;
  local_24 = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_28 = &PTR_FUN_007e6eac;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_104 = (int *)param_1[0xb];
  local_94 = local_104;
  local_14 = local_104;
  while (local_14 != (int *)0x0) {
    local_108 = local_14;
    piVar1 = (int *)local_14[2];
    local_98 = local_14;
    local_10c = *local_14;
    local_110 = *(int *)(local_10c + 0x482);
    local_50 = local_10c;
    local_14 = piVar1;
    if (local_110 == 0) {
      if ((local_38 & 0xff) == 0) {
        local_38 = CONCAT31(local_38._1_3_,1);
        local_114 = (undefined4 *)param_1[0xb];
        for (local_64 = local_114; local_64 != (undefined4 *)0x0;
            local_64 = (undefined4 *)local_64[2]) {
          local_118 = *local_64;
          local_11c = local_20;
          local_124 = operator_new(0xe);
          if (local_124 == (undefined4 *)0x0) {
            local_204 = (undefined4 *)0x0;
          }
          else {
            *local_124 = local_118;
            local_124[1] = local_11c;
            local_124[2] = 0;
            *(undefined1 *)(local_124 + 3) = 0;
            local_204 = local_124;
          }
          local_120 = local_204;
          local_20 = local_204;
          if (local_1c == 0) {
            local_24 = local_204;
          }
          else {
            local_11c[2] = local_204;
          }
          local_1c = local_1c + 1;
        }
      }
      local_a0 = operator_new(0x70);
      local_8._0_1_ = 2;
      if (local_a0 == (int *)0x0) {
        local_208 = (int *)0x0;
      }
      else {
        FUN_004cd000(0);
        local_128 = (undefined1 *)((int)local_a0 + 0x66);
        *(undefined2 *)((int)local_a0 + 0x6a) = 0;
        *(undefined1 *)(local_a0 + 0x1a) = 0;
        *(undefined1 *)((int)local_a0 + 0x67) = 0;
        *local_128 = 0;
        *local_a0 = (int)&PTR_FUN_007e7d34;
        *(undefined4 *)((int)local_a0 + 0x56) = 0;
        *(undefined4 *)((int)local_a0 + 0x5a) = 0;
        *(undefined4 *)((int)local_a0 + 0x5e) = 0;
        local_a0[0x1b] = 0;
        local_208 = local_a0;
      }
      local_9c = local_208;
      local_8._0_1_ = 1;
      local_54 = local_208;
      local_60 = local_a4;
      local_134 = (int *)FUN_004ce890(0,0);
      local_58 = 0;
      local_8 = CONCAT31(local_8._1_3_,3);
      local_12c = local_134;
      local_5c = local_134;
      FUN_004ce730(local_130,local_134,&local_50);
      local_138 = local_50;
      *(int **)(local_50 + 0x482) = local_54;
      (**(code **)(*param_1 + 0x10))(local_50);
      (**(code **)(*local_54 + 0xc))(local_50);
      while (local_13c = local_58, local_58 != 0) {
        local_144 = local_5c;
        local_140 = local_5c[1];
        local_68 = *(int *)(local_140 + 8);
        local_150 = local_5c;
        local_148 = local_5c[1];
        FUN_004ce820(local_14c,local_148);
        local_6c = *(int *)(local_68 + 0x290);
        for (local_70 = 0; local_70 < local_6c; local_70 = local_70 + 1) {
          local_154 = *(int *)(*(int *)(local_68 + 0x298) + local_70 * 0xc);
          local_74 = DAT_00ab27b4 + local_154 * 0x4b2;
          local_158 = *(int **)(local_74 + 0x3d8);
          if ((local_158 == param_3) && (local_15c = *(int *)(local_74 + 0x482), local_15c == 0)) {
            *(int **)(local_74 + 0x482) = local_54;
            local_160 = local_74;
            (**(code **)(*param_1 + 0x10))(local_74);
            (**(code **)(*local_54 + 0xc))(local_74);
            local_16c = local_5c;
            local_164 = local_5c;
            FUN_004ce730(local_168,local_5c,&local_74);
          }
          else {
            local_170 = *(int *)(local_74 + 0x482);
            if ((local_170 != 0) && (local_174 = *(int **)(local_74 + 0x482), local_174 != local_54)
               ) {
              local_78 = *(undefined4 *)(local_74 + 0x482);
              FUN_004ca017(local_54,1);
              FUN_004ca017(local_78,1);
              FUN_004ca017(param_1,0xffffffff);
              FUN_004ca017(local_78,0xffffffff);
            }
          }
        }
      }
      FUN_004c968b();
      (**(code **)(*param_3 + 0xb0))(local_54);
      piVar2 = local_5c;
      local_178 = (int *)param_1[0xb];
      local_8 = CONCAT31(local_8._1_3_,1);
      local_188 = local_5c;
      local_17c = local_5c;
      local_18c = local_5c;
      piVar1 = (int *)*local_5c;
      local_190 = (int)piVar1;
      local_180 = (int)piVar1;
      local_a8 = local_178;
      local_14 = local_178;
      while (piVar1 != piVar2) {
        puVar3 = (undefined4 *)FUN_004ce910(local_194,0);
        FUN_004ce820(local_198,*puVar3);
      }
      local_184 = (int)piVar1;
      FUN_00796cd8(local_5c);
      local_5c = (int *)0x0;
      local_58 = 0;
    }
  }
  if ((local_38 & 0xff) != 0) {
    for (local_7c = local_24; local_7c != (undefined4 *)0x0; local_7c = (undefined4 *)local_7c[2]) {
      FUN_004ea310();
    }
  }
  local_8 = local_8 & 0xffffff00;
  local_28 = &PTR_FUN_007e6eac;
  local_1b0 = local_24;
  while (piVar1 = local_30, local_1b0 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)local_1b0[2];
    FUN_00796cd8(local_1b0);
    local_1b0 = puVar3;
  }
  local_24 = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_8 = 0xffffffff;
  local_1f4 = (int *)*local_30;
  while (local_1f4 != piVar1) {
    piVar2 = (int *)*local_1f4;
    *(int *)local_1f4[1] = *local_1f4;
    *(int *)(*local_1f4 + 4) = local_1f4[1];
    FUN_00796cd8(local_1f4);
    local_2c = local_2c + -1;
    local_1f4 = piVar2;
  }
  FUN_00796cd8(local_30);
  ExceptionList = local_10;
  return;
}


