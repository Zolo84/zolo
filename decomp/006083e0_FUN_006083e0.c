// FUN_006083e0 @ 6083e0 size=598

void FUN_006083e0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 extraout_var;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cfe9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_00584e20(*(undefined4 *)(param_1 + 6));
  if (cVar1 != '\x01') {
    ExceptionList = local_c;
    return;
  }
  iVar2 = (**(code **)(**(int **)(param_2 + 0x22) + 4))();
  if (1 < iVar2) {
    iVar2 = *(int *)(param_1 + 6);
    iVar3 = FUN_00584c90();
    if (iVar3 == iVar2) {
      if (param_2 == DAT_00d615c2) {
        uVar4 = FUN_0042b6c9(s_DIMIL_0085e8f8);
LAB_006084c0:
        uVar4 = FUN_005857c0(uVar4);
        uVar5 = FUN_0042b6c9(s_DIMIL_LONE_0085e8ec);
        uVar4 = (**(code **)(*(int *)(param_1 + 0xe) + 0xc))(uVar5,uVar4);
      }
      else {
        if (param_2 != DAT_00d615ca) {
          if (param_2 != DAT_00d615c6) {
            pcVar6 = (char *)FUN_0042b6c9(s_DIMIL_0085e8f8);
            uVar8 = 0xffffffff;
            do {
              pcVar10 = pcVar6;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar10 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar10;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            pcVar6 = pcVar10 + -uVar8;
            pcVar10 = (char *)&DAT_00cea698;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar10 = pcVar10 + 4;
            }
            goto LAB_0060854c;
          }
          uVar4 = FUN_0042b6c9(s_DIMIL_0085e8f8);
          goto LAB_006084c0;
        }
        uVar4 = FUN_0042b6c9(s_DIMIL_0085e8f8);
        uVar4 = FUN_005857c0(uVar4);
        uVar5 = FUN_0042b6c9(s_DIMIL_LONE_0085e8ec);
        uVar4 = (**(code **)(*(int *)(param_1 + 0xe) + 0xc))(uVar5,uVar4);
      }
      FUN_007a630a(&DAT_00cea698,s__s__s__s___s_0085e8dc,uVar4);
    }
    else {
      pcVar6 = (char *)FUN_0042b6c9(s_DIMIL_0085e8f8);
      uVar8 = 0xffffffff;
      do {
        pcVar10 = pcVar6;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar10 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar10;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar6 = pcVar10 + -uVar8;
      pcVar10 = (char *)&DAT_00cea698;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar10 = pcVar10 + 4;
      }
LAB_0060854c:
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar10 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
    FUN_00608290(&DAT_00cea698,*(undefined4 *)(param_2 + 0x22),*(undefined4 *)(param_1 + 6),99999);
    goto LAB_006085e1;
  }
  if (param_2 == DAT_00d615c2) {
LAB_006085ae:
    uVar4 = FUN_005857c0();
    uVar5 = FUN_0042b6c9(s_DIMIL_LONE_0085e8ec);
    uVar4 = (**(code **)(*(int *)(param_1 + 0xe) + 0xc))(uVar5,uVar4);
  }
  else {
    if (param_2 != DAT_00d615ca) {
      if (param_2 != DAT_00d615c6) {
        ExceptionList = local_c;
        return;
      }
      goto LAB_006085ae;
    }
    uVar4 = FUN_005857c0();
    uVar5 = FUN_0042b6c9(s_DIMIL_LONE_0085e8ec);
    uVar4 = (**(code **)(*(int *)(param_1 + 0xe) + 0xc))(uVar5,uVar4);
  }
  FUN_007a630a(&DAT_00cea698,s__s__s__s__0085e8d0,uVar4);
LAB_006085e1:
  pvVar7 = operator_new(0x50);
  uStack_4 = 0;
  if (pvVar7 != (void *)0x0) {
    uVar5 = 3;
    puVar11 = &DAT_00cea698;
    uVar4 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    FUN_00607a30(uVar4,puVar11,uVar5,extraout_var,param_2);
  }
  ExceptionList = local_c;
  return;
}


