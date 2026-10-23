// FUN_006b3940 @ 6b3940 size=579

undefined4 FUN_006b3940(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  void *pvVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_414;
  undefined1 local_410 [512];
  int local_210;
  undefined1 local_20c [512];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d692e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar3 = (int *)FUN_00534391();
  piVar6 = &local_414;
  for (iVar8 = 0x81; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar6 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar6 = piVar6 + 1;
  }
  if (local_414 == 4) {
    FUN_005343dc();
    uVar4 = 0;
  }
  else if (local_414 == 0x531) {
    uVar4 = 0;
  }
  else {
    iVar8 = FUN_005343dc();
    if (iVar8 == 0) {
      uVar4 = 0;
    }
    else {
      piVar3 = (int *)(*param_1 + 0xc);
      piVar6 = &local_414;
      for (iVar8 = 0x81; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar6 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar6 = piVar6 + 1;
      }
      iVar8 = FUN_004af6b0(local_410);
      piVar3 = (int *)0x0;
      if (iVar8 == 0) {
        if (DAT_00dc4b5e != '\0') {
          FUN_00429a00(s_ERROR___Invalid_country_TAG___s__008696e4,local_410,*param_1 + 0x216,
                       *(int *)(*param_1 + 0x212) + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
      }
      else {
        pvVar5 = operator_new(8);
        local_4 = 0;
        if (pvVar5 != (void *)0x0) {
          piVar3 = (int *)FUN_0076c770();
        }
        *piVar3 = iVar8;
        piVar3[1] = 1;
        local_4 = 0xffffffff;
        piVar6 = (int *)FUN_00534391();
        piVar10 = &local_210;
        for (iVar9 = 0x81; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar10 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar10 = piVar10 + 1;
        }
        if (local_210 == 1) {
          iVar9 = FUN_005343dc();
          if (iVar9 == 0) {
            ExceptionList = local_c;
            return 0;
          }
          iVar9 = FUN_005343dc();
          if (iVar9 == 0) {
            ExceptionList = local_c;
            return 0;
          }
          piVar6 = (int *)(*param_1 + 0xc);
          piVar10 = &local_210;
          for (iVar9 = 0x81; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar10 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar10 = piVar10 + 1;
          }
          iVar9 = FUN_007a7b3c(local_20c);
          piVar3[1] = iVar9;
        }
        if (DAT_00dc4b5e != '\0') {
          puVar7 = (undefined4 *)param_2[1];
          while (puVar7 != (undefined4 *)0x0) {
            puVar1 = (undefined4 *)puVar7[2];
            piVar6 = (int *)*puVar7;
            puVar7 = puVar1;
            if (*piVar6 == iVar8) {
              FUN_00429a00(s_ERROR___Duplicated_country_TAG___00850d74,local_410,param_1 + 2,
                           *param_1 + 0x216,*(int *)(*param_1 + 0x212) + 1);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
          }
        }
        cVar2 = (**(code **)(*param_2 + 0x24))(piVar3);
        if (cVar2 == '\0') {
          iVar8 = param_2[2];
          puVar7 = operator_new(0xe);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = piVar3;
            puVar7[1] = iVar8;
            puVar7[2] = 0;
            *(undefined1 *)(puVar7 + 3) = 0;
          }
          iVar9 = param_2[3];
          param_2[2] = (int)puVar7;
          param_2[3] = iVar9 + 1;
          if (iVar9 == 0) {
            param_2[1] = (int)puVar7;
          }
          else {
            *(undefined4 **)(iVar8 + 8) = puVar7;
          }
        }
      }
      uVar4 = 1;
    }
  }
  ExceptionList = local_c;
  return uVar4;
}


