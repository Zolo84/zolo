// FUN_00766900 @ 766900 size=1701

undefined4 __thiscall FUN_00766900(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int *piVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  bool bVar11;
  char *pcVar12;
  int *local_81c;
  int *local_818;
  int local_814;
  undefined1 local_80c [2048];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007e0a9b;
  local_c = ExceptionList;
  local_81c = (int *)0x0;
  local_818 = (int *)0x0;
  local_814 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
LAB_00766942:
  do {
    iVar4 = FUN_00535490();
    FUN_00429d50(param_2 + 0x104,local_80c);
    if (iVar4 != 1) {
      if ((iVar4 != 2) && (piVar8 = (int *)FUN_00534391(), *piVar8 == 4)) {
        FUN_005343dc();
      }
      while (local_81c != (int *)0x0) {
        piVar8 = (int *)local_81c[2];
        FUN_00796cd8(local_81c);
        local_81c = piVar8;
      }
      ExceptionList = local_c;
      return 0;
    }
    piVar8 = local_81c;
    piVar5 = local_818;
    if ((DAT_00dc4b5e != '\0') && (iVar4 = param_2[1], iVar4 != 0x3f8)) {
      for (; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
        cVar3 = (*(code *)PTR_FUN_007e3798)(*piVar8,iVar4);
        if (cVar3 != '\0') {
          if (piVar8 != (int *)0x0) {
            FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          break;
        }
      }
      iVar4 = param_2[1];
      piVar5 = operator_new(0xe);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        *piVar5 = iVar4;
        piVar5[1] = (int)local_818;
        piVar5[2] = 0;
        *(undefined1 *)(piVar5 + 3) = 0;
      }
      iVar4 = local_814 + 1;
      bVar11 = local_814 != 0;
      piVar8 = piVar5;
      local_814 = iVar4;
      if (bVar11) {
        local_818[2] = (int)piVar5;
        piVar8 = local_81c;
      }
    }
    local_818 = piVar5;
    local_81c = piVar8;
    iVar4 = param_2[1];
    if (0x1c2 < iVar4) {
      if (iVar4 == 0x261) {
        uVar6 = FUN_007a8d6d(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0xc) = uVar6;
        piVar8 = DAT_00d7d8fc;
        while (piVar8 != (int *)0x0) {
          piVar5 = (int *)piVar8[2];
          iVar4 = *piVar8;
          piVar8 = piVar5;
          if ((iVar4 != param_1) &&
             (iVar4 = FUN_007a8730(*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(param_1 + 0xc)),
             iVar4 == 0)) {
            FUN_005349b0(s_Duplicated_minister_personality_n_008760e4);
            while (local_81c != (int *)0x0) {
              piVar8 = (int *)local_81c[2];
              FUN_00796cd8(local_81c);
              local_81c = piVar8;
            }
            ExceptionList = local_c;
            return 0xfffffffe;
          }
        }
      }
      else if (iVar4 == 0x3f8) {
        piVar8 = operator_new(0x14);
        if (piVar8 == (int *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8[1] = 0x14;
          piVar8[2] = 0x161;
          piVar8[3] = 0x12;
          piVar8[4] = 0;
          *piVar8 = (int)&PTR_LAB_007fa57c;
        }
        iVar4 = *(int *)(param_1 + 0x24);
        puVar9 = operator_new(0xe);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          *puVar9 = piVar8;
          puVar9[1] = iVar4;
          puVar9[2] = 0;
          *(undefined1 *)(puVar9 + 3) = 0;
        }
        iVar2 = *(int *)(param_1 + 0x28);
        *(undefined4 **)(param_1 + 0x24) = puVar9;
        *(int *)(param_1 + 0x28) = iVar2 + 1;
        if (iVar2 == 0) {
          *(undefined4 **)(param_1 + 0x20) = puVar9;
        }
        else {
          *(undefined4 **)(iVar4 + 8) = puVar9;
        }
        (**(code **)(*piVar8 + 4))(param_2);
        FUN_007660d0();
        cVar3 = FUN_007656a0();
        if (cVar3 == '\0') {
          FUN_005349b0(s_Error_in_command_for_minister_pe_0087610c);
          while (local_81c != (int *)0x0) {
            piVar8 = (int *)local_81c[2];
            FUN_00796cd8(local_81c);
            local_81c = piVar8;
          }
          ExceptionList = local_c;
          return 0xfffffffe;
        }
      }
      else {
        if (iVar4 != 0x523) goto LAB_00766ca4;
        if (param_2[0x103] != 0x524) {
          FUN_005349b0(s_Invalid_ID_for_minister_personal_00876138);
          while (local_81c != (int *)0x0) {
            piVar8 = (int *)local_81c[2];
            FUN_00796cd8(local_81c);
            local_81c = piVar8;
          }
          ExceptionList = local_c;
          return 0xfffffffe;
        }
        iVar4 = FUN_007a7b3c(param_2 + 0x104);
        *(int *)(param_1 + 8) = iVar4;
        piVar8 = DAT_00d7d8fc;
        while (piVar8 != (int *)0x0) {
          piVar5 = piVar8 + 2;
          iVar2 = *piVar8;
          piVar8 = (int *)*piVar5;
          if ((iVar2 != param_1) && (*(int *)(iVar2 + 8) == iVar4)) {
            FUN_005349b0(s_Duplicated_minister_personality_I_00876160);
            while (local_81c != (int *)0x0) {
              piVar8 = (int *)local_81c[2];
              FUN_00796cd8(local_81c);
              local_81c = piVar8;
            }
            ExceptionList = local_c;
            return 0xfffffffe;
          }
        }
      }
      goto LAB_00766942;
    }
    if (iVar4 == 0x1c2) {
      switch(param_2[0x103]) {
      case 1000:
        *(undefined4 *)(param_1 + 4) = 0;
        break;
      case 0x3e9:
        *(undefined4 *)(param_1 + 4) = 1;
        break;
      case 0x3ea:
        *(undefined4 *)(param_1 + 4) = 2;
        break;
      case 0x3eb:
        *(undefined4 *)(param_1 + 4) = 3;
        break;
      case 0x3ec:
        *(undefined4 *)(param_1 + 4) = 4;
        break;
      case 0x3ed:
        *(undefined4 *)(param_1 + 4) = 5;
        break;
      case 0x3ee:
        *(undefined4 *)(param_1 + 4) = 6;
        break;
      case 0x3ef:
        *(undefined4 *)(param_1 + 4) = 7;
        break;
      case 0x3f0:
        *(undefined4 *)(param_1 + 4) = 8;
        break;
      case 0x3f1:
        *(undefined4 *)(param_1 + 4) = 9;
        break;
      default:
        pbVar10 = &DAT_00876254;
        pbVar7 = (byte *)(param_2 + 0x104);
        do {
          bVar1 = *pbVar7;
          bVar11 = bVar1 < *pbVar10;
          if (bVar1 != *pbVar10) {
LAB_00766c15:
            iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00766c1a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar11 = bVar1 < pbVar10[1];
          if (bVar1 != pbVar10[1]) goto LAB_00766c15;
          pbVar7 = pbVar7 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00766c1a:
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 4) = 10;
        }
        else {
          pcVar12 = s_generic_0087624c;
          pbVar7 = (byte *)(param_2 + 0x104);
          do {
            bVar1 = *pbVar7;
            bVar11 = bVar1 < (byte)*pcVar12;
            if (bVar1 != *pcVar12) {
LAB_00766c5f:
              iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_00766c64;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar11 = bVar1 < (byte)pcVar12[1];
            if (bVar1 != pcVar12[1]) goto LAB_00766c5f;
            pbVar7 = pbVar7 + 2;
            pcVar12 = pcVar12 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00766c64:
          if (iVar4 != 0) {
            FUN_005349b0(s_Unknown_government_position_in_m_00876184);
            while (local_81c != (int *)0x0) {
              piVar8 = (int *)local_81c[2];
              FUN_00796cd8(local_81c);
              local_81c = piVar8;
            }
            ExceptionList = local_c;
            return 0xfffffffe;
          }
          DAT_00d590d8 = param_1;
          *(undefined4 *)(param_1 + 4) = 10;
          FUN_00429a00(s_The_generic_minister_personality_00876214);
        }
      }
    }
    else if (iVar4 == 0xe9) {
      pcVar12 = s_UNKNOWN_STRING_WANTED_0083c758;
      uVar6 = FUN_0042b6c9(local_80c);
      iVar4 = FUN_007a8730(uVar6,pcVar12);
      if (iVar4 == 0) {
        uVar6 = FUN_007a8d6d(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0x10) = uVar6;
      }
      else {
        uVar6 = FUN_0042b6c9(local_80c);
        uVar6 = FUN_007a8d6d(uVar6);
        *(undefined4 *)(param_1 + 0x10) = uVar6;
      }
    }
    else if (iVar4 == 0x14e) {
      if (param_2[0x103] != 0x524) {
        FUN_005349b0(s_Wrong_value_for_minister_persona_008761c0);
        while (local_81c != (int *)0x0) {
          piVar8 = (int *)local_81c[2];
          FUN_00796cd8(local_81c);
          local_81c = piVar8;
        }
        ExceptionList = local_c;
        return 0xfffffffe;
      }
      uVar6 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)(param_1 + 0x2e) = uVar6;
    }
    else if (iVar4 == 0x198) {
      pcVar12 = s_UNKNOWN_STRING_WANTED_0083c758;
      uVar6 = FUN_0042b6c9(local_80c);
      iVar4 = FUN_007a8730(uVar6,pcVar12);
      if (iVar4 == 0) {
        uVar6 = FUN_007a8d6d(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0x14) = uVar6;
      }
      else {
        uVar6 = FUN_0042b6c9(local_80c);
        uVar6 = FUN_007a8d6d(uVar6);
        *(undefined4 *)(param_1 + 0x14) = uVar6;
      }
    }
    else {
LAB_00766ca4:
      FUN_005349b0(s_Unknown_lhs_in_minister_personal_008761e8);
    }
  } while( true );
}


