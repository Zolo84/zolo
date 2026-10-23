// FUN_0066da10 @ 66da10 size=2862

int * __thiscall FUN_0066da10(int *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined ***pppuVar10;
  int unaff_EBX;
  int *unaff_EBP;
  int *piVar11;
  undefined **ppuVar12;
  bool bVar13;
  float10 fVar14;
  int *piStack_60;
  int iStack_5c;
  float fStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_44;
  int local_3c;
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
  undefined4 local_4;
  
  puStack_8 = &LAB_007d418f;
  pvStack_c = ExceptionList;
  local_30 = (undefined4 *)0x0;
  local_2c = (undefined **)0x0;
  local_28 = 0;
  local_24 = local_24 & 0xffffff00;
  local_34 = &PTR_LAB_007f28dc;
  local_4 = 0;
  cVar2 = *(char *)(*(int *)(*(int *)((int)param_1 + 10) + 0x12da) + 0x3b38);
  if (cVar2 == '\0') {
    ExceptionList = &pvStack_c;
    puVar3 = operator_new(200);
    local_4._0_1_ = 0x17;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      (**(code **)(*param_1 + 0xe0))();
      FUN_00671d90();
      *puVar3 = &PTR_FUN_007f248c;
    }
    ppuVar12 = local_2c;
    local_4._0_1_ = 0;
    pvVar4 = operator_new(0xe);
    local_4._0_1_ = 0x18;
    if (pvVar4 == (void *)0x0) {
      local_2c = (undefined **)0x0;
    }
    else {
      local_2c = (undefined **)FUN_00676e80(puVar3,ppuVar12);
    }
    local_4._0_1_ = 0;
    puVar3 = local_2c;
    if (local_28 != 0) {
      *(undefined ***)((int)ppuVar12 + 8) = local_2c;
      puVar3 = local_30;
    }
    local_30 = puVar3;
    local_28 = local_28 + 1;
    puVar3 = operator_new(200);
    local_4._0_1_ = 0x19;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      (**(code **)(*param_1 + 0xe0))();
      FUN_00671d90();
      *puVar3 = &PTR_FUN_007f1124;
    }
    ppuVar12 = local_2c;
    local_4._0_1_ = 0;
    pvVar4 = operator_new(0xe);
    local_4._0_1_ = 0x1a;
    if (pvVar4 == (void *)0x0) {
      local_2c = (undefined **)0x0;
    }
    else {
      local_2c = (undefined **)FUN_00676e80(puVar3,ppuVar12);
    }
    iVar9 = local_28 + 1;
    bVar13 = local_28 != 0;
    puVar3 = local_2c;
    local_28 = iVar9;
    if (bVar13) {
      ppuVar12[2] = (undefined *)local_2c;
      puVar3 = local_30;
    }
  }
  else {
    ExceptionList = &pvStack_c;
    puVar3 = operator_new(200);
    local_4._0_1_ = 1;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      (**(code **)(*param_1 + 0xe0))();
      FUN_00671d90();
      *puVar3 = &PTR_FUN_007f26b4;
    }
    ppuVar12 = local_2c;
    local_4._0_1_ = 0;
    pvVar4 = operator_new(0xe);
    local_4._0_1_ = 2;
    if (pvVar4 == (void *)0x0) {
      local_2c = (undefined **)0x0;
    }
    else {
      local_2c = (undefined **)FUN_00676e80(puVar3,ppuVar12);
    }
    local_4._0_1_ = 0;
    puVar3 = local_2c;
    if (local_28 != 0) {
      *(undefined ***)((int)ppuVar12 + 8) = local_2c;
      puVar3 = local_30;
    }
    local_30 = puVar3;
    local_28 = local_28 + 1;
    puVar3 = operator_new(200);
    local_4._0_1_ = 3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      (**(code **)(*param_1 + 0xe0))();
      FUN_00671d90();
      *puVar3 = &PTR_FUN_007f248c;
    }
    ppuVar12 = local_2c;
    local_4._0_1_ = 0;
    pvVar4 = operator_new(0xe);
    local_4._0_1_ = 4;
    if (pvVar4 == (void *)0x0) {
      local_2c = (undefined **)0x0;
    }
    else {
      local_2c = (undefined **)FUN_00676e80(puVar3,ppuVar12);
    }
    local_4._0_1_ = 0;
    puVar3 = local_2c;
    if (local_28 != 0) {
      ppuVar12[2] = (undefined *)local_2c;
      puVar3 = local_30;
    }
    local_30 = puVar3;
    local_28 = local_28 + 1;
    puVar3 = operator_new(200);
    local_4._0_1_ = 5;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      (**(code **)(*param_1 + 0xe0))();
      FUN_00671d90();
      *puVar3 = &PTR_FUN_007f2264;
    }
    ppuVar12 = local_2c;
    local_4._0_1_ = 0;
    pvVar4 = operator_new(0xe);
    local_4._0_1_ = 6;
    if (pvVar4 == (void *)0x0) {
      local_2c = (undefined **)0x0;
    }
    else {
      local_2c = (undefined **)FUN_00676e80(puVar3,ppuVar12);
    }
    local_4._0_1_ = 0;
    puVar3 = local_2c;
    if (local_28 != 0) {
      ppuVar12[2] = (undefined *)local_2c;
      puVar3 = local_30;
    }
    local_30 = puVar3;
    local_28 = local_28 + 1;
    puVar3 = operator_new(200);
    local_4._0_1_ = 7;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      (**(code **)(*param_1 + 0xe0))();
      FUN_00671d90();
      *puVar3 = &PTR_FUN_007f203c;
    }
    ppuVar12 = local_2c;
    local_4._0_1_ = 0;
    pvVar4 = operator_new(0xe);
    local_4._0_1_ = 8;
    if (pvVar4 == (void *)0x0) {
      local_2c = (undefined **)0x0;
    }
    else {
      local_2c = (undefined **)FUN_00676e80(puVar3,ppuVar12);
    }
    local_4._0_1_ = 0;
    puVar3 = local_2c;
    if (local_28 != 0) {
      ppuVar12[2] = (undefined *)local_2c;
      puVar3 = local_30;
    }
    local_30 = puVar3;
    local_28 = local_28 + 1;
    puVar3 = operator_new(200);
    local_4._0_1_ = 9;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      (**(code **)(*param_1 + 0xe0))();
      FUN_00671d90();
      *puVar3 = &PTR_FUN_007f1e14;
    }
    ppuVar12 = local_2c;
    local_4._0_1_ = 0;
    pvVar4 = operator_new(0xe);
    local_4._0_1_ = 10;
    if (pvVar4 == (void *)0x0) {
      local_2c = (undefined **)0x0;
    }
    else {
      local_2c = (undefined **)FUN_00676e80(puVar3,ppuVar12);
    }
    local_4._0_1_ = 0;
    puVar3 = local_2c;
    if (local_28 != 0) {
      ppuVar12[2] = (undefined *)local_2c;
      puVar3 = local_30;
    }
    local_30 = puVar3;
    local_28 = local_28 + 1;
    puVar3 = operator_new(200);
    local_4._0_1_ = 0xb;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      (**(code **)(*param_1 + 0xe0))();
      FUN_00671d90();
      *puVar3 = &PTR_FUN_007f1bec;
    }
    ppuVar12 = local_2c;
    local_4._0_1_ = 0;
    pvVar4 = operator_new(0xe);
    local_4._0_1_ = 0xc;
    if (pvVar4 == (void *)0x0) {
      local_2c = (undefined **)0x0;
    }
    else {
      local_2c = (undefined **)FUN_00676e80(puVar3,ppuVar12);
    }
    local_4._0_1_ = 0;
    puVar3 = local_2c;
    if (local_28 != 0) {
      ppuVar12[2] = (undefined *)local_2c;
      puVar3 = local_30;
    }
    local_30 = puVar3;
    local_28 = local_28 + 1;
    puVar3 = operator_new(200);
    local_4._0_1_ = 0xd;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      (**(code **)(*param_1 + 0xe0))();
      FUN_00671d90();
      *puVar3 = &PTR_FUN_007f19c4;
    }
    ppuVar12 = local_2c;
    local_4._0_1_ = 0;
    pvVar4 = operator_new(0xe);
    local_4._0_1_ = 0xe;
    if (pvVar4 == (void *)0x0) {
      local_2c = (undefined **)0x0;
    }
    else {
      local_2c = (undefined **)FUN_00676e80(puVar3,ppuVar12);
    }
    local_4._0_1_ = 0;
    puVar3 = local_2c;
    if (local_28 != 0) {
      ppuVar12[2] = (undefined *)local_2c;
      puVar3 = local_30;
    }
    local_30 = puVar3;
    local_28 = local_28 + 1;
    puVar3 = operator_new(200);
    local_4._0_1_ = 0xf;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      (**(code **)(*param_1 + 0xe0))();
      FUN_00671d90();
      *puVar3 = &PTR_FUN_007f179c;
    }
    ppuVar12 = local_2c;
    local_4._0_1_ = 0;
    pvVar4 = operator_new(0xe);
    local_4._0_1_ = 0x10;
    if (pvVar4 == (void *)0x0) {
      local_2c = (undefined **)0x0;
    }
    else {
      local_2c = (undefined **)FUN_00676e80(puVar3,ppuVar12);
    }
    local_4._0_1_ = 0;
    puVar3 = local_2c;
    if (local_28 != 0) {
      ppuVar12[2] = (undefined *)local_2c;
      puVar3 = local_30;
    }
    local_30 = puVar3;
    local_28 = local_28 + 1;
    puVar3 = operator_new(200);
    local_4._0_1_ = 0x11;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      (**(code **)(*param_1 + 0xe0))();
      FUN_00671d90();
      *puVar3 = &PTR_FUN_007f1574;
    }
    ppuVar12 = local_2c;
    local_4._0_1_ = 0;
    pvVar4 = operator_new(0xe);
    local_4._0_1_ = 0x12;
    if (pvVar4 == (void *)0x0) {
      local_2c = (undefined **)0x0;
    }
    else {
      local_2c = (undefined **)FUN_00676e80(puVar3,ppuVar12);
    }
    local_4._0_1_ = 0;
    puVar3 = local_2c;
    if (local_28 != 0) {
      ppuVar12[2] = (undefined *)local_2c;
      puVar3 = local_30;
    }
    local_30 = puVar3;
    local_28 = local_28 + 1;
    puVar3 = operator_new(200);
    local_4._0_1_ = 0x13;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      (**(code **)(*param_1 + 0xe0))();
      FUN_00671d90();
      *puVar3 = &PTR_FUN_007f134c;
    }
    ppuVar12 = local_2c;
    local_4._0_1_ = 0;
    pvVar4 = operator_new(0xe);
    local_4._0_1_ = 0x14;
    if (pvVar4 == (void *)0x0) {
      local_2c = (undefined **)0x0;
    }
    else {
      local_2c = (undefined **)FUN_00676e80(puVar3,ppuVar12);
    }
    local_4._0_1_ = 0;
    puVar3 = local_2c;
    if (local_28 != 0) {
      ppuVar12[2] = (undefined *)local_2c;
      puVar3 = local_30;
    }
    local_30 = puVar3;
    local_28 = local_28 + 1;
    puVar3 = operator_new(200);
    local_4._0_1_ = 0x15;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      (**(code **)(*param_1 + 0xe0))();
      FUN_00671d90();
      *puVar3 = &PTR_FUN_007f1124;
    }
    ppuVar12 = local_2c;
    local_4._0_1_ = 0;
    pvVar4 = operator_new(0xe);
    local_4._0_1_ = 0x16;
    if (pvVar4 == (void *)0x0) {
      local_2c = (undefined **)0x0;
    }
    else {
      local_2c = (undefined **)FUN_00676e80(puVar3,ppuVar12);
    }
    iVar9 = local_28 + 1;
    bVar13 = local_28 != 0;
    puVar3 = local_2c;
    local_28 = iVar9;
    if (bVar13) {
      ppuVar12[2] = (undefined *)local_2c;
      puVar3 = local_30;
    }
  }
  local_30 = puVar3;
  local_4._0_1_ = 0;
  iVar9 = (**(code **)(*param_2 + 4))();
  if (iVar9 != 0) {
    FUN_006696c0();
  }
  puVar3 = local_30;
  if (((cVar2 != '\0') && (0 < *(int *)(*(int *)((int)param_1 + 10) + 0x4652))) &&
     (*(char *)(*(int *)((int)param_1 + 10) + 0x37b5) != '\0')) {
    iVar9 = FUN_00669ff0();
    iVar9 = *(int *)(iVar9 + 0x26);
    do {
      puVar3 = local_30;
      if (iVar9 == 0) goto LAB_0066e26c;
      iVar9 = *(int *)(iVar9 + 8);
      cVar2 = FUN_004a3610();
    } while (cVar2 == '\0');
    puVar3 = local_30;
    if (DAT_00d11160 < *(int *)(*(int *)((int)param_1 + 10) + 0x4652)) {
      puVar3 = operator_new(0xce);
      local_4._0_1_ = 0x1b;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        (**(code **)(*param_1 + 0xe0))();
        FUN_00671d90();
        *puVar3 = &PTR_FUN_007f0efc;
        puVar3[0x32] = 0;
        *(undefined1 *)(puVar3 + 0x33) = 0;
      }
      ppuVar12 = local_2c;
      local_4._0_1_ = 0;
      pvVar4 = operator_new(0xe);
      local_4._0_1_ = 0x1c;
      if (pvVar4 == (void *)0x0) {
        local_2c = (undefined **)0x0;
      }
      else {
        local_2c = (undefined **)FUN_00676e80(puVar3,ppuVar12);
      }
      local_4._0_1_ = 0;
      iVar9 = local_28 + 1;
      bVar13 = local_28 != 0;
      puVar3 = local_2c;
      local_28 = iVar9;
      if (bVar13) {
        ppuVar12[2] = (undefined *)local_2c;
        puVar3 = local_30;
      }
    }
  }
LAB_0066e26c:
  local_30 = puVar3;
  fStack_58 = 0.0;
  iStack_44 = 0;
  iStack_5c = 0;
  piStack_60 = (int *)0x0;
  FUN_004734e0();
  ppuStack_20 = &PTR_FUN_007e5258;
  local_4._0_1_ = 0x1d;
  uVar5 = FUN_006a9d50();
  pvVar4 = pvStack_18;
  pvVar6 = operator_new(0xe);
  local_4._0_1_ = 0x1e;
  if (pvVar6 == (void *)0x0) {
    pvStack_18 = (void *)0x0;
  }
  else {
    pvStack_18 = (void *)FUN_00473a90(uVar5,pvStack_18);
  }
  local_4 = CONCAT31(local_4._1_3_,0x1d);
  bVar13 = iStack_14 == 0;
  iStack_14 = iStack_14 + 1;
  if (bVar13) {
    pvStack_1c = pvStack_18;
  }
  else {
    *(void **)((int)pvVar4 + 8) = pvStack_18;
  }
  pppuVar10 = &ppuStack_20;
  iVar9 = *(int *)(*(int *)((int)param_1 + 10) + 0x3350);
  if (iVar9 != 0) {
    pppuVar10 = *(undefined ****)(iVar9 + 0x22);
  }
  ppuVar12 = pppuVar10[1];
  piVar11 = (int *)(*(int *)(*(int *)((int)param_1 + 10) + 0x120) + 0xb8);
  if (ppuVar12 != (undefined **)0x0) {
    do {
      if (((&DAT_0089cad8)[(int)*ppuVar12] != 0) &&
         (piVar7 = (int *)(**(code **)(*piVar11 + 0x28))(&uStack_38), *piVar7 == 0)) {
        iVar9 = FUN_004a5a30();
        for (piVar7 = *(int **)(iVar9 + 4); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
          iVar9 = *piVar7;
          if (*(char *)(iVar9 + 0x45) == '\0') {
            fVar14 = (float10)FUN_00669a50();
            FUN_004d11e0((float)fVar14);
            iStack_54 = 0;
            if (0 < iStack_50) {
              do {
                iVar8 = FUN_004e9370();
                for (puVar3 = local_30; puVar3 != (undefined4 *)0x0;
                    puVar3 = (undefined4 *)puVar3[2]) {
                  piVar1 = (int *)*puVar3;
                  (**(code **)(*piVar1 + 0x21c))(param_2,iVar9);
                  fVar14 = (float10)(**(code **)(*piVar1 + 0x208))();
                  if ((float10)fStack_58 < fVar14) {
                    fStack_58 = (float)fVar14;
                    piStack_60 = piVar1;
                    iStack_5c = iVar8;
                    iStack_44 = iVar9;
                  }
                }
                iVar8 = _rand();
                iStack_54 = iStack_54 + 1 + iVar8 % 10;
              } while (iStack_54 < iStack_50);
            }
          }
        }
      }
      ppuVar12 = (undefined **)ppuVar12[2];
    } while (ppuVar12 != (undefined **)0x0);
    if (((piStack_60 != (int *)0x0) && (iStack_44 != 0)) && (iStack_5c != 0)) {
      (**(code **)(*piStack_60 + 0x21c))(param_2,iStack_44);
    }
  }
  ppuVar12 = local_34 + 7;
  (*(code *)local_34[10])(&stack0xffffff88,piStack_60);
  (*(code *)*ppuVar12)();
  while (piVar11 != (int *)0x0) {
    piVar7 = (int *)piVar11[2];
    if ((undefined4 *)*piVar11 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar11)(1);
    }
    FUN_00796cd8(piVar11);
    piVar11 = piVar7;
  }
  local_3c = 0;
  uStack_38 = 0;
  local_34 = (undefined **)0x0;
  if (unaff_EBX != 0) {
    (**(code **)(*unaff_EBP + 0x214))(*(undefined4 *)(unaff_EBX + 0x12));
  }
  local_2c = &PTR_LAB_007e3ff0;
  iVar9 = local_28;
  while (iVar9 != 0) {
    iVar8 = *(int *)(iVar9 + 8);
    FUN_00796cd8(iVar9);
    iVar9 = iVar8;
  }
  local_28 = 0;
  local_24 = 0;
  ppuStack_20 = (undefined **)0x0;
  while (local_3c != 0) {
    iVar9 = *(int *)(local_3c + 8);
    FUN_00796cd8(local_3c);
    local_3c = iVar9;
  }
  ExceptionList = pvStack_18;
  return unaff_EBP;
}


