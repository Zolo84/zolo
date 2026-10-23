// FUN_0046c3d0 @ 46c3d0 size=1525

void __fastcall FUN_0046c3d0(int param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  undefined2 *puVar15;
  undefined4 uVar16;
  bool bStack_1d;
  int iStack_1c;
  int *piStack_18;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bcb9b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar5 = (**(code **)(*(int *)(param_1 + 0xe86a) + 4))();
  if (((iVar5 == 1) && (iVar5 = (**(code **)(*(int *)(param_1 + 0x3b68) + 4))(), iVar5 == 0)) ||
     (iVar5 = FUN_0044e1d0(), iVar5 == 0)) {
    ExceptionList = pvStack_c;
    return;
  }
  piVar1 = *(int **)(param_1 + 0xe86e);
joined_r0x0046c430:
  if (piVar1 != (int *)0x0) {
    puVar8 = (undefined4 *)*piVar1;
    piVar1 = (int *)piVar1[2];
    if ((puVar8 != (undefined4 *)0x0) && (iVar5 = (**(code **)(puVar8[10] + 4))(), 0 < iVar5)) {
      if (DAT_00dc1886 == '\0') {
LAB_0046c48f:
        puVar6 = (undefined4 *)FUN_0044e1d0();
        if (puVar8 == puVar6) goto joined_r0x0046c430;
      }
      else {
        iVar5 = (**(code **)*puVar8)();
        iVar5 = *(int *)(iVar5 + 0x6c);
        puVar6 = (undefined4 *)FUN_0044e1d0();
        iVar7 = (**(code **)*puVar6)();
        if (iVar5 == *(int *)(iVar7 + 0x6c)) {
          if (DAT_00dc1886 == '\0') goto LAB_0046c48f;
          goto joined_r0x0046c430;
        }
      }
      if (((((DAT_00dc1913 == '\0') || (iVar5 = FUN_004e9f80(param_1), iVar5 == -1)) ||
           ((iVar7 = FUN_004e9370(iVar5), *(char *)(iVar7 + 0x470) == '\0' ||
            (((*(int *)(iVar7 + 0x3d8) != param_1 || (iVar5 == *(int *)((int)puVar8 + 0x52))) ||
             (*(undefined4 **)(iVar7 + 0x482) == puVar8)))))) ||
          (iVar7 = FUN_004e9f80(param_1), iVar7 != iVar5)) &&
         ((*(int *)((int)puVar8 + 0x52) != 0 &&
          (iVar5 = FUN_004e9370(*(int *)((int)puVar8 + 0x52)), *(int *)(iVar5 + 0x46a) != 0)))) {
        iVar5 = (**(code **)(puVar8[1] + 4))();
        if (iVar5 != 0) {
          bVar2 = false;
          piVar13 = (int *)puVar8[2];
          if ((int *)puVar8[2] != (int *)0x0) {
            do {
              piVar14 = (int *)piVar13[2];
              if ((*(int *)(*piVar13 + 0x12a) == param_1) && (cVar3 = FUN_004d2f60(), cVar3 == '\0')
                 ) {
                bVar2 = true;
              }
              piVar13 = piVar14;
            } while (piVar14 != (int *)0x0);
            if (bVar2) goto joined_r0x0046c430;
          }
        }
        FUN_0046bed0(puVar8,*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_1 + 6));
      }
    }
    goto joined_r0x0046c430;
  }
  piStack_18 = &DAT_0089cad8;
  do {
    iVar5 = *piStack_18;
    if ((iVar5 != 0) && (*(int *)(*(int *)(iVar5 + 0x12da) + 0x3b30) == *(int *)(param_1 + 6))) {
      if (DAT_00dc1913 != '\0') {
        puVar8 = (undefined4 *)FUN_0044e1d0();
        (**(code **)*puVar8)();
        cVar3 = FUN_004cce42(param_1);
        if (cVar3 != '\0') {
          iVar7 = param_1;
          FUN_004a0750(param_1);
          iVar7 = FUN_004e9f80(iVar7);
          if (((iVar7 != -1) && (iVar7 = FUN_004e9370(iVar7), *(char *)(iVar7 + 0x470) != '\0')) &&
             (*(int *)(iVar7 + 0x3d8) == param_1)) goto LAB_0046c6f9;
        }
      }
      puVar8 = (undefined4 *)FUN_0044e1d0();
      iVar7 = (**(code **)*puVar8)();
      iVar7 = *(int *)(iVar7 + 0x6c);
      puVar8 = (undefined4 *)FUN_0044e1d0();
      iVar9 = (**(code **)*puVar8)();
      if (iVar7 != *(int *)(iVar9 + 0x6c)) {
        iVar7 = FUN_0044e1d0();
        iVar7 = (**(code **)(*(int *)(iVar7 + 4) + 4))();
        if (iVar7 != 0) {
          bVar2 = false;
          iVar7 = FUN_0044e1d0();
          piVar1 = *(int **)(iVar7 + 8);
          do {
            if (piVar1 == (int *)0x0) goto LAB_0046c64c;
            piVar13 = (int *)piVar1[2];
            iVar7 = *piVar1;
            piVar1 = piVar13;
          } while ((*(int *)(iVar7 + 0x12a) != param_1) || (cVar3 = FUN_004d2f60(), cVar3 != '\0'));
          bVar2 = true;
LAB_0046c64c:
          if (bVar2) goto LAB_0046c6f9;
        }
        puVar8 = (undefined4 *)FUN_0044e1d0();
        iVar7 = (**(code **)*puVar8)();
        iVar7 = *(int *)(iVar7 + 0x6c);
        puVar8 = (undefined4 *)FUN_0044e1d0();
        iVar9 = (**(code **)*puVar8)();
        if (iVar7 != *(int *)(iVar9 + 0x6c)) {
          iStack_1c = -1;
          iVar7 = FUN_0044e1d0();
          puVar8 = *(undefined4 **)(iVar7 + 0x3e);
          while ((puVar8 != (undefined4 *)0x0 && (iStack_1c != 0))) {
            puVar6 = (undefined4 *)puVar8[2];
            piVar1 = (int *)*puVar8;
            iVar7 = FUN_004c9f81();
            puVar8 = puVar6;
            if (iVar7 == param_1) {
              iVar7 = *piVar1;
              iVar9 = FUN_0044e1d0();
              if (iVar9 == iVar7) {
                iStack_1c = 0;
              }
              else {
                iStack_1c = *(int *)(iVar7 + 0x52);
              }
            }
          }
          iVar7 = FUN_0044bf40();
          if ((iVar7 != 0) && (iStack_1c == -1)) {
            uVar11 = *(undefined4 *)(param_1 + 6);
            uVar16 = *(undefined4 *)(iVar5 + 6);
            uVar10 = FUN_0044e1d0(uVar16,uVar11);
            FUN_0046bed0(uVar10,uVar16,uVar11);
          }
        }
      }
    }
LAB_0046c6f9:
    piStack_18 = piStack_18 + 1;
  } while ((int)piStack_18 < 0x89d038);
  piVar1 = *(int **)(param_1 + 0x3b6c);
joined_r0x0046c717:
  do {
    if (piVar1 == (int *)0x0) {
      ExceptionList = pvStack_c;
      return;
    }
    piVar13 = (int *)piVar1[2];
    iVar5 = *piVar1;
    cVar3 = FUN_004d2f60();
    piVar1 = piVar13;
  } while (cVar3 != '\0');
  uVar11 = *(undefined4 *)(param_1 + 6);
  FUN_004d5bf0();
  cVar3 = FUN_0044a690(uVar11);
  uVar11 = *(undefined4 *)(param_1 + 6);
  FUN_004d5be0();
  cVar4 = FUN_0044a690(uVar11);
  bStack_1d = cVar4 == '\0' || cVar3 == '\0';
  iVar7 = FUN_004d5bf0();
  iVar7 = *(int *)(iVar7 + 0x482);
  iVar9 = FUN_004d5be0();
  if (iVar7 == *(int *)(iVar9 + 0x482)) {
    bStack_1d = true;
  }
  FUN_004d5be0();
  uVar11 = FUN_004e9f40();
  iVar7 = FUN_004e9370(uVar11);
  if (*(char *)(iVar7 + 0x470) == '\0') {
    iVar7 = FUN_004d5be0();
    iVar7 = *(int *)(*(int *)(iVar7 + 0x482) + 0x52);
    iVar9 = FUN_004d5be0();
    if (iVar7 != *(int *)(iVar9 + 0x12)) goto LAB_0046c7fb;
  }
  else {
    iVar7 = FUN_004d5be0();
    iVar7 = *(int *)(iVar7 + 0x12);
    FUN_004d5be0();
    iVar9 = FUN_004e9f40();
    if (iVar9 != iVar7) {
LAB_0046c7fb:
      bStack_1d = true;
    }
  }
  if (DAT_00dc1886 != '\0') {
    iVar7 = FUN_004d5bf0();
    iVar7 = (**(code **)**(undefined4 **)(iVar7 + 0x482))();
    iVar7 = *(int *)(iVar7 + 0x6c);
    iVar9 = FUN_004d5be0();
    iVar9 = (**(code **)**(undefined4 **)(iVar9 + 0x482))();
    if (iVar7 == *(int *)(iVar9 + 0x6c)) {
      bStack_1d = true;
    }
  }
  if (DAT_00dc1913 == '\0') goto LAB_0046c890;
  iVar7 = param_1;
  FUN_004d5be0(param_1);
  iVar7 = FUN_004e9f80(iVar7);
  if (iVar7 == -1) goto LAB_0046c890;
  iVar9 = FUN_004e9370(iVar7);
  iVar12 = FUN_004d5be0();
  if ((((*(int *)(iVar12 + 0x12) == iVar7) || (*(char *)(iVar9 + 0x470) == '\0')) ||
      (*(int *)(iVar9 + 0x3d8) != param_1)) || (iVar9 = FUN_004e9f80(param_1), iVar9 != iVar7))
  goto LAB_0046c890;
  goto LAB_0046c89c;
LAB_0046c890:
  if (bStack_1d) {
LAB_0046c89c:
    piVar13 = (int *)FUN_004d5bf0();
    piVar14 = (int *)FUN_004d5be0();
    uVar11 = (**(code **)(*piVar13 + 0xc))();
    uVar11 = (**(code **)(*piVar14 + 0xc))(uVar11);
    uVar11 = (**(code **)(*(int *)(param_1 + 0xe) + 0xc))(uVar11);
    FUN_00458570(s__s_cancels_the_resource_convoy_f_0083caa0,uVar11);
    puVar8 = operator_new(0xc);
    uStack_4 = 0;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar15 = operator_new(0x18);
      if (puVar15 == (undefined2 *)0x0) {
        puVar15 = (undefined2 *)0x0;
      }
      else {
        puVar15[3] = 0;
        *(undefined1 *)(puVar15 + 2) = 0;
        *(undefined1 *)((int)puVar15 + 3) = 0;
        *(undefined1 *)(puVar15 + 1) = 0;
        puVar15[4] = 0;
        *(undefined4 *)(puVar15 + 5) = 0;
        puVar15[7] = 0;
        *(undefined4 *)(puVar15 + 8) = 0;
      }
      puVar8[1] = puVar15;
      *(undefined1 *)(puVar8 + 2) = 0;
      *(undefined1 *)((int)puVar8 + 9) = 1;
      *puVar8 = &PTR_FUN_007e6060;
      *(undefined1 *)((int)puVar8 + 10) = 0;
      *puVar15 = 0x147;
      iVar7 = puVar8[1];
      *(undefined4 *)(iVar7 + 8) = DAT_0088f230;
      *(undefined2 *)(iVar7 + 0xc) = DAT_0088f234;
      iVar7 = puVar8[1];
      uStack_14 = uStack_14 & 0xff000000;
      *(uint *)(iVar7 + 2) = uStack_14;
      *(undefined2 *)(iVar7 + 6) = 0;
      iVar7 = puVar8[1];
      *puVar8 = &PTR_FUN_007e6040;
      *(undefined4 *)(iVar7 + 0xe) = *(undefined4 *)(iVar5 + 0xc);
      *(undefined2 *)(iVar7 + 0x12) = *(undefined2 *)(iVar5 + 0x10);
      *(undefined4 *)(puVar8[1] + 0x14) = 0;
    }
    uStack_4 = 0xffffffff;
    FUN_00565cc0(puVar8);
  }
  goto joined_r0x0046c717;
}


