// FUN_0061a370 @ 61a370 size=5732

void __fastcall FUN_0061a370(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void **ppvVar5;
  char cVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d0d0e;
  iVar12 = *(int *)(param_1 + 0x10c);
  piVar1 = *(int **)(iVar12 + 4);
  ppvVar5 = &pvStack_c;
  pvStack_c = ExceptionList;
  while (ExceptionList = ppvVar5, piVar1 != (int *)0x0) {
    puVar9 = (undefined4 *)*piVar1;
    piVar1 = (int *)piVar1[2];
    if (puVar9 != (undefined4 *)0x0) {
      (**(code **)*puVar9)();
    }
    FUN_00796cd8();
    ppvVar5 = ExceptionList;
  }
  *(undefined4 *)(iVar12 + 4) = 0;
  *(undefined4 *)(iVar12 + 8) = 0;
  *(undefined4 *)(iVar12 + 0xc) = 0;
  iVar12 = *(int *)(param_1 + 200);
  iVar2 = (&DAT_0089cad8)[iVar12];
  if (DAT_00d0ca90 == iVar2) {
    pvVar7 = operator_new(0x44);
    uStack_4 = 0x19;
    if (pvVar7 == (void *)0x0) {
      uVar8 = 0;
    }
    else {
      FUN_004a1050(0x1a,0,iVar12);
      uVar8 = FUN_00585b10(0x1a,0);
      uVar8 = FUN_006091a0(0x1a,uVar8);
    }
    iVar12 = *(int *)(param_1 + 0x10c);
    uStack_4 = 0xffffffff;
    iVar2 = *(int *)(iVar12 + 8);
    puVar9 = operator_new(0xe);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      *puVar9 = uVar8;
      puVar9[1] = iVar2;
      puVar9[2] = 0;
      *(undefined1 *)(puVar9 + 3) = 0;
    }
    iVar11 = *(int *)(iVar12 + 0xc);
    *(undefined4 **)(iVar12 + 8) = puVar9;
    *(int *)(iVar12 + 0xc) = iVar11 + 1;
    if (iVar11 != 0) {
      *(undefined4 **)(iVar2 + 8) = puVar9;
      goto LAB_0061b995;
    }
  }
  else {
    iVar11 = (iVar12 * 0xb + 0xb) * 4;
    if (*(char *)(*(int *)(*(int *)(param_1 + 0x90) + 0x12da) + iVar11) == '\0') {
      pvVar7 = operator_new(0x44);
      uStack_4 = 2;
      if (pvVar7 == (void *)0x0) {
        local_18 = 0;
      }
      else {
        FUN_004a1050(0,0,iVar12);
        uVar8 = FUN_00585b10(0,0);
        local_18 = FUN_006091a0(0,uVar8);
      }
      iVar10 = *(int *)(param_1 + 0x10c);
      uStack_4 = 0xffffffff;
      iVar3 = *(int *)(iVar10 + 8);
      puVar9 = operator_new(0xe);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9[1] = iVar3;
        *puVar9 = local_18;
        puVar9[2] = 0;
        *(undefined1 *)(puVar9 + 3) = 0;
      }
      iVar4 = *(int *)(iVar10 + 0xc);
      *(undefined4 **)(iVar10 + 8) = puVar9;
      *(int *)(iVar10 + 0xc) = iVar4 + 1;
      if (iVar4 == 0) {
        *(undefined4 **)(iVar10 + 4) = puVar9;
      }
      else {
        *(undefined4 **)(iVar3 + 8) = puVar9;
      }
      if (*(char *)(*(int *)(param_1 + 200) + 0x3354 + *(int *)(param_1 + 0x90)) != '\0') {
        pvVar7 = operator_new(0x44);
        uStack_4 = 3;
        if (pvVar7 == (void *)0x0) {
          uVar8 = 0;
        }
        else {
          FUN_004a1050(0x11,0,iVar12);
          uVar8 = FUN_00585b10(0x11,0);
          uVar8 = FUN_006091a0(0x11,uVar8);
        }
        iVar10 = *(int *)(param_1 + 0x10c);
        uStack_4 = 0xffffffff;
        iVar3 = *(int *)(iVar10 + 8);
        puVar9 = operator_new(0xe);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          *puVar9 = uVar8;
          puVar9[1] = iVar3;
          puVar9[2] = 0;
          *(undefined1 *)(puVar9 + 3) = 0;
        }
        iVar4 = *(int *)(iVar10 + 0xc);
        *(undefined4 **)(iVar10 + 8) = puVar9;
        *(int *)(iVar10 + 0xc) = iVar4 + 1;
        if (iVar4 == 0) goto LAB_0061a71e;
        *(undefined4 **)(iVar3 + 8) = puVar9;
      }
    }
    else {
      pvVar7 = operator_new(0x44);
      uStack_4 = 0;
      if (pvVar7 == (void *)0x0) {
        uVar8 = 0;
      }
      else {
        FUN_004a1050(0x18,0,iVar12);
        uVar8 = FUN_00585b10(0x18,0);
        uVar8 = FUN_006091a0(0x18,uVar8);
      }
      iVar10 = *(int *)(param_1 + 0x10c);
      uStack_4 = 0xffffffff;
      iVar3 = *(int *)(iVar10 + 8);
      puVar9 = operator_new(0xe);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = uVar8;
        puVar9[1] = iVar3;
        puVar9[2] = 0;
        *(undefined1 *)(puVar9 + 3) = 0;
      }
      iVar4 = *(int *)(iVar10 + 0xc);
      *(undefined4 **)(iVar10 + 8) = puVar9;
      *(int *)(iVar10 + 0xc) = iVar4 + 1;
      if (iVar4 == 0) {
        *(undefined4 **)(iVar10 + 4) = puVar9;
      }
      else {
        *(undefined4 **)(iVar3 + 8) = puVar9;
      }
      pvVar7 = operator_new(0x44);
      uStack_4 = 1;
      if (pvVar7 == (void *)0x0) {
        uVar8 = 0;
      }
      else {
        FUN_004a1050(0xf,0,iVar12);
        uVar8 = FUN_00585b10(0xf,0);
        uVar8 = FUN_006091a0(0xf,uVar8);
      }
      iVar10 = *(int *)(param_1 + 0x10c);
      uStack_4 = 0xffffffff;
      iVar3 = *(int *)(iVar10 + 8);
      puVar9 = operator_new(0xe);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = uVar8;
        puVar9[1] = iVar3;
        puVar9[2] = 0;
        *(undefined1 *)(puVar9 + 3) = 0;
      }
      iVar4 = *(int *)(iVar10 + 0xc);
      *(undefined4 **)(iVar10 + 8) = puVar9;
      *(int *)(iVar10 + 0xc) = iVar4 + 1;
      if (iVar4 == 0) {
LAB_0061a71e:
        *(undefined4 **)(iVar10 + 4) = puVar9;
      }
      else {
        *(undefined4 **)(iVar3 + 8) = puVar9;
      }
    }
    pvVar7 = operator_new(0x44);
    uStack_4 = 4;
    if (pvVar7 == (void *)0x0) {
      uVar8 = 0;
    }
    else {
      FUN_004a1050(6,0,iVar12);
      uVar8 = FUN_00585b10(6,0);
      uVar8 = FUN_006091a0(6,uVar8);
    }
    iVar10 = *(int *)(param_1 + 0x10c);
    uStack_4 = 0xffffffff;
    iVar3 = *(int *)(iVar10 + 8);
    puVar9 = operator_new(0xe);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      *puVar9 = uVar8;
      puVar9[1] = iVar3;
      puVar9[2] = 0;
      *(undefined1 *)(puVar9 + 3) = 0;
    }
    iVar4 = *(int *)(iVar10 + 0xc);
    *(undefined4 **)(iVar10 + 8) = puVar9;
    *(int *)(iVar10 + 0xc) = iVar4 + 1;
    if (iVar4 == 0) {
      *(undefined4 **)(iVar10 + 4) = puVar9;
    }
    else {
      *(undefined4 **)(iVar3 + 8) = puVar9;
    }
    if (*(char *)(*(int *)(*(int *)(param_1 + 0x90) + 0x12da) + iVar11) == '\0') {
      if (DAT_00dc18b5 == '\0') {
        pvVar7 = operator_new(0x44);
        uStack_4 = 5;
        if (pvVar7 == (void *)0x0) {
          uVar8 = 0;
        }
        else {
          FUN_004a1050(0x15,0,iVar12);
          uVar8 = FUN_00585b10(0x15,0);
          uVar8 = FUN_006091a0(0x15,uVar8);
        }
        iVar11 = *(int *)(param_1 + 0x10c);
        uStack_4 = 0xffffffff;
        iVar10 = *(int *)(iVar11 + 8);
        puVar9 = operator_new(0xe);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          *puVar9 = uVar8;
          puVar9[1] = iVar10;
          puVar9[2] = 0;
          *(undefined1 *)(puVar9 + 3) = 0;
        }
        iVar3 = *(int *)(iVar11 + 0xc);
        *(undefined4 **)(iVar11 + 8) = puVar9;
        *(int *)(iVar11 + 0xc) = iVar3 + 1;
        if (iVar3 == 0) {
          *(undefined4 **)(iVar11 + 4) = puVar9;
        }
        else {
          *(undefined4 **)(iVar10 + 8) = puVar9;
        }
      }
      pvVar7 = operator_new(0x44);
      uStack_4 = 6;
      if (pvVar7 == (void *)0x0) {
        uVar8 = 0;
      }
      else {
        FUN_004a1050(0x12,0,iVar12);
        uVar8 = FUN_00585b10(0x12,0);
        uVar8 = FUN_006091a0(0x12,uVar8);
      }
      iVar11 = *(int *)(param_1 + 0x10c);
      uStack_4 = 0xffffffff;
      iVar10 = *(int *)(iVar11 + 8);
      puVar9 = operator_new(0xe);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = uVar8;
        puVar9[1] = iVar10;
        puVar9[2] = 0;
        *(undefined1 *)(puVar9 + 3) = 0;
      }
      iVar3 = *(int *)(iVar11 + 0xc);
      *(undefined4 **)(iVar11 + 8) = puVar9;
      *(int *)(iVar11 + 0xc) = iVar3 + 1;
      if (iVar3 == 0) {
        *(undefined4 **)(iVar11 + 4) = puVar9;
      }
      else {
        *(undefined4 **)(iVar10 + 8) = puVar9;
      }
    }
    cVar6 = FUN_005861e0();
    if (cVar6 == '\0') {
      pvVar7 = operator_new(0x44);
      uStack_4 = 8;
      if (pvVar7 == (void *)0x0) {
        uVar8 = 0;
      }
      else {
        FUN_004a1050(0x13,0,iVar12);
        uVar8 = FUN_00585b10(0x13,0);
        uVar8 = FUN_006091a0(0x13,uVar8);
      }
      iVar11 = *(int *)(param_1 + 0x10c);
      uStack_4 = 0xffffffff;
      iVar10 = *(int *)(iVar11 + 8);
      puVar9 = operator_new(0xe);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = uVar8;
        puVar9[1] = iVar10;
        puVar9[2] = 0;
        *(undefined1 *)(puVar9 + 3) = 0;
      }
      iVar3 = *(int *)(iVar11 + 0xc);
      *(undefined4 **)(iVar11 + 8) = puVar9;
      *(int *)(iVar11 + 0xc) = iVar3 + 1;
      if (iVar3 == 0) goto LAB_0061ab25;
      *(undefined4 **)(iVar10 + 8) = puVar9;
    }
    else {
      pvVar7 = operator_new(0x44);
      uStack_4 = 7;
      if (pvVar7 == (void *)0x0) {
        uVar8 = 0;
      }
      else {
        FUN_004a1050(0x14,0,iVar12);
        uVar8 = FUN_00585b10(0x14,0);
        uVar8 = FUN_006091a0(0x14,uVar8);
      }
      iVar11 = *(int *)(param_1 + 0x10c);
      uStack_4 = 0xffffffff;
      iVar10 = *(int *)(iVar11 + 8);
      puVar9 = operator_new(0xe);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = uVar8;
        puVar9[1] = iVar10;
        puVar9[2] = 0;
        *(undefined1 *)(puVar9 + 3) = 0;
      }
      iVar3 = *(int *)(iVar11 + 0xc);
      *(undefined4 **)(iVar11 + 8) = puVar9;
      *(int *)(iVar11 + 0xc) = iVar3 + 1;
      if (iVar3 == 0) {
LAB_0061ab25:
        *(undefined4 **)(iVar11 + 4) = puVar9;
      }
      else {
        *(undefined4 **)(iVar10 + 8) = puVar9;
      }
    }
    piVar1 = *(int **)(*(int *)(param_1 + 0x90) + 0x3350);
    if (piVar1 == (int *)0x0) {
      pvVar7 = operator_new(0x44);
      uStack_4 = 0xf;
      if (pvVar7 == (void *)0x0) {
        uVar8 = 0;
      }
      else {
        FUN_004a1050(1,0,iVar12);
        uVar8 = FUN_00585b10(1,0);
        uVar8 = FUN_006091a0(1,uVar8);
      }
      iVar11 = *(int *)(param_1 + 0x10c);
      uStack_4 = 0xffffffff;
      iVar10 = *(int *)(iVar11 + 8);
      puVar9 = operator_new(0xe);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = uVar8;
        puVar9[1] = iVar10;
        puVar9[2] = 0;
        *(undefined1 *)(puVar9 + 3) = 0;
      }
      iVar3 = *(int *)(iVar11 + 0xc);
      *(undefined4 **)(iVar11 + 8) = puVar9;
      *(int *)(iVar11 + 0xc) = iVar3 + 1;
      if (iVar3 == 0) {
        *(undefined4 **)(iVar11 + 4) = puVar9;
      }
      else {
        *(undefined4 **)(iVar10 + 8) = puVar9;
      }
      if (*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0x3350) != 0) {
        pvVar7 = operator_new(0x44);
        uStack_4 = 0x10;
        if (pvVar7 == (void *)0x0) {
          uVar8 = 0;
        }
        else {
          FUN_004a1050(3,0,iVar12);
          uVar8 = FUN_00585b10(3,0);
          uVar8 = FUN_006091a0(3,uVar8);
        }
        iVar11 = *(int *)(param_1 + 0x10c);
        uStack_4 = 0xffffffff;
        iVar10 = *(int *)(iVar11 + 8);
        puVar9 = operator_new(0xe);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          *puVar9 = uVar8;
          puVar9[1] = iVar10;
          puVar9[2] = 0;
          *(undefined1 *)(puVar9 + 3) = 0;
        }
        iVar3 = *(int *)(iVar11 + 0xc);
        *(undefined4 **)(iVar11 + 8) = puVar9;
        *(int *)(iVar11 + 0xc) = iVar3 + 1;
        if (iVar3 == 0) goto LAB_0061b22b;
        *(undefined4 **)(iVar10 + 8) = puVar9;
      }
    }
    else {
      if ((((*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0x3350) != 0) &&
           (cVar6 = (**(code **)(*piVar1 + 0x14))(), cVar6 == '\0')) &&
          (cVar6 = (**(code **)(*piVar1 + 0x18))(), cVar6 == '\0')) &&
         (cVar6 = (**(code **)(*piVar1 + 0x1c))(), cVar6 == '\0')) {
        pvVar7 = operator_new(0x44);
        uStack_4 = 9;
        if (pvVar7 == (void *)0x0) {
          uVar8 = 0;
        }
        else {
          FUN_004a1050(3,0,iVar12);
          uVar8 = FUN_00585b10(3,0);
          uVar8 = FUN_006091a0(3,uVar8);
        }
        iVar11 = *(int *)(param_1 + 0x10c);
        uStack_4 = 0xffffffff;
        iVar10 = *(int *)(iVar11 + 8);
        puVar9 = operator_new(0xe);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          *puVar9 = uVar8;
          puVar9[1] = iVar10;
          puVar9[2] = 0;
          *(undefined1 *)(puVar9 + 3) = 0;
        }
        iVar3 = *(int *)(iVar11 + 0xc);
        *(undefined4 **)(iVar11 + 8) = puVar9;
        *(int *)(iVar11 + 0xc) = iVar3 + 1;
        if (iVar3 == 0) {
          *(undefined4 **)(iVar11 + 4) = puVar9;
        }
        else {
          *(undefined4 **)(iVar10 + 8) = puVar9;
        }
      }
      pvVar7 = operator_new(0x44);
      uStack_4 = 10;
      if (pvVar7 == (void *)0x0) {
        uVar8 = 0;
      }
      else {
        FUN_004a1050(2,0,iVar12);
        uVar8 = FUN_00585b10(2,0);
        uVar8 = FUN_006091a0(2,uVar8);
      }
      iVar11 = *(int *)(param_1 + 0x10c);
      uStack_4 = 0xffffffff;
      iVar10 = *(int *)(iVar11 + 8);
      puVar9 = operator_new(0xe);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = uVar8;
        puVar9[1] = iVar10;
        puVar9[2] = 0;
        *(undefined1 *)(puVar9 + 3) = 0;
      }
      iVar3 = *(int *)(iVar11 + 0xc);
      *(undefined4 **)(iVar11 + 8) = puVar9;
      *(int *)(iVar11 + 0xc) = iVar3 + 1;
      if (iVar3 == 0) {
        *(undefined4 **)(iVar11 + 4) = puVar9;
      }
      else {
        *(undefined4 **)(iVar10 + 8) = puVar9;
      }
      cVar6 = FUN_00584e20();
      if (cVar6 != '\0') {
        pvVar7 = operator_new(0x44);
        uStack_4 = 0xb;
        if (pvVar7 == (void *)0x0) {
          uVar8 = 0;
        }
        else {
          FUN_004a1050(4,0,iVar12);
          uVar8 = FUN_00585b10(4,0);
          uVar8 = FUN_006091a0(4,uVar8);
        }
        iVar11 = *(int *)(param_1 + 0x10c);
        uStack_4 = 0xffffffff;
        iVar10 = *(int *)(iVar11 + 8);
        puVar9 = operator_new(0xe);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          *puVar9 = uVar8;
          puVar9[1] = iVar10;
          puVar9[2] = 0;
          *(undefined1 *)(puVar9 + 3) = 0;
        }
        iVar3 = *(int *)(iVar11 + 0xc);
        *(undefined4 **)(iVar11 + 8) = puVar9;
        *(int *)(iVar11 + 0xc) = iVar3 + 1;
        if (iVar3 == 0) {
          *(undefined4 **)(iVar11 + 4) = puVar9;
        }
        else {
          *(undefined4 **)(iVar10 + 8) = puVar9;
        }
        pvVar7 = operator_new(0x44);
        uStack_4 = 0xc;
        if (pvVar7 == (void *)0x0) {
          uVar8 = 0;
        }
        else {
          FUN_004a1050(0x1b,0,iVar12);
          uVar8 = FUN_00585b10(0x1b,0);
          uVar8 = FUN_006091a0(0x1b,uVar8);
        }
        iVar11 = *(int *)(param_1 + 0x10c);
        uStack_4 = 0xffffffff;
        iVar10 = *(int *)(iVar11 + 8);
        puVar9 = operator_new(0xe);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          *puVar9 = uVar8;
          puVar9[1] = iVar10;
          puVar9[2] = 0;
          *(undefined1 *)(puVar9 + 3) = 0;
        }
        iVar3 = *(int *)(iVar11 + 0xc);
        *(undefined4 **)(iVar11 + 8) = puVar9;
        *(int *)(iVar11 + 0xc) = iVar3 + 1;
        if (iVar3 == 0) {
          *(undefined4 **)(iVar11 + 4) = puVar9;
        }
        else {
          *(undefined4 **)(iVar10 + 8) = puVar9;
        }
      }
      cVar6 = FUN_00584e20();
      if (((cVar6 != '\0') &&
          (iVar11 = *(int *)(*(int *)(param_1 + 0x90) + 6), iVar10 = FUN_00584c90(),
          iVar10 == iVar11)) && (*(int *)(*(int *)((&DAT_0089cad8)[iVar12] + 0x12da) + 0x3b30) == 0)
         ) {
        pvVar7 = operator_new(0x44);
        uStack_4 = 0xd;
        if (pvVar7 == (void *)0x0) {
          uVar8 = 0;
        }
        else {
          FUN_004a1050(5,0,iVar12);
          uVar8 = FUN_00585b10(5,0);
          uVar8 = FUN_006091a0(5,uVar8);
        }
        iVar11 = *(int *)(param_1 + 0x10c);
        uStack_4 = 0xffffffff;
        iVar10 = *(int *)(iVar11 + 8);
        puVar9 = operator_new(0xe);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          *puVar9 = uVar8;
          puVar9[1] = iVar10;
          puVar9[2] = 0;
          *(undefined1 *)(puVar9 + 3) = 0;
        }
        iVar3 = *(int *)(iVar11 + 0xc);
        *(undefined4 **)(iVar11 + 8) = puVar9;
        *(int *)(iVar11 + 0xc) = iVar3 + 1;
        if (iVar3 == 0) {
          *(undefined4 **)(iVar11 + 4) = puVar9;
        }
        else {
          *(undefined4 **)(iVar10 + 8) = puVar9;
        }
      }
      if (*(char *)(*(int *)(*(int *)(param_1 + 0x90) + 6) + 0x34ac + iVar2) == '\0') {
        pvVar7 = operator_new(0x44);
        uStack_4 = 0xe;
        if (pvVar7 == (void *)0x0) {
          uVar8 = 0;
        }
        else {
          FUN_004a1050(0xb,0,iVar12);
          uVar8 = FUN_00585b10(0xb,0);
          uVar8 = FUN_006091a0(0xb,uVar8);
        }
        iVar11 = *(int *)(param_1 + 0x10c);
        uStack_4 = 0xffffffff;
        iVar10 = *(int *)(iVar11 + 8);
        puVar9 = operator_new(0xe);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          *puVar9 = uVar8;
          puVar9[1] = iVar10;
          puVar9[2] = 0;
          *(undefined1 *)(puVar9 + 3) = 0;
        }
        iVar3 = *(int *)(iVar11 + 0xc);
        *(undefined4 **)(iVar11 + 8) = puVar9;
        *(int *)(iVar11 + 0xc) = iVar3 + 1;
        if (iVar3 == 0) {
LAB_0061b22b:
          *(undefined4 **)(iVar11 + 4) = puVar9;
        }
        else {
          *(undefined4 **)(iVar10 + 8) = puVar9;
        }
      }
    }
    if (*(char *)(*(int *)(*(int *)(param_1 + 0x90) + 6) + 0x34ac + iVar2) != '\0') {
      pvVar7 = operator_new(0x44);
      uStack_4 = 0x11;
      if (pvVar7 == (void *)0x0) {
        uVar8 = 0;
      }
      else {
        FUN_004a1050(0xc,0,iVar12);
        uVar8 = FUN_00585b10(0xc,0);
        uVar8 = FUN_006091a0(0xc,uVar8);
      }
      iVar11 = *(int *)(param_1 + 0x10c);
      uStack_4 = 0xffffffff;
      iVar10 = *(int *)(iVar11 + 8);
      puVar9 = operator_new(0xe);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = uVar8;
        puVar9[1] = iVar10;
        puVar9[2] = 0;
        *(undefined1 *)(puVar9 + 3) = 0;
      }
      iVar3 = *(int *)(iVar11 + 0xc);
      *(undefined4 **)(iVar11 + 8) = puVar9;
      *(int *)(iVar11 + 0xc) = iVar3 + 1;
      if (iVar3 == 0) {
        *(undefined4 **)(iVar11 + 4) = puVar9;
      }
      else {
        *(undefined4 **)(iVar10 + 8) = puVar9;
      }
    }
    pvVar7 = operator_new(0x44);
    uStack_4 = 0x12;
    if (pvVar7 == (void *)0x0) {
      uVar8 = 0;
    }
    else {
      FUN_004a1050(0xd,0,iVar12);
      uVar8 = FUN_00585b10(0xd,0);
      uVar8 = FUN_006091a0(0xd,uVar8);
    }
    iVar11 = *(int *)(param_1 + 0x10c);
    uStack_4 = 0xffffffff;
    iVar10 = *(int *)(iVar11 + 8);
    puVar9 = operator_new(0xe);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      *puVar9 = uVar8;
      puVar9[1] = iVar10;
      puVar9[2] = 0;
      *(undefined1 *)(puVar9 + 3) = 0;
    }
    iVar3 = *(int *)(iVar11 + 0xc);
    *(undefined4 **)(iVar11 + 8) = puVar9;
    *(int *)(iVar11 + 0xc) = iVar3 + 1;
    if (iVar3 == 0) {
      *(undefined4 **)(iVar11 + 4) = puVar9;
    }
    else {
      *(undefined4 **)(iVar10 + 8) = puVar9;
    }
    cVar6 = FUN_005861a0();
    if (cVar6 == '\0') {
      pvVar7 = operator_new(0x44);
      uStack_4 = 0x14;
      if (pvVar7 == (void *)0x0) {
        uVar8 = 0;
      }
      else {
        FUN_004a1050(8,0,iVar12);
        uVar8 = FUN_00585b10(8,0);
        uVar8 = FUN_006091a0(8,uVar8);
      }
      iVar11 = *(int *)(param_1 + 0x10c);
      uStack_4 = 0xffffffff;
      iVar10 = *(int *)(iVar11 + 8);
      puVar9 = operator_new(0xe);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = uVar8;
        puVar9[1] = iVar10;
        puVar9[2] = 0;
        *(undefined1 *)(puVar9 + 3) = 0;
      }
      iVar3 = *(int *)(iVar11 + 0xc);
      *(undefined4 **)(iVar11 + 8) = puVar9;
      *(int *)(iVar11 + 0xc) = iVar3 + 1;
      if (iVar3 == 0) goto LAB_0061b565;
      *(undefined4 **)(iVar10 + 8) = puVar9;
    }
    else {
      pvVar7 = operator_new(0x44);
      uStack_4 = 0x13;
      if (pvVar7 == (void *)0x0) {
        uVar8 = 0;
      }
      else {
        FUN_004a1050(9,0,iVar12);
        uVar8 = FUN_00585b10(9,0);
        uVar8 = FUN_006091a0(9,uVar8);
      }
      iVar11 = *(int *)(param_1 + 0x10c);
      uStack_4 = 0xffffffff;
      iVar10 = *(int *)(iVar11 + 8);
      puVar9 = operator_new(0xe);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = uVar8;
        puVar9[1] = iVar10;
        puVar9[2] = 0;
        *(undefined1 *)(puVar9 + 3) = 0;
      }
      iVar3 = *(int *)(iVar11 + 0xc);
      *(undefined4 **)(iVar11 + 8) = puVar9;
      *(int *)(iVar11 + 0xc) = iVar3 + 1;
      if (iVar3 == 0) {
LAB_0061b565:
        *(undefined4 **)(iVar11 + 4) = puVar9;
      }
      else {
        *(undefined4 **)(iVar10 + 8) = puVar9;
      }
    }
    cVar6 = FUN_005861a0();
    if (cVar6 != '\0') {
      pvVar7 = operator_new(0x44);
      uStack_4 = 0x15;
      if (pvVar7 == (void *)0x0) {
        uVar8 = 0;
      }
      else {
        FUN_004a1050(10,0,iVar12);
        uVar8 = FUN_00585b10(10,0);
        uVar8 = FUN_006091a0(10,uVar8);
      }
      iVar11 = *(int *)(param_1 + 0x10c);
      uStack_4 = 0xffffffff;
      iVar10 = *(int *)(iVar11 + 8);
      puVar9 = operator_new(0xe);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = uVar8;
        puVar9[1] = iVar10;
        puVar9[2] = 0;
        *(undefined1 *)(puVar9 + 3) = 0;
      }
      iVar3 = *(int *)(iVar11 + 0xc);
      *(undefined4 **)(iVar11 + 8) = puVar9;
      *(int *)(iVar11 + 0xc) = iVar3 + 1;
      if (iVar3 == 0) {
        *(undefined4 **)(iVar11 + 4) = puVar9;
      }
      else {
        *(undefined4 **)(iVar10 + 8) = puVar9;
      }
    }
    pvVar7 = operator_new(0x44);
    uStack_4 = 0x16;
    if (pvVar7 == (void *)0x0) {
      uVar8 = 0;
    }
    else {
      FUN_004a1050(0xe,0,iVar12);
      uVar8 = FUN_00585b10(0xe,0);
      uVar8 = FUN_006091a0(0xe,uVar8);
    }
    iVar11 = *(int *)(param_1 + 0x10c);
    uStack_4 = 0xffffffff;
    iVar10 = *(int *)(iVar11 + 8);
    puVar9 = operator_new(0xe);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      *puVar9 = uVar8;
      puVar9[1] = iVar10;
      puVar9[2] = 0;
      *(undefined1 *)(puVar9 + 3) = 0;
    }
    iVar3 = *(int *)(iVar11 + 0xc);
    *(undefined4 **)(iVar11 + 8) = puVar9;
    *(int *)(iVar11 + 0xc) = iVar3 + 1;
    if (iVar3 == 0) {
      *(undefined4 **)(iVar11 + 4) = puVar9;
    }
    else {
      *(undefined4 **)(iVar10 + 8) = puVar9;
    }
    if (*(char *)(*(int *)(DAT_00d0ca90 + 0x12da) + 0x35 + *(int *)(param_1 + 200) * 0x2c) != '\0')
    {
      pvVar7 = operator_new(0x44);
      uStack_4 = 0x17;
      if (pvVar7 == (void *)0x0) {
        local_18 = 0;
      }
      else {
        FUN_004a1050(0x16,0,iVar12);
        uVar8 = FUN_00585b10(0x16,0);
        local_18 = FUN_006091a0(0x16,uVar8);
      }
      iVar11 = *(int *)(param_1 + 0x10c);
      uStack_4 = 0xffffffff;
      iVar10 = *(int *)(iVar11 + 8);
      puVar9 = operator_new(0xe);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9[1] = iVar10;
        *puVar9 = local_18;
        puVar9[2] = 0;
        *(undefined1 *)(puVar9 + 3) = 0;
      }
      iVar3 = *(int *)(iVar11 + 0xc);
      *(undefined4 **)(iVar11 + 8) = puVar9;
      *(int *)(iVar11 + 0xc) = iVar3 + 1;
      if (iVar3 == 0) {
        *(undefined4 **)(iVar11 + 4) = puVar9;
      }
      else {
        *(undefined4 **)(iVar10 + 8) = puVar9;
      }
    }
    if (*(int *)(*(int *)(iVar2 + 0x12da) + 0x3b30) != *(int *)(DAT_00d0ca90 + 6))
    goto LAB_0061b995;
    pvVar7 = operator_new(0x44);
    uStack_4 = 0x18;
    if (pvVar7 == (void *)0x0) {
      uVar8 = 0;
    }
    else {
      FUN_004a1050(0x19,0,iVar12);
      uVar8 = FUN_00585b10(0x19,0);
      uVar8 = FUN_006091a0(0x19,uVar8);
    }
    iVar12 = *(int *)(param_1 + 0x10c);
    uStack_4 = 0xffffffff;
    iVar2 = *(int *)(iVar12 + 8);
    puVar9 = operator_new(0xe);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      *puVar9 = uVar8;
      puVar9[1] = iVar2;
      puVar9[2] = 0;
      *(undefined1 *)(puVar9 + 3) = 0;
    }
    iVar11 = *(int *)(iVar12 + 0xc);
    *(undefined4 **)(iVar12 + 8) = puVar9;
    *(int *)(iVar12 + 0xc) = iVar11 + 1;
    if (iVar11 != 0) {
      *(undefined4 **)(iVar2 + 8) = puVar9;
      goto LAB_0061b995;
    }
  }
  *(undefined4 **)(iVar12 + 4) = puVar9;
LAB_0061b995:
  FUN_004353e0();
  FUN_00435fd0();
  if (*(undefined4 **)(param_1 + 0x110) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x110))();
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  ExceptionList = pvStack_c;
  return;
}


