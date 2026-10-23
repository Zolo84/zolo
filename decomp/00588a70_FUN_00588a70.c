// FUN_00588a70 @ 588a70 size=794

undefined4 __thiscall FUN_00588a70(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  int *local_11c;
  int *local_118;
  int local_114;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c93eb;
  local_c = ExceptionList;
  local_11c = (int *)0x0;
  local_118 = (int *)0x0;
  local_114 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
switchD_00588b9c_caseD_14c:
  do {
    piVar3 = local_11c;
    piVar2 = local_118;
    if (DAT_00dc4b5e != '\0') {
      iVar4 = param_2[1];
      for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
        cVar1 = (*(code *)PTR_FUN_007e3798)(*piVar3,iVar4);
        if (cVar1 != '\0') {
          if (piVar3 != (int *)0x0) {
            FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          break;
        }
      }
      iVar4 = param_2[1];
      piVar2 = operator_new(0xe);
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        *piVar2 = iVar4;
        piVar2[1] = (int)local_118;
        piVar2[2] = 0;
        *(undefined1 *)(piVar2 + 3) = 0;
      }
      iVar4 = local_114 + 1;
      bVar5 = local_114 != 0;
      piVar3 = piVar2;
      local_114 = iVar4;
      if (bVar5) {
        local_118[2] = (int)piVar2;
        piVar3 = local_11c;
      }
    }
    local_118 = piVar2;
    local_11c = piVar3;
    iVar4 = FUN_00535490();
    if (iVar4 == 1) {
      iVar4 = param_2[1];
      if (iVar4 < 0x22d) {
        if (iVar4 == 0x22c) {
          if (param_2[0x103] == 0x524) {
            fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
            *(float *)(param_1 + 0x18) = (float)fVar6;
          }
          goto switchD_00588b9c_caseD_14c;
        }
        switch(iVar4) {
        case 0x10a:
          local_10c[0] = 0;
          if (param_2[0x103] == 0x527) {
            FUN_00429d50(param_2 + 0x104,local_10c);
          }
          iVar4 = FUN_004af6b0(local_10c);
          *(int *)(param_1 + 4) = iVar4;
          if ((DAT_00dc4b5e != '\0') && (iVar4 == 0)) {
            FUN_00429a00(s_ERROR___Invalid_country_TAG___s__00857e50,param_2 + 0x104,
                         *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          goto switchD_00588b9c_caseD_14c;
        case 0x147:
          *(bool *)(param_1 + 0x29) = param_2[0x103] == 0x111;
        case 0x14c:
          goto switchD_00588b9c_caseD_14c;
        case 0x14e:
          if (param_2[0x103] == 0x524) {
            fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
            *(float *)(param_1 + 0x1c) = (float)fVar6;
          }
          goto switchD_00588b9c_caseD_14c;
        case 0x158:
          if (param_2[0x103] == 0x111) {
            *(undefined1 *)(param_1 + 0x23) = 1;
          }
          else if (param_2[0x103] != 0x112) {
            FUN_005349b0(s_Illegal_argument_00857e00);
          }
          goto switchD_00588b9c_caseD_14c;
        }
      }
      else if (iVar4 < 0x2b8) {
        if (iVar4 == 0x2b7) {
          FUN_0054f130(param_2);
          goto switchD_00588b9c_caseD_14c;
        }
        if (iVar4 == 0x2b5) {
          *(bool *)(param_1 + 0x2b) = param_2[0x103] == 0x111;
          goto switchD_00588b9c_caseD_14c;
        }
        if (iVar4 == 0x2b6) {
          FUN_0054f130(param_2);
          goto switchD_00588b9c_caseD_14c;
        }
      }
      else if (iVar4 == 0x52e) {
        *(bool *)(*(int *)(param_1 + 0x14) + 0x11862 + *(int *)(param_1 + 4)) =
             param_2[0x103] == 0x111;
        goto switchD_00588b9c_caseD_14c;
      }
      FUN_005349b0(s_Relation___Unexpected_field_00857e34);
      goto switchD_00588b9c_caseD_14c;
    }
    piVar3 = (int *)FUN_00534391();
    if (*piVar3 == 4) {
      FUN_005343dc();
      while (local_11c != (int *)0x0) {
        piVar3 = (int *)local_11c[2];
        FUN_00796cd8(local_11c);
        local_11c = piVar3;
      }
      ExceptionList = local_c;
      return 0;
    }
  } while( true );
}


