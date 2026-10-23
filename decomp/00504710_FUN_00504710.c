// FUN_00504710 @ 504710 size=1418

undefined4 __thiscall FUN_00504710(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  bool bVar7;
  float10 fVar8;
  char *pcVar9;
  int *local_820;
  int *local_81c;
  int local_818;
  int local_810;
  undefined1 local_80c [2048];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c152b;
  local_c = ExceptionList;
  local_810 = 0x8c;
  local_820 = (int *)0x0;
  local_81c = (int *)0x0;
  local_818 = 0;
  local_4 = 0;
  piVar1 = param_2 + 0x104;
  ExceptionList = &local_c;
LAB_00504769:
  do {
    while( true ) {
      iVar3 = FUN_00535490();
      FUN_00429d50(piVar1,local_80c);
      if (iVar3 == 1) break;
      if (iVar3 == 2) {
        while (local_820 != (int *)0x0) {
          piVar1 = (int *)local_820[2];
          FUN_00796cd8(local_820);
          local_820 = piVar1;
        }
        ExceptionList = local_c;
        return 0;
      }
      piVar6 = (int *)FUN_00534391();
      if (*piVar6 == 4) {
        FUN_005343dc();
        if (local_810 != 0x8c) {
          if ((&DAT_00dbd602)[local_810] == 0x8c) {
            (&DAT_00dbd602)[local_810] = *(undefined4 *)(param_1 + 4);
          }
          else if (DAT_00dc4b5e != '\0') {
            FUN_00429a00(s___WARNING___Redefinition_of_unit_00849564);
          }
        }
        while (local_820 != (int *)0x0) {
          piVar1 = (int *)local_820[2];
          FUN_00796cd8(local_820);
          local_820 = piVar1;
        }
        ExceptionList = local_c;
        return 0;
      }
    }
    piVar6 = local_820;
    piVar4 = local_81c;
    if (DAT_00dc4b5e != '\0') {
      iVar3 = param_2[1];
      for (; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
        cVar2 = (*(code *)PTR_FUN_007e3798)(*piVar6,iVar3);
        if (cVar2 != '\0') {
          if (piVar6 != (int *)0x0) {
            FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          break;
        }
      }
      iVar3 = param_2[1];
      piVar4 = operator_new(0xe);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *piVar4 = iVar3;
        piVar4[1] = (int)local_81c;
        piVar4[2] = 0;
        *(undefined1 *)(piVar4 + 3) = 0;
      }
      iVar3 = local_818 + 1;
      bVar7 = local_818 != 0;
      piVar6 = piVar4;
      local_818 = iVar3;
      if (bVar7) {
        local_81c[2] = (int)piVar4;
        piVar6 = local_820;
      }
    }
    local_81c = piVar4;
    local_820 = piVar6;
    iVar3 = param_2[1];
    if (iVar3 < 0x237) {
      if (iVar3 == 0x236) {
        if (param_2[0x103] == 0x524) {
          iVar3 = FUN_007a7b3c(piVar1);
          *(int *)(param_1 + 0x28) = iVar3 + -1;
        }
        else {
          FUN_005349b0(s_ERROR___Invalid_EYR_priority__00849664);
        }
      }
      else {
        switch(iVar3) {
        case 0xe9:
          pcVar9 = s_UNKNOWN_STRING_WANTED_0083c758;
          uVar5 = FUN_0042b6c9(piVar1);
          iVar3 = FUN_007a8730(uVar5,pcVar9);
          if (iVar3 == 0) {
            uVar5 = FUN_007a8d6d(piVar1);
            *(undefined4 *)(param_1 + 0x10) = uVar5;
          }
          else {
            uVar5 = FUN_0042b6c9(local_80c);
            uVar5 = FUN_007a8d6d(uVar5);
            *(undefined4 *)(param_1 + 0x10) = uVar5;
          }
          break;
        default:
          goto switchD_00504861_caseD_ea;
        case 0x141:
          iVar3 = FUN_004fdae0(param_2 + 0x103);
          if (iVar3 == 0x8c) {
            FUN_005349b0(s_ERROR___unknown_unit_type_008496ec);
          }
          else {
            *(int *)(param_1 + 8) = iVar3;
          }
          break;
        case 0x14e:
          if ((param_2[0x103] == 0x524) || (param_2[0x103] == 0x525)) {
            fVar8 = (float10)FUN_00429d80(piVar1);
            *(float *)(param_1 + 0x2c) = (float)fVar8;
          }
          else {
            FUN_005349b0(s_ERROR___Invalid_Mil__value__008496a8);
          }
          break;
        case 0x150:
          if (param_2[0x103] == 0x111) {
            *(undefined1 *)(param_1 + 0x30) = 1;
          }
          else if (param_2[0x103] == 0x112) {
            *(undefined1 *)(param_1 + 0x30) = 0;
          }
          else {
            FUN_005349b0(s_ERROR___Invalid_production_state_00849684);
          }
          break;
        case 0x198:
          pcVar9 = s_UNKNOWN_STRING_WANTED_0083c758;
          uVar5 = FUN_0042b6c9(piVar1);
          iVar3 = FUN_007a8730(uVar5,pcVar9);
          if (iVar3 == 0) {
            uVar5 = FUN_007a8d6d(piVar1);
            *(undefined4 *)(param_1 + 0x18) = uVar5;
          }
          else {
            uVar5 = FUN_0042b6c9(local_80c);
            uVar5 = FUN_007a8d6d(uVar5);
            *(undefined4 *)(param_1 + 0x18) = uVar5;
          }
          break;
        case 0x1a6:
          iVar3 = FUN_00417da0(piVar1);
          *(int *)(param_1 + 0x20) = iVar3;
          if (iVar3 == 0x8c) {
            FUN_005349b0(s_ERROR___unknown_unit_sprite_type_008496c8);
          }
        }
      }
      goto LAB_00504769;
    }
    switch(iVar3) {
    case 0x592:
      pcVar9 = s_UNKNOWN_STRING_WANTED_0083c758;
      uVar5 = FUN_0042b6c9(piVar1);
      iVar3 = FUN_007a8730(uVar5,pcVar9);
      if (iVar3 == 0) {
        uVar5 = FUN_007a8d6d(piVar1);
        *(undefined4 *)(param_1 + 0x14) = uVar5;
      }
      else {
        uVar5 = FUN_0042b6c9(local_80c);
        uVar5 = FUN_007a8d6d(uVar5);
        *(undefined4 *)(param_1 + 0x14) = uVar5;
      }
      break;
    case 0x593:
      pcVar9 = s_UNKNOWN_STRING_WANTED_0083c758;
      uVar5 = FUN_0042b6c9(piVar1);
      iVar3 = FUN_007a8730(uVar5,pcVar9);
      if (iVar3 == 0) {
        uVar5 = FUN_007a8d6d(piVar1);
        *(undefined4 *)(param_1 + 0x1c) = uVar5;
      }
      else {
        uVar5 = FUN_0042b6c9(local_80c);
        uVar5 = FUN_007a8d6d(uVar5);
        *(undefined4 *)(param_1 + 0x1c) = uVar5;
      }
      break;
    case 0x594:
      iVar3 = FUN_004fdae0(param_2 + 0x103);
      if (iVar3 == 0x8c) {
        FUN_005349b0(s_ERROR___unknown_transmute_unit_t_0084963c);
      }
      else {
        *(int *)(param_1 + 0xc) = iVar3;
      }
      break;
    case 0x595:
      if (param_2[0x103] == 0x524) {
        uVar5 = FUN_007a7b3c(piVar1);
        *(undefined4 *)(param_1 + 0x24) = uVar5;
      }
      else {
        FUN_005349b0(s_ERROR___Invalid_gfx_priority__0084961c);
      }
      break;
    default:
switchD_00504861_caseD_ea:
      local_810 = FUN_004fdae0(param_2 + 1);
      if (local_810 == 0x8c) {
        FUN_005349b0(s_ERROR___unknown_string_in_unit_t_008495a0);
      }
      break;
    case 0x66a:
      if (param_2[0x103] == 0x524) {
        uVar5 = FUN_007a7b3c(piVar1);
        *(undefined4 *)(param_1 + 0x32) = uVar5;
      }
      else {
        FUN_005349b0(s_ERROR___Invalid_List_Priority_va_008495f4);
      }
      break;
    case 0x685:
      if (param_2[0x103] == 0x524) {
        uVar5 = FUN_007a7b3c(piVar1);
        *(undefined4 *)(param_1 + 0x36) = uVar5;
      }
      else {
        FUN_005349b0(s_ERROR___Invalid_UI_List_Priority_008495c8);
      }
    }
  } while( true );
}


