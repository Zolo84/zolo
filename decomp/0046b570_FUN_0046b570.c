// FUN_0046b570 @ 46b570 size=1639

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0046b570(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  undefined2 *puVar14;
  bool bStack_31;
  uint uStack_28;
  int iStack_20;
  undefined1 auStack_14 [8];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bcb4b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar6 = (**(code **)(*(int *)(param_1 + 0xe86a) + 4))();
  if (((iVar6 == 1) && (iVar6 = (**(code **)(*(int *)(param_1 + 0x3b68) + 4))(), iVar6 == 0)) ||
     (iVar6 = FUN_0044e1d0(), iVar6 == 0)) {
    ExceptionList = pvStack_c;
    return;
  }
  piVar1 = *(int **)(param_1 + 0xe86e);
joined_r0x0046b5d4:
  if (piVar1 != (int *)0x0) {
    puVar11 = (undefined4 *)*piVar1;
    piVar1 = (int *)piVar1[2];
    if ((puVar11 != (undefined4 *)0x0) && (iVar6 = (**(code **)(puVar11[10] + 4))(), 0 < iVar6)) {
      if (DAT_00dc1886 == '\0') {
LAB_0046b633:
        puVar7 = (undefined4 *)FUN_0044e1d0();
        if (puVar11 == puVar7) goto joined_r0x0046b5d4;
      }
      else {
        iVar6 = (**(code **)*puVar11)();
        iVar6 = *(int *)(iVar6 + 0x6c);
        puVar7 = (undefined4 *)FUN_0044e1d0();
        iVar8 = (**(code **)*puVar7)();
        if (iVar6 == *(int *)(iVar8 + 0x6c)) {
          if (DAT_00dc1886 == '\0') goto LAB_0046b633;
          goto joined_r0x0046b5d4;
        }
      }
      iVar6 = FUN_004e9f40();
      piVar9 = (int *)FUN_004e9370();
      if ((((*(int *)((int)piVar9 + 0x12) != 0) && (piVar9[0x95] != 8)) &&
          ((piVar9[0x95] != 9 && (*(int *)((int)piVar9 + 0x46a) != 0)))) &&
         ((((DAT_00dc1913 == '\0' || (iVar8 = FUN_004e9f80(), iVar8 == -1)) ||
           (iVar10 = FUN_004e9370(), *(char *)(iVar10 + 0x470) == '\0')) ||
          ((*(int *)(iVar10 + 0x3d8) != param_1 || (iVar8 == iVar6)))))) {
        iVar6 = (**(code **)(*(int *)((int)puVar11 + 0x16) + 4))();
        if ((iVar6 != 0) ||
           (((float)piVar9[0x9b] <= _DAT_007e3380 && ((float)piVar9[0x9a] <= _DAT_007e3380)))) {
          bVar4 = false;
          piVar12 = *(int **)((int)puVar11 + 0x1a);
          if (*(int **)((int)puVar11 + 0x1a) != (int *)0x0) {
            do {
              piVar2 = (int *)piVar12[2];
              if ((*(int *)(*piVar12 + 0x12a) == param_1) && (cVar5 = FUN_004d2f60(), cVar5 != '\0')
                 ) {
                bVar4 = true;
              }
              piVar12 = piVar2;
            } while (piVar2 != (int *)0x0);
            if (bVar4) goto joined_r0x0046b5d4;
          }
          if (((float)piVar9[0x9b] <= _DAT_007e3380) && ((float)piVar9[0x9a] <= _DAT_007e3380))
          goto joined_r0x0046b5d4;
        }
        uStack_28 = 0;
        if (DAT_00dc1886 == '\0') {
          FUN_0044e1d0();
          uStack_28 = FUN_004cc4d5();
        }
        else {
          iStack_20 = 0x7fffffff;
          puVar11 = (undefined4 *)FUN_0044e1d0();
          iVar6 = (**(code **)*puVar11)();
          piVar12 = *(int **)(*(int *)(iVar6 + 0x6c) + 4);
          if (piVar12 == (int *)0x0) goto joined_r0x0046b5d4;
          do {
            iVar6 = *piVar12;
            if ((DAT_00dc1887 != '\0') || (iVar8 = FUN_004c9f81(), iVar8 == param_1)) {
              piVar2 = *(int **)(iVar6 + 0x2c);
              while (piVar2 != (int *)0x0) {
                piVar3 = (int *)piVar2[2];
                iVar6 = *piVar2;
                piVar2 = piVar3;
                if (*(int *)(iVar6 + 0x46a) != 0) {
                  FUN_004e9370();
                  cVar5 = FUN_004ed600();
                  if (cVar5 != '\0') {
                    FUN_004ed6d0();
                    iVar8 = __ftol();
                    if (iVar8 < iStack_20) {
                      uStack_28 = *(uint *)(iVar6 + 0x12);
                      iStack_20 = iVar8;
                    }
                  }
                }
              }
            }
            piVar12 = (int *)piVar12[2];
          } while (piVar12 != (int *)0x0);
        }
        if (((0 < (int)uStack_28) && (piVar12 = (int *)FUN_004e9370(), (char)piVar9[0x11c] != '\0'))
           && ((char)piVar12[0x11c] != '\0')) {
          FUN_00428eb0();
          FUN_00449290(auStack_14);
          FUN_0045d580();
          (**(code **)(*piVar9 + 0xc))();
          (**(code **)(*piVar12 + 0xc))();
          (**(code **)(*(int *)(param_1 + 0xe) + 0xc))();
          FUN_00458570();
        }
      }
    }
    goto joined_r0x0046b5d4;
  }
  piVar1 = *(int **)(param_1 + 0x3b6c);
joined_r0x0046b8e5:
  do {
    if (piVar1 == (int *)0x0) {
      ExceptionList = pvStack_c;
      return;
    }
    piVar9 = (int *)piVar1[2];
    iVar6 = *piVar1;
    cVar5 = FUN_004d2f60();
    piVar1 = piVar9;
  } while (cVar5 == '\0');
  FUN_004d5bf0();
  cVar5 = FUN_0044a690();
  bStack_31 = cVar5 == '\0';
  FUN_004d5bf0();
  FUN_004e9f40();
  iVar8 = FUN_004e9370();
  if ((_DAT_007e4098 <= *(float *)(iVar8 + 0x26c)) || (_DAT_007e4098 <= *(float *)(iVar8 + 0x268)))
  {
    if (DAT_00dc1886 != '\0') {
      iVar8 = (**(code **)**(undefined4 **)(iVar8 + 0x482))();
      iVar8 = *(int *)(iVar8 + 0x6c);
      puVar11 = (undefined4 *)FUN_0044e1d0();
      iVar10 = (**(code **)*puVar11)();
      if (iVar8 != *(int *)(iVar10 + 0x6c)) {
        iVar8 = FUN_004d5bf0();
        iVar8 = (**(code **)**(undefined4 **)(iVar8 + 0x482))();
        iVar8 = *(int *)(iVar8 + 0x6c);
        iVar10 = FUN_004d5be0();
        iVar10 = (**(code **)**(undefined4 **)(iVar10 + 0x482))();
        if (iVar8 != *(int *)(iVar10 + 0x6c)) {
          iVar8 = FUN_004d5be0();
          iVar8 = (**(code **)**(undefined4 **)(iVar8 + 0x482))();
          iVar8 = *(int *)(iVar8 + 0x6c);
          puVar11 = (undefined4 *)FUN_0044e1d0();
          iVar10 = (**(code **)*puVar11)();
          if (iVar8 == *(int *)(iVar10 + 0x6c)) goto LAB_0046ba56;
        }
      }
      goto LAB_0046ba51;
    }
    if (!bStack_31) {
      iVar8 = *(int *)(iVar8 + 0x482);
      iVar10 = FUN_0044e1d0();
      bStack_31 = iVar8 == iVar10 || bStack_31;
      iVar8 = FUN_004d5bf0();
      iVar8 = *(int *)(iVar8 + 0x482);
      iVar10 = FUN_004d5be0();
      if (iVar8 == *(int *)(iVar10 + 0x482)) {
        bStack_31 = true;
      }
      iVar8 = FUN_004d5be0();
      iVar8 = *(int *)(iVar8 + 0x482);
      iVar10 = FUN_0044e1d0();
      if (iVar8 != iVar10) goto LAB_0046ba51;
    }
  }
  else {
LAB_0046ba51:
    bStack_31 = true;
  }
LAB_0046ba56:
  if (DAT_00dc1913 == '\0') goto LAB_0046ba9e;
  FUN_004d5bf0();
  iVar8 = FUN_004e9f80();
  if (iVar8 == -1) goto LAB_0046ba9e;
  iVar10 = FUN_004e9370();
  iVar13 = FUN_004d5bf0();
  if (((*(int *)(iVar13 + 0x12) == iVar8) || (*(char *)(iVar10 + 0x470) == '\0')) ||
     (*(int *)(iVar10 + 0x3d8) != param_1)) goto LAB_0046ba9e;
  goto LAB_0046baaa;
LAB_0046ba9e:
  if (bStack_31) {
LAB_0046baaa:
    piVar9 = (int *)FUN_004d5bf0();
    piVar12 = (int *)FUN_004d5be0();
    (**(code **)(*piVar9 + 0xc))();
    (**(code **)(*piVar12 + 0xc))();
    (**(code **)(*(int *)(param_1 + 0xe) + 0xc))();
    FUN_00458570();
    puVar11 = operator_new(0xc);
    uStack_4 = 0;
    if (puVar11 != (undefined4 *)0x0) {
      puVar14 = operator_new(0x18);
      if (puVar14 == (undefined2 *)0x0) {
        puVar14 = (undefined2 *)0x0;
      }
      else {
        puVar14[3] = 0;
        *(undefined1 *)(puVar14 + 2) = 0;
        *(undefined1 *)((int)puVar14 + 3) = 0;
        *(undefined1 *)(puVar14 + 1) = 0;
        puVar14[4] = 0;
        *(undefined4 *)(puVar14 + 5) = 0;
        puVar14[7] = 0;
        *(undefined4 *)(puVar14 + 8) = 0;
      }
      puVar11[1] = puVar14;
      *(undefined1 *)(puVar11 + 2) = 0;
      *(undefined1 *)((int)puVar11 + 9) = 1;
      *puVar11 = &PTR_FUN_007e6060;
      *(undefined1 *)((int)puVar11 + 10) = 0;
      *puVar14 = 0x147;
      iVar8 = puVar11[1];
      *(undefined4 *)(iVar8 + 8) = DAT_0088f230;
      *(undefined2 *)(iVar8 + 0xc) = DAT_0088f234;
      iVar8 = puVar11[1];
      uStack_28 = uStack_28 & 0xff000000;
      *(uint *)(iVar8 + 2) = uStack_28;
      *(undefined2 *)(iVar8 + 6) = 0;
      iVar8 = puVar11[1];
      *puVar11 = &PTR_FUN_007e6040;
      *(undefined4 *)(iVar8 + 0xe) = *(undefined4 *)(iVar6 + 0xc);
      *(undefined2 *)(iVar8 + 0x12) = *(undefined2 *)(iVar6 + 0x10);
      *(undefined4 *)(puVar11[1] + 0x14) = 0;
    }
    uStack_4 = 0xffffffff;
    FUN_00565cc0();
  }
  goto joined_r0x0046b8e5;
}


