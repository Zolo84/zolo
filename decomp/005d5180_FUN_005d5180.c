// FUN_005d5180 @ 5d5180 size=1117

void __fastcall FUN_005d5180(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  char cVar10;
  short local_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cd686;
  pvStack_c = ExceptionList;
  DAT_00cc4a6f = 0;
  ExceptionList = &pvStack_c;
  FUN_00446d10();
  puVar9 = *(undefined4 **)(*(int *)(param_1 + 0xbc) + 0x3e);
  if (puVar9 != (undefined4 *)0x0) {
    (**(code **)(*(int *)*puVar9 + 0x4c))();
    iVar5 = FUN_00428ee0();
    if ((iVar5 != 0) && (iVar5 != 8)) {
      iVar5 = FUN_00428ee0();
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = iVar5 + -8;
      }
      local_14 = (short)*(undefined4 *)(iVar5 + 0xc);
      uStack_12 = (undefined2)((uint)*(undefined4 *)(iVar5 + 0xc) >> 0x10);
      uStack_10 = *(undefined2 *)(iVar5 + 0x10);
    }
  }
  FUN_00436060();
  iVar5 = *(int *)(param_1 + 0xbc);
  piVar1 = *(int **)(iVar5 + 4);
  while (piVar1 != (int *)0x0) {
    puVar9 = (undefined4 *)*piVar1;
    piVar1 = (int *)piVar1[2];
    if (puVar9 != (undefined4 *)0x0) {
      (**(code **)*puVar9)();
    }
    FUN_00796cd8();
  }
  *(undefined4 *)(iVar5 + 4) = 0;
  *(undefined4 *)(iVar5 + 8) = 0;
  *(undefined4 *)(iVar5 + 0xc) = 0;
  piVar1 = *(int **)(*(int *)(param_1 + 0x90) + 0x451c);
joined_r0x005d5261:
  if (piVar1 != (int *)0x0) {
    uVar7 = 0;
    iVar5 = *piVar1;
    piVar1 = (int *)piVar1[2];
    if (*(char *)(iVar5 + 0x154) == '\0') {
      pvVar6 = operator_new(0x6c);
      uStack_4 = 0;
      if (pvVar6 != (void *)0x0) {
        uVar7 = FUN_005d2b40(iVar5);
      }
      uStack_4 = 0xffffffff;
      cVar10 = '\x01';
      if ((DAT_00bd13ee != '\0') || (DAT_00bd13ef != '\0')) {
        iVar8 = FUN_0064ec60();
        if (iVar8 != 0) {
          iVar8 = FUN_0064ec60();
          if (*(char *)(iVar8 + 0x160) == '\0') {
            iVar8 = FUN_0064ec60();
            if (*(char *)(iVar8 + 0x15f) == '\0') {
              iVar8 = FUN_0064ec60();
              if (*(char *)(iVar8 + 0x161) != '\0') {
                cVar10 = *(char *)(iVar5 + 0x161);
              }
            }
            else {
              cVar10 = *(char *)(iVar5 + 0x15f);
            }
          }
          else {
            cVar10 = *(char *)(iVar5 + 0x160);
          }
        }
        if (*(char *)(iVar5 + 0x162) != '\0') {
          cVar10 = '\0';
        }
        if ((0 < *(int *)(iVar5 + 0x14c)) || (cVar10 == '\0')) goto joined_r0x005d5261;
      }
      cVar10 = FUN_0042dd70();
      iVar5 = *(int *)(param_1 + 0xbc);
      if (cVar10 == '\0') {
        iVar8 = *(int *)(iVar5 + 4);
        puVar9 = operator_new(0xe);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          *puVar9 = uVar7;
          puVar9[1] = 0;
          puVar9[2] = iVar8;
          *(undefined1 *)(puVar9 + 3) = 0;
        }
        iVar2 = *(int *)(iVar5 + 0xc);
        *(undefined4 **)(iVar5 + 4) = puVar9;
        *(int *)(iVar5 + 0xc) = iVar2 + 1;
        if (iVar2 == 0) {
          *(undefined4 **)(iVar5 + 8) = puVar9;
        }
        else {
          *(undefined4 **)(iVar8 + 4) = puVar9;
        }
      }
      else {
        iVar8 = *(int *)(iVar5 + 8);
        puVar9 = operator_new(0xe);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          *puVar9 = uVar7;
          puVar9[1] = iVar8;
          puVar9[2] = 0;
          *(undefined1 *)(puVar9 + 3) = 0;
        }
        iVar2 = *(int *)(iVar5 + 0xc);
        *(undefined4 **)(iVar5 + 8) = puVar9;
        *(int *)(iVar5 + 0xc) = iVar2 + 1;
        if (iVar2 == 0) {
          *(undefined4 **)(iVar5 + 4) = puVar9;
        }
        else {
          *(undefined4 **)(iVar8 + 8) = puVar9;
        }
      }
    }
    goto joined_r0x005d5261;
  }
  if ((DAT_00bd13ee == '\0') && (DAT_00bd13ef == '\0')) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x90) + 0x3b7e);
    while (piVar1 != (int *)0x0) {
      piVar3 = (int *)piVar1[2];
      piVar4 = (int *)*piVar1;
      piVar1 = piVar3;
      if ((*(int *)((int)piVar4 + 0x16) == 0) &&
         (((piVar4[0xe] != 0 || (cVar10 = FUN_004f2390(), cVar10 != '\0')) &&
          (cVar10 = (**(code **)(*piVar4 + 0x1c))(), cVar10 == '\0')))) {
        pvVar6 = operator_new(0x54);
        uStack_4 = 1;
        if (pvVar6 == (void *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_005d1b70(piVar4);
        }
        uStack_4 = 0xffffffff;
        iVar5 = *(int *)(param_1 + 0xbc);
        iVar8 = *(int *)(iVar5 + 4);
        puVar9 = operator_new(0xe);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          *puVar9 = uVar7;
          puVar9[1] = 0;
          puVar9[2] = iVar8;
          *(undefined1 *)(puVar9 + 3) = 0;
        }
        iVar2 = *(int *)(iVar5 + 0xc);
        *(undefined4 **)(iVar5 + 4) = puVar9;
        *(int *)(iVar5 + 0xc) = iVar2 + 1;
        if (iVar2 == 0) {
          *(undefined4 **)(iVar5 + 8) = puVar9;
        }
        else {
          *(undefined4 **)(iVar8 + 4) = puVar9;
        }
      }
    }
  }
  FUN_004353e0();
  FUN_00436130();
  if ((CONCAT22(uStack_10,uStack_12) != DAT_0088f28e) || (local_14 != DAT_0088f28c)) {
    for (puVar9 = *(undefined4 **)(*(int *)(param_1 + 0xbc) + 4); puVar9 != (undefined4 *)0x0;
        puVar9 = (undefined4 *)puVar9[2]) {
      piVar1 = (int *)*puVar9;
      cVar10 = (**(code **)(*piVar1 + 0x4c))();
      if (cVar10 == '\0') {
LAB_005d5573:
        cVar10 = (**(code **)(*piVar1 + 0x4c))();
        if (cVar10 == '\0') {
          iVar5 = FUN_00428ee0();
          if (iVar5 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar5 + -8;
          }
          if ((*(int *)(iVar5 + 0xe) == CONCAT22(uStack_10,uStack_12)) &&
             (*(short *)(iVar5 + 0xc) == local_14)) goto LAB_005d55b0;
        }
      }
      else {
        iVar5 = FUN_00428ee0();
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = iVar5 + -8;
        }
        if ((*(int *)(iVar5 + 0xe) != CONCAT22(uStack_10,uStack_12)) ||
           (*(short *)(iVar5 + 0xc) != local_14)) goto LAB_005d5573;
LAB_005d55b0:
        FUN_005918b0();
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}


