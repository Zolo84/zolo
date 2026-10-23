// FUN_005d7800 @ 5d7800 size=1834

void FUN_005d7800(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  byte bVar10;
  int extraout_ECX;
  int iVar11;
  int iVar12;
  bool bVar13;
  int *piVar14;
  int iStack00000008;
  void *in_stack_0000fff8;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined3 uStack_4;
  char cStack_1;
  
  uStack_4 = 0xffffff;
  cStack_1 = 0xff;
  puStack_8 = &LAB_007cd87c;
  uStack_c = ExceptionList;
  ExceptionList = &uStack_c;
  FUN_007a69e0();
  FUN_00436060();
  iVar5 = *(int *)(extraout_ECX + 0xc0);
  iVar12 = 0;
  piVar14 = *(int **)(iVar5 + 4);
  while (piVar14 != (int *)0x0) {
    puVar9 = (undefined4 *)*piVar14;
    piVar14 = (int *)piVar14[2];
    if (puVar9 != (undefined4 *)0x0) {
      (**(code **)*puVar9)();
    }
    FUN_00796cd8();
  }
  *(undefined4 *)(iVar5 + 4) = 0;
  *(undefined4 *)(iVar5 + 8) = 0;
  *(undefined4 *)(iVar5 + 0xc) = 0;
  iVar5 = DAT_00cd4a4c;
  iStack00000008 = 0;
  puVar9 = (undefined4 *)&stack0x00000018;
  for (iVar11 = 0x7c; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  puVar9 = &DAT_00cd49d0;
  for (iVar11 = 0x1f; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  puStack_8 = (undefined1 *)0x0;
  cStack_1 = '\0';
  uStack_c = (void *)((uint)uStack_c & 0xffffff);
  puVar9 = (undefined4 *)(&DAT_00cc4b70 + iVar5 * 4);
  iVar11 = 0x1f;
  do {
    *puVar9 = 0x1f;
    puVar9 = puVar9 + 3;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  *(undefined4 *)(&DAT_00cc4ce4 + iVar5 * 4) = 0x1f;
  iVar5 = FUN_0050b140();
  if (iVar5 == 0) goto LAB_005d7ef2;
  if (*(int **)(iVar5 + 0x5e) == (int *)0x0) {
    DAT_0085b4a0 = 0x1f;
    DAT_00cd4a4c = 0;
    *(undefined4 *)(extraout_ECX + 0x10a) = 0;
  }
  else {
    cVar4 = (**(code **)(**(int **)(iVar5 + 0x5e) + 0x28))();
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(**(int **)(iVar5 + 0x5e) + 0x2c))();
      if (cVar4 == '\0') {
        DAT_00cd4a4c = 1;
        DAT_0085b4a0 = DAT_0085b498;
      }
      else {
        DAT_00cd4a4c = 2;
        DAT_0085b4a0 = DAT_0085b49c;
      }
    }
    else {
      DAT_00cd4a4c = 0;
      DAT_0085b4a0 = DAT_0085b494;
    }
  }
  iVar11 = *(int *)(iVar5 + 0x62);
  if ((*(int *)(iVar5 + 0x5e) != 0) || ((iVar5 = FUN_00428ee0(), iVar5 != 0 && (iVar5 != 0x14)))) {
    iVar11 = FUN_00522770();
  }
  iVar5 = 0;
  piVar14 = *(int **)(iVar11 + 0x117f8);
  if (*(int **)(iVar11 + 0x117f8) == (int *)0x0) {
LAB_005d7a9a:
    DAT_0085b4a0 = 0x1f;
    *(undefined4 *)(extraout_ECX + 0x10a) = 0;
    if (uStack_c._3_1_ != '\0') {
      puVar9 = *(undefined4 **)(iVar11 + 0x117f8);
      while (puVar9 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)puVar9[2];
        uVar8 = *puVar9;
        cVar4 = FUN_00509ed0();
        puVar9 = puVar3;
        if (((cVar4 != '\0') && (cVar4 = FUN_00509f10(), cVar4 != '\0')) &&
           ((&DAT_0085b4a4)[DAT_00cd4a4c * 4 + iVar12] != '\0')) {
          *(undefined4 *)(&DAT_00cc4cf0 + iStack00000008 * 4) = uVar8;
          *(int *)(&stack0x00000318 + iStack00000008 * 4) = iStack00000008;
          iStack00000008 = iStack00000008 + 1;
        }
      }
    }
    if (DAT_00cd4a4c == 0) {
      DAT_0085b494 = 0x1f;
    }
    else if (DAT_00cd4a4c == 1) {
      DAT_0085b498 = 0x1f;
    }
    else if (DAT_00cd4a4c == 2) {
      DAT_0085b49c = 0x1f;
    }
  }
  else {
    do {
      piVar1 = (int *)piVar14[2];
      iVar2 = *piVar14;
      cVar4 = FUN_00509ed0();
      if ((cVar4 != '\0') && (cVar4 = FUN_00509f10(), cVar4 != '\0')) {
        iVar12 = *(int *)(iVar2 + 0x22);
        puStack_8 = puStack_8 + 1;
        uStack_c = (void *)CONCAT13(1,(undefined3)uStack_c);
        bVar10 = 0;
        *(int *)(&stack0x00000208 + iVar12 * 4) = *(int *)(&stack0x00000208 + iVar12 * 4) + 1;
        piVar6 = &DAT_00cd49d0;
        piVar14 = (int *)(&stack0x00000018 + iVar12 * 4);
        do {
          if ((*(uint *)(iVar2 + 0x1e) & 1 << (bVar10 & 0x1f)) != 0) {
            *piVar6 = *piVar6 + 1;
            *piVar14 = *piVar14 + 1;
          }
          piVar6 = piVar6 + 1;
          bVar10 = bVar10 + 1;
          piVar14 = piVar14 + 4;
        } while ((int)piVar6 < 0xcd4a4c);
        if (((DAT_0085b4a0 == 0x1f) ||
            ((*(uint *)(iVar2 + 0x1e) & 1 << ((byte)DAT_0085b4a0 & 0x1f)) != 0)) &&
           (cStack_1 = '\x01', (&DAT_0085b4a4)[DAT_00cd4a4c * 4 + iVar12] != '\0')) {
          *(int *)(&DAT_00cc4cf0 + iVar5 * 4) = iVar2;
          *(int *)(&stack0x00000318 + iVar5 * 4) = iVar5;
          iVar5 = iVar5 + 1;
        }
      }
      piVar14 = piVar1;
    } while (piVar1 != (int *)0x0);
    iStack00000008 = iVar5;
    if (cStack_1 == '\0') goto LAB_005d7a9a;
  }
  if (*(undefined4 **)(extraout_ECX + 0x106) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(extraout_ECX + 0x106))();
  }
  pvVar7 = operator_new(0x3e);
  if (pvVar7 == (void *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_00437040();
  }
  *(undefined4 *)(extraout_ECX + 0x106) = uVar8;
  FUN_0042b6c9();
  FUN_0042b6c9();
  FUN_007a630a();
  iVar12 = 0;
  FUN_00437a20();
  *(undefined4 *)(extraout_ECX + 0x10a) = 0;
  FUN_004378e0();
  iVar5 = 1;
  puStack_8 = (undefined1 *)0x3;
  piVar14 = &DAT_00cd49d0;
  do {
    if (0 < *piVar14) {
      FUN_0050aa70();
      FUN_0042b6c9();
      FUN_007a630a();
      FUN_00437a20();
      bVar13 = DAT_0085b4a0 == iVar12;
      *(int *)(&DAT_00cc4b70 + (int)(puStack_8 + DAT_00cd4a4c) * 4) = iVar12;
      if (bVar13) {
        *(int *)(extraout_ECX + 0x10a) = iVar5;
      }
      iVar5 = iVar5 + 1;
      puStack_8 = puStack_8 + 3;
    }
    piVar14 = piVar14 + 1;
    iVar12 = iVar12 + 1;
  } while ((int)piVar14 < 0xcd4a4c);
  if (DAT_0085b4a0 == 0x1f) {
    *(undefined4 *)(extraout_ECX + 0x10a) = 0;
  }
  if ((iVar5 + 1) * 0x10 < 0x154) {
    FUN_00437480();
  }
  FUN_004378e0();
  if (iStack00000008 != 0) {
    iVar5 = *(int *)(extraout_ECX + 0xc4);
    if (((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) {
      FUN_007a78e3();
    }
    if (0 < iStack00000008) {
      puStack_8 = &stack0x00000318;
      do {
        pvVar7 = operator_new(0x42);
        if (pvVar7 == (void *)0x0) {
          uVar8 = 0;
        }
        else {
          FUN_004c0980();
          FUN_00447250();
          uVar8 = FUN_005d5c20();
        }
        iVar5 = *(int *)(extraout_ECX + 0xc0);
        iVar12 = *(int *)(iVar5 + 8);
        puVar9 = operator_new(0xe);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          *puVar9 = uVar8;
          puVar9[1] = iVar12;
          puVar9[2] = 0;
          *(undefined1 *)(puVar9 + 3) = 0;
        }
        iVar11 = *(int *)(iVar5 + 0xc);
        *(undefined4 **)(iVar5 + 8) = puVar9;
        *(int *)(iVar5 + 0xc) = iVar11 + 1;
        if (iVar11 == 0) {
          *(undefined4 **)(iVar5 + 4) = puVar9;
        }
        else {
          *(undefined4 **)(iVar12 + 8) = puVar9;
        }
        puStack_8 = puStack_8 + 4;
        iStack00000008 = iStack00000008 + -1;
      } while (iStack00000008 != 0);
    }
  }
LAB_005d7ef2:
  FUN_004353e0();
  FUN_00436130();
  ExceptionList = in_stack_0000fff8;
  return;
}


