// FUN_00612370 @ 612370 size=7355

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00612370(int param_1)

{
  int iVar1;
  float fVar2;
  char cVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  undefined *puVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  float10 fVar21;
  undefined *puVar22;
  undefined *puVar23;
  int iVar24;
  undefined *puVar25;
  double dVar26;
  undefined4 **ppuStack_610;
  undefined2 uVar27;
  undefined1 local_5fc [256];
  char local_4fc [512];
  char local_2fc [512];
  undefined1 local_fc [128];
  int local_7c;
  undefined *local_78;
  undefined *local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined *local_64;
  int local_60;
  undefined *local_5c;
  undefined4 *local_58;
  undefined *local_54;
  char local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 **local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 *local_24;
  undefined2 local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007d0716;
  local_1c = *(int **)(param_1 + 0x10c);
  piVar5 = *(int **)((int)local_1c + 4);
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  while (piVar5 != (int *)0x0) {
    piVar14 = (int *)piVar5[2];
    if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
      _ppuStack_610 = 2.12514107808336e-314;
      (*(code *)**(undefined4 **)*piVar5)();
    }
    _ppuStack_610 = (double)CONCAT44(piVar5,0x6123ba);
    FUN_00796cd8();
    piVar5 = piVar14;
  }
  *(undefined4 *)((int)local_1c + 4) = 0;
  *(undefined4 *)((int)local_1c + 8) = 0;
  *(undefined4 *)((int)local_1c + 0xc) = 0;
  iVar8 = (&DAT_0089cad8)[*(int *)(param_1 + 200)];
  if (iVar8 == 0) {
    ExceptionList = local_10;
    return;
  }
  local_4d = '\0';
  if (*(int *)(DAT_00d0ca90 + 0x3350) != 0) {
    _ppuStack_610 = (double)CONCAT44(*(int *)(param_1 + 200),&local_24);
    piVar5 = (int *)(**(code **)(**(int **)(*(int *)(DAT_00d0ca90 + 0x3350) + 0x22) + 0x28))();
    if (*piVar5 != 0) {
      local_4d = '\x01';
    }
  }
  if ((*(int *)(*(int *)(iVar8 + 0x12da) + 0x3b30) == *(int *)(DAT_00d0ca90 + 6)) ||
     (*(int *)(*(int *)(DAT_00d0ca90 + 0x12da) + 0x3b30) == *(int *)(iVar8 + 6))) {
    local_4d = '\x01';
  }
  _ppuStack_610 = (double)CONCAT44(*(int *)(DAT_00d0ca90 + 6),0x612447);
  cVar3 = FUN_0044a690();
  if ((cVar3 == '\0') && (*(char *)(*(int *)(DAT_00d0ca90 + 6) + 0x34ac + iVar8) == '\0')) {
    _ppuStack_610 = (double)CONCAT44(*(undefined4 *)(iVar8 + 6),0x61246e);
    cVar3 = FUN_005861a0();
    if (cVar3 != '\0') goto LAB_00612472;
  }
  else {
LAB_00612472:
    local_4d = '\x01';
  }
  puVar6 = (undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b16 + *(int *)(param_1 + 200) * 6);
  local_24 = (undefined4 *)*puVar6;
  if (DAT_00d0ca90 == (&DAT_0089cad8)[*(int *)(param_1 + 200)]) {
    local_20 = *(undefined2 *)(puVar6 + 1);
    _ppuStack_610 = (double)CONCAT44(DAT_00893530 + 0x14,0x612d09);
    cVar3 = FUN_0042ddd0();
    if (cVar3 == '\0') {
      _ppuStack_610 = (double)CONCAT44(*(undefined4 *)(param_1 + 200),0x612d1f);
      FUN_004512e0();
    }
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b16 + *(int *)(param_1 + 200) * 6);
    local_24 = (undefined4 *)*puVar6;
    local_20 = *(undefined2 *)(puVar6 + 1);
    _ppuStack_610 = (double)CONCAT44(DAT_00893530 + 0x14,0x612d54);
    cVar3 = FUN_0042ddd0();
    if (cVar3 == '\0') {
      _ppuStack_610 = (double)CONCAT44(*(undefined4 *)(param_1 + 200),0x612d6a);
      FUN_004512e0();
    }
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b16 + *(int *)(param_1 + 200) * 6);
    local_24 = (undefined4 *)*puVar6;
    local_20 = *(undefined2 *)(puVar6 + 1);
    _ppuStack_610 = (double)CONCAT44(DAT_00893530 + 0x14,0x612d9f);
    cVar3 = FUN_0042dd70();
    if (cVar3 != '\0') {
      _ppuStack_610 = (double)CONCAT44(*(undefined4 *)(param_1 + 200),0x612db5);
      FUN_004512e0();
    }
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b16 + *(int *)(param_1 + 200) * 6);
    local_24 = (undefined4 *)*puVar6;
    local_20 = *(undefined2 *)(puVar6 + 1);
    _ppuStack_610 = (double)CONCAT44(DAT_00893530 + 0x14,0x612dea);
    cVar3 = FUN_0042dd70();
    if (cVar3 != '\0') {
      _ppuStack_610 = (double)CONCAT44(*(undefined4 *)(param_1 + 200),0x612e00);
      FUN_004512e0();
    }
    local_24 = &ppuStack_610;
    uVar27 = (undefined2)((ulonglong)_ppuStack_610 >> 0x30);
    _ppuStack_610 = CONCAT42(DAT_0088f28e,DAT_0088f28c);
    FUN_004a0d30(9,0,*(undefined4 *)(param_1 + 200));
    _ppuStack_610 = (double)CONCAT44(*(undefined4 *)(param_1 + 200),0x612e43);
    iVar8 = FUN_00451250();
    if (iVar8 < 0x14) {
      local_24 = &ppuStack_610;
      uVar27 = (undefined2)((ulonglong)_ppuStack_610 >> 0x30);
      _ppuStack_610 = CONCAT42(DAT_0088f28e,DAT_0088f28c);
      uVar4 = FUN_004a0d30(9,0,*(undefined4 *)(param_1 + 200));
      local_18 = (int *)CONCAT31(local_18._1_3_,uVar4);
      _ppuStack_610 = 1.44298860441813e-312;
      local_24 = operator_new(0x44);
      local_8 = 9;
      if (local_24 == (undefined4 *)0x0) {
        local_14 = 0;
      }
      else {
        _ppuStack_610 = (double)CONCAT44(local_18,*(undefined4 *)(param_1 + 200));
        FUN_00585d60(9,0,0);
        local_14 = FUN_00609400();
      }
      iVar8 = *(int *)(param_1 + 0x10c);
      local_8 = 0xffffffff;
      iVar24 = *(int *)(iVar8 + 8);
      _ppuStack_610 = 2.97110877736597e-313;
      puVar6 = operator_new(0xe);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6[1] = iVar24;
        *puVar6 = local_14;
        puVar6[2] = 0;
        *(undefined1 *)(puVar6 + 3) = 0;
      }
      iVar1 = *(int *)(iVar8 + 0xc);
      *(undefined4 **)(iVar8 + 8) = puVar6;
      *(int *)(iVar8 + 0xc) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 **)(iVar8 + 4) = puVar6;
      }
      else {
        *(undefined4 **)(iVar24 + 8) = puVar6;
      }
    }
    _ppuStack_610 = (double)CONCAT44(*(undefined4 *)(param_1 + 200),0x612f28);
    iVar8 = FUN_00451250();
    if (iVar8 < 1) goto LAB_00612ffa;
    local_24 = &ppuStack_610;
    uVar27 = (undefined2)((ulonglong)_ppuStack_610 >> 0x30);
    _ppuStack_610 = CONCAT42(DAT_0088f28e,DAT_0088f28c);
    uVar4 = FUN_004a0d30(10,0,*(undefined4 *)(param_1 + 200));
    local_18 = (int *)CONCAT31(local_18._1_3_,uVar4);
    _ppuStack_610 = 1.44298860554459e-312;
    local_24 = operator_new(0x44);
    local_8 = 10;
    if (local_24 == (undefined4 *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      _ppuStack_610 = (double)CONCAT44(local_18,*(undefined4 *)(param_1 + 200));
      FUN_00585d60(10,0,0);
      local_18 = (int *)FUN_00609400();
    }
    iVar8 = *(int *)(param_1 + 0x10c);
    local_8 = 0xffffffff;
    iVar24 = *(int *)(iVar8 + 8);
    _ppuStack_610 = 2.97110878863066e-313;
    puVar6 = operator_new(0xe);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = iVar24;
      *puVar6 = local_18;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
    }
    iVar1 = *(int *)(iVar8 + 0xc);
    *(undefined4 **)(iVar8 + 8) = puVar6;
    *(int *)(iVar8 + 0xc) = iVar1 + 1;
    if (iVar1 != 0) {
      *(undefined4 **)(iVar24 + 8) = puVar6;
      goto LAB_00612ffa;
    }
  }
  else {
    local_20 = *(undefined2 *)(puVar6 + 1);
    _ppuStack_610 = (double)CONCAT44(DAT_00893530 + 0x14,0x6124c0);
    cVar3 = FUN_0042ddd0();
    if (cVar3 == '\0') {
      _ppuStack_610 = (double)CONCAT44(*(undefined4 *)(param_1 + 200),0x6124d6);
      FUN_004512e0();
    }
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b16 + *(int *)(param_1 + 200) * 6);
    local_24 = (undefined4 *)*puVar6;
    local_20 = *(undefined2 *)(puVar6 + 1);
    _ppuStack_610 = (double)CONCAT44(DAT_00893530 + 0x14,0x61250b);
    cVar3 = FUN_0042ddd0();
    if (cVar3 == '\0') {
      _ppuStack_610 = (double)CONCAT44(*(undefined4 *)(param_1 + 200),0x612521);
      FUN_004512e0();
    }
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b16 + *(int *)(param_1 + 200) * 6);
    local_24 = (undefined4 *)*puVar6;
    local_20 = *(undefined2 *)(puVar6 + 1);
    _ppuStack_610 = (double)CONCAT44(DAT_00893530 + 0x14,0x612556);
    cVar3 = FUN_0042dd70();
    if (cVar3 != '\0') {
      _ppuStack_610 = (double)CONCAT44(*(undefined4 *)(param_1 + 200),0x61256c);
      FUN_004512e0();
    }
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b16 + *(int *)(param_1 + 200) * 6);
    local_24 = (undefined4 *)*puVar6;
    local_20 = *(undefined2 *)(puVar6 + 1);
    _ppuStack_610 = (double)CONCAT44(DAT_00893530 + 0x14,0x6125a1);
    cVar3 = FUN_0042dd70();
    if (cVar3 != '\0') {
      _ppuStack_610 = (double)CONCAT44(*(undefined4 *)(param_1 + 200),0x6125b7);
      FUN_004512e0();
    }
    local_24 = &ppuStack_610;
    uVar27 = (undefined2)((ulonglong)_ppuStack_610 >> 0x30);
    _ppuStack_610 = CONCAT42(DAT_0088f28e,DAT_0088f28c);
    uVar4 = FUN_004a0d30(0,0,*(undefined4 *)(param_1 + 200));
    local_18 = (int *)CONCAT31(local_18._1_3_,uVar4);
    _ppuStack_610 = (double)((ulonglong)(uint)(&DAT_0089cad8)[*(int *)(param_1 + 200)] << 0x20);
    FUN_00586a70(0);
    _ppuStack_610 = 1.44298859373643e-312;
    local_24 = operator_new(0x44);
    local_8 = 0;
    if (local_24 == (undefined4 *)0x0) {
      local_14 = 0;
    }
    else {
      _ppuStack_610 = (double)CONCAT44(local_18,*(undefined4 *)(param_1 + 200));
      FUN_00585d60(0,0,0);
      local_14 = FUN_00609400();
    }
    iVar8 = *(int *)(param_1 + 0x10c);
    local_8 = 0xffffffff;
    iVar24 = *(int *)(iVar8 + 8);
    _ppuStack_610 = 2.97110866995609e-313;
    puVar6 = operator_new(0xe);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = iVar24;
      *puVar6 = local_14;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
    }
    iVar1 = *(int *)(iVar8 + 0xc);
    *(undefined4 **)(iVar8 + 8) = puVar6;
    *(int *)(iVar8 + 0xc) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined4 **)(iVar8 + 4) = puVar6;
    }
    else {
      *(undefined4 **)(iVar24 + 8) = puVar6;
    }
    local_24 = &ppuStack_610;
    uVar27 = (undefined2)((ulonglong)_ppuStack_610 >> 0x30);
    _ppuStack_610 = CONCAT42(DAT_0088f28e,DAT_0088f28c);
    uVar4 = FUN_004a0d30(1,0,*(undefined4 *)(param_1 + 200));
    local_18 = (int *)CONCAT31(local_18._1_3_,uVar4);
    _ppuStack_610 = 1.44298859467515e-312;
    local_24 = operator_new(0x44);
    local_8 = 1;
    if (local_24 == (undefined4 *)0x0) {
      local_14 = 0;
    }
    else {
      _ppuStack_610 = (double)CONCAT44(local_18,*(undefined4 *)(param_1 + 200));
      FUN_00585d60(1,0,0);
      local_14 = FUN_00609400();
    }
    iVar8 = *(int *)(param_1 + 0x10c);
    local_8 = 0xffffffff;
    iVar24 = *(int *)(iVar8 + 8);
    _ppuStack_610 = 2.97110867993622e-313;
    puVar6 = operator_new(0xe);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = iVar24;
      *puVar6 = local_14;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
    }
    iVar1 = *(int *)(iVar8 + 0xc);
    *(undefined4 **)(iVar8 + 8) = puVar6;
    *(int *)(iVar8 + 0xc) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined4 **)(iVar8 + 4) = puVar6;
    }
    else {
      *(undefined4 **)(iVar24 + 8) = puVar6;
    }
    local_24 = &ppuStack_610;
    uVar27 = (undefined2)((ulonglong)_ppuStack_610 >> 0x30);
    _ppuStack_610 = CONCAT42(DAT_0088f28e,DAT_0088f28c);
    uVar4 = FUN_004a0d30(2,0,*(undefined4 *)(param_1 + 200));
    local_18 = (int *)CONCAT31(local_18._1_3_,uVar4);
    _ppuStack_610 = 1.44298859567316e-312;
    local_24 = operator_new(0x44);
    local_8 = 2;
    if (local_24 == (undefined4 *)0x0) {
      local_14 = 0;
    }
    else {
      _ppuStack_610 = (double)CONCAT44(local_18,*(undefined4 *)(param_1 + 200));
      FUN_00585d60(2,0,0);
      local_14 = FUN_00609400();
    }
    iVar8 = *(int *)(param_1 + 0x10c);
    local_8 = 0xffffffff;
    iVar24 = *(int *)(iVar8 + 8);
    _ppuStack_610 = 2.97110868991635e-313;
    puVar6 = operator_new(0xe);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = iVar24;
      *puVar6 = local_14;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
    }
    iVar1 = *(int *)(iVar8 + 0xc);
    *(undefined4 **)(iVar8 + 8) = puVar6;
    *(int *)(iVar8 + 0xc) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined4 **)(iVar8 + 4) = puVar6;
    }
    else {
      *(undefined4 **)(iVar24 + 8) = puVar6;
    }
    local_24 = &ppuStack_610;
    uVar27 = (undefined2)((ulonglong)_ppuStack_610 >> 0x30);
    _ppuStack_610 = CONCAT42(DAT_0088f28e,DAT_0088f28c);
    uVar4 = FUN_004a0d30(3,0,*(undefined4 *)(param_1 + 200));
    local_18 = (int *)CONCAT31(local_18._1_3_,uVar4);
    _ppuStack_610 = 1.44298859667118e-312;
    local_24 = operator_new(0x44);
    local_8 = 3;
    if (local_24 == (undefined4 *)0x0) {
      local_14 = 0;
    }
    else {
      _ppuStack_610 = (double)CONCAT44(local_18,*(undefined4 *)(param_1 + 200));
      FUN_00585d60(3,0,0);
      local_14 = FUN_00609400();
    }
    iVar8 = *(int *)(param_1 + 0x10c);
    local_8 = 0xffffffff;
    iVar24 = *(int *)(iVar8 + 8);
    _ppuStack_610 = 2.97110869989647e-313;
    puVar6 = operator_new(0xe);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = iVar24;
      *puVar6 = local_14;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
    }
    iVar1 = *(int *)(iVar8 + 0xc);
    *(undefined4 **)(iVar8 + 8) = puVar6;
    *(int *)(iVar8 + 0xc) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined4 **)(iVar8 + 4) = puVar6;
    }
    else {
      *(undefined4 **)(iVar24 + 8) = puVar6;
    }
    local_24 = &ppuStack_610;
    uVar27 = (undefined2)((ulonglong)_ppuStack_610 >> 0x30);
    _ppuStack_610 = CONCAT42(DAT_0088f28e,DAT_0088f28c);
    uVar4 = FUN_004a0d30(4,0,*(undefined4 *)(param_1 + 200));
    local_18 = (int *)CONCAT31(local_18._1_3_,uVar4);
    _ppuStack_610 = 1.44298859766919e-312;
    local_24 = operator_new(0x44);
    local_8 = 4;
    if (local_24 == (undefined4 *)0x0) {
      local_14 = 0;
    }
    else {
      _ppuStack_610 = (double)CONCAT44(local_18,*(undefined4 *)(param_1 + 200));
      FUN_00585d60(4,0,0);
      local_14 = FUN_00609400();
    }
    iVar8 = *(int *)(param_1 + 0x10c);
    local_8 = 0xffffffff;
    iVar24 = *(int *)(iVar8 + 8);
    _ppuStack_610 = 2.9711087098766e-313;
    puVar6 = operator_new(0xe);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = iVar24;
      *puVar6 = local_14;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
    }
    iVar1 = *(int *)(iVar8 + 0xc);
    *(undefined4 **)(iVar8 + 8) = puVar6;
    *(int *)(iVar8 + 0xc) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined4 **)(iVar8 + 4) = puVar6;
    }
    else {
      *(undefined4 **)(iVar24 + 8) = puVar6;
    }
    local_24 = &ppuStack_610;
    uVar27 = (undefined2)((ulonglong)_ppuStack_610 >> 0x30);
    _ppuStack_610 = CONCAT42(DAT_0088f28e,DAT_0088f28c);
    uVar4 = FUN_004a0d30(5,0,*(undefined4 *)(param_1 + 200));
    local_18 = (int *)CONCAT31(local_18._1_3_,uVar4);
    _ppuStack_610 = 1.4429885986672e-312;
    local_24 = operator_new(0x44);
    local_8 = 5;
    if (local_24 == (undefined4 *)0x0) {
      local_14 = 0;
    }
    else {
      _ppuStack_610 = (double)CONCAT44(local_18,*(undefined4 *)(param_1 + 200));
      FUN_00585d60(5,0,0);
      local_14 = FUN_00609400();
    }
    iVar8 = *(int *)(param_1 + 0x10c);
    local_8 = 0xffffffff;
    iVar24 = *(int *)(iVar8 + 8);
    _ppuStack_610 = 2.97110871985672e-313;
    puVar6 = operator_new(0xe);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = iVar24;
      *puVar6 = local_14;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
    }
    iVar1 = *(int *)(iVar8 + 0xc);
    *(undefined4 **)(iVar8 + 8) = puVar6;
    *(int *)(iVar8 + 0xc) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined4 **)(iVar8 + 4) = puVar6;
    }
    else {
      *(undefined4 **)(iVar24 + 8) = puVar6;
    }
    local_24 = &ppuStack_610;
    uVar27 = (undefined2)((ulonglong)_ppuStack_610 >> 0x30);
    _ppuStack_610 = CONCAT42(DAT_0088f28e,DAT_0088f28c);
    uVar4 = FUN_004a0d30(6,0,*(undefined4 *)(param_1 + 200));
    local_18 = (int *)CONCAT31(local_18._1_3_,uVar4);
    _ppuStack_610 = 1.44298859966521e-312;
    local_24 = operator_new(0x44);
    local_8 = 6;
    if (local_24 == (undefined4 *)0x0) {
      local_14 = 0;
    }
    else {
      _ppuStack_610 = (double)CONCAT44(local_18,*(undefined4 *)(param_1 + 200));
      FUN_00585d60(6,0,0);
      local_14 = FUN_00609400();
    }
    iVar8 = *(int *)(param_1 + 0x10c);
    local_8 = 0xffffffff;
    iVar24 = *(int *)(iVar8 + 8);
    _ppuStack_610 = 2.97110872983685e-313;
    puVar6 = operator_new(0xe);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = iVar24;
      *puVar6 = local_14;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
    }
    iVar1 = *(int *)(iVar8 + 0xc);
    *(undefined4 **)(iVar8 + 8) = puVar6;
    *(int *)(iVar8 + 0xc) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined4 **)(iVar8 + 4) = puVar6;
    }
    else {
      *(undefined4 **)(iVar24 + 8) = puVar6;
    }
    local_24 = &ppuStack_610;
    uVar27 = (undefined2)((ulonglong)_ppuStack_610 >> 0x30);
    _ppuStack_610 = CONCAT42(DAT_0088f28e,DAT_0088f28c);
    uVar4 = FUN_004a0d30(7,0,*(undefined4 *)(param_1 + 200));
    local_18 = (int *)CONCAT31(local_18._1_3_,uVar4);
    _ppuStack_610 = 1.44298860066323e-312;
    local_24 = operator_new(0x44);
    local_8 = 7;
    if (local_24 == (undefined4 *)0x0) {
      local_14 = 0;
    }
    else {
      _ppuStack_610 = (double)CONCAT44(local_18,*(undefined4 *)(param_1 + 200));
      FUN_00585d60(7,0,0);
      local_14 = FUN_00609400();
    }
    iVar8 = *(int *)(param_1 + 0x10c);
    local_8 = 0xffffffff;
    iVar24 = *(int *)(iVar8 + 8);
    _ppuStack_610 = 2.97110873981698e-313;
    puVar6 = operator_new(0xe);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = iVar24;
      *puVar6 = local_14;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
    }
    iVar1 = *(int *)(iVar8 + 0xc);
    *(undefined4 **)(iVar8 + 8) = puVar6;
    *(int *)(iVar8 + 0xc) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined4 **)(iVar8 + 4) = puVar6;
    }
    else {
      *(undefined4 **)(iVar24 + 8) = puVar6;
    }
    local_24 = &ppuStack_610;
    uVar27 = (undefined2)((ulonglong)_ppuStack_610 >> 0x30);
    _ppuStack_610 = CONCAT42(DAT_0088f28e,DAT_0088f28c);
    uVar4 = FUN_004a0d30(8,0,*(undefined4 *)(param_1 + 200));
    local_18 = (int *)CONCAT31(local_18._1_3_,uVar4);
    _ppuStack_610 = 1.44298860166124e-312;
    local_24 = operator_new(0x44);
    local_8 = 8;
    if (local_24 == (undefined4 *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      _ppuStack_610 = (double)CONCAT44(local_18,*(undefined4 *)(param_1 + 200));
      FUN_00585d60(8,0,0);
      local_18 = (int *)FUN_00609400();
    }
    iVar8 = *(int *)(param_1 + 0x10c);
    local_8 = 0xffffffff;
    iVar24 = *(int *)(iVar8 + 8);
    _ppuStack_610 = 2.9711087497971e-313;
    puVar6 = operator_new(0xe);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = iVar24;
      *puVar6 = local_18;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
    }
    iVar1 = *(int *)(iVar8 + 0xc);
    *(undefined4 **)(iVar8 + 8) = puVar6;
    *(int *)(iVar8 + 0xc) = iVar1 + 1;
    if (iVar1 != 0) {
      *(undefined4 **)(iVar24 + 8) = puVar6;
      goto LAB_00612ffa;
    }
  }
  *(undefined4 **)(iVar8 + 4) = puVar6;
LAB_00612ffa:
  _ppuStack_610 = (double)CONCAT44(0x613005,ppuStack_610);
  FUN_004353e0();
  _ppuStack_610 = (double)CONCAT44(0x613010,ppuStack_610);
  FUN_00435fd0();
  if (*(undefined4 **)(param_1 + 0x110) != (undefined4 *)0x0) {
    _ppuStack_610 = 2.12514264921212e-314;
    (**(code **)**(undefined4 **)(param_1 + 0x110))();
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  _ppuStack_610 = 3.371030358140204e-306;
  FUN_004136a0();
  _ppuStack_610 = 5.41108926822131e-312;
  local_18 = (int *)FUN_00584270(0xff);
  _ppuStack_610 = 9.33784070639956e-322;
  FUN_00584270(0xff);
  local_1c = *(int **)(param_1 + 0x21e);
  piVar5 = (int *)local_1c[1];
  while (piVar5 != (int *)0x0) {
    piVar14 = (int *)piVar5[2];
    if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
      _ppuStack_610 = 2.12514270306527e-314;
      (*(code *)**(undefined4 **)*piVar5)();
    }
    _ppuStack_610 = (double)CONCAT44(piVar5,0x613093);
    FUN_00796cd8();
    piVar5 = piVar14;
  }
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = 0;
  _ppuStack_610 = (double)CONCAT44(0x6130b5,ppuStack_610);
  FUN_004353e0();
  iVar8 = *(int *)(param_1 + 0x222);
  piVar5 = *(int **)(iVar8 + 4);
  while (piVar5 != (int *)0x0) {
    local_1c = (int *)piVar5[2];
    if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
      _ppuStack_610 = 2.12514273814393e-314;
      (*(code *)**(undefined4 **)*piVar5)();
    }
    _ppuStack_610 = (double)CONCAT44(piVar5,0x6130da);
    FUN_00796cd8();
    piVar5 = local_1c;
  }
  *(undefined4 *)(iVar8 + 4) = 0;
  *(undefined4 *)(iVar8 + 8) = 0;
  *(undefined4 *)(iVar8 + 0xc) = 0;
  _ppuStack_610 = (double)CONCAT44(0x6130fa,ppuStack_610);
  FUN_004353e0();
  iVar8 = *(int *)(param_1 + 200);
  if (iVar8 == *(int *)(DAT_00d0ca90 + 6)) {
    _ppuStack_610 = (double)CONCAT44(iVar8,0x613120);
    uVar7 = FUN_00451250();
    _ppuStack_610 = (double)CONCAT44(0x61312d,ppuStack_610);
    fVar21 = (float10)FUN_0049c570();
    _ppuStack_610 = (double)fVar21;
    fVar21 = (float10)FUN_004a5fb0(uVar7);
    fVar21 = (float10)FUN_004a5ee0((double)fVar21);
    dVar26 = (double)fVar21;
    uVar7 = FUN_0042b6c9(s_SPY_OWNCOUNTRY_0085f150);
    FUN_007a630a(local_5fc,uVar7,dVar26);
    *(undefined1 *)(*(int *)(param_1 + 0x222) + 0x5c) = 1;
    _ppuStack_610 = (double)CONCAT44(local_18,local_5fc);
    FUN_004361c0();
    ExceptionList = local_10;
    return;
  }
  _ppuStack_610 = (double)CONCAT44(iVar8,0xc);
  iVar8 = FUN_004a5c40();
  if (((iVar8 == 0) && (local_4d == '\0')) && (DAT_00d610dc == '\0')) {
    _ppuStack_610 = 3.90588465980282e-306;
    uVar7 = FUN_0042b6c9();
    _ppuStack_610 = (double)CONCAT44(uVar7,local_5fc);
    FUN_007a630a();
    *(undefined1 *)(*(int *)(param_1 + 0x222) + 0x5c) = 1;
    _ppuStack_610 = (double)CONCAT44(local_18,local_5fc);
    FUN_004361c0();
    ExceptionList = local_10;
    return;
  }
  _ppuStack_610 = (double)CONCAT44(*(undefined4 *)(param_1 + 200),0xc);
  iVar8 = FUN_004a5c40();
  if (((0 < iVar8) || (local_4d != '\0')) || (DAT_00d610dc == '\x01')) {
    _ppuStack_610 = 0.0;
    local_44 = (undefined4 **)FUN_004a60a0(*(undefined4 *)(param_1 + 200));
    _ppuStack_610 = 2.12199579096527e-314;
    local_4c = FUN_004a60a0(*(undefined4 *)(param_1 + 200));
    _ppuStack_610 = (double)CONCAT44(*(undefined4 *)(param_1 + 200),0xc);
    puVar9 = (undefined1 *)FUN_004a5c40();
    ppuStack_610 = (undefined4 **)0xfffffff6;
    uVar7 = FUN_0061df30();
    _ppuStack_610 = (double)CONCAT44(puVar9,uVar7);
    FUN_007a630a(local_2fc);
    *(undefined1 *)(*(int *)(param_1 + 0x21e) + 0x5c) = 0;
    _ppuStack_610 = (double)CONCAT44(*(undefined4 *)(DAT_00d0ca90 + 6),0xc);
    puVar9 = (undefined1 *)FUN_004a5c40();
    ppuStack_610 = (undefined4 **)0xfffffff6;
    uVar7 = FUN_0061df90();
    _ppuStack_610 = (double)CONCAT44(puVar9,uVar7);
    FUN_007a630a(local_4fc);
    uVar15 = 0xffffffff;
    pcVar18 = local_4fc;
    do {
      pcVar20 = pcVar18;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar18 + 1;
      cVar3 = *pcVar18;
      pcVar18 = pcVar20;
    } while (cVar3 != '\0');
    uVar15 = ~uVar15;
    iVar8 = -1;
    pcVar18 = local_2fc;
    do {
      pcVar19 = pcVar18;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar19 = pcVar18 + 1;
      cVar3 = *pcVar18;
      pcVar18 = pcVar19;
    } while (cVar3 != '\0');
    pcVar18 = pcVar20 + -uVar15;
    pcVar20 = pcVar19 + -1;
    for (uVar16 = uVar15 >> 2; piVar5 = local_18, uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar20 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar20 = pcVar20 + 1;
    }
    _ppuStack_610 = (double)CONCAT44(piVar5,local_2fc);
    FUN_004361c0();
    _ppuStack_610 = 1.06102936801763e-312;
    puVar6 = operator_new(0x32);
    local_8 = 0xb;
    local_24 = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      _ppuStack_610 = (double)CONCAT44(0x61335a,ppuStack_610);
      FUN_00433f00();
      *(undefined4 *)((int)puVar6 + 0x2e) = 6;
      *puVar6 = &PTR_FUN_007ec904;
      puVar6[2] = &PTR_LAB_007ec900;
      local_18 = puVar6;
    }
    iVar8 = *(int *)(param_1 + 0x21e);
    local_8 = 0xffffffff;
    iVar24 = *(int *)(iVar8 + 8);
    _ppuStack_610 = 2.97110883670325e-313;
    puVar6 = operator_new(0xe);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = iVar24;
      *puVar6 = local_18;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
    }
    iVar1 = *(int *)(iVar8 + 0xc);
    *(undefined4 **)(iVar8 + 8) = puVar6;
    *(int *)(iVar8 + 0xc) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined4 **)(iVar8 + 4) = puVar6;
    }
    else {
      *(undefined4 **)(iVar24 + 8) = puVar6;
    }
    puVar9 = local_fc;
    ppuStack_610 = (undefined4 **)(&DAT_0089cad8)[*(int *)(param_1 + 200)];
    uVar7 = FUN_0060b150();
    _ppuStack_610 = (double)CONCAT44(puVar9,uVar7);
    FUN_0060b080();
    puVar9 = local_fc;
    ppuStack_610 = local_44;
    uVar7 = FUN_0061ded0();
    _ppuStack_610 = (double)CONCAT44(puVar9,uVar7);
    FUN_007a630a(local_2fc);
    _ppuStack_610 = (double)CONCAT44(local_2fc,0x613425);
    FUN_004361a0();
    _ppuStack_610 = 1.06102936918362e-312;
    puVar6 = operator_new(0x32);
    local_8 = 0xc;
    local_24 = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      _ppuStack_610 = (double)CONCAT44(0x613446,ppuStack_610);
      FUN_00433f00();
      *(undefined4 *)((int)puVar6 + 0x2e) = 6;
      *puVar6 = &PTR_FUN_007ec904;
      puVar6[2] = &PTR_LAB_007ec900;
      local_18 = puVar6;
    }
    iVar8 = *(int *)(param_1 + 0x21e);
    local_8 = 0xffffffff;
    iVar24 = *(int *)(iVar8 + 8);
    _ppuStack_610 = 2.9711088483632e-313;
    puVar6 = operator_new(0xe);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = iVar24;
      *puVar6 = local_18;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
    }
    iVar1 = *(int *)(iVar8 + 0xc);
    *(undefined4 **)(iVar8 + 8) = puVar6;
    *(int *)(iVar8 + 0xc) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined4 **)(iVar8 + 4) = puVar6;
    }
    else {
      *(undefined4 **)(iVar24 + 8) = puVar6;
    }
    _ppuStack_610 = (double)CONCAT44(&local_14,&local_48);
    local_48 = 0;
    local_14 = 0;
    FUN_0060ad30();
    _ppuStack_610 = (double)CONCAT44(local_14,local_48);
    FUN_0061e110(local_4c);
    FUN_007a630a();
    _ppuStack_610 = (double)CONCAT44(local_2fc,0x61350f);
    FUN_004361a0();
    _ppuStack_610 = 1.06102937033974e-312;
    puVar6 = operator_new(0x32);
    local_8 = 0xd;
    local_24 = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      _ppuStack_610 = (double)CONCAT44(0x613530,ppuStack_610);
      FUN_00433f00();
      *(undefined4 *)((int)puVar6 + 0x2e) = 6;
      *puVar6 = &PTR_FUN_007ec904;
      puVar6[2] = &PTR_LAB_007ec900;
      local_18 = puVar6;
    }
    iVar8 = *(int *)(param_1 + 0x21e);
    local_8 = 0xffffffff;
    iVar24 = *(int *)(iVar8 + 8);
    _ppuStack_610 = 2.97110885972671e-313;
    puVar6 = operator_new(0xe);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = iVar24;
      *puVar6 = local_18;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
    }
    iVar1 = *(int *)(iVar8 + 0xc);
    *(undefined4 **)(iVar8 + 8) = puVar6;
    *(int *)(iVar8 + 0xc) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined4 **)(iVar8 + 4) = puVar6;
    }
    else {
      *(undefined4 **)(iVar24 + 8) = puVar6;
    }
    _ppuStack_610 = (double)CONCAT44(&local_28,&local_40);
    local_3c = 0.0;
    local_30 = 0.0;
    local_38 = 0.0;
    local_34 = 0.0;
    local_40 = 0.0;
    local_2c = 0.0;
    local_28 = 0.0;
    FUN_0060ae70(*(undefined4 *)(param_1 + 200),&local_44,&local_30,&local_38,&local_34,&local_3c,
                 &local_2c);
    puVar17 = &DAT_0088ebf8;
    local_18 = (int *)&DAT_0088ebf8;
    fVar2 = local_28;
    if (_DAT_007ef328 <= local_28) {
      local_18 = (int *)&DAT_0085f140;
      fVar2 = local_28 * _DAT_007e68d0;
    }
    local_7c = (int)ROUND(fVar2);
    local_5c = &DAT_0088ebf8;
    fVar2 = local_40;
    if (_DAT_007ef328 <= local_40) {
      local_5c = &DAT_0085f140;
      fVar2 = local_40 * _DAT_007e68d0;
    }
    local_60 = (int)ROUND(fVar2);
    local_64 = &DAT_0088ebf8;
    fVar2 = local_2c;
    if (_DAT_007ef328 <= local_2c) {
      local_64 = &DAT_0085f140;
      fVar2 = local_2c * _DAT_007e68d0;
    }
    local_6c = (int)ROUND(fVar2);
    local_78 = &DAT_0088ebf8;
    fVar2 = local_3c;
    if (_DAT_007ef328 <= local_3c) {
      local_78 = &DAT_0085f140;
      fVar2 = local_3c * _DAT_007e68d0;
    }
    local_68 = (int)ROUND(fVar2);
    local_74 = &DAT_0088ebf8;
    fVar2 = local_34;
    if (_DAT_007ef328 <= local_34) {
      local_74 = &DAT_0085f140;
      fVar2 = local_34 * _DAT_007e68d0;
    }
    local_70 = (int)ROUND(fVar2);
    local_54 = &DAT_0088ebf8;
    fVar2 = local_38;
    if (_DAT_007ef328 <= local_38) {
      local_54 = &DAT_0085f140;
      fVar2 = local_38 * _DAT_007e68d0;
    }
    local_1c = (int *)(int)ROUND(fVar2);
    if (_DAT_007ef328 <= local_30) {
      puVar17 = &DAT_0085f140;
      local_58 = (undefined4 *)(local_30 * _DAT_007e68d0);
      puVar6 = (undefined4 *)(int)ROUND((float)local_58);
      local_24 = puVar6;
    }
    else {
      puVar6 = (undefined4 *)(int)ROUND(local_30);
      local_58 = puVar6;
    }
    _ppuStack_610 = 3.90581947209314e-306;
    uVar7 = FUN_0042b6c9();
    _ppuStack_610 = (double)CONCAT44(uVar7,local_18);
    FUN_0042b6c9();
    FUN_0042b6c9(s_RESOURCE_SUPPLY_0083c2f4);
    uVar7 = FUN_0042b6c9(s_RESOURCE_OIL_0083c2dc);
    iVar24 = local_68;
    puVar25 = local_78;
    uVar10 = FUN_0042b6c9(s_RESOURCE_RARE_MATERIALS_0083c2b4);
    iVar8 = local_70;
    puVar23 = local_74;
    uVar11 = FUN_0042b6c9(s_RESOURCE_METAL_0083c2cc);
    piVar5 = local_1c;
    puVar22 = local_54;
    uVar12 = FUN_0042b6c9(s_RESOURCE_ENERGY_0083c2a4);
    uVar13 = FUN_0061e170(local_44);
    FUN_007a630a(local_2fc,uVar13,puVar6,puVar17,uVar12,piVar5,puVar22,uVar11,iVar8,puVar23,uVar10,
                 iVar24,puVar25,uVar7);
    _ppuStack_610 = (double)CONCAT44(local_2fc,0x6138e0);
    FUN_004361a0();
    _ppuStack_610 = 1.06102937516676e-312;
    puVar6 = operator_new(0x32);
    local_8 = 0xe;
    local_24 = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      local_1c = (undefined4 *)0x0;
    }
    else {
      _ppuStack_610 = (double)CONCAT44(0x613901,ppuStack_610);
      FUN_00433f00();
      *(undefined4 *)((int)puVar6 + 0x2e) = 6;
      *puVar6 = &PTR_FUN_007ec904;
      puVar6[2] = &PTR_LAB_007ec900;
      local_1c = puVar6;
    }
    iVar8 = *(int *)(param_1 + 0x21e);
    local_8 = 0xffffffff;
    iVar24 = *(int *)(iVar8 + 8);
    _ppuStack_610 = 2.97110890819455e-313;
    puVar6 = operator_new(0xe);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = iVar24;
      *puVar6 = local_1c;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
    }
    iVar1 = *(int *)(iVar8 + 0xc);
    *(undefined4 **)(iVar8 + 8) = puVar6;
    *(int *)(iVar8 + 0xc) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined4 **)(iVar8 + 4) = puVar6;
    }
    else {
      *(undefined4 **)(iVar24 + 8) = puVar6;
    }
    puVar9 = (undefined1 *)
             (*(int *)(param_1 + 0x152) + *(int *)(param_1 + 0x14a) + *(int *)(param_1 + 0x146) +
              *(int *)(param_1 + 0x142) + *(int *)(param_1 + 0x13e) + *(int *)(param_1 + 0x12e) +
              *(int *)(param_1 + 0x12a) + *(int *)(param_1 + 0x126));
    ppuStack_610 = (undefined4 **)
                   (((*(int *)(param_1 + 0x1c2) + *(int *)(param_1 + 0x1be) +
                     *(int *)(param_1 + 0x1ba)) / 3 + *(int *)(param_1 + 0x1aa) / 2 +
                     *(int *)(param_1 + 0x1ce) + *(int *)(param_1 + 0x1c6) +
                     *(int *)(param_1 + 0x1a6) + *(int *)(param_1 + 0x1a2)) / 5);
    uVar7 = FUN_0061dd50();
    _ppuStack_610 = (double)CONCAT44(puVar9,uVar7);
    FUN_007a630a(local_2fc);
    puVar9 = (undefined1 *)
             (*(int *)(param_1 + 0x13a) + *(int *)(param_1 + 0x136) + *(int *)(param_1 + 0x132));
    ppuStack_610 = (undefined4 **)
                   ((*(int *)(param_1 + 0x1b6) + *(int *)(param_1 + 0x1b2) +
                    *(int *)(param_1 + 0x1ae)) / 3);
    uVar7 = FUN_0061ddb0();
    _ppuStack_610 = (double)CONCAT44(puVar9,uVar7);
    FUN_007a630a(local_4fc);
    uVar15 = 0xffffffff;
    pcVar18 = local_4fc;
    do {
      pcVar20 = pcVar18;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar18 + 1;
      cVar3 = *pcVar18;
      pcVar18 = pcVar20;
    } while (cVar3 != '\0');
    uVar15 = ~uVar15;
    iVar8 = -1;
    pcVar18 = local_2fc;
    do {
      pcVar19 = pcVar18;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar19 = pcVar18 + 1;
      cVar3 = *pcVar18;
      pcVar18 = pcVar19;
    } while (cVar3 != '\0');
    pcVar18 = pcVar20 + -uVar15;
    pcVar20 = pcVar19 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar20 = pcVar20 + 4;
    }
    puVar9 = *(undefined1 **)(param_1 + 0x14e);
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar20 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar20 = pcVar20 + 1;
    }
    ppuStack_610 = (undefined4 **)s_SPY_HQ_ALL_LEVELS_0085f118;
    uVar7 = FUN_0042b6c9();
    _ppuStack_610 = (double)CONCAT44(puVar9,uVar7);
    FUN_007a630a(local_4fc);
    uVar15 = 0xffffffff;
    pcVar18 = local_4fc;
    do {
      pcVar20 = pcVar18;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar18 + 1;
      cVar3 = *pcVar18;
      pcVar18 = pcVar20;
    } while (cVar3 != '\0');
    uVar15 = ~uVar15;
    iVar8 = -1;
    pcVar18 = local_2fc;
    do {
      pcVar19 = pcVar18;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar19 = pcVar18 + 1;
      cVar3 = *pcVar18;
      pcVar18 = pcVar19;
    } while (cVar3 != '\0');
    pcVar18 = pcVar20 + -uVar15;
    pcVar20 = pcVar19 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar20 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar20 = pcVar20 + 1;
    }
    _ppuStack_610 = (double)CONCAT44(local_2fc,0x613b19);
    FUN_004361a0();
    _ppuStack_610 = 1.06102937797799e-312;
    puVar6 = operator_new(0x32);
    local_8 = 0xf;
    local_24 = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      local_1c = (undefined4 *)0x0;
    }
    else {
      _ppuStack_610 = (double)CONCAT44(0x613b3a,ppuStack_610);
      FUN_00433f00();
      *(undefined4 *)((int)puVar6 + 0x2e) = 6;
      *puVar6 = &PTR_FUN_007ec904;
      puVar6[2] = &PTR_LAB_007ec900;
      local_1c = puVar6;
    }
    iVar8 = *(int *)(param_1 + 0x21e);
    local_8 = 0xffffffff;
    iVar24 = *(int *)(iVar8 + 8);
    _ppuStack_610 = 2.97110893630688e-313;
    puVar6 = operator_new(0xe);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = iVar24;
      *puVar6 = local_1c;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
    }
    iVar1 = *(int *)(iVar8 + 0xc);
    *(undefined4 **)(iVar8 + 8) = puVar6;
    *(int *)(iVar8 + 0xc) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined4 **)(iVar8 + 4) = puVar6;
    }
    else {
      *(undefined4 **)(iVar24 + 8) = puVar6;
    }
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x15a) + *(int *)(param_1 + 0x156));
    ppuStack_610 = (undefined4 **)((*(int *)(param_1 + 0x1d6) + *(int *)(param_1 + 0x1d2)) / 2);
    uVar7 = FUN_0061de10();
    _ppuStack_610 = (double)CONCAT44(puVar9,uVar7);
    FUN_007a630a(local_2fc);
    puVar9 = (undefined1 *)
             (*(int *)(param_1 + 0x16a) + *(int *)(param_1 + 0x166) + *(int *)(param_1 + 0x162) +
             *(int *)(param_1 + 0x15e));
    iVar8 = *(int *)(param_1 + 0x1e6) + *(int *)(param_1 + 0x1e2) + *(int *)(param_1 + 0x1de) +
            *(int *)(param_1 + 0x1da);
    ppuStack_610 = (undefined4 **)((int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2);
    uVar7 = FUN_0061de70();
    _ppuStack_610 = (double)CONCAT44(puVar9,uVar7);
    FUN_007a630a(local_4fc);
    uVar15 = 0xffffffff;
    pcVar18 = local_4fc;
    do {
      pcVar20 = pcVar18;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar18 + 1;
      cVar3 = *pcVar18;
      pcVar18 = pcVar20;
    } while (cVar3 != '\0');
    uVar15 = ~uVar15;
    iVar8 = -1;
    pcVar18 = local_2fc;
    do {
      pcVar19 = pcVar18;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar19 = pcVar18 + 1;
      cVar3 = *pcVar18;
      pcVar18 = pcVar19;
    } while (cVar3 != '\0');
    pcVar18 = pcVar20 + -uVar15;
    pcVar20 = pcVar19 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar20 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar20 = pcVar20 + 1;
    }
    _ppuStack_610 = (double)CONCAT44(local_2fc,0x613c88);
    FUN_004361a0();
    _ppuStack_610 = 1.06102937979121e-312;
    puVar6 = operator_new(0x32);
    local_8 = 0x10;
    local_24 = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      local_1c = (undefined4 *)0x0;
    }
    else {
      _ppuStack_610 = (double)CONCAT44(0x613ca9,ppuStack_610);
      FUN_00433f00();
      *(undefined4 *)((int)puVar6 + 0x2e) = 6;
      *puVar6 = &PTR_FUN_007ec904;
      puVar6[2] = &PTR_LAB_007ec900;
      local_1c = puVar6;
    }
    iVar8 = *(int *)(param_1 + 0x21e);
    local_8 = 0xffffffff;
    iVar24 = *(int *)(iVar8 + 8);
    _ppuStack_610 = 2.97110895443909e-313;
    puVar6 = operator_new(0xe);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = iVar24;
      *puVar6 = local_1c;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
    }
    iVar1 = *(int *)(iVar8 + 0xc);
    *(undefined4 **)(iVar8 + 8) = puVar6;
    *(int *)(iVar8 + 0xc) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined4 **)(iVar8 + 4) = puVar6;
    }
    else {
      *(undefined4 **)(iVar24 + 8) = puVar6;
    }
    uVar7 = *(undefined4 *)(param_1 + 0x17a);
    _ppuStack_610 =
         (double)CONCAT44(*(undefined4 *)(param_1 + 0x186),*(undefined4 *)(param_1 + 0x18e));
    uVar10 = FUN_0061dff0();
    FUN_007a630a(local_2fc,uVar10,uVar7);
    _ppuStack_610 =
         (double)CONCAT44(*(undefined4 *)(param_1 + 0x19e),
                          *(int *)(param_1 + 0x19a) + *(int *)(param_1 + 0x196));
    FUN_0042b6c9(s_SPY_SUBMARINES_AND_TRANSPORTS_AL_0085f0ec);
    FUN_007a630a();
    uVar15 = 0xffffffff;
    pcVar18 = local_4fc;
    do {
      pcVar20 = pcVar18;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar18 + 1;
      cVar3 = *pcVar18;
      pcVar18 = pcVar20;
    } while (cVar3 != '\0');
    uVar15 = ~uVar15;
    iVar8 = -1;
    pcVar18 = local_2fc;
    do {
      pcVar19 = pcVar18;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar19 = pcVar18 + 1;
      cVar3 = *pcVar18;
      pcVar18 = pcVar19;
    } while (cVar3 != '\0');
    pcVar18 = pcVar20 + -uVar15;
    pcVar20 = pcVar19 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar20 = pcVar20 + 4;
    }
    iVar8 = *(int *)(param_1 + 0x192);
    iVar24 = *(int *)(param_1 + 0x182);
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar20 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar20 = pcVar20 + 1;
    }
    puVar9 = (undefined1 *)(iVar8 + *(int *)(param_1 + 0x18a) + iVar24 + *(int *)(param_1 + 0x17e));
    iVar8 = *(int *)(param_1 + 0x20e) + *(int *)(param_1 + 0x20a) + *(int *)(param_1 + 0x202) +
            *(int *)(param_1 + 0x1f6);
    ppuStack_610 = (undefined4 **)((int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2);
    uVar7 = FUN_0061e0b0();
    _ppuStack_610 = (double)CONCAT44(puVar9,uVar7);
    FUN_007a630a(local_4fc);
    uVar15 = 0xffffffff;
    pcVar18 = local_4fc;
    do {
      pcVar20 = pcVar18;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar18 + 1;
      cVar3 = *pcVar18;
      pcVar18 = pcVar20;
    } while (cVar3 != '\0');
    uVar15 = ~uVar15;
    iVar8 = -1;
    pcVar18 = local_2fc;
    do {
      pcVar19 = pcVar18;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar19 = pcVar18 + 1;
      cVar3 = *pcVar18;
      pcVar18 = pcVar19;
    } while (cVar3 != '\0');
    pcVar18 = pcVar20 + -uVar15;
    pcVar20 = pcVar19 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar20 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar20 = pcVar20 + 1;
    }
    _ppuStack_610 = (double)CONCAT44(local_2fc,0x613e79);
    FUN_004361a0();
    _ppuStack_610 = 1.06102938224672e-312;
    puVar6 = operator_new(0x32);
    local_8 = 0x11;
    local_24 = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      local_1c = (undefined4 *)0x0;
    }
    else {
      _ppuStack_610 = (double)CONCAT44(0x613e9a,ppuStack_610);
      FUN_00433f00();
      *(undefined4 *)((int)puVar6 + 0x2e) = 6;
      *puVar6 = &PTR_FUN_007ec904;
      puVar6[2] = &PTR_LAB_007ec900;
      local_1c = puVar6;
    }
    iVar8 = *(int *)(param_1 + 0x21e);
    local_8 = 0xffffffff;
    iVar24 = *(int *)(iVar8 + 8);
    _ppuStack_610 = 2.97110897899416e-313;
    puVar6 = operator_new(0xe);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = iVar24;
      *puVar6 = local_1c;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
    }
    iVar1 = *(int *)(iVar8 + 0xc);
    *(undefined4 **)(iVar8 + 8) = puVar6;
    *(int *)(iVar8 + 0xc) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined4 **)(iVar8 + 4) = puVar6;
    }
    else {
      *(undefined4 **)(iVar24 + 8) = puVar6;
    }
    piVar5 = (int *)0x0;
    local_24 = (undefined4 *)(&DAT_0089cad8)[*(int *)(param_1 + 200)];
    local_18 = (int *)local_24[0x1142];
    if (local_18 != (int *)0x0) {
      do {
        piVar14 = (int *)*local_18;
        local_18 = (int *)local_18[2];
        if (piVar14 != (int *)0x0) {
          _ppuStack_610 = (double)CONCAT44(0x613f40,ppuStack_610);
          cVar3 = (**(code **)(*piVar14 + 0x28))();
          if (cVar3 != '\0') {
            _ppuStack_610 = (double)CONCAT44(0x613f4b,ppuStack_610);
            iVar8 = FUN_0051c480();
            if (iVar8 != 0) {
              _ppuStack_610 = (double)CONCAT44(0x613f56,ppuStack_610);
              puVar6 = (undefined4 *)FUN_00522770();
              if (puVar6 == local_24) {
                _ppuStack_610 = (double)CONCAT44(0x613f62,ppuStack_610);
                piVar14 = (int *)FUN_0051c480();
                if (((piVar5 == (int *)0x0) ||
                    (*(int *)((int)piVar14 + 0x22) < *(int *)((int)piVar5 + 0x22))) ||
                   ((*(int *)((int)piVar14 + 0x22) == *(int *)((int)piVar5 + 0x22) &&
                    (*(int *)((int)piVar5 + 0x32) < *(int *)((int)piVar14 + 0x32))))) {
                  piVar5 = piVar14;
                }
              }
            }
          }
        }
      } while (local_18 != (int *)0x0);
      if ((piVar5 != (int *)0x0) && (*(int *)((int)piVar5 + 0x5e) != 0)) {
        if (*(int *)(*(int *)((int)piVar5 + 0x5e) + 0xc) < 1) {
          _ppuStack_610 = (double)CONCAT44(0x613fb0,ppuStack_610);
          piVar14 = (int *)FUN_004a0750();
        }
        else {
          _ppuStack_610 = (double)CONCAT44(0x613f9c,ppuStack_610);
          piVar14 = (int *)FUN_0051b230();
        }
        _ppuStack_610 = (double)CONCAT44(0x613fb7,ppuStack_610);
        puVar9 = (undefined1 *)(**(code **)(*piVar14 + 0xc))();
        ppuStack_610 = (undefined4 **)0x613fbf;
        uVar7 = (**(code **)(*piVar5 + 0xc))();
        _ppuStack_610 = (double)CONCAT44(puVar9,uVar7);
        uVar7 = FUN_0050a560();
        uVar10 = FUN_0042b6c9();
        FUN_007a630a(local_2fc,uVar10,uVar7);
        _ppuStack_610 = (double)CONCAT44(local_2fc,0x613ff9);
        FUN_004361a0();
      }
    }
    _ppuStack_610 = (double)CONCAT44(0x614004,ppuStack_610);
    FUN_004351b0();
    _ppuStack_610 = (double)CONCAT44(0x61400f,ppuStack_610);
    FUN_004353e0();
    _ppuStack_610 = (double)CONCAT44(0x61401a,ppuStack_610);
    FUN_00435fd0();
  }
  ExceptionList = local_10;
  return;
}


