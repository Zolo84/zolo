// FUN_0066e560 @ 66e560 size=1058

/* WARNING: Removing unreachable block (ram,0x0066e959) */

int * __thiscall FUN_0066e560(int *param_1,int *param_2)

{
  undefined **ppuVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  void *pvVar8;
  int *piVar9;
  undefined ***pppuVar10;
  int *piVar11;
  bool bVar12;
  float10 fVar13;
  undefined **ppuStack_4c;
  int *piStack_48;
  float fStack_44;
  int iStack_40;
  undefined4 uStack_38;
  undefined **local_34;
  undefined4 *local_30;
  undefined **local_2c;
  int local_28;
  uint local_24;
  undefined **ppuStack_20;
  void *pvStack_1c;
  void *pvStack_18;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007d41fd;
  pvStack_c = ExceptionList;
  local_30 = (undefined4 *)0x0;
  local_2c = (undefined **)0x0;
  local_28 = 0;
  local_24 = local_24 & 0xffffff00;
  local_34 = &PTR_LAB_007e7e20;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  puVar4 = operator_new(0xc4);
  local_4._0_1_ = 1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    (**(code **)(*param_1 + 0xe0))();
    FUN_0066ec80();
    *puVar4 = &PTR_FUN_007f2d44;
  }
  ppuVar1 = local_2c;
  local_4._0_1_ = 0;
  pvVar5 = operator_new(0xe);
  local_4._0_1_ = 2;
  if (pvVar5 == (void *)0x0) {
    local_2c = (undefined **)0x0;
  }
  else {
    local_2c = (undefined **)FUN_00676e60(puVar4,ppuVar1);
  }
  local_4._0_1_ = 0;
  puVar4 = local_2c;
  if (local_28 != 0) {
    *(undefined ***)((int)ppuVar1 + 8) = local_2c;
    puVar4 = local_30;
  }
  local_30 = puVar4;
  local_28 = local_28 + 1;
  puVar4 = operator_new(0xc4);
  local_4._0_1_ = 3;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    (**(code **)(*param_1 + 0xe0))();
    FUN_0066ec80();
    *puVar4 = &PTR_FUN_007f2b28;
  }
  ppuVar1 = local_2c;
  local_4._0_1_ = 0;
  pvVar5 = operator_new(0xe);
  local_4._0_1_ = 4;
  if (pvVar5 == (void *)0x0) {
    local_2c = (undefined **)0x0;
  }
  else {
    local_2c = (undefined **)FUN_00676e60(puVar4,ppuVar1);
  }
  local_4._0_1_ = 0;
  puVar4 = local_2c;
  if (local_28 != 0) {
    ppuVar1[2] = (undefined *)local_2c;
    puVar4 = local_30;
  }
  local_30 = puVar4;
  local_28 = local_28 + 1;
  puVar4 = operator_new(200);
  local_4._0_1_ = 5;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    (**(code **)(*param_1 + 0xe0))();
    FUN_0066ec80();
    puVar4[0x30] = 0;
    puVar4[0x31] = 0;
    *puVar4 = &PTR_FUN_007f290c;
  }
  ppuVar1 = local_2c;
  local_4._0_1_ = 0;
  pvVar5 = operator_new(0xe);
  local_4._0_1_ = 6;
  if (pvVar5 == (void *)0x0) {
    local_2c = (undefined **)0x0;
  }
  else {
    local_2c = (undefined **)FUN_00676e60(puVar4,ppuVar1);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  puVar4 = local_2c;
  if (local_28 != 0) {
    ppuVar1[2] = (undefined *)local_2c;
    puVar4 = local_30;
  }
  local_30 = puVar4;
  local_28 = local_28 + 1;
  iVar6 = (**(code **)(*param_2 + 4))();
  if (iVar6 != 0) {
    FUN_00669640();
  }
  fStack_44 = 0.0;
  iStack_40 = 0;
  piStack_48 = (int *)0x0;
  FUN_004734e0();
  ppuStack_20 = &PTR_FUN_007e5258;
  local_4._0_1_ = 7;
  uVar7 = FUN_006a9d50();
  pvVar5 = pvStack_18;
  pvVar8 = operator_new(0xe);
  local_4._0_1_ = 8;
  if (pvVar8 == (void *)0x0) {
    pvStack_18 = (void *)0x0;
  }
  else {
    pvStack_18 = (void *)FUN_00473a90(uVar7,pvStack_18);
  }
  local_4 = CONCAT31(local_4._1_3_,7);
  bVar12 = iStack_14 == 0;
  iStack_14 = iStack_14 + 1;
  if (bVar12) {
    pvStack_1c = pvStack_18;
  }
  else {
    *(void **)((int)pvVar5 + 8) = pvStack_18;
  }
  pppuVar10 = &ppuStack_20;
  iVar6 = *(int *)(*(int *)((int)param_1 + 10) + 0x3350);
  if (iVar6 != 0) {
    pppuVar10 = *(undefined ****)(iVar6 + 0x22);
  }
  ppuStack_4c = pppuVar10[1];
  piVar11 = (int *)(*(int *)(*(int *)((int)param_1 + 10) + 0x120) + 0xb8);
  if (ppuStack_4c == (undefined **)0x0) {
    piStack_48 = (int *)0x0;
  }
  else {
    do {
      if (((&DAT_0089cad8)[(int)*ppuStack_4c] != 0) &&
         (piVar9 = (int *)(**(code **)(*piVar11 + 0x28))(&uStack_38), *piVar9 == 0)) {
        iVar6 = FUN_004a5a30();
        for (piVar9 = *(int **)(iVar6 + 4); piVar9 != (int *)0x0; piVar9 = (int *)piVar9[2]) {
          iVar6 = *piVar9;
          puVar4 = local_30;
          if (*(char *)(iVar6 + 0x45) == '\0') {
            for (; puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)puVar4[2]) {
              piVar2 = (int *)*puVar4;
              (**(code **)(*piVar2 + 0x210))(param_2);
              fVar13 = (float10)(**(code **)(*piVar2 + 0x208))();
              if ((float10)fStack_44 < fVar13) {
                fStack_44 = (float)fVar13;
                piStack_48 = piVar2;
                iStack_40 = iVar6;
              }
            }
          }
        }
      }
      ppuStack_4c = (undefined **)ppuStack_4c[2];
    } while (ppuStack_4c != (undefined **)0x0);
    if ((piStack_48 != (int *)0x0) && (iStack_40 != 0)) {
      (**(code **)(*piStack_48 + 0x210))(param_2);
    }
  }
  ppuVar1 = local_34 + 7;
  (*(code *)local_34[10])(&stack0xffffffa0,piStack_48);
  (*(code *)*ppuVar1)();
  while (piVar11 != (int *)0x0) {
    piVar9 = (int *)piVar11[2];
    if ((undefined4 *)*piVar11 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar11)(1);
    }
    FUN_00796cd8(piVar11);
    piVar11 = piVar9;
  }
  uStack_38 = 0;
  local_34 = (undefined **)0x0;
  local_2c = &PTR_LAB_007e3ff0;
  iVar6 = local_28;
  while (iVar6 != 0) {
    iVar3 = *(int *)(iVar6 + 8);
    FUN_00796cd8(iVar6);
    iVar6 = iVar3;
  }
  ExceptionList = pvStack_18;
  return piStack_48;
}


