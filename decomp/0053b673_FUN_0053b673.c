// FUN_0053b673 @ 53b673 size=11095

int * FUN_0053b673(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_7998;
  undefined4 *local_7990;
  int local_798c;
  int local_7988;
  undefined4 *local_7984;
  int *local_797c;
  int local_7978;
  int local_7974;
  int *local_796c;
  int local_7964;
  int local_7960;
  int local_795c;
  int local_7958;
  undefined4 *local_7950;
  int local_794c;
  int local_7948;
  undefined4 *local_7944;
  undefined4 *local_793c;
  int local_7938;
  int local_7934;
  undefined4 *local_7930;
  undefined4 *local_7928;
  int local_7924;
  int local_7920;
  undefined4 *local_791c;
  undefined4 *local_7914;
  int local_7910;
  int local_790c;
  undefined4 *local_7908;
  undefined4 *local_7900;
  int local_78fc;
  int local_78f8;
  undefined4 *local_78f4;
  undefined4 *local_78ec;
  int local_78e8;
  int local_78e4;
  undefined4 *local_78e0;
  undefined4 *local_78d8;
  int local_78d4;
  int local_78d0;
  undefined4 *local_78cc;
  undefined4 *local_78c4;
  int local_78c0;
  int local_78bc;
  undefined4 *local_78b8;
  undefined4 *local_78b0;
  int local_78ac;
  int local_78a8;
  undefined4 *local_78a4;
  undefined4 *local_789c;
  int local_7898;
  int local_7894;
  undefined4 *local_7890;
  undefined4 *local_7888;
  int local_7884;
  int local_7880;
  undefined4 *local_787c;
  undefined4 *local_7874;
  int local_7870;
  int local_786c;
  undefined4 *local_7868;
  undefined4 *local_7860;
  int local_785c;
  int local_7858;
  undefined4 *local_7854;
  int local_784c;
  int local_7848;
  int local_7844;
  undefined4 *local_783c;
  int local_7838;
  int local_7834;
  undefined4 *local_7830;
  undefined4 *local_782c;
  int local_7828;
  int local_7824;
  int local_7820;
  int local_781c;
  undefined4 *local_7818;
  int local_7814;
  int local_7810;
  int local_780c;
  int local_7808;
  int *local_7804;
  int local_77ec;
  undefined2 *local_77e4;
  undefined4 local_75c8 [66];
  undefined4 local_74c0 [66];
  void *local_73b8;
  int local_73b4;
  undefined4 *local_73b0;
  undefined4 *local_73ac;
  void *local_73a8;
  int local_73a4;
  undefined4 *local_73a0;
  undefined4 *local_739c;
  int *local_7398;
  int *local_7394;
  int local_7390;
  int local_738c;
  undefined2 local_6f88;
  int local_6f86 [7066];
  int *local_11c;
  int *local_118;
  int local_114;
  undefined4 uStackY_70;
  undefined2 *puStackY_6c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007c2fd4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007a69e0();
  local_7398 = operator_new(0x1e);
  local_8 = 0;
  if (local_7398 == (int *)0x0) {
    local_7804 = (int *)0x0;
  }
  else {
    FUN_00444030();
    *local_7398 = (int)&PTR_FUN_007e492c;
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00444250();
    *local_7398 = (int)&PTR_FUN_007e3a28;
    local_7398[3] = (int)&PTR_LAB_007e39f8;
    local_7804 = local_7398;
  }
  local_7394 = local_7804;
  local_8 = 0xffffffff;
  local_118 = local_7804;
  local_73a0 = operator_new(0x14);
  local_8 = 2;
  if (local_73a0 == (undefined4 *)0x0) {
    local_7818 = (undefined4 *)0x0;
  }
  else {
    local_73a8 = operator_new(0x10);
    local_8._0_1_ = 3;
    if (local_73a8 == (void *)0x0) {
      local_7808 = 0;
    }
    else {
      local_7808 = FUN_0053ee00();
    }
    local_73a4 = local_7808;
    local_73a0[1] = 0;
    local_73a0[2] = 0;
    *local_73a0 = &PTR_LAB_007e38f8;
    local_8._0_1_ = 4;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,5);
    if (pvVar3 == (void *)0x0) {
      local_780c = 0;
    }
    else {
      local_780c = FUN_0053e740();
    }
    if (local_780c == 0) {
      local_7810 = 0;
    }
    else {
      *(int *)(local_780c + 8) = *(int *)(local_780c + 8) + 1;
      local_7810 = local_780c;
    }
    local_73a0[3] = local_7810;
    if (local_73a4 == 0) {
      local_7814 = 0;
    }
    else {
      *(int *)(local_73a4 + 8) = *(int *)(local_73a4 + 8) + 1;
      local_7814 = local_73a4;
    }
    local_73a0[4] = local_7814;
    *local_73a0 = &PTR_FUN_007e3878;
    local_7818 = local_73a0;
  }
  local_739c = local_7818;
  local_8 = 0xffffffff;
  (**(code **)(*local_118 + 0x84))();
  local_73b0 = operator_new(0x14);
  local_8 = 6;
  if (local_73b0 == (undefined4 *)0x0) {
    local_782c = (undefined4 *)0x0;
  }
  else {
    local_73b8 = operator_new(0x10);
    local_8._0_1_ = 7;
    if (local_73b8 == (void *)0x0) {
      local_781c = 0;
    }
    else {
      puVar4 = &DAT_00893640;
      puVar6 = local_75c8;
      for (iVar5 = 0x42; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar4 = local_75c8;
      puVar6 = local_74c0;
      for (iVar5 = 0x42; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      local_781c = FUN_0053ee00();
    }
    local_73b4 = local_781c;
    local_73b0[1] = 0;
    local_73b0[2] = 0;
    *local_73b0 = &PTR_LAB_007e38f8;
    local_8._0_1_ = 8;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,9);
    if (pvVar3 == (void *)0x0) {
      local_7820 = 0;
    }
    else {
      local_7820 = FUN_0053e740();
    }
    if (local_7820 == 0) {
      local_7824 = 0;
    }
    else {
      *(int *)(local_7820 + 8) = *(int *)(local_7820 + 8) + 1;
      local_7824 = local_7820;
    }
    local_73b0[3] = local_7824;
    if (local_73b4 == 0) {
      local_7828 = 0;
    }
    else {
      *(int *)(local_73b4 + 8) = *(int *)(local_73b4 + 8) + 1;
      local_7828 = local_73b4;
    }
    local_73b0[4] = local_7828;
    *local_73b0 = &PTR_FUN_007e3878;
    local_782c = local_73b0;
  }
  local_73ac = local_782c;
  local_8 = 0xffffffff;
  (**(code **)(*local_118 + 0x84))();
  puVar4 = operator_new(0x14);
  local_8 = 10;
  if (puVar4 != (undefined4 *)0x0) {
    local_7830 = operator_new(0xe);
    local_8._0_1_ = 0xb;
    if (local_7830 == (undefined4 *)0x0) {
      local_7830 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined1 *)(extraout_ECX + 0x277d);
      FUN_004252e0();
      *local_7830 = &PTR_FUN_007e49c4;
      *(undefined1 *)(local_7830 + 3) = uVar1;
      *local_7830 = &PTR_FUN_007e76a0;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    local_8._0_1_ = 0xc;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,0xd);
    if (pvVar3 == (void *)0x0) {
      local_7834 = 0;
    }
    else {
      local_7834 = FUN_0053e740();
    }
    if (local_7834 == 0) {
      local_7838 = 0;
    }
    else {
      *(int *)(local_7834 + 8) = *(int *)(local_7834 + 8) + 1;
      local_7838 = local_7834;
    }
    puVar4[3] = local_7838;
    if (local_7830 == (undefined4 *)0x0) {
      local_783c = (undefined4 *)0x0;
    }
    else {
      local_7830[2] = local_7830[2] + 1;
      local_783c = local_7830;
    }
    puVar4[4] = local_783c;
    *puVar4 = &PTR_FUN_007e3878;
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_118 + 0x84))();
  puVar4 = operator_new(0x14);
  local_8 = 0xe;
  if (puVar4 != (undefined4 *)0x0) {
    local_784c = FUN_0054f410();
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    local_8._0_1_ = 0xf;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,0x10);
    if (pvVar3 == (void *)0x0) {
      local_7844 = 0;
    }
    else {
      local_7844 = FUN_0053e740();
    }
    if (local_7844 == 0) {
      local_7848 = 0;
    }
    else {
      *(int *)(local_7844 + 8) = *(int *)(local_7844 + 8) + 1;
      local_7848 = local_7844;
    }
    puVar4[3] = local_7848;
    if (local_784c == 0) {
      local_784c = 0;
    }
    else {
      *(int *)(local_784c + 8) = *(int *)(local_784c + 8) + 1;
    }
    puVar4[4] = local_784c;
    *puVar4 = &PTR_FUN_007e3878;
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_118 + 0x84))();
  puVar4 = operator_new(0x14);
  local_8 = 0x11;
  if (puVar4 != (undefined4 *)0x0) {
    local_7854 = operator_new(0x10);
    local_8._0_1_ = 0x12;
    if (local_7854 == (undefined4 *)0x0) {
      local_7854 = (undefined4 *)0x0;
    }
    else {
      uVar2 = *(undefined4 *)(extraout_ECX + 0x2d0a);
      FUN_004252e0();
      *local_7854 = &PTR_FUN_007e49c4;
      local_7854[3] = uVar2;
      *local_7854 = &PTR_FUN_007e3978;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    local_8._0_1_ = 0x13;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,0x14);
    if (pvVar3 == (void *)0x0) {
      local_7858 = 0;
    }
    else {
      local_7858 = FUN_0053e740();
    }
    if (local_7858 == 0) {
      local_785c = 0;
    }
    else {
      *(int *)(local_7858 + 8) = *(int *)(local_7858 + 8) + 1;
      local_785c = local_7858;
    }
    puVar4[3] = local_785c;
    if (local_7854 == (undefined4 *)0x0) {
      local_7860 = (undefined4 *)0x0;
    }
    else {
      local_7854[2] = local_7854[2] + 1;
      local_7860 = local_7854;
    }
    puVar4[4] = local_7860;
    *puVar4 = &PTR_FUN_007e3878;
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_118 + 0x84))();
  puVar4 = operator_new(0x14);
  local_8 = 0x15;
  if (puVar4 != (undefined4 *)0x0) {
    local_7868 = operator_new(0xe);
    local_8._0_1_ = 0x16;
    if (local_7868 == (undefined4 *)0x0) {
      local_7868 = (undefined4 *)0x0;
    }
    else {
      FUN_004252e0();
      *local_7868 = &PTR_FUN_007e49c4;
      *(undefined1 *)(local_7868 + 3) = 1;
      *local_7868 = &PTR_FUN_007e76a0;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    local_8._0_1_ = 0x17;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,0x18);
    if (pvVar3 == (void *)0x0) {
      local_786c = 0;
    }
    else {
      local_786c = FUN_0053e740();
    }
    if (local_786c == 0) {
      local_7870 = 0;
    }
    else {
      *(int *)(local_786c + 8) = *(int *)(local_786c + 8) + 1;
      local_7870 = local_786c;
    }
    puVar4[3] = local_7870;
    if (local_7868 == (undefined4 *)0x0) {
      local_7874 = (undefined4 *)0x0;
    }
    else {
      local_7868[2] = local_7868[2] + 1;
      local_7874 = local_7868;
    }
    puVar4[4] = local_7874;
    *puVar4 = &PTR_FUN_007e3878;
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_118 + 0x84))();
  puVar4 = operator_new(0x14);
  local_8 = 0x19;
  if (puVar4 != (undefined4 *)0x0) {
    local_787c = operator_new(0xe);
    local_8._0_1_ = 0x1a;
    if (local_787c == (undefined4 *)0x0) {
      local_787c = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined1 *)(extraout_ECX + 0x57c);
      FUN_004252e0();
      *local_787c = &PTR_FUN_007e49c4;
      *(undefined1 *)(local_787c + 3) = uVar1;
      *local_787c = &PTR_FUN_007e76a0;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    local_8._0_1_ = 0x1b;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,0x1c);
    if (pvVar3 == (void *)0x0) {
      local_7880 = 0;
    }
    else {
      local_7880 = FUN_0053e740();
    }
    if (local_7880 == 0) {
      local_7884 = 0;
    }
    else {
      *(int *)(local_7880 + 8) = *(int *)(local_7880 + 8) + 1;
      local_7884 = local_7880;
    }
    puVar4[3] = local_7884;
    if (local_787c == (undefined4 *)0x0) {
      local_7888 = (undefined4 *)0x0;
    }
    else {
      local_787c[2] = local_787c[2] + 1;
      local_7888 = local_787c;
    }
    puVar4[4] = local_7888;
    *puVar4 = &PTR_FUN_007e3878;
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_118 + 0x84))();
  puVar4 = operator_new(0x14);
  local_8 = 0x1d;
  if (puVar4 != (undefined4 *)0x0) {
    local_7890 = operator_new(0xe);
    local_8._0_1_ = 0x1e;
    if (local_7890 == (undefined4 *)0x0) {
      local_7890 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined1 *)(extraout_ECX + 0x2ce8);
      FUN_004252e0();
      *local_7890 = &PTR_FUN_007e49c4;
      *(undefined1 *)(local_7890 + 3) = uVar1;
      *local_7890 = &PTR_FUN_007e76a0;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    local_8._0_1_ = 0x1f;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,0x20);
    if (pvVar3 == (void *)0x0) {
      local_7894 = 0;
    }
    else {
      local_7894 = FUN_0053e740();
    }
    if (local_7894 == 0) {
      local_7898 = 0;
    }
    else {
      *(int *)(local_7894 + 8) = *(int *)(local_7894 + 8) + 1;
      local_7898 = local_7894;
    }
    puVar4[3] = local_7898;
    if (local_7890 == (undefined4 *)0x0) {
      local_789c = (undefined4 *)0x0;
    }
    else {
      local_7890[2] = local_7890[2] + 1;
      local_789c = local_7890;
    }
    puVar4[4] = local_789c;
    *puVar4 = &PTR_FUN_007e3878;
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_118 + 0x84))();
  puVar4 = operator_new(0x14);
  local_8 = 0x21;
  if (puVar4 != (undefined4 *)0x0) {
    local_78a4 = operator_new(0x10);
    local_8._0_1_ = 0x22;
    if (local_78a4 == (undefined4 *)0x0) {
      local_78a4 = (undefined4 *)0x0;
    }
    else {
      uVar2 = *(undefined4 *)(extraout_ECX + 0x2ce4);
      FUN_004252e0();
      *local_78a4 = &PTR_FUN_007e49c4;
      local_78a4[3] = uVar2;
      *local_78a4 = &PTR_FUN_007e3978;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    local_8._0_1_ = 0x23;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,0x24);
    if (pvVar3 == (void *)0x0) {
      local_78a8 = 0;
    }
    else {
      local_78a8 = FUN_0053e740();
    }
    if (local_78a8 == 0) {
      local_78ac = 0;
    }
    else {
      *(int *)(local_78a8 + 8) = *(int *)(local_78a8 + 8) + 1;
      local_78ac = local_78a8;
    }
    puVar4[3] = local_78ac;
    if (local_78a4 == (undefined4 *)0x0) {
      local_78b0 = (undefined4 *)0x0;
    }
    else {
      local_78a4[2] = local_78a4[2] + 1;
      local_78b0 = local_78a4;
    }
    puVar4[4] = local_78b0;
    *puVar4 = &PTR_FUN_007e3878;
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_118 + 0x84))();
  puVar4 = operator_new(0x14);
  local_8 = 0x25;
  if (puVar4 != (undefined4 *)0x0) {
    local_78b8 = operator_new(0x10);
    local_8._0_1_ = 0x26;
    if (local_78b8 == (undefined4 *)0x0) {
      local_78b8 = (undefined4 *)0x0;
    }
    else {
      uVar2 = *(undefined4 *)(*DAT_00d12b40 + 0x362);
      FUN_004252e0();
      *local_78b8 = &PTR_FUN_007e49c4;
      local_78b8[3] = uVar2;
      *local_78b8 = &PTR_FUN_007e3978;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    local_8._0_1_ = 0x27;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,0x28);
    if (pvVar3 == (void *)0x0) {
      local_78bc = 0;
    }
    else {
      local_78bc = FUN_0053e740();
    }
    if (local_78bc == 0) {
      local_78c0 = 0;
    }
    else {
      *(int *)(local_78bc + 8) = *(int *)(local_78bc + 8) + 1;
      local_78c0 = local_78bc;
    }
    puVar4[3] = local_78c0;
    if (local_78b8 == (undefined4 *)0x0) {
      local_78c4 = (undefined4 *)0x0;
    }
    else {
      local_78b8[2] = local_78b8[2] + 1;
      local_78c4 = local_78b8;
    }
    puVar4[4] = local_78c4;
    *puVar4 = &PTR_FUN_007e3878;
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_118 + 0x84))();
  puVar4 = operator_new(0x14);
  local_8 = 0x29;
  if (puVar4 != (undefined4 *)0x0) {
    local_78cc = operator_new(0x10);
    local_8._0_1_ = 0x2a;
    if (local_78cc == (undefined4 *)0x0) {
      local_78cc = (undefined4 *)0x0;
    }
    else {
      uVar2 = *(undefined4 *)(*DAT_00d12b40 + 0x366);
      FUN_00444030();
      local_78cc[3] = uVar2;
      *local_78cc = &PTR_FUN_007e3978;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    local_8._0_1_ = 0x2b;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,0x2c);
    if (pvVar3 == (void *)0x0) {
      local_78d0 = 0;
    }
    else {
      local_78d0 = FUN_0053e740();
    }
    if (local_78d0 == 0) {
      local_78d4 = 0;
    }
    else {
      *(int *)(local_78d0 + 8) = *(int *)(local_78d0 + 8) + 1;
      local_78d4 = local_78d0;
    }
    puVar4[3] = local_78d4;
    if (local_78cc == (undefined4 *)0x0) {
      local_78d8 = (undefined4 *)0x0;
    }
    else {
      local_78cc[2] = local_78cc[2] + 1;
      local_78d8 = local_78cc;
    }
    puVar4[4] = local_78d8;
    *puVar4 = &PTR_FUN_007e3878;
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_118 + 0x84))();
  puVar4 = operator_new(0x14);
  local_8 = 0x2d;
  if (puVar4 != (undefined4 *)0x0) {
    local_78e0 = operator_new(0x10);
    local_8._0_1_ = 0x2e;
    if (local_78e0 == (undefined4 *)0x0) {
      local_78e0 = (undefined4 *)0x0;
    }
    else {
      uVar2 = *(undefined4 *)(*DAT_00d12b40 + 0x36a);
      FUN_00444030();
      local_78e0[3] = uVar2;
      *local_78e0 = &PTR_FUN_007e3978;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    local_8._0_1_ = 0x2f;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,0x30);
    if (pvVar3 == (void *)0x0) {
      local_78e4 = 0;
    }
    else {
      local_78e4 = FUN_0053e740();
    }
    if (local_78e4 == 0) {
      local_78e8 = 0;
    }
    else {
      *(int *)(local_78e4 + 8) = *(int *)(local_78e4 + 8) + 1;
      local_78e8 = local_78e4;
    }
    puVar4[3] = local_78e8;
    if (local_78e0 == (undefined4 *)0x0) {
      local_78ec = (undefined4 *)0x0;
    }
    else {
      local_78e0[2] = local_78e0[2] + 1;
      local_78ec = local_78e0;
    }
    puVar4[4] = local_78ec;
    *puVar4 = &PTR_FUN_007e3878;
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_118 + 0x84))();
  puVar4 = operator_new(0x14);
  local_8 = 0x31;
  if (puVar4 != (undefined4 *)0x0) {
    local_78f4 = operator_new(0x10);
    local_8._0_1_ = 0x32;
    if (local_78f4 == (undefined4 *)0x0) {
      local_78f4 = (undefined4 *)0x0;
    }
    else {
      uVar2 = *(undefined4 *)(*DAT_00d12b40 + 0x36e);
      FUN_00444030();
      local_78f4[3] = uVar2;
      *local_78f4 = &PTR_FUN_007e3978;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    local_8._0_1_ = 0x33;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,0x34);
    if (pvVar3 == (void *)0x0) {
      local_78f8 = 0;
    }
    else {
      local_78f8 = FUN_0053e740();
    }
    if (local_78f8 == 0) {
      local_78fc = 0;
    }
    else {
      *(int *)(local_78f8 + 8) = *(int *)(local_78f8 + 8) + 1;
      local_78fc = local_78f8;
    }
    puVar4[3] = local_78fc;
    if (local_78f4 == (undefined4 *)0x0) {
      local_7900 = (undefined4 *)0x0;
    }
    else {
      local_78f4[2] = local_78f4[2] + 1;
      local_7900 = local_78f4;
    }
    puVar4[4] = local_7900;
    *puVar4 = &PTR_FUN_007e3878;
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_118 + 0x84))();
  puVar4 = operator_new(0x14);
  local_8 = 0x35;
  if (puVar4 != (undefined4 *)0x0) {
    local_7908 = operator_new(0x10);
    local_8._0_1_ = 0x36;
    if (local_7908 == (undefined4 *)0x0) {
      local_7908 = (undefined4 *)0x0;
    }
    else {
      uVar2 = *(undefined4 *)(*DAT_00d12b40 + 0x3fa);
      FUN_00444030();
      local_7908[3] = uVar2;
      *local_7908 = &PTR_FUN_007e3978;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    local_8._0_1_ = 0x37;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,0x38);
    if (pvVar3 == (void *)0x0) {
      local_790c = 0;
    }
    else {
      local_790c = FUN_0053e740();
    }
    if (local_790c == 0) {
      local_7910 = 0;
    }
    else {
      *(int *)(local_790c + 8) = *(int *)(local_790c + 8) + 1;
      local_7910 = local_790c;
    }
    puVar4[3] = local_7910;
    if (local_7908 == (undefined4 *)0x0) {
      local_7914 = (undefined4 *)0x0;
    }
    else {
      local_7908[2] = local_7908[2] + 1;
      local_7914 = local_7908;
    }
    puVar4[4] = local_7914;
    *puVar4 = &PTR_FUN_007e3878;
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_118 + 0x84))();
  puVar4 = operator_new(0x14);
  local_8 = 0x39;
  if (puVar4 != (undefined4 *)0x0) {
    local_791c = operator_new(0x10);
    local_8._0_1_ = 0x3a;
    if (local_791c == (undefined4 *)0x0) {
      local_791c = (undefined4 *)0x0;
    }
    else {
      uVar2 = *(undefined4 *)(*DAT_00d12b40 + 0x3fe);
      FUN_00444030();
      local_791c[3] = uVar2;
      *local_791c = &PTR_FUN_007e3978;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    local_8._0_1_ = 0x3b;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,0x3c);
    if (pvVar3 == (void *)0x0) {
      local_7920 = 0;
    }
    else {
      local_7920 = FUN_0053e740();
    }
    if (local_7920 == 0) {
      local_7924 = 0;
    }
    else {
      *(int *)(local_7920 + 8) = *(int *)(local_7920 + 8) + 1;
      local_7924 = local_7920;
    }
    puVar4[3] = local_7924;
    if (local_791c == (undefined4 *)0x0) {
      local_7928 = (undefined4 *)0x0;
    }
    else {
      local_791c[2] = local_791c[2] + 1;
      local_7928 = local_791c;
    }
    puVar4[4] = local_7928;
    *puVar4 = &PTR_FUN_007e3878;
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_118 + 0x84))();
  puVar4 = operator_new(0x14);
  local_8 = 0x3d;
  if (puVar4 != (undefined4 *)0x0) {
    local_7930 = operator_new(0x10);
    local_8._0_1_ = 0x3e;
    if (local_7930 == (undefined4 *)0x0) {
      local_7930 = (undefined4 *)0x0;
    }
    else {
      uVar2 = *(undefined4 *)(*DAT_00d12b40 + 0x402);
      FUN_00444030();
      local_7930[3] = uVar2;
      *local_7930 = &PTR_FUN_007e3978;
    }
    local_8._0_1_ = 0x3d;
    FUN_004252e0();
    local_8._0_1_ = 0x3f;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,0x40);
    if (pvVar3 == (void *)0x0) {
      local_7934 = 0;
    }
    else {
      local_7934 = FUN_0053e740();
    }
    if (local_7934 == 0) {
      local_7938 = 0;
    }
    else {
      *(int *)(local_7934 + 8) = *(int *)(local_7934 + 8) + 1;
      local_7938 = local_7934;
    }
    puVar4[3] = local_7938;
    if (local_7930 == (undefined4 *)0x0) {
      local_793c = (undefined4 *)0x0;
    }
    else {
      local_7930[2] = local_7930[2] + 1;
      local_793c = local_7930;
    }
    puVar4[4] = local_793c;
    *puVar4 = &PTR_FUN_007e3878;
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_118 + 0x84))();
  puVar4 = operator_new(0x14);
  local_8 = 0x41;
  if (puVar4 != (undefined4 *)0x0) {
    local_7944 = operator_new(0x10);
    local_8._0_1_ = 0x42;
    if (local_7944 == (undefined4 *)0x0) {
      local_7944 = (undefined4 *)0x0;
    }
    else {
      uVar2 = *(undefined4 *)(*DAT_00d12b40 + 0x406);
      FUN_00444030();
      local_7944[3] = uVar2;
      *local_7944 = &PTR_FUN_007e3978;
    }
    local_8._0_1_ = 0x41;
    FUN_004252e0();
    local_8._0_1_ = 0x43;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,0x44);
    if (pvVar3 == (void *)0x0) {
      local_7948 = 0;
    }
    else {
      local_7948 = FUN_0053e740();
    }
    if (local_7948 == 0) {
      local_794c = 0;
    }
    else {
      *(int *)(local_7948 + 8) = *(int *)(local_7948 + 8) + 1;
      local_794c = local_7948;
    }
    puVar4[3] = local_794c;
    if (local_7944 == (undefined4 *)0x0) {
      local_7950 = (undefined4 *)0x0;
    }
    else {
      local_7944[2] = local_7944[2] + 1;
      local_7950 = local_7944;
    }
    puVar4[4] = local_7950;
    *puVar4 = &PTR_FUN_007e3878;
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_118 + 0x84))();
  puStackY_6c = (undefined2 *)0x53d889;
  FUN_007a630a();
  FUN_007a74f0();
  FUN_00429d20();
  puVar4 = operator_new(0x14);
  local_8 = 0x45;
  if (puVar4 != (undefined4 *)0x0) {
    pvVar3 = operator_new(0x10);
    local_8._0_1_ = 0x46;
    if (pvVar3 == (void *)0x0) {
      local_7958 = 0;
    }
    else {
      local_7958 = FUN_0053ee00();
    }
    local_8._0_1_ = 0x45;
    FUN_004252e0();
    local_8._0_1_ = 0x47;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,0x48);
    if (pvVar3 == (void *)0x0) {
      local_795c = 0;
    }
    else {
      local_795c = FUN_0053e740();
    }
    if (local_795c == 0) {
      local_7960 = 0;
    }
    else {
      *(int *)(local_795c + 8) = *(int *)(local_795c + 8) + 1;
      local_7960 = local_795c;
    }
    puVar4[3] = local_7960;
    if (local_7958 == 0) {
      local_7964 = 0;
    }
    else {
      *(int *)(local_7958 + 8) = *(int *)(local_7958 + 8) + 1;
      local_7964 = local_7958;
    }
    puVar4[4] = local_7964;
    *puVar4 = &PTR_FUN_007e3878;
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_118 + 0x84))();
  local_796c = operator_new(0x1e);
  local_8 = 0x49;
  if (local_796c == (int *)0x0) {
    local_796c = (int *)0x0;
  }
  else {
    FUN_004c0c30();
    local_8 = CONCAT31(local_8._1_3_,0x4a);
    FUN_00444250();
    *local_796c = (int)&PTR_FUN_007e3a28;
    local_796c[3] = (int)&PTR_LAB_007e39f8;
  }
  local_8 = 0xffffffff;
  local_11c = local_796c;
  local_114 = *(int *)(extraout_ECX + 0x568);
  while (local_114 != 0) {
    puVar4 = operator_new(0x1a);
    local_8 = 0x4b;
    if (puVar4 != (undefined4 *)0x0) {
      local_114 = *(int *)(local_114 + 8);
      FUN_0053e740();
      local_8 = CONCAT31(local_8._1_3_,0x4c);
      FUN_00446d10();
      *puVar4 = &PTR_FUN_007e3ba4;
    }
    local_8 = 0xffffffff;
    (**(code **)(*local_11c + 0x84))();
  }
  puVar4 = operator_new(0x14);
  local_8 = 0x4d;
  if (puVar4 != (undefined4 *)0x0) {
    FUN_004252e0();
    local_8._0_1_ = 0x4e;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,0x4f);
    if (pvVar3 == (void *)0x0) {
      local_7974 = 0;
    }
    else {
      local_7974 = FUN_0053e740();
    }
    if (local_7974 == 0) {
      local_7978 = 0;
    }
    else {
      *(int *)(local_7974 + 8) = *(int *)(local_7974 + 8) + 1;
      local_7978 = local_7974;
    }
    puVar4[3] = local_7978;
    if (local_11c == (int *)0x0) {
      local_797c = (int *)0x0;
    }
    else {
      local_11c[2] = local_11c[2] + 1;
      local_797c = local_11c;
    }
    puVar4[4] = local_797c;
    *puVar4 = &PTR_FUN_007e3878;
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_118 + 0x84))();
  local_77ec = 0x1267;
  local_77e4 = &local_6f88;
  while (local_77ec = local_77ec + -1, -1 < local_77ec) {
    *local_77e4 = 0;
    *(undefined4 *)(local_77e4 + 1) = 0;
    local_77e4 = local_77e4 + 3;
  }
  puStackY_6c = &local_6f88;
  uStackY_70 = 0x53de0e;
  FUN_004284e0();
  for (local_738c = 0; local_738c < 0x1267; local_738c = local_738c + 1) {
    if (*(int *)((int)local_6f86 + local_738c * 6) != 0) {
      puStackY_6c = (undefined2 *)0x53de5a;
      puVar4 = operator_new(0x14);
      local_8 = 0x50;
      if (puVar4 != (undefined4 *)0x0) {
        puStackY_6c = (undefined2 *)0x53de7e;
        local_7984 = operator_new(0x1a);
        local_8._0_1_ = 0x51;
        if (local_7984 == (undefined4 *)0x0) {
          local_7984 = (undefined4 *)0x0;
        }
        else {
          puStackY_6c = (undefined2 *)0x53dea4;
          FUN_0053e740();
          local_8._0_1_ = 0x52;
          puStackY_6c = (undefined2 *)0x53dec7;
          FUN_00446d10();
          *local_7984 = &PTR_FUN_007e3ba4;
        }
        local_8._0_1_ = 0x50;
        puStackY_6c = (undefined2 *)0x53df0c;
        FUN_004252e0();
        local_8._0_1_ = 0x53;
        puStackY_6c = (undefined2 *)0x53df17;
        pvVar3 = operator_new(0x14);
        local_8 = CONCAT31(local_8._1_3_,0x54);
        if (pvVar3 == (void *)0x0) {
          local_7988 = 0;
        }
        else {
          puStackY_6c = (undefined2 *)0x53df3d;
          local_7988 = FUN_0053e740();
        }
        if (local_7988 == 0) {
          local_798c = 0;
        }
        else {
          *(int *)(local_7988 + 8) = *(int *)(local_7988 + 8) + 1;
          local_798c = local_7988;
        }
        puVar4[3] = local_798c;
        if (local_7984 == (undefined4 *)0x0) {
          local_7990 = (undefined4 *)0x0;
        }
        else {
          local_7984[2] = local_7984[2] + 1;
          local_7990 = local_7984;
        }
        puVar4[4] = local_7990;
        *puVar4 = &PTR_FUN_007e3878;
      }
      local_8 = 0xffffffff;
      puStackY_6c = (undefined2 *)0x53e03f;
      (**(code **)(*local_118 + 0x84))();
    }
  }
  for (local_738c = 0; local_738c < *(int *)(extraout_ECX + 0x2cde); local_738c = local_738c + 1) {
    if ((&DAT_0089cad8)[*(int *)(extraout_ECX + 4 + local_738c * 4)] != 0) {
      local_7390 = *(int *)(extraout_ECX + 0x277e + *(int *)(extraout_ECX + 4 + local_738c * 4) * 4)
      ;
      puStackY_6c = (undefined2 *)0x53e0d7;
      pvVar3 = operator_new(0x14);
      local_8 = 0x55;
      if (pvVar3 != (void *)0x0) {
        puStackY_6c = (undefined2 *)0x53e0fb;
        pvVar3 = operator_new(0x1a);
        local_8._0_1_ = 0x56;
        if (pvVar3 == (void *)0x0) {
          local_7998 = 0;
        }
        else {
          puStackY_6c = (undefined2 *)0x53e126;
          local_7998 = FUN_0053e5e0();
        }
        local_8 = CONCAT31(local_8._1_3_,0x55);
        (*(code *)**(undefined4 **)(local_7390 + 10))();
        puStackY_6c = (undefined2 *)local_7998;
        uStackY_70 = 0x53e16f;
        FUN_0053e630();
      }
      local_8 = 0xffffffff;
      puStackY_6c = (undefined2 *)0x53e1af;
      (**(code **)(*local_118 + 0x84))();
    }
  }
  ExceptionList = local_10;
  return local_118;
}


