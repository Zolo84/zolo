// FUN_004b9c80 @ 4b9c80 size=795

void __fastcall FUN_004b9c80(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007be89c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(char *)(param_1[0x20] + 0x3f) == '\0') {
    ExceptionList = &pvStack_c;
    iVar3 = FUN_004b40b0();
    if (*(char *)(iVar3 + 0x3f) != '\0') {
      uVar4 = (**(code **)(*param_1 + 0xc))();
      FUN_00405ad0(s__s__Attacker_won__0083f1c0,uVar4);
      (**(code **)(*(int *)param_1[0x20] + 0x44))(param_1[0x21]);
      (**(code **)(*param_1 + 0x14))(param_1[0x20],param_1[0x21]);
      goto LAB_004b9d6e;
    }
  }
  iVar3 = param_1[0x21];
  if (*(char *)(iVar3 + 0x3f) == '\0') {
    if (*(char *)(iVar3 + 0x4e) == '\0') {
      iVar3 = *(int *)(*(int *)(iVar3 + 0x40) + 0x80);
    }
    else {
      iVar3 = *(int *)(*(int *)(iVar3 + 0x40) + 0x84);
    }
    if (*(char *)(iVar3 + 0x3f) != '\0') {
      uVar4 = (**(code **)(*param_1 + 0xc))();
      FUN_00405ad0(s__s__Defender_won__0083f1ac,uVar4);
      (**(code **)(*(int *)param_1[0x21] + 0x44))(param_1[0x20]);
      (**(code **)(*param_1 + 0x14))(param_1[0x21],param_1[0x20]);
      goto LAB_004b9d6e;
    }
  }
  uVar4 = (**(code **)(*param_1 + 0xc))();
  FUN_00405ad0(s__s__The_battle_ended_in_a_draw__0083f188,uVar4);
LAB_004b9d6e:
  puVar5 = operator_new(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    iVar3 = param_1[0x1d];
    uVar4 = *(undefined4 *)(DAT_00893530 + 0x14);
    uVar1 = *(undefined2 *)(DAT_00893530 + 0x18);
    pvVar6 = operator_new(0x1e);
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_004c0df0();
    }
    FUN_0042d320(uVar7);
    *puVar5 = &PTR_FUN_007e7638;
    *(undefined1 *)((int)puVar5 + 10) = 0;
    *(undefined2 *)puVar5[1] = 0x24;
    iVar2 = puVar5[1];
    *(int *)(iVar2 + 8) = param_1[3];
    *(short *)(iVar2 + 0xc) = (short)param_1[4];
    puVar8 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar2 = puVar5[1];
    *(undefined4 *)(iVar2 + 2) = *puVar8;
    *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(puVar8 + 1);
    *puVar5 = &PTR_FUN_007e7618;
    *(int *)(puVar5[1] + 0xe) = iVar3;
    iVar3 = puVar5[1];
    *(int *)(iVar3 + 0x12) = param_1[3];
    *(short *)(iVar3 + 0x16) = (short)param_1[4];
    iVar3 = puVar5[1];
    *(undefined4 *)(iVar3 + 0x18) = uVar4;
    *(undefined2 *)(iVar3 + 0x1c) = uVar1;
  }
  FUN_00565bc0(puVar5);
  (**(code **)(*param_1 + 0x60))();
  puVar5 = operator_new(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    iVar3 = param_1[0x1d];
    uVar4 = *(undefined4 *)(DAT_00893530 + 0x14);
    uVar1 = *(undefined2 *)(DAT_00893530 + 0x18);
    pvVar6 = operator_new(0x1e);
    if (pvVar6 == (void *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      FUN_0042d6c0();
      *(undefined2 *)((int)pvVar6 + 0x12) = 0;
      *(undefined4 *)((int)pvVar6 + 0x14) = 0;
      FUN_0042d2d0();
    }
    FUN_0042d320(pvVar6);
    *puVar5 = &PTR_FUN_007e7638;
    *(undefined1 *)((int)puVar5 + 10) = 0;
    *(undefined2 *)puVar5[1] = 0x24;
    iVar2 = puVar5[1];
    *(undefined4 *)(iVar2 + 8) = DAT_0088f2c4;
    *(undefined2 *)(iVar2 + 0xc) = DAT_0088f2c8;
    puVar8 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar2 = puVar5[1];
    *(undefined4 *)(iVar2 + 2) = *puVar8;
    *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(puVar8 + 1);
    *puVar5 = &PTR_FUN_007e7618;
    *(int *)(puVar5[1] + 0xe) = iVar3;
    iVar3 = puVar5[1];
    *(int *)(iVar3 + 0x12) = param_1[3];
    *(short *)(iVar3 + 0x16) = (short)param_1[4];
    iVar3 = puVar5[1];
    *(undefined4 *)(iVar3 + 0x18) = uVar4;
    *(undefined2 *)(iVar3 + 0x1c) = uVar1;
  }
  FUN_00565c50(puVar5);
  ExceptionList = pvStack_18;
  return;
}


