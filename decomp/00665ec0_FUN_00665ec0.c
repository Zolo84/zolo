// FUN_00665ec0 @ 665ec0 size=1023

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00665ec0(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  float10 fVar14;
  float10 fVar15;
  undefined4 uVar16;
  int *local_50;
  float fStack_48;
  float local_44;
  int *local_3c;
  undefined **ppuStack_34;
  int *piStack_30;
  int *piStack_2c;
  int iStack_28;
  undefined1 uStack_24;
  undefined **local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d3a4b;
  pvStack_c = ExceptionList;
  piVar13 = (int *)0x0;
  local_50 = (int *)0x0;
  local_44 = 60.0;
  ExceptionList = &pvStack_c;
  FUN_00457e10();
  local_20 = &PTR_FUN_007e4c84;
  local_4 = 0;
  pvVar5 = operator_new(0xe);
  local_4._0_1_ = 1;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0045bab0(param_2,local_18,0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  uVar16 = uVar6;
  if (local_14 != 0) {
    *(undefined4 *)(local_18 + 8) = uVar6;
    uVar16 = local_1c;
  }
  local_1c = uVar16;
  local_18 = uVar6;
  local_14 = local_14 + 1;
  fVar14 = (float10)FUN_00667520(&local_20);
  local_3c = &DAT_0089cad8;
  do {
    piVar2 = (int *)*local_3c;
    if (((piVar2 != (int *)0x0) &&
        (iVar8 = *(int *)((int)piVar2 + 0x12da), iVar7 = FUN_006a9d50(), piVar13 = local_50,
        *(char *)(iVar8 + (iVar7 + 1) * 0x2c) != '\0')) &&
       (cVar4 = (**(code **)(*piVar2 + 0x1c))(), cVar4 == '\0')) {
      piVar2 = (int *)piVar2[0x1142];
joined_r0x00665fb2:
      local_50 = piVar13;
      if (piVar2 != (int *)0x0) {
        piVar3 = (int *)*piVar2;
        piVar2 = (int *)piVar2[2];
        cVar4 = (**(code **)(*piVar3 + 0x2c))();
        if (cVar4 != '\0') {
          iVar8 = FUN_0051b230();
          if (((*(int *)(iVar8 + 0x254) == 8) || (*(int *)(iVar8 + 0x254) == 9)) &&
             (piVar3[0x99] != 0x17)) {
            iVar8 = FUN_0051b230();
            cVar4 = (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x174) + 0x24))
                              (*(undefined4 *)(iVar8 + 0x288));
            if (cVar4 == '\0') {
              if (*(char *)((int)param_2 + 0x2ba) != '\0') {
                iVar8 = FUN_0051b230();
                uVar6 = *(undefined4 *)(iVar8 + 0x12);
                iVar8 = *(int *)(*(int *)(param_1 + 10) + 0x120);
                cVar4 = (**(code **)(*(int *)(iVar8 + 0x1aa) + 0x24))(uVar6);
                if (cVar4 == '\0') {
                  iVar7 = FUN_004e9370(uVar6);
                  iVar11 = 0;
                  if (0 < *(int *)(iVar7 + 0x290)) {
                    iVar12 = 0;
                    do {
                      iVar9 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar7 + 0x298) + iVar12));
                      cVar4 = (**(code **)(*(int *)(iVar8 + 0x1aa) + 0x24))
                                        (*(undefined4 *)(iVar9 + 0x12));
                      if (cVar4 != '\0') goto LAB_00666137;
                      iVar11 = iVar11 + 1;
                      iVar12 = iVar12 + 0xc;
                    } while (iVar11 < *(int *)(iVar7 + 0x290));
                  }
                  goto joined_r0x00665fb2;
                }
              }
LAB_00666137:
              iVar8 = 0;
              fStack_48 = (float)fVar14;
              if (*(int **)(param_1 + 0x44) != (int *)0x0) {
                piVar10 = *(int **)(param_1 + 0x44);
                do {
                  piVar1 = piVar10 + 2;
                  if (*piVar10 == piVar3[3]) {
                    fStack_48 = fStack_48 * _DAT_007e34c0;
                    iVar8 = iVar8 + 1;
                  }
                  piVar10 = (int *)*piVar1;
                } while ((int *)*piVar1 != (int *)0x0);
                if (1 < iVar8) goto joined_r0x00665fb2;
              }
              piStack_30 = (int *)0x0;
              piStack_2c = (int *)0x0;
              iStack_28 = 0;
              uStack_24 = 0;
              ppuStack_34 = &PTR_FUN_007e4c84;
              local_4 = CONCAT31(local_4._1_3_,2);
              piStack_2c = operator_new(0xe);
              if (piStack_2c == (int *)0x0) {
                piStack_2c = (int *)0x0;
              }
              else {
                *piStack_2c = (int)piVar3;
                piStack_2c[1] = 0;
                piStack_2c[2] = 0;
                *(undefined1 *)(piStack_2c + 3) = 0;
              }
              piVar13 = piStack_2c;
              if (iStack_28 != 0) {
                _DAT_00000008 = piStack_2c;
                piVar13 = piStack_30;
              }
              piStack_30 = piVar13;
              iStack_28 = iStack_28 + 1;
              fVar15 = (float10)FUN_00667520(&ppuStack_34);
              if ((fVar15 * (float10)_DAT_007f0bd0 < (float10)fStack_48) &&
                 (fVar15 = (float10)FUN_0044a9c0(param_2[3],piVar3[3]), fVar15 < (float10)local_44))
              {
                local_44 = (float)fVar15;
                local_50 = piVar3;
              }
              local_4 = local_4 & 0xffffff00;
              FUN_00527230();
              piVar13 = local_50;
            }
          }
        }
        goto joined_r0x00665fb2;
      }
    }
    local_3c = local_3c + 1;
    if (0x89d037 < (int)local_3c) {
      if (piVar13 == (int *)0x0) {
        local_4 = 0xffffffff;
        FUN_00527230();
        uVar6 = 0;
      }
      else {
        uVar16 = 0;
        uVar6 = FUN_0051b230(0);
        FUN_006aaff0(param_2,uVar6,uVar16);
        FUN_00666ee0(param_2);
        iVar8 = piVar13[3];
        iVar7 = *(int *)(param_1 + 0x48);
        piVar13 = operator_new(0xe);
        if (piVar13 == (int *)0x0) {
          piVar13 = (int *)0x0;
        }
        else {
          *piVar13 = iVar8;
          piVar13[1] = iVar7;
          piVar13[2] = 0;
          *(undefined1 *)(piVar13 + 3) = 0;
        }
        iVar8 = *(int *)(param_1 + 0x4c);
        *(int **)(param_1 + 0x48) = piVar13;
        *(int *)(param_1 + 0x4c) = iVar8 + 1;
        if (iVar8 == 0) {
          *(int **)(param_1 + 0x44) = piVar13;
        }
        else {
          *(int **)(iVar7 + 8) = piVar13;
        }
        piVar13 = (int *)FUN_0051b230();
        iVar8 = *(int *)(param_1 + 10);
        uVar6 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
        uVar6 = (**(code **)(*param_2 + 0xc))(uVar6);
        uVar6 = (**(code **)(*piVar13 + 0xc))(uVar6);
        uVar6 = (**(code **)(*(int *)(iVar8 + 0xe) + 0xc))(uVar6);
        FUN_00458570(s_NAVAL___s_is_hunting_down_an_ene_00867918,uVar6);
        local_4 = 0xffffffff;
        FUN_00527230();
        uVar6 = 1;
      }
      ExceptionList = pvStack_c;
      return uVar6;
    }
  } while( true );
}


