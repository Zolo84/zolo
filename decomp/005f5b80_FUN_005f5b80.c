// FUN_005f5b80 @ 5f5b80 size=1509

void __fastcall FUN_005f5b80(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  bool bVar4;
  void **ppvVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  int *piStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cef4c;
  ppvVar5 = &pvStack_c;
  piVar1 = *(int **)(param_1 + 0x92);
  pvStack_c = ExceptionList;
  while (ExceptionList = ppvVar5, piVar1 != (int *)0x0) {
    piVar13 = (int *)piVar1[2];
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
    FUN_00796cd8(piVar1);
    ppvVar5 = ExceptionList;
    piVar1 = piVar13;
  }
  *(undefined4 *)(param_1 + 0x92) = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  piVar1 = *(int **)(DAT_00d0ca90 + 0xe86e);
joined_r0x005f5bec:
  do {
    if (piVar1 == (int *)0x0) break;
    iVar12 = *piVar1;
    piVar1 = (int *)piVar1[2];
    FUN_004e9370(*(undefined4 *)(iVar12 + 0x52));
    iVar7 = FUN_004e9f40();
    if (iVar7 == *(int *)(DAT_00d0ca90 + 0x117de)) {
      iVar7 = *(int *)(iVar12 + 0x52);
    }
    iVar7 = FUN_004e9370(iVar7);
    if (*(int *)(iVar7 + 0x46a) != 0) {
      if (*(int *)(param_1 + 0x86) == 0) {
        if (*(int *)(param_1 + 0x8a) == 0) {
          iVar7 = FUN_0044e1d0();
          if (iVar12 == iVar7) {
            piVar13 = *(int **)(iVar12 + 0x2c);
            while (piVar13 != (int *)0x0) {
              piVar2 = (int *)piVar13[2];
              iVar12 = *piVar13;
              piVar13 = piVar2;
              if (*(int *)(iVar12 + 0x46a) != 0) {
                puVar8 = operator_new(0x5c);
                uStack_4 = 0;
                if (puVar8 == (undefined4 *)0x0) {
                  puVar8 = (undefined4 *)0x0;
                }
                else {
                  uVar11 = *(undefined4 *)(iVar12 + 0x12);
                  uVar3 = *(undefined4 *)(param_1 + 0x8a);
                  FUN_005efbe0(uVar11,0);
                  puVar8[0x16] = uVar3;
                  *puVar8 = &PTR_FUN_007ed8dc;
                  puVar8[2] = &PTR_LAB_007ed8d8;
                  puVar8[0x15] = uVar11;
                  *(undefined1 *)(puVar8 + 0xb) = 1;
                }
                iVar12 = *(int *)(param_1 + 0x96);
                uStack_4 = 0xffffffff;
                puVar9 = operator_new(0xe);
                if (puVar9 == (undefined4 *)0x0) {
                  puVar9 = (undefined4 *)0x0;
                }
                else {
                  *puVar9 = puVar8;
                  puVar9[1] = iVar12;
                  puVar9[2] = 0;
                  *(undefined1 *)(puVar9 + 3) = 0;
                }
                iVar7 = *(int *)(param_1 + 0x9a);
                *(undefined4 **)(param_1 + 0x96) = puVar9;
                *(int *)(param_1 + 0x9a) = iVar7 + 1;
                if (iVar7 == 0) {
                  *(undefined4 **)(param_1 + 0x92) = puVar9;
                }
                else {
                  *(undefined4 **)(iVar12 + 8) = puVar9;
                }
              }
            }
          }
          goto joined_r0x005f5bec;
        }
        iVar10 = FUN_0044e1d0();
        if ((iVar12 == iVar10) ||
           (iVar10 = (**(code **)(*(int *)(iVar12 + 0x28) + 4))(), iVar10 < 1))
        goto joined_r0x005f5bec;
        uVar11 = FUN_004e9f40();
        FUN_004e9370(uVar11);
        iVar10 = (**(code **)(*(int *)(iVar12 + 0x16) + 4))();
        if (iVar10 != 0) {
          bVar4 = false;
          piVar13 = *(int **)(iVar12 + 0x1a);
          if (*(int **)(iVar12 + 0x1a) != (int *)0x0) {
            do {
              piVar2 = (int *)piVar13[2];
              if ((*(int *)(*piVar13 + 0x12a) == DAT_00d0ca90) &&
                 (cVar6 = FUN_004d2f60(), cVar6 != '\0')) {
                bVar4 = true;
              }
              piVar13 = piVar2;
            } while (piVar2 != (int *)0x0);
            if (bVar4) goto joined_r0x005f5bec;
          }
        }
      }
      else {
        if (*(int *)(param_1 + 0x86) != 1) goto joined_r0x005f5bec;
        if (*(int *)(param_1 + 0x8a) == 1) {
          iVar7 = FUN_0044e1d0();
          if (iVar12 == iVar7) {
            piVar13 = *(int **)(iVar12 + 0x2c);
            while (piVar13 != (int *)0x0) {
              piVar2 = (int *)piVar13[2];
              iVar12 = *piVar13;
              piVar13 = piVar2;
              if (*(int *)(iVar12 + 0x46a) != 0) {
                puVar8 = operator_new(0x5c);
                uStack_4 = 1;
                if (puVar8 == (undefined4 *)0x0) {
                  puVar8 = (undefined4 *)0x0;
                }
                else {
                  uVar11 = *(undefined4 *)(iVar12 + 0x12);
                  uVar3 = *(undefined4 *)(param_1 + 0x8a);
                  FUN_005efbe0(uVar11,0);
                  puVar8[0x16] = uVar3;
                  *puVar8 = &PTR_FUN_007ed8dc;
                  puVar8[2] = &PTR_LAB_007ed8d8;
                  puVar8[0x15] = uVar11;
                  *(undefined1 *)(puVar8 + 0xb) = 1;
                }
                iVar12 = *(int *)(param_1 + 0x96);
                uStack_4 = 0xffffffff;
                puVar9 = operator_new(0xe);
                if (puVar9 == (undefined4 *)0x0) {
                  puVar9 = (undefined4 *)0x0;
                }
                else {
                  *puVar9 = puVar8;
                  puVar9[1] = iVar12;
                  puVar9[2] = 0;
                  *(undefined1 *)(puVar9 + 3) = 0;
                }
                iVar7 = *(int *)(param_1 + 0x9a);
                *(undefined4 **)(param_1 + 0x96) = puVar9;
                *(int *)(param_1 + 0x9a) = iVar7 + 1;
                if (iVar7 == 0) {
                  *(undefined4 **)(param_1 + 0x92) = puVar9;
                }
                else {
                  *(undefined4 **)(iVar12 + 8) = puVar9;
                }
              }
            }
          }
          goto joined_r0x005f5bec;
        }
        iVar10 = FUN_0044e1d0();
        if (iVar12 == iVar10) goto joined_r0x005f5bec;
        iVar10 = (**(code **)(*(int *)(iVar12 + 4) + 4))();
        if (iVar10 != 0) {
          bVar4 = false;
          piVar13 = *(int **)(iVar12 + 8);
          if (*(int **)(iVar12 + 8) != (int *)0x0) {
            do {
              piVar2 = (int *)piVar13[2];
              if ((*(int *)(*piVar13 + 0x12a) == DAT_00d0ca90) &&
                 (cVar6 = FUN_004d2f60(), cVar6 == '\0')) {
                bVar4 = true;
              }
              piVar13 = piVar2;
            } while (piVar2 != (int *)0x0);
            if (bVar4) goto joined_r0x005f5bec;
          }
        }
      }
      puVar8 = operator_new(0x5c);
      uStack_4 = 2;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar11 = *(undefined4 *)(iVar7 + 0x12);
        uVar3 = *(undefined4 *)(param_1 + 0x8a);
        FUN_005efbe0(uVar11,0);
        *puVar8 = &PTR_FUN_007ed8dc;
        puVar8[2] = &PTR_LAB_007ed8d8;
        puVar8[0x15] = uVar11;
        puVar8[0x16] = uVar3;
        *(undefined1 *)(puVar8 + 0xb) = 1;
      }
      uStack_4 = 0xffffffff;
      iVar12 = *(int *)(param_1 + 0x96);
      puVar9 = operator_new(0xe);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = puVar8;
        puVar9[1] = iVar12;
        puVar9[2] = 0;
        *(undefined1 *)(puVar9 + 3) = 0;
      }
      iVar7 = *(int *)(param_1 + 0x9a);
      *(undefined4 **)(param_1 + 0x96) = puVar9;
      *(int *)(param_1 + 0x9a) = iVar7 + 1;
      if (iVar7 == 0) {
        *(undefined4 **)(param_1 + 0x92) = puVar9;
      }
      else {
        *(undefined4 **)(iVar12 + 8) = puVar9;
      }
    }
  } while( true );
  if ((*(int *)(param_1 + 0x86) == 1) && (*(int *)(param_1 + 0x8a) == 0)) {
    piStack_18 = &DAT_0089cad8;
    do {
      if ((*piStack_18 != 0) &&
         (*(int *)(*(int *)(*piStack_18 + 0x12da) + 0x3b30) == *(int *)(DAT_00d0ca90 + 6))) {
        iVar12 = FUN_0044e1d0();
        iVar12 = (**(code **)(*(int *)(iVar12 + 4) + 4))();
        if (iVar12 == 0) {
          iVar12 = -1;
          iVar7 = FUN_0044e1d0();
          puVar8 = *(undefined4 **)(iVar7 + 0x3e);
          if (*(undefined4 **)(iVar7 + 0x3e) != (undefined4 *)0x0) {
            do {
              if (iVar12 == 0) break;
              puVar9 = (undefined4 *)puVar8[2];
              piVar1 = (int *)*puVar8;
              iVar7 = FUN_004c9f81();
              if (iVar7 == DAT_00d0ca90) {
                iVar12 = *piVar1;
                iVar7 = FUN_0044e1d0();
                if (iVar7 == iVar12) {
                  iVar12 = 0;
                }
                else {
                  iVar12 = *(int *)(iVar12 + 0x52);
                }
              }
              puVar8 = puVar9;
            } while (puVar9 != (undefined4 *)0x0);
            if (iVar12 != -1) goto LAB_005f611d;
          }
          iVar12 = FUN_0044e1d0();
          iVar12 = FUN_004e9370(*(undefined4 *)(iVar12 + 0x52));
          puVar8 = operator_new(0x5c);
          uStack_4 = 3;
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            uVar11 = *(undefined4 *)(iVar12 + 0x12);
            uVar3 = *(undefined4 *)(param_1 + 0x8a);
            FUN_005efbe0(uVar11,0);
            *puVar8 = &PTR_FUN_007ed8dc;
            puVar8[2] = &PTR_LAB_007ed8d8;
            puVar8[0x15] = uVar11;
            puVar8[0x16] = uVar3;
            *(undefined1 *)(puVar8 + 0xb) = 1;
          }
          uStack_4 = 0xffffffff;
          iVar12 = *(int *)(param_1 + 0x96);
          puVar9 = operator_new(0xe);
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            *puVar9 = puVar8;
            puVar9[1] = iVar12;
            puVar9[2] = 0;
            *(undefined1 *)(puVar9 + 3) = 0;
          }
          iVar7 = *(int *)(param_1 + 0x9a);
          *(undefined4 **)(param_1 + 0x96) = puVar9;
          *(int *)(param_1 + 0x9a) = iVar7 + 1;
          if (iVar7 == 0) {
            *(undefined4 **)(param_1 + 0x92) = puVar9;
          }
          else {
            *(undefined4 **)(iVar12 + 8) = puVar9;
          }
        }
      }
LAB_005f611d:
      piStack_18 = piStack_18 + 1;
    } while ((int)piStack_18 < 0x89d038);
  }
  FUN_004353e0();
  FUN_00435fd0();
  *(undefined1 *)(param_1 + 0xec) = 0;
  ExceptionList = pvStack_c;
  return;
}


