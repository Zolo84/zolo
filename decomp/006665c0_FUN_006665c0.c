// FUN_006665c0 @ 6665c0 size=1948

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006665c0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined **local_54;
  int *local_50;
  int *local_4c;
  int local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int *local_2c;
  undefined4 *local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007d3a68;
  local_10 = ExceptionList;
  local_28 = *(undefined4 **)(*(int *)(param_1 + 10) + 0x120);
  ExceptionList = &local_10;
  (**(code **)(*(int *)(param_1 + 0x40) + 0x14))();
  piVar4 = *(int **)(param_1 + 0x7e);
  if (piVar4 != (int *)0x0) {
    do {
      local_18 = (int *)piVar4[2];
      piVar1 = (int *)*piVar4;
      cVar2 = (**(code **)(*(int *)((int)piVar1 + 0x22e) + 8))();
      if (cVar2 == '\0') {
        iVar3 = FUN_0051c0c0();
        local_2c = *(int **)(param_1 + 0x48);
        piVar4 = operator_new(0xe);
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          *piVar4 = iVar3;
          piVar4[1] = (int)local_2c;
          piVar4[2] = 0;
          *(undefined1 *)(piVar4 + 3) = 0;
        }
        iVar3 = *(int *)(param_1 + 0x4c);
        *(int **)(param_1 + 0x48) = piVar4;
        *(int *)(param_1 + 0x4c) = iVar3 + 1;
        if (iVar3 == 0) {
LAB_006666b7:
          *(int **)(param_1 + 0x44) = piVar4;
        }
        else {
          *(int **)((int)local_2c + 8) = piVar4;
        }
      }
      else {
        local_2c = *(int **)(param_1 + 0x48);
        iVar3 = piVar1[3];
        piVar4 = operator_new(0xe);
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          *piVar4 = iVar3;
          piVar4[1] = (int)local_2c;
          piVar4[2] = 0;
          *(undefined1 *)(piVar4 + 3) = 0;
        }
        iVar3 = *(int *)(param_1 + 0x4c);
        *(int **)(param_1 + 0x48) = piVar4;
        *(int *)(param_1 + 0x4c) = iVar3 + 1;
        if (iVar3 == 0) goto LAB_006666b7;
        *(int **)((int)local_2c + 8) = piVar4;
      }
      if (piVar1 == *(int **)(param_1 + 0x102)) {
        uVar5 = FUN_00664880(piVar1,0);
        local_2c = (int *)FUN_00663d30(uVar5);
        if ((local_2c != (int *)0x0) && (piVar1[3] == *(int *)((int)local_2c + 0xc))) {
          iVar3 = *(int *)(param_1 + 10);
          uVar5 = (**(code **)(*(int *)((int)piVar1 + 0x22) + 4))();
          uVar5 = (**(code **)(*piVar1 + 0xc))(uVar5);
          uVar5 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar5);
          FUN_00458570(s_NAVAL___s_merges___s____d_ships__008672dc,uVar5);
          FUN_00528280(piVar1);
          FUN_00528280(piVar1);
          FUN_00524610(0);
          local_50 = (int *)0x0;
          local_4c = (int *)0x0;
          local_48 = 0;
          local_44 = 0;
          local_54 = &PTR_FUN_007e4c84;
          local_8 = 0;
          local_4c = operator_new(0xe);
          if (local_4c == (int *)0x0) {
            local_4c = (int *)0x0;
          }
          else {
            *local_4c = (int)piVar1;
            local_4c[1] = 0;
            local_4c[2] = 0;
            *(undefined1 *)(local_4c + 3) = 0;
          }
          piVar4 = local_4c;
          if (local_48 != 0) {
            _DAT_00000008 = local_4c;
            piVar4 = local_50;
          }
          local_50 = piVar4;
          local_48 = local_48 + 1;
          FUN_006aa780(local_2c,&local_54);
          (*(code *)local_54[4])();
          *(undefined4 *)(param_1 + 0x102) = 0;
          local_8 = 0xffffffff;
          FUN_00527230();
        }
      }
      local_2c = *(int **)(param_1 + 0x7e);
      iVar3 = 0;
      piVar4 = local_18;
      while (local_2c != (int *)0x0) {
        local_18 = piVar4;
        puVar6 = (undefined4 *)FUN_00498700(&local_40,0);
        piVar4 = local_18;
        if (*(char *)(*(int *)*puVar6 + 0x2ba) != '\0') {
          iVar3 = iVar3 + 1;
        }
      }
      if (iVar3 < (int)local_28[0x5b]) {
        *(undefined1 *)((int)piVar1 + 0x2ba) = 1;
      }
      local_2c = (int *)0x0;
      if (piVar4 == (int *)0x0) break;
      local_2c = (int *)0x0;
    } while( true );
  }
  piVar4 = *(int **)(param_1 + 0x7e);
joined_r0x0066680a:
  while( true ) {
    do {
      if (piVar4 == (int *)0x0) {
        ExceptionList = local_10;
        return;
      }
      local_18 = (int *)piVar4[2];
      piVar1 = (int *)*piVar4;
      iVar3 = (**(code **)(piVar1[0x47] + 4))();
      piVar4 = local_18;
    } while ((iVar3 != 0) ||
            (cVar2 = (**(code **)(*(int *)((int)piVar1 + 0x22e) + 8))(), piVar4 = local_18,
            cVar2 == '\0'));
    FUN_0051b230();
    local_20 = (int *)0x0;
    local_14 = 0;
    piVar4 = *(int **)((int)piVar1 + 0x26);
    while (piVar4 != (int *)0x0) {
      piVar7 = (int *)piVar4[2];
      iVar3 = *piVar4;
      piVar4 = piVar7;
      if (*(int *)(iVar3 + 0x134) != 0x1e) {
        iVar3 = FUN_004fccd0();
        if (iVar3 == 0) {
          local_20 = (int *)((int)local_20 + 1);
        }
        else if (iVar3 == 2) {
          local_14 = local_14 + 1;
        }
      }
    }
    if ((DAT_00dc1743 != '\0') && (0 < local_14)) {
      local_2c = (int *)((float)local_14 * _DAT_00877348);
      local_30 = (int)ROUND((float)local_2c);
      local_14 = local_30;
      if (local_30 == 0) {
        local_14 = 1;
      }
    }
    iVar3 = (**(code **)(*(int *)((int)piVar1 + 0x22) + 4))();
    local_2c = (int *)(float)iVar3;
    fVar9 = (float10)FUN_00667110(piVar1);
    fVar10 = (float10)(float)local_2c;
    local_2c = (int *)(float)(fVar9 * fVar10);
    if (((float10)*(int *)(param_1 + 0xca) * (float10)_DAT_007e7118 <= fVar9 * fVar10) ||
       (iVar3 = (**(code **)(*(int *)((int)piVar1 + 0x22) + 4))(), 0x1d < iVar3)) break;
    FUN_006a9d50();
    puVar6 = (undefined4 *)FUN_00667230(piVar1,local_14 <= (int)local_20);
    local_28 = puVar6;
    if (puVar6 == (undefined4 *)0x0) break;
    fVar10 = (float10)FUN_0044a9c0(piVar1[3],puVar6[3]);
    local_24 = (int *)(float)fVar10;
    local_2c = (int *)(((float)_DAT_007e40a8 - (float)local_2c / (float)*(int *)(param_1 + 0xca)) *
                      (float)_DAT_007e6f38);
    cVar2 = FUN_0044beb0();
    piVar4 = local_2c;
    if (cVar2 == '\0') {
      piVar4 = _DAT_007e6858;
    }
    if ((float)piVar4 * (float)piVar4 <= (float)local_24) break;
    if (piVar1[3] == puVar6[3]) {
      FUN_006672e0(piVar1,puVar6);
      break;
    }
    piVar4 = (int *)FUN_0051b230();
    iVar3 = *(int *)(param_1 + 10);
    uVar5 = (**(code **)(*piVar4 + 0xc))();
    uVar5 = (**(code **)(*piVar1 + 0xc))(uVar5);
    uVar5 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar5);
    FUN_00458570(s_NAVAL___s_sends__s_to_base_in__s_00867a30,uVar5);
    uVar11 = 0;
    uVar5 = FUN_0051b230(0);
    FUN_006aaff0(piVar1,uVar5,uVar11);
    piVar4 = local_18;
  }
  cVar2 = FUN_00664680(piVar1);
  if (cVar2 == '\0') {
    fVar10 = (float10)FUN_0051a210();
    if ((float10)(float)_DAT_007e6858 < fVar10) {
      if (piVar1[0x99] == 0x1a) {
        FUN_00665770(piVar1);
        piVar4 = local_18;
      }
      else if (piVar1[0x99] == 0x1e) {
        FUN_00665b10(piVar1);
        piVar4 = local_18;
      }
      else {
        iVar3 = _rand();
        if ((((0x31 < iVar3 % 100) ||
             ((cVar2 = FUN_006655d0(piVar1), piVar4 = local_18, cVar2 == '\0' &&
              (cVar2 = FUN_006662c0(piVar1), piVar4 = local_18, cVar2 == '\0')))) &&
            (cVar2 = FUN_00665ec0(piVar1), piVar4 = local_18, cVar2 == '\0')) &&
           ((cVar2 = FUN_00665770(piVar1), piVar4 = local_18, cVar2 == '\0' &&
            ((cVar2 = FUN_00516d10(), cVar2 == '\0' ||
             (cVar2 = FUN_00665b10(piVar1), piVar4 = local_18, cVar2 == '\0')))))) {
          local_20 = (int *)0x0;
          cVar2 = FUN_0044beb0();
          if (cVar2 == '\0') {
            local_38 = CONCAT31(local_38._1_3_,*(undefined1 *)((int)piVar1 + 0x2ba));
            piVar7 = (int *)FUN_00664880(piVar1,local_38);
          }
          else {
            local_1c = 700;
            iVar3 = *(int *)(*(int *)(param_1 + 10) + 0x120);
            local_28 = *(undefined4 **)(iVar3 + 0x1ae);
            local_2c = (int *)(iVar3 + 0x158);
            piVar7 = (int *)0x0;
            if (local_28 != (undefined4 *)0x0) {
              do {
                local_24 = (int *)*local_28;
                local_28 = (undefined4 *)local_28[2];
                FUN_0044a9c0(piVar1[3],local_24);
                local_14 = __ftol();
                piVar4 = *(int **)(param_1 + 0x7e);
                while (piVar4 != (int *)0x0) {
                  piVar7 = (int *)piVar4[2];
                  if ((*(int **)(*piVar4 + 0xc) == local_24) ||
                     (piVar8 = (int *)FUN_0051c0c0(), piVar4 = piVar7, piVar8 == local_24)) {
                    local_14 = local_14 * 3;
                    piVar4 = piVar7;
                  }
                }
                if (local_14 + 500 < local_1c) {
                  local_20 = local_24;
                  local_1c = local_14 + 500;
                }
              } while (local_28 != (undefined4 *)0x0);
              local_28 = (undefined4 *)0x0;
              piVar7 = local_20;
            }
            if (*(char *)((int)piVar1 + 0x2ba) == '\0') {
              piVar4 = *(int **)((int)local_2c + 0x32);
              while (local_2c = piVar4, piVar4 != (int *)0x0) {
                local_2c = (int *)piVar4[2];
                local_24 = (int *)*piVar4;
                FUN_0044a9c0(piVar1[3],*local_24);
                local_14 = __ftol();
                if (*(int **)(param_1 + 0x7e) != (int *)0x0) {
                  local_28 = (undefined4 *)*local_24;
                  piVar4 = *(int **)(param_1 + 0x7e);
                  do {
                    piVar7 = (int *)piVar4[2];
                    if (*(undefined4 **)(*piVar4 + 0xc) == local_28) {
LAB_00666c1c:
                      local_14 = local_14 * 3;
                    }
                    else {
                      local_28 = (undefined4 *)*local_24;
                      puVar6 = (undefined4 *)FUN_0051c0c0();
                      if (puVar6 == local_28) goto LAB_00666c1c;
                    }
                    piVar4 = piVar7;
                  } while (piVar7 != (int *)0x0);
                }
                iVar3 = (local_14 - local_24[1]) + 500;
                piVar4 = local_2c;
                piVar7 = local_20;
                if (iVar3 < local_1c) {
                  piVar7 = (int *)*local_24;
                  local_20 = piVar7;
                  local_1c = iVar3;
                }
              }
            }
          }
          if (piVar7 == (int *)0x0) {
            local_3c = CONCAT31(local_3c._1_3_,*(undefined1 *)((int)piVar1 + 0x2ba));
            piVar7 = (int *)FUN_00664880(piVar1,local_3c);
          }
          local_2c = (int *)FUN_004e9370(piVar7);
          if (piVar7 == (int *)piVar1[3]) {
            iVar3 = *(int *)(param_1 + 10);
            uVar5 = (**(code **)(*(int *)((int)piVar1 + 0x22) + 4))();
            uVar5 = (**(code **)(*piVar1 + 0xc))(uVar5);
            uVar5 = (**(code **)(*local_2c + 0xc))(uVar5);
            uVar5 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar5);
            FUN_00458570(s_NAVAL___s_is_already_patrolling___008679f8,uVar5);
            piVar4 = local_18;
          }
          else {
            piVar4 = local_18;
            if (piVar7 != (int *)0x0) {
              FUN_006aaff0(piVar1,local_2c,0);
              iVar3 = *(int *)(param_1 + 10);
              uVar5 = (**(code **)(*local_2c + 0xc))();
              uVar5 = (**(code **)(*(int *)((int)piVar1 + 0x22) + 4))(uVar5);
              uVar5 = (**(code **)(*piVar1 + 0xc))(uVar5);
              uVar5 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar5);
              FUN_00458570(s_NAVAL___s_sends___s___d_ships__t_008679c8,uVar5);
              piVar4 = local_18;
            }
          }
        }
      }
      goto joined_r0x0066680a;
    }
    iVar3 = FUN_0051b230();
    if ((*(int *)(iVar3 + 0x254) != 8) && (piVar4 = local_18, *(int *)(iVar3 + 0x254) != 9))
    goto joined_r0x0066680a;
    local_40 = CONCAT31(local_40._1_3_,*(undefined1 *)((int)piVar1 + 0x2ba));
    uVar11 = 0;
    uVar5 = FUN_006649f0(piVar1[3],local_40);
  }
  else {
    iVar3 = FUN_0051b230();
    if ((*(int *)(iVar3 + 0x254) != 8) && (piVar4 = local_18, *(int *)(iVar3 + 0x254) != 9))
    goto joined_r0x0066680a;
    uVar11 = 0;
    local_34 = CONCAT31(local_34._1_3_,*(undefined1 *)((int)piVar1 + 0x2ba));
    uVar5 = FUN_00664880(piVar1,local_34);
    uVar5 = FUN_004e9370(uVar5,uVar11);
  }
  FUN_006aaee0(piVar1,uVar5,uVar11);
  piVar4 = local_18;
  goto joined_r0x0066680a;
}


