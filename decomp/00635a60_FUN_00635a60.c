// FUN_00635a60 @ 635a60 size=1016

void __fastcall FUN_00635a60(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  void **ppvVar8;
  char cVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  void *pvVar14;
  int *local_24;
  int iStack_20;
  int local_18;
  undefined4 *puStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d1b6c;
  iVar1 = *(int *)(param_1 + 0x10e);
  ppvVar8 = &pvStack_c;
  piVar7 = *(int **)(iVar1 + 4);
  pvStack_c = ExceptionList;
  while (ExceptionList = ppvVar8, piVar7 != (int *)0x0) {
    piVar2 = (int *)piVar7[2];
    if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar7)(1);
    }
    FUN_00796cd8(piVar7);
    ppvVar8 = ExceptionList;
    piVar7 = piVar2;
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14a) = 1;
  *(undefined4 *)(param_1 + 0x14e) = 1;
  if (*(int *)(param_1 + 0x126) == 3) {
    local_18 = 0;
    if (0 < DAT_008776b4) {
      local_24 = &DAT_00dc0b1a;
      do {
        iVar1 = *local_24;
        if (*(char *)(iVar1 + 0x4b5c + *(int *)(param_1 + 0x90)) != '\0') {
          iVar10 = (**(code **)(*(int *)(&DAT_00d77142 + iVar1 * 0x12) + 4))();
          iVar3 = *(int *)(&DAT_00d7714a + iVar1 * 0x12);
          while (iVar3 != 0) {
            iVar10 = iVar10 + -1;
            iVar3 = *(int *)(iVar3 + 4);
            cVar9 = FUN_004a3530(iVar1,iVar10);
            if (cVar9 != '\0') {
              puVar11 = operator_new(0x3c);
              uStack_4 = 0;
              if (puVar11 == (undefined4 *)0x0) {
                puVar11 = (undefined4 *)0x0;
              }
              else {
                FUN_00433f00();
                uStack_4._0_1_ = 1;
                *puVar11 = &PTR_FUN_007ef718;
                puVar11[2] = &PTR_LAB_007ef714;
                *(int *)((int)puVar11 + 0x2e) = iVar1;
                *(int *)((int)puVar11 + 0x32) = iVar10;
                *(undefined1 *)((int)puVar11 + 0x36) = 1;
                *(undefined1 *)(puVar11 + 0xb) = 1;
                puStack_10 = operator_new(0x7e);
                uStack_4 = CONCAT31(uStack_4._1_3_,2);
                if (puStack_10 == (undefined4 *)0x0) {
                  puVar11[0xe] = 0;
                }
                else {
                  uVar12 = FUN_00414c80(s_gfx_interface_hl_production_bmp_008600cc);
                  puVar11[0xe] = uVar12;
                }
              }
              iVar4 = *(int *)(param_1 + 0x10e);
              uStack_4 = 0xffffffff;
              iVar5 = *(int *)(iVar4 + 8);
              puVar13 = operator_new(0xe);
              if (puVar13 == (undefined4 *)0x0) {
                puVar13 = (undefined4 *)0x0;
              }
              else {
                *puVar13 = puVar11;
                puVar13[1] = iVar5;
                puVar13[2] = 0;
                *(undefined1 *)(puVar13 + 3) = 0;
              }
              iVar6 = *(int *)(iVar4 + 0xc);
              *(undefined4 **)(iVar4 + 8) = puVar13;
              *(int *)(iVar4 + 0xc) = iVar6 + 1;
              if (iVar6 == 0) {
                *(undefined4 **)(iVar4 + 4) = puVar13;
              }
              else {
                *(undefined4 **)(iVar5 + 8) = puVar13;
              }
            }
          }
        }
        local_18 = local_18 + 1;
        local_24 = local_24 + 1;
      } while (local_18 < DAT_008776b4);
    }
  }
  else {
    iStack_20 = 0;
    if (0 < DAT_008776a0) {
      local_24 = &DAT_00dbf53a;
      do {
        iVar1 = *local_24;
        if ((((*(char *)(iVar1 + 0x4ad0 + *(int *)(param_1 + 0x90)) != '\0') &&
             ((iVar3 = (&DAT_00dbd1a2)[iVar1], iVar3 < 0xc || (*(int *)(param_1 + 0x126) != 0)))) &&
            (((0x14 < iVar3 && (iVar3 != 0x8c)) || (*(int *)(param_1 + 0x126) != 2)))) &&
           (((0xb < iVar3 && ((iVar3 < 0x15 || (iVar3 == 0x8c)))) ||
            (*(int *)(param_1 + 0x126) != 1)))) {
          iVar10 = (**(code **)(*(int *)((int)&DAT_00d7676a + iVar1 * 0x12) + 4))();
          iVar3 = *(int *)((int)&DAT_00d76772 + iVar1 * 0x12);
          while (iVar3 != 0) {
            iVar10 = iVar10 + -1;
            iVar3 = *(int *)(iVar3 + 4);
            cVar9 = FUN_004a34e0(iVar1,iVar10);
            if (cVar9 != '\0') {
              puStack_10 = operator_new(0x3c);
              uStack_4 = 3;
              if (puStack_10 == (undefined4 *)0x0) {
                puVar11 = (undefined4 *)0x0;
              }
              else {
                FUN_00433f00();
                uStack_4._0_1_ = 4;
                *puStack_10 = &PTR_FUN_007ef718;
                puStack_10[2] = &PTR_LAB_007ef714;
                *(int *)((int)puStack_10 + 0x2e) = iVar1;
                *(int *)((int)puStack_10 + 0x32) = iVar10;
                *(undefined1 *)((int)puStack_10 + 0x36) = 0;
                *(undefined1 *)(puStack_10 + 0xb) = 1;
                pvVar14 = operator_new(0x7e);
                uStack_4 = CONCAT31(uStack_4._1_3_,5);
                puVar11 = puStack_10;
                if (pvVar14 == (void *)0x0) {
                  puStack_10[0xe] = 0;
                }
                else {
                  uVar12 = FUN_00414c80(s_gfx_interface_hl_production_bmp_008600cc);
                  puStack_10[0xe] = uVar12;
                }
              }
              iVar4 = *(int *)(param_1 + 0x10e);
              uStack_4 = 0xffffffff;
              iVar5 = *(int *)(iVar4 + 8);
              puVar13 = operator_new(0xe);
              if (puVar13 == (undefined4 *)0x0) {
                puVar13 = (undefined4 *)0x0;
              }
              else {
                *puVar13 = puVar11;
                puVar13[1] = iVar5;
                puVar13[2] = 0;
                *(undefined1 *)(puVar13 + 3) = 0;
              }
              iVar6 = *(int *)(iVar4 + 0xc);
              *(undefined4 **)(iVar4 + 8) = puVar13;
              *(int *)(iVar4 + 0xc) = iVar6 + 1;
              if (iVar6 == 0) {
                *(undefined4 **)(iVar4 + 4) = puVar13;
              }
              else {
                *(undefined4 **)(iVar5 + 8) = puVar13;
              }
            }
          }
        }
        iStack_20 = iStack_20 + 1;
        local_24 = local_24 + 1;
      } while (iStack_20 < DAT_008776a0);
    }
  }
  FUN_004353e0();
  FUN_00435fd0();
  (**(code **)(**(int **)(param_1 + 0x10e) + 0x38))(*(undefined4 *)(*(int **)(param_1 + 0x10e))[1]);
  ExceptionList = puStack_10;
  return;
}


