// FUN_00542410 @ 542410 size=1487

int * __thiscall FUN_00542410(int *param_1,char param_2)

{
  short sVar1;
  short *psVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *pvVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  short *psVar12;
  int *local_20;
  int local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c34b1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_20 = operator_new(0x1e);
  local_4 = 0;
  if (local_20 == (int *)0x0) {
    local_20 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *local_20 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    *local_20 = (int)&PTR_FUN_007e3a28;
    local_20[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  if (param_2 == '\0') {
    local_1c = 1;
    if (1 < DAT_008776b0) {
      piVar10 = (int *)((int)param_1 + 0x55d2);
      do {
        iVar11 = (**(code **)(*piVar10 + 4))();
        if (0 < iVar11) {
          bVar3 = false;
          piVar9 = operator_new(0x1e);
          local_4 = 8;
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)0x0;
          }
          else {
            FUN_00444030(2);
            *piVar9 = (int)&PTR_FUN_007e492c;
            local_4 = CONCAT31(local_4._1_3_,9);
            FUN_00444250();
            piVar9[3] = (int)&PTR_LAB_007e39f8;
            *piVar9 = (int)&PTR_FUN_007e3a28;
          }
          local_4 = 0xffffffff;
          psVar12 = (short *)piVar10[1];
          if ((short *)piVar10[1] != (short *)0x0) {
            do {
              psVar2 = *(short **)(psVar12 + 3);
              sVar1 = *psVar12;
              if (0 < sVar1) {
                puVar5 = operator_new(0x10);
                if (puVar5 == (undefined4 *)0x0) {
                  puVar5 = (undefined4 *)0x0;
                }
                else {
                  puVar5[1] = 4;
                  puVar5[2] = 0;
                  puVar5[3] = (int)sVar1;
                  *puVar5 = &PTR_FUN_007e3978;
                }
                (**(code **)(*piVar9 + 0x84))(puVar5);
                bVar3 = true;
              }
              psVar12 = psVar2;
            } while (psVar2 != (short *)0x0);
            if (bVar3) {
              puVar5 = operator_new(0x14);
              local_4 = 10;
              if (puVar5 == (undefined4 *)0x0) {
                puVar5 = (undefined4 *)0x0;
              }
              else {
                uVar6 = FUN_004fed70(local_1c);
                puVar5[1] = 0;
                puVar5[2] = 0;
                *puVar5 = &PTR_LAB_007e38f8;
                local_4._0_1_ = 0xb;
                pvVar7 = operator_new(0x14);
                local_4 = CONCAT31(local_4._1_3_,0xc);
                if ((pvVar7 == (void *)0x0) || (iVar11 = FUN_0053e740(uVar6), iVar11 == 0)) {
                  iVar11 = 0;
                }
                else {
                  *(int *)(iVar11 + 8) = *(int *)(iVar11 + 8) + 1;
                }
                puVar5[3] = iVar11;
                if (piVar9 == (int *)0x0) {
                  *puVar5 = &PTR_FUN_007e3878;
                  puVar5[4] = 0;
                }
                else {
                  piVar9[2] = piVar9[2] + 1;
                  puVar5[4] = piVar9;
                  *puVar5 = &PTR_FUN_007e3878;
                }
              }
              local_4 = 0xffffffff;
              (**(code **)(*local_20 + 0x84))(puVar5);
            }
          }
        }
        local_1c = local_1c + 1;
        piVar10 = (int *)((int)piVar10 + 0x12);
      } while (local_1c < DAT_008776b0);
    }
    local_1c = 0;
    if (0 < DAT_0087769c) {
      param_1 = param_1 + 0x12fa;
      do {
        iVar11 = (**(code **)(*param_1 + 4))();
        if (0 < iVar11) {
          bVar3 = false;
          piVar10 = operator_new(0x1e);
          local_4 = 0xd;
          if (piVar10 == (int *)0x0) {
            piVar10 = (int *)0x0;
          }
          else {
            FUN_00444030(2);
            *piVar10 = (int)&PTR_FUN_007e492c;
            local_4 = CONCAT31(local_4._1_3_,0xe);
            FUN_00444250();
            *piVar10 = (int)&PTR_FUN_007e3a28;
            piVar10[3] = (int)&PTR_LAB_007e39f8;
          }
          local_4 = 0xffffffff;
          psVar12 = (short *)param_1[1];
          if ((short *)param_1[1] != (short *)0x0) {
            do {
              psVar2 = *(short **)(psVar12 + 3);
              sVar1 = *psVar12;
              if (0 < sVar1) {
                puVar5 = operator_new(0x10);
                if (puVar5 == (undefined4 *)0x0) {
                  puVar5 = (undefined4 *)0x0;
                }
                else {
                  puVar5[1] = 4;
                  puVar5[2] = 0;
                  puVar5[3] = (int)sVar1;
                  *puVar5 = &PTR_FUN_007e3978;
                }
                (**(code **)(*piVar10 + 0x84))(puVar5);
                bVar3 = true;
              }
              psVar12 = psVar2;
            } while (psVar2 != (short *)0x0);
            if (bVar3) {
              puVar5 = operator_new(0x14);
              local_4 = 0xf;
              if (puVar5 == (undefined4 *)0x0) {
                puVar5 = (undefined4 *)0x0;
              }
              else {
                uVar6 = FUN_004fe7e0(local_1c);
                puVar5[1] = 0;
                puVar5[2] = 0;
                *puVar5 = &PTR_LAB_007e38f8;
                local_4._0_1_ = 0x10;
                pvVar7 = operator_new(0x14);
                local_4 = CONCAT31(local_4._1_3_,0x11);
                if ((pvVar7 == (void *)0x0) || (iVar11 = FUN_0053e740(uVar6), iVar11 == 0)) {
                  iVar11 = 0;
                }
                else {
                  *(int *)(iVar11 + 8) = *(int *)(iVar11 + 8) + 1;
                }
                puVar5[3] = iVar11;
                if (piVar10 == (int *)0x0) {
                  *puVar5 = &PTR_FUN_007e3878;
                  puVar5[4] = 0;
                }
                else {
                  piVar10[2] = piVar10[2] + 1;
                  puVar5[4] = piVar10;
                  *puVar5 = &PTR_FUN_007e3878;
                }
              }
              local_4 = 0xffffffff;
              (**(code **)(*local_20 + 0x84))(puVar5);
            }
          }
        }
        local_1c = local_1c + 1;
        param_1 = (int *)((int)param_1 + 0x12);
      } while (local_1c < DAT_0087769c);
    }
  }
  else {
    iVar11 = 1;
    if (1 < DAT_008776b0) {
      piVar10 = (int *)((int)param_1 + 0x6982);
      do {
        iVar4 = (**(code **)(*piVar10 + 4))();
        if (0 < iVar4) {
          puVar5 = operator_new(0x14);
          local_4 = 2;
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            iVar4 = (**(code **)(*param_1 + 0x3c))(iVar11,piVar10);
            uVar6 = FUN_004fed70(iVar11);
            puVar5[1] = 0;
            puVar5[2] = 0;
            *puVar5 = &PTR_LAB_007e38f8;
            local_4._0_1_ = 3;
            pvVar7 = operator_new(0x14);
            local_4 = CONCAT31(local_4._1_3_,4);
            if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(uVar6), iVar8 == 0)) {
              iVar8 = 0;
            }
            else {
              *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
            }
            puVar5[3] = iVar8;
            if (iVar4 == 0) {
              iVar4 = 0;
            }
            else {
              *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
            }
            puVar5[4] = iVar4;
            *puVar5 = &PTR_FUN_007e3878;
          }
          local_4 = 0xffffffff;
          (**(code **)(*local_20 + 0x84))(puVar5);
        }
        iVar11 = iVar11 + 1;
        piVar10 = (int *)((int)piVar10 + 0x12);
      } while (iVar11 < DAT_008776b0);
    }
    iVar11 = 0;
    if (0 < DAT_0087769c) {
      piVar10 = param_1 + 0x17e6;
      do {
        iVar4 = (**(code **)(*piVar10 + 4))();
        if (0 < iVar4) {
          puVar5 = operator_new(0x14);
          local_4 = 5;
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            iVar4 = (**(code **)(*param_1 + 0x38))(iVar11,piVar10);
            uVar6 = FUN_004fe7e0(iVar11);
            puVar5[1] = 0;
            puVar5[2] = 0;
            *puVar5 = &PTR_LAB_007e38f8;
            local_4._0_1_ = 6;
            pvVar7 = operator_new(0x14);
            local_4 = CONCAT31(local_4._1_3_,7);
            if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(uVar6), iVar8 == 0)) {
              iVar8 = 0;
            }
            else {
              *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
            }
            puVar5[3] = iVar8;
            if (iVar4 == 0) {
              iVar4 = 0;
            }
            else {
              *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
            }
            puVar5[4] = iVar4;
            *puVar5 = &PTR_FUN_007e3878;
          }
          local_4 = 0xffffffff;
          (**(code **)(*local_20 + 0x84))(puVar5);
        }
        iVar11 = iVar11 + 1;
        piVar10 = (int *)((int)piVar10 + 0x12);
      } while (iVar11 < DAT_0087769c);
    }
  }
  ExceptionList = pvStack_c;
  return local_20;
}


