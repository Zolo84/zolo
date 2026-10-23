// FUN_00680620 @ 680620 size=1057

void __thiscall FUN_00680620(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *local_58;
  int local_4c;
  undefined **local_48;
  undefined4 uStack_44;
  void *pvStack_40;
  undefined **local_3c;
  undefined4 local_38;
  undefined **ppuStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined **local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d4b0b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar4 = FUN_0044beb0();
  if (cVar4 != '\0') {
    local_58 = &DAT_0089cad8;
    local_4c = 0x2c;
    do {
      if ((*local_58 != 0) &&
         (*(char *)(local_4c + *(int *)(*(int *)(param_1 + 10) + 0x12da)) != '\0')) {
        iVar5 = FUN_0044e1d0();
        piVar3 = *(int **)(*(int *)(param_1 + 10) + 0xe86e);
        while (piVar3 != (int *)0x0) {
          piVar8 = (int *)piVar3[2];
          iVar1 = *piVar3;
          piVar3 = piVar8;
          if ((iVar5 != iVar1) &&
             (iVar6 = FUN_004e9370(*(undefined4 *)(iVar1 + 0x52)), *(int *)(iVar6 + 0x46a) == 0)) {
            local_1c = 0;
            local_18 = 0;
            local_14 = 0;
            local_10 = 0;
            local_20 = &PTR_LAB_007e5e04;
            local_38 = *(undefined4 *)(param_1 + 10);
            local_4 = 0;
            local_3c = &PTR_FUN_007f3830;
            cVar4 = FUN_004c815f(iVar5,iVar1,&local_3c,&local_20);
            iVar1 = local_1c;
            if (cVar4 != '\0') {
              while (iVar1 != 0) {
                iVar6 = FUN_004c9f81();
                if (iVar6 == 0) {
                  iVar1 = *(int *)(iVar1 + 8);
                }
                else {
                  iVar6 = FUN_004c9f81();
                  iVar6 = *(int *)(iVar6 + 6);
                  iVar7 = FUN_006a9d50();
                  if ((((iVar6 != iVar7) &&
                       (piVar8 = (int *)(**(code **)(*param_2 + 0x28))(&local_48,iVar6),
                       *piVar8 == 0)) && (cVar4 = FUN_005861a0(iVar6), cVar4 == '\0')) &&
                     (cVar4 = FUN_00586230(iVar6), cVar4 == '\0')) {
                    iVar7 = param_2[2];
                    pvStack_40 = operator_new(0xe);
                    local_4._0_1_ = 1;
                    if (pvStack_40 == (void *)0x0) {
                      iVar6 = 0;
                    }
                    else {
                      iVar6 = FUN_00473a90(iVar6,iVar7,0);
                    }
                    iVar2 = param_2[3];
                    local_4 = (uint)local_4._1_3_ << 8;
                    param_2[2] = iVar6;
                    param_2[3] = iVar2 + 1;
                    if (iVar2 == 0) {
                      param_2[1] = iVar6;
                    }
                    else {
                      *(int *)(iVar7 + 8) = iVar6;
                    }
                  }
                  iVar1 = *(int *)(iVar1 + 8);
                }
              }
            }
            (*(code *)local_20[4])();
            local_4 = 0xffffffff;
            local_20 = &PTR_LAB_007e5e04;
            FUN_0045b910();
          }
        }
      }
      local_4c = local_4c + 0x2c;
      local_58 = local_58 + 1;
    } while (local_4c < 0x3b4c);
  }
  iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 10) + 0xe86a) + 4))();
  if (1 < iVar5) {
    iVar5 = FUN_0044e1d0();
    piVar3 = *(int **)(*(int *)(param_1 + 10) + 0xe86e);
    while (piVar3 != (int *)0x0) {
      piVar8 = (int *)piVar3[2];
      iVar1 = *piVar3;
      piVar3 = piVar8;
      if ((iVar5 != iVar1) &&
         (iVar6 = FUN_004e9370(*(undefined4 *)(iVar1 + 0x52)), *(int *)(iVar6 + 0x46a) == 0)) {
        iStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        ppuStack_34 = &PTR_LAB_007e5e04;
        uStack_44 = *(undefined4 *)(param_1 + 10);
        local_4 = 2;
        local_48 = &PTR_FUN_007f3830;
        cVar4 = FUN_004c815f(iVar5,iVar1,&local_48,&ppuStack_34);
        iVar1 = iStack_30;
        if (cVar4 != '\0') {
          while (iVar1 != 0) {
            iVar6 = FUN_004c9f81();
            if (iVar6 == 0) {
              iVar1 = *(int *)(iVar1 + 8);
            }
            else {
              iVar6 = FUN_004c9f81();
              iVar6 = *(int *)(iVar6 + 6);
              iVar7 = FUN_006a9d50();
              if (((iVar6 != iVar7) &&
                  (piVar8 = (int *)(**(code **)(*param_2 + 0x28))(&pvStack_40,iVar6), *piVar8 == 0))
                 && ((cVar4 = FUN_005861a0(iVar6), cVar4 == '\0' &&
                     (cVar4 = FUN_00586230(iVar6), cVar4 == '\0')))) {
                iVar7 = param_2[2];
                piVar8 = operator_new(0xe);
                if (piVar8 == (int *)0x0) {
                  piVar8 = (int *)0x0;
                }
                else {
                  *piVar8 = iVar6;
                  piVar8[1] = iVar7;
                  piVar8[2] = 0;
                  *(undefined1 *)(piVar8 + 3) = 0;
                }
                iVar6 = param_2[3];
                param_2[2] = (int)piVar8;
                param_2[3] = iVar6 + 1;
                if (iVar6 == 0) {
                  param_2[1] = (int)piVar8;
                }
                else {
                  *(int **)(iVar7 + 8) = piVar8;
                }
              }
              iVar1 = *(int *)(iVar1 + 8);
            }
          }
        }
        (*(code *)ppuStack_34[4])();
        local_4 = 0xffffffff;
        ppuStack_34 = &PTR_LAB_007e5e04;
        iVar1 = iStack_30;
        while (iVar1 != 0) {
          iVar6 = *(int *)(iVar1 + 8);
          FUN_00796cd8(iVar1);
          iVar1 = iVar6;
        }
        iStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}


