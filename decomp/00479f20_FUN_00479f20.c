// FUN_00479f20 @ 479f20 size=968

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00479f20(int param_1,undefined4 *param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 unaff_EBX;
  char *pcVar11;
  char unaff_retaddr;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar4 = (uint)param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bd0e1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar6 = (int *)FUN_0044c3d0(*(undefined1 *)(*(int *)((int)param_2 + 4) + 0x14),
                               *(undefined1 *)(*(int *)((int)param_2 + 4) + 0x16));
  iVar10 = *(int *)((int)param_2 + 4);
  uVar3 = (uint)param_2 >> 8;
  param_2 = (undefined4 *)((uint)param_2 & 0xffffff00);
  if (*(char *)(iVar10 + 0x14) == -0x74) {
    param_2 = (undefined4 *)CONCAT31((int3)uVar3,1);
    piVar6 = (int *)FUN_0044c5b0(*(undefined1 *)(iVar10 + 0x15),*(undefined1 *)(iVar10 + 0x16));
  }
  cVar5 = (**(code **)(*piVar6 + 0xc))();
  if (cVar5 == '\0') {
    cVar5 = (**(code **)(*piVar6 + 0x14))();
    if (cVar5 == '\0') {
      cVar5 = (**(code **)(*piVar6 + 0x10))();
      if (cVar5 != '\0') {
        param_2 = operator_new(0x300);
        uStack_4 = 2;
        puStack_10 = param_2;
        if (param_2 == (undefined4 *)0x0) goto LAB_0047a0e4;
        FUN_004fb840();
        *param_2 = &PTR_FUN_007e69a8;
        param_2[2] = &PTR_LAB_007e6994;
        *(undefined ***)((int)param_2 + 0x12) = &PTR_FUN_007e698c;
        puVar9 = param_2 + 0xb3;
        for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        *(undefined1 *)((int)param_2 + 0x161) = 1;
        uStack_4 = 0xffffffff;
      }
    }
    else {
      param_2 = operator_new(0x2fc);
      uStack_4 = 1;
      puStack_10 = param_2;
      if (param_2 == (undefined4 *)0x0) goto LAB_0047a0e4;
      FUN_004fb840();
      *param_2 = &PTR_FUN_007e6a00;
      param_2[2] = &PTR_LAB_007e69ec;
      *(undefined ***)((int)param_2 + 0x12) = &PTR_LAB_007e69e4;
      param_2[0xb3] = 0;
      uStack_4 = 0xffffffff;
      puVar9 = param_2 + 0xb4;
      for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      param_2[0xbd] = 0x7f7fffff;
      *(undefined1 *)(param_2 + 0x58) = 1;
    }
  }
  else {
    param_2 = operator_new(0x300);
    uStack_4 = 0;
    puStack_10 = param_2;
    if (param_2 == (undefined4 *)0x0) {
LAB_0047a0e4:
      param_2 = (undefined4 *)0x0;
      uStack_4 = 0xffffffff;
    }
    else {
      FUN_004fb840();
      *param_2 = &PTR_FUN_007e6a58;
      param_2[2] = &PTR_LAB_007e6a44;
      *(undefined ***)((int)param_2 + 0x12) = &PTR_FUN_007e6a3c;
      puVar9 = param_2 + 0xb3;
      for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      *(undefined1 *)((int)param_2 + 0x15f) = 1;
      uStack_4 = 0xffffffff;
    }
  }
  param_2[0x17] = param_1;
  (**(code **)(param_2[2] + 4))(*(int *)(uVar4 + 4) + 0xe);
  if (unaff_retaddr != '\0') {
    FUN_004fbc90(piVar6,*(undefined1 *)(*(int *)(uVar4 + 4) + 0x15),
                 *(undefined1 *)(*(int *)(uVar4 + 4) + 0x16),0,1);
    uVar7 = FUN_004ff380(*(undefined1 *)(*(int *)(uVar4 + 4) + 0x15));
    FUN_00425ba0(uVar7);
    param_2[0x1b] = 0;
    param_2[0x52] = 0;
    param_2[0x3d] = 0;
    goto LAB_0047a203;
  }
  iVar10 = *(int *)(uVar4 + 4);
  uVar13 = 0;
  uVar12 = 1;
  uVar7 = FUN_0044c4a0(*(undefined1 *)(iVar10 + 0x15));
  FUN_004fbc90(unaff_EBX,*(undefined1 *)(iVar10 + 0x15),uVar7,uVar12,uVar13);
  pcVar8 = (char *)(*(int *)(uVar4 + 4) + 0x17);
  if (pcVar8 == &DAT_0088ebf8) {
LAB_0047a159:
    pcVar8 = (char *)FUN_005bf284(param_1,param_2[0x4c]);
  }
  else {
    iVar10 = -1;
    pcVar11 = pcVar8;
    do {
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      cVar5 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar5 != '\0');
    if (iVar10 == -2) goto LAB_0047a159;
  }
  FUN_00425ba0(pcVar8);
  param_2[0x1b] = 0;
  param_2[0x4e] = (uint)*(byte *)(*(int *)(uVar4 + 4) + 0x16);
  fVar1 = (*(float *)(*(int *)(param_1 + 0x244) + 0x86) - _DAT_007e3374) * _DAT_007e4088;
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  param_2[0x40] = fVar1;
LAB_0047a203:
  if (*(char *)((int)param_2 + 0x162) == '\0') {
    fVar1 = *(float *)(param_1 + 0x40a2 + param_2[0x4c] * 4);
    if ((float)param_2[0x3c] < fVar1) {
      fVar1 = (float)param_2[0x3c];
    }
    param_2[0x3b] = fVar1;
    param_2[0x3c] = *(undefined4 *)(param_1 + 0x40a2 + param_2[0x4c] * 4);
  }
  else {
    fVar1 = _DAT_007e4088;
    if ((float)param_2[0x3c] < _DAT_007e4088) {
      fVar1 = (float)param_2[0x3c];
    }
    param_2[0x3b] = fVar1;
    param_2[0x3c] = 0x42c80000;
  }
  iVar10 = *(int *)(param_1 + 0x4520);
  puVar9 = operator_new(0xe);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    *puVar9 = param_2;
    puVar9[1] = iVar10;
    puVar9[2] = 0;
    *(undefined1 *)(puVar9 + 3) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x4524);
  *(undefined4 **)(param_1 + 0x4520) = puVar9;
  *(int *)(param_1 + 0x4524) = iVar2 + 1;
  if (iVar2 == 0) {
    *(undefined4 **)(param_1 + 0x451c) = puVar9;
  }
  else {
    *(undefined4 **)(iVar10 + 8) = puVar9;
  }
  FUN_005054d0();
  ExceptionList = puStack_10;
  return 3;
}


