// FUN_006afaf0 @ 6afaf0 size=692

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_006afaf0(int param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  float10 fVar10;
  undefined **ppuVar11;
  undefined4 uVar12;
  float local_34;
  float local_30;
  int local_28;
  void *local_24;
  undefined **local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007d5ec3;
  pvStack_c = ExceptionList;
  local_30 = 1.0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_20 = &PTR_LAB_007e378c;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  iVar6 = FUN_004e9370(*(undefined4 *)(param_1 + 4));
  piVar4 = *(int **)(param_1 + 0x72);
  ppuVar11 = local_20;
  iVar7 = local_1c;
  while (local_1c = iVar7, local_20 = ppuVar11, piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[2];
    iVar8 = *piVar4;
    ppuVar1 = ppuVar11 + 0xb;
    uVar12 = *(undefined4 *)(iVar8 + 0xc);
    FUN_004174a0(local_1c);
    (*(code *)*ppuVar1)(&local_28,ppuVar11,uVar12);
    iVar3 = local_18;
    piVar4 = piVar2;
    ppuVar11 = local_20;
    iVar7 = local_1c;
    if (local_28 == 0) {
      uVar12 = *(undefined4 *)(iVar8 + 0xc);
      local_24 = operator_new(0xe);
      local_4._0_1_ = 1;
      if (local_24 == (void *)0x0) {
        local_18 = 0;
      }
      else {
        local_18 = FUN_0049a7a0(uVar12,iVar3,0);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      iVar8 = local_14 + 1;
      bVar9 = local_14 != 0;
      ppuVar11 = local_20;
      iVar7 = local_18;
      local_14 = iVar8;
      if (bVar9) {
        *(int *)(iVar3 + 8) = local_18;
        iVar7 = local_1c;
      }
    }
  }
  cVar5 = FUN_004e4b60();
  if (cVar5 == '\0') {
    if (2 < local_14) {
      local_28 = local_14 + -2;
      local_30 = (float)local_28 * _DAT_00dc1590 + _DAT_007e3374;
    }
    if ((*(int *)(iVar6 + 0x482) != 0) &&
       (iVar7 = (**(code **)(*(int *)(*(int *)(iVar6 + 0x482) + 0x28) + 4))(), iVar7 < 2)) {
      bVar9 = true;
      iVar7 = *(int *)(*(int *)(iVar6 + 0x482) + 0x3e);
      if (iVar7 != 0) {
        do {
          if (!bVar9) goto LAB_006afcac;
          iVar7 = *(int *)(iVar7 + 8);
          iVar8 = FUN_004c9f81();
          if (iVar8 != 0) {
            cVar5 = FUN_005861a0(*(undefined4 *)(iVar8 + 6));
            if (cVar5 != '\0') {
              bVar9 = false;
            }
            iVar3 = *(int *)(*(int *)(iVar6 + 0x3d8) + 0x3350);
            if ((iVar3 != 0) && (*(int *)(iVar8 + 0x3350) == iVar3)) {
              bVar9 = false;
            }
          }
        } while (iVar7 != 0);
        if (!bVar9) goto LAB_006afcac;
      }
      local_30 = (DAT_00dc1594 + _DAT_007e3374) * local_30;
    }
  }
LAB_006afcac:
  iVar6 = 0;
  iVar7 = 0;
  local_34 = 0.0;
  local_28 = 1;
  piVar4 = *(int **)(param_1 + 0x48);
  while (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[2];
    iVar8 = *piVar4;
    cVar5 = FUN_0051cb20();
    if (cVar5 != '\0') {
      local_28 = DAT_00dc15fc;
    }
    piVar4 = piVar2;
    if (*(char *)(iVar8 + 0x17b) == '\0') {
      iVar8 = (**(code **)(*(int *)(iVar8 + 0x22) + 4))();
      iVar7 = iVar7 + iVar8;
      FUN_0051c480();
      iVar8 = FUN_0050a580();
      iVar6 = iVar6 + iVar8;
      fVar10 = (float10)FUN_0051c3a0(param_2,1,*(undefined4 *)(param_1 + 4),0);
      local_34 = (float)(fVar10 + (float10)local_34);
    }
  }
  local_34 = local_34 * local_30;
  if (local_28 * iVar6 < iVar7) {
    local_34 = local_34 - (float)((iVar7 - local_28 * iVar6) / iVar7) * local_34 * _DAT_007e4094;
  }
  local_20 = &PTR_LAB_007e378c;
  iVar7 = local_1c;
  while (iVar7 != 0) {
    iVar6 = *(int *)(iVar7 + 8);
    FUN_00796cd8(iVar7);
    iVar7 = iVar6;
  }
  ExceptionList = pvStack_c;
  return (float10)local_34;
}


