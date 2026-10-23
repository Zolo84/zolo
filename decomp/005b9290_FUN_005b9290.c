// FUN_005b9290 @ 5b9290 size=2652

undefined4 FUN_005b9290(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined2 uVar8;
  int local_190;
  undefined4 *local_188;
  undefined4 local_184;
  undefined4 *local_180;
  undefined4 local_17c;
  undefined4 *local_178;
  undefined4 local_174;
  int local_170;
  undefined4 *local_168;
  undefined4 *local_164;
  undefined4 *local_160;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007cc350;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  uVar5 = (**(code **)(*param_1 + 8))();
  switch(uVar5) {
  case 0x19:
    FUN_005bd940();
    break;
  case 0x2c:
    iVar2 = param_1[1];
    local_188 = operator_new(0xc);
    local_8 = 9;
    if (local_188 == (undefined4 *)0x0) {
      local_188 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined1 *)(iVar2 + 0x14);
      pvVar6 = operator_new(0x16);
      local_8._0_1_ = 10;
      if (pvVar6 == (void *)0x0) {
        local_184 = 0;
      }
      else {
        local_184 = FUN_005c0560();
      }
      local_8._0_1_ = 9;
      FUN_0042d320(local_184);
      local_8 = CONCAT31(local_8._1_3_,0xb);
      *local_188 = &PTR_FUN_007e9afc;
      *(undefined1 *)((int)local_188 + 10) = 0;
      *(undefined2 *)local_188[1] = 0x2c;
      iVar3 = local_188[1];
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 0xe);
      *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(iVar2 + 0x12);
      puVar7 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar3 = local_188[1];
      *(undefined4 *)(iVar3 + 2) = *puVar7;
      *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar7 + 1);
      *local_188 = &PTR_FUN_007e9adc;
      iVar3 = local_188[1];
      *(undefined4 *)(iVar3 + 0xe) = *(undefined4 *)(iVar2 + 0xe);
      *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(iVar2 + 0x12);
      *(undefined1 *)(local_188[1] + 0x14) = uVar1;
    }
    local_8 = 0xffffffff;
    FUN_00565bc0(local_188);
    ExceptionList = local_10;
    return 3;
  case 0x34:
    iVar2 = param_1[1];
    uVar8 = 0x5b;
    local_190 = FUN_00428ee0(iVar2 + 0xe);
    if (local_190 == 0) {
      local_190 = 0;
    }
    else {
      local_190 = local_190 + -0x14;
    }
    local_14 = FUN_005bb48f(local_190,*(undefined2 *)(iVar2 + 0x14),
                            CONCAT31((int3)((uint)*(undefined4 *)(iVar2 + 0x18) >> 8),
                                     *(undefined1 *)(iVar2 + 0x16)),*(undefined4 *)(iVar2 + 0x18),
                            CONCAT22(uVar8,*(undefined2 *)(iVar2 + 0x1c)),0);
    break;
  case 0x38:
    local_14 = FUN_005b9de6(param_1);
    break;
  case 0x3c:
    local_14 = FUN_005ba0ae(param_1);
    break;
  case 0x88:
    iVar2 = param_1[1];
    iVar3 = (&DAT_0089cad8)[*(int *)(iVar2 + 0x14)];
    local_170 = FUN_00428ee0(iVar2 + 0xe);
    if (local_170 == 0) {
      local_170 = 0;
    }
    else {
      local_170 = local_170 + -0x14;
    }
    if ((((iVar3 != 0) && (local_170 != 0)) && (*(char *)(local_170 + 0x17d) == '\0')) &&
       (*(int *)(local_170 + 0x248) != 0)) {
      uVar5 = *(undefined4 *)(*(int *)(local_170 + 0x248) + 6);
      local_178 = operator_new(0xc);
      uVar8 = DAT_0088f28c;
      local_8 = 3;
      if (local_178 == (undefined4 *)0x0) {
        local_178 = (undefined4 *)0x0;
      }
      else {
        uStack_7a = (undefined2)DAT_0088f28e;
        uStack_78 = (undefined2)((uint)DAT_0088f28e >> 0x10);
        pvVar6 = operator_new(0x20);
        local_8._0_1_ = 4;
        if (pvVar6 == (void *)0x0) {
          local_174 = 0;
        }
        else {
          local_174 = FUN_004666c0();
        }
        local_8._0_1_ = 3;
        FUN_0042d320(local_174);
        local_8 = CONCAT31(local_8._1_3_,5);
        *local_178 = &PTR_FUN_007e5e5c;
        *(undefined1 *)((int)local_178 + 10) = 0;
        *(undefined2 *)local_178[1] = 0xa8;
        iVar4 = local_178[1];
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 4);
        *(undefined2 *)(iVar4 + 0xc) = *(undefined2 *)(iVar3 + 8);
        puVar7 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
        iVar3 = local_178[1];
        *(undefined4 *)(iVar3 + 2) = *puVar7;
        *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar7 + 1);
        *local_178 = &PTR_FUN_007e5370;
        iVar3 = local_178[1];
        *(undefined4 *)(iVar3 + 0xe) = *(undefined4 *)(local_170 + 0x18);
        *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(local_170 + 0x1c);
        *(undefined1 *)(local_178[1] + 0x14) = 1;
        *(undefined1 *)(local_178[1] + 0x15) = 0;
        *(undefined4 *)(local_178[1] + 0x16) = 0;
        iVar3 = local_178[1];
        *(uint *)(iVar3 + 0x1a) = CONCAT22(uStack_7a,uVar8);
        *(undefined2 *)(iVar3 + 0x1e) = uStack_78;
      }
      local_8 = 0xffffffff;
      FUN_00565bc0(local_178);
      local_180 = operator_new(0xc);
      local_8 = 6;
      if (local_180 == (undefined4 *)0x0) {
        local_180 = (undefined4 *)0x0;
      }
      else {
        uVar1 = *(undefined1 *)(param_1[1] + 0x18);
        pvVar6 = operator_new(0x1a);
        local_8._0_1_ = 7;
        if (pvVar6 == (void *)0x0) {
          local_17c = 0;
        }
        else {
          local_17c = FUN_005c04f0();
        }
        local_8._0_1_ = 6;
        FUN_0042d320(local_17c);
        local_8 = CONCAT31(local_8._1_3_,8);
        *local_180 = &PTR_FUN_007e5fc0;
        *(undefined1 *)((int)local_180 + 10) = 0;
        *(undefined2 *)local_180[1] = 0x88;
        iVar3 = local_180[1];
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 0xe);
        *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(iVar2 + 0x12);
        puVar7 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
        iVar3 = local_180[1];
        *(undefined4 *)(iVar3 + 2) = *puVar7;
        *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar7 + 1);
        *local_180 = &PTR_FUN_007e5fa0;
        iVar3 = local_180[1];
        *(undefined4 *)(iVar3 + 0xe) = *(undefined4 *)(iVar2 + 0xe);
        *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(iVar2 + 0x12);
        *(undefined4 *)(local_180[1] + 0x14) = uVar5;
        *(undefined1 *)(local_180[1] + 0x18) = uVar1;
      }
      local_8 = 0xffffffff;
      FUN_00565bc0(local_180);
    }
    ExceptionList = local_10;
    return 3;
  case 0xe8:
    local_160 = operator_new(0xc);
    local_8 = 0;
    if (local_160 == (undefined4 *)0x0) {
      local_160 = (undefined4 *)0x0;
    }
    else {
      iVar2 = param_1[1];
      iVar3 = param_1[1];
      FUN_005c0270(0xe8,param_1[1] + 0x14);
      *local_160 = &PTR_FUN_007e5ee0;
      iVar4 = local_160[1];
      *(undefined4 *)(iVar4 + 0xe) = *(undefined4 *)(iVar3 + 0xe);
      *(undefined2 *)(iVar4 + 0x12) = *(undefined2 *)(iVar3 + 0x12);
      iVar3 = local_160[1];
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
      *(undefined2 *)(iVar3 + 0x18) = *(undefined2 *)(iVar2 + 0x18);
    }
    local_8 = 0xffffffff;
    FUN_00565bc0(local_160);
    break;
  case 0xe9:
    local_164 = operator_new(0xc);
    local_8 = 1;
    if (local_164 == (undefined4 *)0x0) {
      local_164 = (undefined4 *)0x0;
    }
    else {
      iVar2 = param_1[1];
      iVar3 = param_1[1];
      FUN_005c0270(0xe9,param_1[1] + 0x14);
      *local_164 = &PTR_FUN_007e5ee0;
      iVar4 = local_164[1];
      *(undefined4 *)(iVar4 + 0xe) = *(undefined4 *)(iVar3 + 0xe);
      *(undefined2 *)(iVar4 + 0x12) = *(undefined2 *)(iVar3 + 0x12);
      iVar3 = local_164[1];
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
      *(undefined2 *)(iVar3 + 0x18) = *(undefined2 *)(iVar2 + 0x18);
    }
    local_8 = 0xffffffff;
    FUN_00565bc0(local_164);
    break;
  case 0xea:
    local_168 = operator_new(0xc);
    local_8 = 2;
    if (local_168 == (undefined4 *)0x0) {
      local_168 = (undefined4 *)0x0;
    }
    else {
      iVar2 = param_1[1];
      iVar3 = param_1[1];
      FUN_005c0270(0xea,param_1[1] + 0x14);
      *local_168 = &PTR_FUN_007e5ee0;
      iVar4 = local_168[1];
      *(undefined4 *)(iVar4 + 0xe) = *(undefined4 *)(iVar3 + 0xe);
      *(undefined2 *)(iVar4 + 0x12) = *(undefined2 *)(iVar3 + 0x12);
      iVar3 = local_168[1];
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
      *(undefined2 *)(iVar3 + 0x18) = *(undefined2 *)(iVar2 + 0x18);
    }
    local_8 = 0xffffffff;
    FUN_00565bc0(local_168);
  }
  ExceptionList = local_10;
  return local_14;
}


