// FUN_00504f50 @ 504f50 size=1211

undefined4 __thiscall FUN_00504f50(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  bool bVar6;
  float10 fVar7;
  char *pcVar8;
  int *local_81c;
  int *local_818;
  int local_814;
  undefined1 local_80c [2048];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c154b;
  local_c = ExceptionList;
  local_81c = (int *)0x0;
  local_818 = (int *)0x0;
  local_814 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
LAB_00504f9a:
  while( true ) {
    iVar2 = FUN_00535490();
    FUN_00429d50(param_2 + 0x104,local_80c);
    if (iVar2 == 1) break;
    if (iVar2 == 2) {
      while (local_81c != (int *)0x0) {
        piVar5 = (int *)local_81c[2];
        FUN_00796cd8(local_81c);
        local_81c = piVar5;
      }
      ExceptionList = local_c;
      return 0;
    }
    piVar5 = (int *)FUN_00534391();
    if (*piVar5 == 4) {
      FUN_005343dc();
      while (local_81c != (int *)0x0) {
        piVar5 = (int *)local_81c[2];
        FUN_00796cd8(local_81c);
        local_81c = piVar5;
      }
      ExceptionList = local_c;
      return 0;
    }
  }
  piVar5 = local_81c;
  piVar3 = local_818;
  if (DAT_00dc4b5e != '\0') {
    iVar2 = param_2[1];
    for (; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
      cVar1 = (*(code *)PTR_FUN_007e3798)(*piVar5,iVar2);
      if (cVar1 != '\0') {
        if (piVar5 != (int *)0x0) {
          FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        break;
      }
    }
    iVar2 = param_2[1];
    piVar3 = operator_new(0xe);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *piVar3 = iVar2;
      piVar3[1] = (int)local_818;
      piVar3[2] = 0;
      *(undefined1 *)(piVar3 + 3) = 0;
    }
    iVar2 = local_814 + 1;
    bVar6 = local_814 != 0;
    piVar5 = piVar3;
    local_814 = iVar2;
    if (bVar6) {
      local_818[2] = (int)piVar3;
      piVar5 = local_81c;
    }
  }
  local_818 = piVar3;
  local_81c = piVar5;
  iVar2 = param_2[1];
  if (iVar2 < 0x14f) {
    if (iVar2 == 0x14e) {
      if ((param_2[0x103] == 0x524) || (param_2[0x103] == 0x525)) {
        fVar7 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x1c) = (float)fVar7;
      }
      else {
        FUN_005349b0(s_ERROR___Invalid_Mil__value__008496a8);
      }
    }
    else {
      switch(iVar2) {
      case 0x97:
        if (param_2[0x103] == 0x111) {
          *(undefined4 *)(param_1 + 0x20) = 1;
        }
        else if (param_2[0x103] == 0x112) {
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
        else {
          FUN_005349b0(s_ERROR___Invalid_CAG_setting_00849778);
        }
        break;
      default:
        goto switchD_00505098_caseD_98;
      case 0xa2:
        if (param_2[0x103] == 0x111) {
          *(undefined4 *)(param_1 + 0x20) = 3;
        }
        else if (param_2[0x103] == 0x112) {
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
        else {
          FUN_005349b0(s_ERROR___Invalid_Engineer_setting_00849734);
        }
        break;
      case 0xa9:
        if (param_2[0x103] == 0x111) {
          *(undefined4 *)(param_1 + 0x20) = 2;
        }
        else if (param_2[0x103] == 0x112) {
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
        else {
          FUN_005349b0(s_ERROR___Invalid_Escort_setting_00849758);
        }
        break;
      case 0xe9:
        pcVar8 = s_UNKNOWN_STRING_WANTED_0083c758;
        uVar4 = FUN_0042b6c9(param_2 + 0x104);
        iVar2 = FUN_007a8730(uVar4,pcVar8);
        if (iVar2 == 0) {
          uVar4 = FUN_007a8d6d(param_2 + 0x104);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
        else {
          uVar4 = FUN_0042b6c9(local_80c);
          uVar4 = FUN_007a8d6d(uVar4);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
        break;
      case 0x141:
        iVar2 = param_2[0x103];
        if (iVar2 == 0x144) {
          *(undefined4 *)(param_1 + 0x18) = 1;
        }
        else if (iVar2 == 0x145) {
          *(undefined4 *)(param_1 + 0x18) = 0;
        }
        else if (iVar2 == 0x146) {
          *(undefined4 *)(param_1 + 0x18) = 2;
        }
        else {
          FUN_005349b0(s_ERROR___unknown_brigade_type_def_00849798);
        }
      }
    }
    goto LAB_00504f9a;
  }
  if (iVar2 < 0x594) {
    if (iVar2 == 0x593) {
      pcVar8 = s_UNKNOWN_STRING_WANTED_0083c758;
      uVar4 = FUN_0042b6c9(param_2 + 0x104);
      iVar2 = FUN_007a8730(uVar4,pcVar8);
      if (iVar2 == 0) {
        uVar4 = FUN_007a8d6d(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0x14) = uVar4;
      }
      else {
        uVar4 = FUN_0042b6c9(local_80c);
        uVar4 = FUN_007a8d6d(uVar4);
        *(undefined4 *)(param_1 + 0x14) = uVar4;
      }
      goto LAB_00504f9a;
    }
    if (iVar2 == 0x198) {
      pcVar8 = s_UNKNOWN_STRING_WANTED_0083c758;
      uVar4 = FUN_0042b6c9(param_2 + 0x104);
      iVar2 = FUN_007a8730(uVar4,pcVar8);
      if (iVar2 == 0) {
        uVar4 = FUN_007a8d6d(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0x10) = uVar4;
      }
      else {
        uVar4 = FUN_0042b6c9(local_80c);
        uVar4 = FUN_007a8d6d(uVar4);
        *(undefined4 *)(param_1 + 0x10) = uVar4;
      }
      goto LAB_00504f9a;
    }
    if (iVar2 == 0x592) {
      pcVar8 = s_UNKNOWN_STRING_WANTED_0083c758;
      uVar4 = FUN_0042b6c9(param_2 + 0x104);
      iVar2 = FUN_007a8730(uVar4,pcVar8);
      if (iVar2 == 0) {
        uVar4 = FUN_007a8d6d(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0xc) = uVar4;
      }
      else {
        uVar4 = FUN_0042b6c9(local_80c);
        uVar4 = FUN_007a8d6d(uVar4);
        *(undefined4 *)(param_1 + 0xc) = uVar4;
      }
      goto LAB_00504f9a;
    }
  }
  else if (iVar2 == 0x66a) {
    if (param_2[0x103] == 0x524) {
      uVar4 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)(param_1 + 0x24) = uVar4;
    }
    else {
      FUN_005349b0(s_ERROR___Invalid_List_Priority_va_008495f4);
    }
    goto LAB_00504f9a;
  }
switchD_00505098_caseD_98:
  FUN_005349b0(s_ERROR___unknown_string_in_brigad_00849708);
  goto LAB_00504f9a;
}


