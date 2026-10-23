// FUN_005b0ad0 @ 5b0ad0 size=1267

void FUN_005b0ad0(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int local_1c;
  int local_18;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cba2f;
  pvStack_c = ExceptionList;
  iVar1 = (&DAT_0089cad8)[param_2];
  iVar8 = (&DAT_0089cad8)[param_1];
  ExceptionList = &pvStack_c;
  FUN_004734e0();
  iVar11 = 0x2c;
  local_4 = 0;
  do {
    iVar4 = local_1c;
    iVar7 = local_18;
    if ((*(char *)(*(int *)(iVar1 + 0x12da) + iVar11) != '\0') &&
       (*(char *)(*(int *)(iVar8 + 0x12da) + iVar11) != '\0')) {
      pvVar6 = operator_new(0xe);
      local_4._0_1_ = 1;
      if (pvVar6 == (void *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_00473a90();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      iVar10 = local_14 + 1;
      bVar12 = local_14 != 0;
      iVar4 = iVar7;
      local_14 = iVar10;
      if (bVar12) {
        *(int *)(local_18 + 8) = iVar7;
        iVar4 = local_1c;
      }
    }
    local_18 = iVar7;
    local_1c = iVar4;
    iVar11 = iVar11 + 0x2c;
  } while (iVar11 < 0x3b4c);
  piVar2 = DAT_00d615e4;
  piVar3 = DAT_00d615e4;
  if (param_3 != '\0') {
joined_r0x005b0bb5:
    piVar2 = DAT_00d615e4;
    if (piVar3 != (int *)0x0) {
      piVar2 = (int *)piVar3[2];
      iVar8 = *piVar3;
      iVar11 = (**(code **)(**(int **)(*(int *)(iVar8 + 0x22) + 0x22) + 4))();
      piVar3 = piVar2;
      if ((0 < iVar11) &&
         (iVar8 = (**(code **)(**(int **)(*(int *)(iVar8 + 0x26) + 0x22) + 4))(), 0 < iVar8)) {
        cVar5 = FUN_00584e20();
        if ((cVar5 == '\0') || (cVar5 = FUN_00584e20(), iVar8 = local_1c, cVar5 != '\0')) {
          cVar5 = FUN_00584e20();
          if ((cVar5 == '\0') || (cVar5 = FUN_00584e20(), iVar8 = local_1c, cVar5 != '\0'))
          goto joined_r0x005b0bb5;
          do {
            if (iVar8 == 0) goto joined_r0x005b0bb5;
            iVar8 = *(int *)(iVar8 + 8);
            cVar5 = FUN_00584e20();
          } while (cVar5 == '\0');
          pvVar6 = operator_new(0xc);
          local_4 = CONCAT31(local_4._1_3_,3);
          if (pvVar6 != (void *)0x0) {
            FUN_00447250();
            goto LAB_005b0cf4;
          }
        }
        else {
          do {
            if (iVar8 == 0) goto joined_r0x005b0bb5;
            iVar8 = *(int *)(iVar8 + 8);
            cVar5 = FUN_00584e20();
          } while (cVar5 == '\0');
          pvVar6 = operator_new(0xc);
          local_4 = CONCAT31(local_4._1_3_,2);
          if (pvVar6 != (void *)0x0) {
            FUN_00447250();
            FUN_00446d10();
LAB_005b0cf4:
            FUN_0047ea00();
            FUN_005b4850();
          }
        }
        local_4 = local_4 & 0xffffff00;
        FUN_00565bc0();
      }
      goto joined_r0x005b0bb5;
    }
  }
joined_r0x005b0d28:
  do {
    do {
      if (piVar2 == (int *)0x0) {
        if ((param_3 != '\0') && (iVar1 = *(int *)(iVar1 + 0x3350), iVar1 != 0)) {
          piVar2 = *(int **)(*(int *)(iVar1 + 0x22) + 4);
          while (piVar2 != (int *)0x0) {
            piVar3 = (int *)piVar2[2];
            iVar1 = *piVar2;
            piVar2 = piVar3;
            if (iVar1 != param_1) {
              FUN_005b0ad0();
            }
          }
        }
        while (local_1c != 0) {
          local_1c = *(int *)(local_1c + 8);
          FUN_00796cd8();
        }
        ExceptionList = pvStack_c;
        return;
      }
      piVar3 = (int *)piVar2[2];
      iVar8 = *piVar2;
      iVar11 = (**(code **)(**(int **)(*(int *)(iVar8 + 0x22) + 0x22) + 4))();
      piVar2 = piVar3;
    } while ((iVar11 < 1) ||
            (iVar8 = (**(code **)(**(int **)(*(int *)(iVar8 + 0x26) + 0x22) + 4))(), iVar8 < 1));
    cVar5 = FUN_00584e20();
    if ((cVar5 == '\0') ||
       ((cVar5 = FUN_00584e20(), cVar5 != '\0' || (cVar5 = FUN_00584e20(), cVar5 != '\0'))))
    goto LAB_005b0e46;
    cVar5 = FUN_004a1d90();
  } while ((cVar5 != '\0') || (cVar5 = FUN_004a1d90(), cVar5 != '\0'));
  pvVar6 = operator_new(0xc);
  local_4 = CONCAT31(local_4._1_3_,4);
  if (pvVar6 != (void *)0x0) {
    FUN_0045f730();
    FUN_005b4d60();
    FUN_00447250();
    FUN_00449290();
    uVar9 = FUN_00447250();
    FUN_00449290(uVar9);
    goto LAB_005b0f24;
  }
  goto LAB_005b0f3a;
LAB_005b0e46:
  cVar5 = FUN_00584e20();
  if ((cVar5 != '\0') &&
     ((((cVar5 = FUN_00584e20(), cVar5 == '\0' && (cVar5 = FUN_00584e20(), cVar5 == '\0')) &&
       (cVar5 = FUN_004a1d90(), cVar5 == '\0')) && (cVar5 = FUN_004a1d90(), cVar5 == '\0')))) {
    pvVar6 = operator_new(0xc);
    local_4 = CONCAT31(local_4._1_3_,5);
    if (pvVar6 != (void *)0x0) {
      FUN_0045f730();
      FUN_005b4d70();
      FUN_00447250();
      FUN_00449290();
      uVar9 = FUN_00447250();
      FUN_00449290(uVar9);
LAB_005b0f24:
      uVar9 = FUN_0047ea00(3,param_1);
      FUN_00464b70(0xbf,uVar9);
    }
LAB_005b0f3a:
    local_4 = local_4 & 0xffffff00;
    FUN_00565ca0();
  }
  goto joined_r0x005b0d28;
}


