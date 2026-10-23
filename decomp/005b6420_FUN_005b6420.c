// FUN_005b6420 @ 5b6420 size=1339

void FUN_005b6420(undefined2 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined2 local_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar2 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cbfb7;
  pvStack_c = ExceptionList;
  if (*(short *)(param_2 + 0x2a) == 0) {
    ExceptionList = &pvStack_c;
    iVar5 = FUN_0044e1b0();
  }
  else {
    ExceptionList = &pvStack_c;
    iVar5 = FUN_005b62a0(param_2,*(short *)(param_2 + 0x2a));
  }
  iVar6 = *(int *)(param_2 + 0x26);
  if (iVar6 == 0) {
    piVar1 = (int *)(param_2 + 0x62);
    local_2c = 0;
    uStack_2a = 0;
    param_2 = 0;
    puVar7 = *(undefined4 **)(*piVar1 + 0x4508);
    if (puVar7 == (undefined4 *)0x0) goto LAB_005b6578;
    do {
      puVar10 = (undefined4 *)puVar7[2];
      piVar1 = (int *)*puVar7;
      cVar4 = (**(code **)(*piVar1 + 0x28))();
      if ((cVar4 != '\0') && (iVar6 = (**(code **)(*piVar1 + 0xac))(), param_2 < iVar6)) {
        local_2c = SUB42(piVar1,0);
        uStack_2a = (undefined2)((uint)piVar1 >> 0x10);
        param_2 = iVar6;
      }
      puVar7 = puVar10;
    } while (puVar10 != (undefined4 *)0x0);
    iVar6 = CONCAT22(uStack_2a,local_2c);
  }
  else if (iVar6 == 1) {
    piVar1 = (int *)(param_2 + 0x62);
    local_2c = 0;
    uStack_2a = 0;
    param_2 = 0;
    puVar7 = *(undefined4 **)(*piVar1 + 0x4508);
    if (puVar7 == (undefined4 *)0x0) goto LAB_005b6578;
    do {
      puVar10 = (undefined4 *)puVar7[2];
      piVar1 = (int *)*puVar7;
      cVar4 = (**(code **)(*piVar1 + 0x2c))();
      if ((cVar4 != '\0') && (iVar6 = (**(code **)(*piVar1 + 0xac))(), param_2 < iVar6)) {
        local_2c = SUB42(piVar1,0);
        uStack_2a = (undefined2)((uint)piVar1 >> 0x10);
        param_2 = iVar6;
      }
      puVar7 = puVar10;
    } while (puVar10 != (undefined4 *)0x0);
    iVar6 = CONCAT22(uStack_2a,local_2c);
  }
  else {
    if (iVar6 != 2) goto LAB_005b6578;
    piVar1 = (int *)(param_2 + 0x62);
    local_2c = 0;
    uStack_2a = 0;
    param_2 = 0;
    puVar7 = *(undefined4 **)(*piVar1 + 0x4508);
    if (puVar7 == (undefined4 *)0x0) goto LAB_005b6578;
    do {
      puVar10 = (undefined4 *)puVar7[2];
      piVar1 = (int *)*puVar7;
      cVar4 = (**(code **)(*piVar1 + 0x30))();
      if ((cVar4 != '\0') && (iVar6 = (**(code **)(*piVar1 + 0xac))(), param_2 < iVar6)) {
        local_2c = SUB42(piVar1,0);
        uStack_2a = (undefined2)((uint)piVar1 >> 0x10);
        param_2 = iVar6;
      }
      puVar7 = puVar10;
    } while (puVar10 != (undefined4 *)0x0);
    iVar6 = CONCAT22(uStack_2a,local_2c);
  }
  if (iVar6 != 0) {
    *param_1 = *(undefined2 *)(iVar6 + 0x18);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(iVar6 + 0x1a);
    ExceptionList = pvStack_c;
    return;
  }
LAB_005b6578:
  if (*(int *)(iVar2 + 0x26) == 1) {
    if ((iVar5 == *(int *)(*(int *)(iVar2 + 0x62) + 0x117de)) ||
       (*(int *)(DAT_00ab27b4 + 0x46a + iVar5 * 0x4b2) == 0)) {
      iVar5 = FUN_0044bf40();
    }
    if ((iVar5 < 1) ||
       (((*(int *)(DAT_00ab27b4 + 0x46a + iVar5 * 0x4b2) == 0 &&
         (iVar6 = *(int *)(DAT_00ab27b4 + iVar5 * 0x4b2 + 0x254), iVar6 != 8)) && (iVar6 != 9)))) {
      *param_1 = DAT_0088f28c;
      uVar9 = CONCAT22(DAT_0088f28e._2_2_,(undefined2)DAT_0088f28e);
    }
    else {
      FUN_00428eb0(&local_2c);
      puVar7 = operator_new(0xc);
      uStack_4 = 0;
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        FUN_005b6af0(0x69,*(int *)(iVar2 + 0x62) + 4);
        *puVar7 = &PTR_FUN_007e6464;
        *(int *)(puVar7[1] + 0xe) = iVar5;
        iVar5 = puVar7[1];
        *(uint *)(iVar5 + 0x18) = CONCAT22(uStack_2a,local_2c);
        *(undefined2 *)(iVar5 + 0x1c) = uStack_28;
        iVar5 = puVar7[1];
        *(undefined4 *)(iVar5 + 0x1e) = *(undefined4 *)(iVar2 + 0x10);
        *(undefined2 *)(iVar5 + 0x22) = *(undefined2 *)(iVar2 + 0x14);
        iVar2 = puVar7[1];
        *(uint *)(iVar2 + 0x12) = CONCAT22((undefined2)DAT_0088f28e,DAT_0088f28c);
        *(undefined2 *)(iVar2 + 0x16) = DAT_0088f28e._2_2_;
        _strncpy((char *)(puVar7[1] + 0x24),&DAT_0088ebf8,0x40);
      }
      uStack_4 = 0xffffffff;
      FUN_00565bc0(puVar7);
      uVar9 = CONCAT22(uStack_28,uStack_2a);
      *param_1 = local_2c;
    }
  }
  else if (*(int *)(iVar2 + 0x26) == 2) {
    FUN_00428eb0(&uStack_24);
    puVar7 = operator_new(0xc);
    uStack_4 = 1;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      iVar6 = *(int *)(iVar2 + 0x62);
      pvVar8 = operator_new(100);
      local_2c = SUB42(pvVar8,0);
      uStack_2a = (undefined2)((uint)pvVar8 >> 0x10);
      uStack_4._0_1_ = 2;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_005b6b90();
      }
      uStack_4._0_1_ = 1;
      FUN_0042d320(uVar9);
      *puVar7 = &PTR_FUN_007e6404;
      *(undefined1 *)((int)puVar7 + 10) = 0;
      *(undefined2 *)puVar7[1] = 0x67;
      iVar3 = puVar7[1];
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar6 + 4);
      *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(iVar6 + 8);
      uStack_4 = CONCAT31(uStack_4._1_3_,3);
      puVar10 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar6 = puVar7[1];
      *(undefined4 *)(iVar6 + 2) = *puVar10;
      *(undefined2 *)(iVar6 + 6) = *(undefined2 *)(puVar10 + 1);
      *puVar7 = &PTR_FUN_007e63e4;
      *(int *)(puVar7[1] + 0xe) = iVar5;
      iVar5 = puVar7[1];
      *(uint *)(iVar5 + 0x18) = CONCAT22(uStack_22,uStack_24);
      *(undefined2 *)(iVar5 + 0x1c) = uStack_20;
      iVar5 = puVar7[1];
      *(undefined4 *)(iVar5 + 0x1e) = *(undefined4 *)(iVar2 + 0x10);
      *(undefined2 *)(iVar5 + 0x22) = *(undefined2 *)(iVar2 + 0x14);
      iVar2 = puVar7[1];
      *(uint *)(iVar2 + 0x12) = CONCAT22((undefined2)DAT_0088f28e,DAT_0088f28c);
      *(undefined2 *)(iVar2 + 0x16) = DAT_0088f28e._2_2_;
      _strncpy((char *)(puVar7[1] + 0x24),&DAT_0088ebf8,0x40);
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0(puVar7);
    uVar9 = CONCAT22(uStack_20,uStack_22);
    *param_1 = uStack_24;
  }
  else {
    FUN_00428eb0(&uStack_1c);
    puVar7 = operator_new(0xc);
    uStack_4 = 4;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      iVar6 = *(int *)(iVar2 + 0x62);
      pvVar8 = operator_new(100);
      local_2c = SUB42(pvVar8,0);
      uStack_2a = (undefined2)((uint)pvVar8 >> 0x10);
      uStack_4._0_1_ = 5;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_005b6b90();
      }
      uStack_4._0_1_ = 4;
      FUN_0042d320(uVar9);
      *puVar7 = &PTR_FUN_007e6404;
      *(undefined1 *)((int)puVar7 + 10) = 0;
      *(undefined2 *)puVar7[1] = 0x66;
      iVar3 = puVar7[1];
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar6 + 4);
      *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(iVar6 + 8);
      uStack_4 = CONCAT31(uStack_4._1_3_,6);
      puVar10 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar6 = puVar7[1];
      *(undefined4 *)(iVar6 + 2) = *puVar10;
      *(undefined2 *)(iVar6 + 6) = *(undefined2 *)(puVar10 + 1);
      *puVar7 = &PTR_FUN_007e63e4;
      *(int *)(puVar7[1] + 0xe) = iVar5;
      iVar5 = puVar7[1];
      *(uint *)(iVar5 + 0x18) = CONCAT22(uStack_1a,uStack_1c);
      *(undefined2 *)(iVar5 + 0x1c) = uStack_18;
      iVar5 = puVar7[1];
      *(undefined4 *)(iVar5 + 0x1e) = *(undefined4 *)(iVar2 + 0x10);
      *(undefined2 *)(iVar5 + 0x22) = *(undefined2 *)(iVar2 + 0x14);
      iVar2 = puVar7[1];
      *(uint *)(iVar2 + 0x12) = CONCAT22((undefined2)DAT_0088f28e,DAT_0088f28c);
      *(undefined2 *)(iVar2 + 0x16) = DAT_0088f28e._2_2_;
      _strncpy((char *)(puVar7[1] + 0x24),&DAT_0088ebf8,0x40);
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0(puVar7);
    uVar9 = CONCAT22(uStack_18,uStack_1a);
    *param_1 = uStack_1c;
  }
  *(undefined4 *)(param_1 + 1) = uVar9;
  ExceptionList = pvStack_c;
  return;
}


