// FUN_0053f730 @ 53f730 size=3947

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0053f730(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  void *pvVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined **ppuVar13;
  undefined4 unaff_EBP;
  int *piVar14;
  bool bVar15;
  float10 fVar16;
  char *pcStack_98;
  undefined4 uStack_94;
  char **ppcStack_90;
  char *pcStack_8c;
  char *pcStack_88;
  undefined4 uStack_68;
  char *local_60;
  undefined1 *local_5c;
  ushort local_58;
  undefined2 local_56;
  undefined2 uStack_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined **local_48;
  int local_44;
  int local_40;
  undefined **local_3c;
  int *local_38;
  int *piStack_34;
  int iStack_30;
  undefined1 uStack_2c;
  undefined **ppuStack_28;
  int iStack_24;
  undefined **local_20;
  int local_1c;
  undefined4 local_18;
  void *local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  char *local_4;
  
  puStack_8 = &LAB_007c318d;
  local_c = ExceptionList;
  local_60 = (char *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_20 = &PTR_LAB_007e378c;
  ExceptionList = &local_c;
  *(undefined1 *)((int)param_1 + 0x25a) = 0;
  uStack_68 = (uint)(uint3)uStack_68;
  local_44 = 0;
  param_1[0x95] = DAT_00d61388;
  local_40 = 0;
  local_3c = (undefined **)0x0;
  *(undefined2 *)(param_1 + 0x96) = DAT_00d6138c;
  local_38 = (int *)((uint)local_38 & 0xffffff00);
  local_48 = &PTR_LAB_007e378c;
  local_4 = (char *)0x1;
switchD_0053f8c9_caseD_10:
  while (iVar6 = FUN_00535490(), iVar6 != 1) {
    piVar10 = (int *)FUN_00534391();
    if (*piVar10 == 4) {
      FUN_005343dc();
      if ((DAT_0088f28e == *(int *)((int)param_1 + 0x1a)) && (DAT_0088f28c == (short)param_1[6])) {
        FUN_00428eb0();
        local_50 = 0x1268;
        (**(code **)(param_1[5] + 4))();
      }
      if (local_60 == (char *)0x0) {
        if (DAT_00dc4b5f != '\0') {
          (**(code **)(*param_1 + 0xc))();
          pcStack_88 = (char *)0x540230;
          FUN_00429a50();
        }
        pcStack_88 = (char *)(**(code **)(*param_1 + 0xc))();
        pcStack_8c = s_ERROR___Invalid_or_missing_base_f_0085123c;
        ppcStack_90 = (char **)0x540256;
        FUN_00429a00();
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      else {
        (**(code **)(*param_1 + 0x98))();
      }
      (**(code **)(*param_1 + 0x80))();
      if (uStack_68 == 0) {
        if (DAT_00dc4b5f != '\0') {
          (**(code **)(*param_1 + 0xc))();
          pcStack_88 = s_Invalid_or_missing_location_for_a_00851204;
          pcStack_8c = (char *)0x54029a;
          FUN_00429a50();
        }
        pcStack_88 = (char *)0x5402b5;
        pcStack_88 = (char *)(**(code **)(*param_1 + 0xc))();
        pcStack_8c = s_ERROR___Invalid_or_missing_locat_008511b8;
        ppcStack_90 = (char **)0x5402c0;
        FUN_00429a00();
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      (**(code **)param_1[2])();
      if (0 < local_1c) {
        if ((char)((uint)unaff_EBP >> 0x18) != '\0') {
          pcStack_88 = (char *)0x5402f7;
          FUN_00522930();
        }
        pcStack_88 = (char *)0x1;
        pcStack_8c = (char *)0x540305;
        FUN_00521e00();
        cVar4 = FUN_0042e980();
        if (cVar4 != '\0') {
          pcStack_88 = (char *)0x540319;
          pcVar9 = operator_new(0xc);
          local_c._0_1_ = 7;
          local_4 = pcVar9;
          if (pcVar9 == (char *)0x0) {
            pcStack_88 = (char *)0x0;
          }
          else {
            uVar5 = FUN_00523f70();
            pcStack_88 = (char *)0x54033f;
            pvVar7 = operator_new(0x16);
            local_c._0_1_ = 8;
            if (pvVar7 != (void *)0x0) {
              FUN_00540a90();
            }
            local_c._0_1_ = 7;
            pcStack_88 = (char *)0x540367;
            FUN_0042d320();
            *(undefined ***)pcVar9 = &PTR_FUN_007e78f0;
            pcVar9[10] = '\0';
            **(undefined2 **)(pcVar9 + 4) = 0x3c;
            iVar6 = *(int *)(pcVar9 + 4);
            pcStack_88 = (char *)0x0;
            pcStack_8c = (char *)0x0;
            *(undefined4 *)(iVar6 + 8) = _DAT_0088f24c;
            ppcStack_90 = (char **)0x0;
            local_c._0_1_ = 9;
            *(undefined2 *)(iVar6 + 0xc) = DAT_0088f24e._2_2_;
            uStack_94 = 0x5403aa;
            puVar11 = (undefined4 *)FUN_0042d2f0();
            iVar6 = *(int *)(pcVar9 + 4);
            *(undefined4 *)(iVar6 + 2) = *puVar11;
            *(undefined2 *)(iVar6 + 6) = *(undefined2 *)(puVar11 + 1);
            iVar6 = *(int *)(pcVar9 + 4);
            *(undefined ***)pcVar9 = &PTR_FUN_007e7784;
            *(int *)(iVar6 + 0xe) = param_1[6];
            iVar3 = param_1[7];
            *(undefined2 *)(iVar6 + 0x14) = uVar5;
            *(short *)(iVar6 + 0x12) = (short)iVar3;
            pcStack_88 = pcVar9;
          }
          local_c = (void *)CONCAT31(local_c._1_3_,1);
          param_1[0x91] = (int)pcStack_88;
          pcStack_8c = (char *)0x5403f8;
          FUN_00565af0();
        }
      }
      if (DAT_00dc4b5e != '\0') {
        iVar6 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
        if (DAT_00dc1614 < iVar6) {
          pcStack_88 = (char *)(*param_2 + 0x216);
          pcStack_8c = (char *)0x540430;
          pcStack_8c = (char *)(**(code **)(*param_1 + 0xc))();
          ppcStack_90 = (char **)DAT_00dc1614;
          uStack_94 = 0x54043e;
          uStack_94 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
          pcStack_98 = s_WARNING___Too_many_aircraft___d_w_00851140;
          FUN_00429a00();
        }
      }
      cVar4 = FUN_0042e980();
      if ((cVar4 != '\0') &&
         (iVar6 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))(), DAT_00dc1614 < iVar6)) {
        local_38 = (int *)0x0;
        piStack_34 = (int *)0x0;
        iStack_30 = 0;
        uStack_2c = 0;
        local_3c = &PTR_LAB_007e4b94;
        local_c = (void *)CONCAT31(local_c._1_3_,10);
        local_4 = (char *)0x0;
        piVar10 = *(int **)((int)param_1 + 0x26);
        piVar14 = piStack_34;
        while (piStack_34 = piVar14, piVar10 != (int *)0x0) {
          piVar2 = (int *)piVar10[2];
          iVar6 = *piVar10;
          piVar10 = local_38;
          if (DAT_00dc1614 <= (int)local_4) {
            pcStack_88 = (char *)0x5404b7;
            piStack_34 = operator_new(0xe);
            if (piStack_34 == (int *)0x0) {
              piStack_34 = (int *)0x0;
            }
            else {
              *piStack_34 = iVar6;
              piStack_34[1] = (int)piVar14;
              piStack_34[2] = 0;
              *(undefined1 *)(piStack_34 + 3) = 0;
            }
            iVar6 = iStack_30 + 1;
            bVar15 = iStack_30 != 0;
            piVar10 = piStack_34;
            iStack_30 = iVar6;
            if (bVar15) {
              piVar14[2] = (int)piStack_34;
              piVar10 = local_38;
            }
          }
          local_38 = piVar10;
          local_4 = (char *)((int)local_4 + 1);
          piVar10 = piVar2;
          piVar14 = piStack_34;
        }
        pcStack_88 = (char *)0x540507;
        FUN_00428eb0();
        local_4 = (char *)&pcStack_8c;
        ppcStack_90 = (char **)&DAT_0088f28c;
        uStack_94 = 0x540525;
        FUN_00446d10();
        ppcStack_90 = (char **)0x54052d;
        ppcStack_90 = (char **)FUN_00516300();
        local_4 = (char *)&pcStack_98;
        FUN_00449290(&local_60);
        FUN_00494b80();
        FUN_00461fb0();
        piVar10 = local_38;
        while (piVar10 != (int *)0x0) {
          piVar14 = (int *)piVar10[2];
          iVar6 = *piVar10;
          ppcStack_90 = &local_60;
          local_4 = (char *)&pcStack_8c;
          uStack_94 = 0x54057c;
          FUN_00449290();
          ppcStack_90 = (char **)0x540583;
          FUN_00494b80();
          ppcStack_90 = (char **)0x54058a;
          FUN_0045e6f0();
          iVar6 = (**(code **)(*(int *)(*(int *)(iVar6 + 0x6c) + 0x22) + 4))();
          piVar10 = piVar14;
          if (DAT_00dc1614 <= iVar6) {
            pcStack_88 = (char *)0x5405a8;
            puVar12 = (uint *)FUN_00428eb0();
            local_60 = (char *)*puVar12;
            local_4 = (char *)&pcStack_8c;
            local_5c = (undefined1 *)CONCAT22(local_5c._2_2_,(short)puVar12[1]);
            ppcStack_90 = (char **)&DAT_0088f28c;
            uStack_94 = 0x5405d5;
            FUN_00446d10();
            ppcStack_90 = (char **)0x5405dd;
            ppcStack_90 = (char **)FUN_00516300();
            local_4 = (char *)&pcStack_98;
            FUN_00449290(&local_60);
            FUN_00494b80();
            FUN_00461fb0();
          }
        }
        (*(code *)local_3c[4])();
        local_3c = &PTR_LAB_007e4b94;
        piVar10 = local_38;
        while (piVar10 != (int *)0x0) {
          piVar10 = (int *)piVar10[2];
          pcStack_88 = (char *)0x54062e;
          FUN_00796cd8();
        }
      }
      iVar6 = CONCAT22(uStack_4a,uStack_4c);
      local_50 = 0x378c;
      local_4e = 0x7e;
      while (iVar6 != 0) {
        iVar6 = *(int *)(iVar6 + 8);
        pcStack_88 = (char *)0x540651;
        FUN_00796cd8();
      }
      uStack_4c = 0;
      uStack_4a = 0;
      local_48 = (undefined **)0x0;
      local_44 = 0;
      ppuStack_28 = &PTR_LAB_007e378c;
      iVar6 = iStack_24;
      while (iVar6 != 0) {
        iVar6 = *(int *)(iVar6 + 8);
        pcStack_88 = (char *)0x54067b;
        FUN_00796cd8();
      }
      ExceptionList = local_14;
      return 0;
    }
  }
  iVar6 = local_44;
  if (((DAT_00dc4b5e != '\0') && (param_2[1] != 0xb8)) && (param_2[1] != 0xee)) {
    for (; iVar6 != 0; iVar6 = *(int *)(iVar6 + 8)) {
      cVar4 = (*(code *)local_48[3])();
      if (cVar4 != '\0') {
        if (iVar6 != 0) {
          pcStack_88 = s_ERROR___Duplicated_section___s__i_0082f288;
          pcStack_8c = (char *)0x53f832;
          FUN_00429a00();
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        break;
      }
    }
    iVar3 = local_40;
    pvVar7 = operator_new(0xe);
    local_4._0_1_ = 2;
    if (pvVar7 == (void *)0x0) {
      local_40 = 0;
    }
    else {
      pcStack_88 = (char *)0x53f869;
      local_40 = FUN_0049a7a0();
    }
    local_4 = (char *)CONCAT31(local_4._1_3_,1);
    ppuVar13 = (undefined **)((int)local_3c + 1);
    bVar15 = local_3c != (undefined **)0x0;
    iVar6 = local_40;
    local_3c = ppuVar13;
    if (bVar15) {
      *(int *)(iVar3 + 8) = local_40;
      iVar6 = local_44;
    }
  }
  local_44 = iVar6;
  iVar6 = param_2[1];
  if (0x1dd < iVar6) {
    if (0x48c < iVar6) goto code_r0x00540058;
    if (iVar6 != 0x48c) {
      if (iVar6 < 0x251) {
        if (iVar6 == 0x250) {
          if (param_2[0x103] == 0x111) {
            uStack_68 = CONCAT13(1,(uint3)uStack_68);
          }
        }
        else if (iVar6 == 0x223) {
          if (param_2[0x103] == 0x111) {
            *(undefined1 *)((int)param_1 + 0x25a) = 1;
            cVar4 = FUN_0042e980();
            if (cVar4 != '\0') {
              pvVar7 = operator_new(0xc);
              local_4._0_1_ = 3;
              if (pvVar7 != (void *)0x0) {
                pcStack_88 = (char *)FUN_00447250();
                local_5c = &stack0xffffff7c;
                pcStack_8c = (char *)0x53fe42;
                FUN_00446d10();
                pcStack_88 = (char *)0x48;
                pcStack_8c = (char *)0x53fe4b;
                FUN_0044a560();
              }
              local_4 = (char *)CONCAT31(local_4._1_3_,1);
              FUN_00565b30();
            }
          }
          else if (param_2[0x103] != 0x112) {
            FUN_005349b0();
          }
        }
        else if (iVar6 == 0x24f) {
          FUN_0054f130();
        }
      }
      else if (iVar6 == 0x295) {
        (**(code **)param_1[0x98])();
      }
      else if (iVar6 == 0x48a) {
        iVar6 = FUN_004af6b0();
        param_1[0x97] = iVar6;
      }
      goto switchD_0053f8c9_caseD_10;
    }
    pcVar9 = (char *)FUN_007a7b3c();
    local_60 = pcVar9;
    if (((int)pcVar9 < 0) || (DAT_00877690 < (int)pcVar9)) {
      if (DAT_00dc4b5f != '\0') {
        (**(code **)(*param_1 + 0xc))();
        pcStack_88 = s_Invalid_province_ID___d__set_as_b_00851348;
        pcStack_8c = (char *)0x540023;
        FUN_00429a50();
      }
      (**(code **)(*param_1 + 0xc))();
      pcStack_8c = s_ERROR___Invalid_province_ID___d__008512f4;
    }
    else {
      iVar6 = FUN_004e9370();
      if (*(char *)(iVar6 + 0x180) == '\0') {
        iVar6 = FUN_004e9370();
        if ((*(int *)(iVar6 + 0x254) == 8) || (pcVar9 = local_60, *(int *)(iVar6 + 0x254) == 9)) {
          if (DAT_00dc4b5f != '\0') {
            (**(code **)(*param_1 + 0xc))();
            pcStack_88 = s_Non_land_province_ID___d__set_as_00851408;
            pcStack_8c = (char *)0x53ffc4;
            FUN_00429a50();
          }
          (**(code **)(*param_1 + 0xc))();
          pcStack_8c = s_ERROR___Non_land_province_ID___d_0085138c;
          pcStack_88 = pcVar9;
          goto LAB_0053ffe6;
        }
        goto switchD_0053f8c9_caseD_10;
      }
      if (DAT_00dc4b5f != '\0') {
        (**(code **)(*param_1 + 0xc))();
        pcStack_88 = s_Ignored_province_ID___d__set_as_b_008514c8;
        pcStack_8c = (char *)0x53ff42;
        FUN_00429a50();
      }
      (**(code **)(*param_1 + 0xc))();
      pcStack_8c = s_ERROR___Ignored_province_ID___d__00851474;
    }
    ppcStack_90 = (char **)0x53ff69;
    pcStack_88 = pcVar9;
    FUN_00429a00();
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
    local_60 = (char *)0x0;
    goto switchD_0053f8c9_caseD_10;
  }
  if (iVar6 == 0x1dd) {
    fVar16 = (float10)FUN_00429d80();
    param_1[0x60] = (int)(float)fVar16;
    goto switchD_0053f8c9_caseD_10;
  }
  if (iVar6 < 0xfe) {
    if (iVar6 == 0xfd) {
      FUN_0054f130();
      goto switchD_0053f8c9_caseD_10;
    }
    switch(iVar6) {
    case 0xf:
      uVar8 = FUN_007a7b3c();
      *(undefined4 *)((int)param_1 + 0x142) = uVar8;
    default:
      goto switchD_0053f8c9_caseD_10;
    case 0xb8:
      if (param_2[0x103] == 3) {
        piVar10 = operator_new(0x2fc);
        local_4._0_1_ = 5;
        if (piVar10 == (int *)0x0) {
          piVar10 = (int *)0x0;
        }
        else {
          FUN_004fb840();
          *piVar10 = (int)&PTR_FUN_007e6a00;
          piVar10[2] = (int)&PTR_LAB_007e69ec;
          *(undefined ***)((int)piVar10 + 0x12) = &PTR_LAB_007e69e4;
          piVar10[0xb3] = 0;
          piVar14 = piVar10 + 0xb4;
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar14 = 0;
            piVar14 = piVar14 + 1;
          }
          piVar10[0xbd] = 0x7f7fffff;
          *(undefined1 *)(piVar10 + 0x58) = 1;
        }
        local_4 = (char *)CONCAT31(local_4._1_3_,1);
        piVar10[0x17] = param_1[0x92];
        piVar10[0x1b] = (int)param_1;
        (**(code **)(*piVar10 + 8))();
        iVar6 = *(int *)((int)param_1 + 0x2a);
        puVar11 = operator_new(0xe);
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          *puVar11 = piVar10;
          puVar11[1] = iVar6;
          puVar11[2] = 0;
          *(undefined1 *)(puVar11 + 3) = 0;
        }
        iVar3 = *(int *)((int)param_1 + 0x2e);
        *(undefined4 **)((int)param_1 + 0x2a) = puVar11;
        *(int *)((int)param_1 + 0x2e) = iVar3 + 1;
        if (iVar3 == 0) {
          *(undefined4 **)((int)param_1 + 0x26) = puVar11;
        }
        else {
          *(undefined4 **)(iVar6 + 8) = puVar11;
        }
        goto switchD_0053f8c9_caseD_10;
      }
      break;
    case 0xe9:
      if (param_2[0x103] == 0x527) {
        FUN_00425ba0();
      }
      goto switchD_0053f8c9_caseD_10;
    case 0xee:
      if (param_2[0x103] == 3) {
        pvVar7 = operator_new(0x2b6);
        local_4._0_1_ = 6;
        if (pvVar7 == (void *)0x0) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)FUN_00507bc0();
        }
        local_4 = (char *)CONCAT31(local_4._1_3_,1);
        (**(code **)(*piVar10 + 0x38))();
        FUN_00521540();
        (**(code **)(*piVar10 + 8))();
        iVar6 = param_1[0x92];
        iVar3 = *(int *)(iVar6 + 0x450c);
        puVar11 = operator_new(0xe);
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          *puVar11 = piVar10;
          puVar11[1] = iVar3;
          puVar11[2] = 0;
          *(undefined1 *)(puVar11 + 3) = 0;
        }
        iVar1 = *(int *)(iVar6 + 0x4510);
        *(undefined4 **)(iVar6 + 0x450c) = puVar11;
        *(int *)(iVar6 + 0x4510) = iVar1 + 1;
        if (iVar1 == 0) {
          *(undefined4 **)(iVar6 + 0x4508) = puVar11;
          FUN_004ef880();
        }
        else {
          *(undefined4 **)(iVar3 + 8) = puVar11;
          FUN_004ef880();
        }
        goto switchD_0053f8c9_caseD_10;
      }
      break;
    case 0xf4:
      if (param_2[0x103] == 0x524) {
        pcVar9 = (char *)FUN_007a7b3c();
        if (((int)pcVar9 < 0) || (DAT_00877690 < (int)pcVar9)) {
          if (DAT_00dc4b5f != '\0') {
            (**(code **)(*param_1 + 0xc))();
            pcStack_88 = s_Invalid_province_ID___d__set_as_l_00851630;
            pcStack_8c = (char *)0x53f9f7;
            FUN_00429a50();
          }
          (**(code **)(*param_1 + 0xc))();
          pcStack_8c = s_ERROR___Invalid_province_ID___d__008515b0;
          ppcStack_90 = (char **)0x53fa1e;
          pcStack_88 = pcVar9;
          FUN_00429a00();
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        else {
          iVar6 = FUN_004e9370();
          if (*(char *)(iVar6 + 0x180) != '\0') {
            if (DAT_00dc4b5f != '\0') {
              (**(code **)(*param_1 + 0xc))();
              pcStack_88 = s_Ignored_province_ID___d__set_as_l_00851720;
              pcStack_8c = (char *)0x53f984;
              FUN_00429a50();
            }
            (**(code **)(*param_1 + 0xc))();
            pcStack_8c = s_ERROR___Ignored_province_ID___d__008516a0;
            ppcStack_90 = (char **)0x53f9af;
            pcStack_88 = pcVar9;
            FUN_00429a00();
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
        }
      }
      goto switchD_0053f8c9_caseD_10;
    }
    FUN_005349b0();
    goto switchD_0053f8c9_caseD_10;
  }
  switch(iVar6) {
  case 0x10b:
    uVar8 = FUN_004af6b0();
    *(undefined4 *)((int)param_1 + 0x146) = uVar8;
  default:
    goto switchD_0053f8c9_caseD_10;
  case 0x12d:
    if (param_2[0x103] == 3) {
      pvVar7 = operator_new(0x68);
      local_4._0_1_ = 4;
      if (pvVar7 == (void *)0x0) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = (int *)FUN_00509d30();
      }
      local_4 = (char *)CONCAT31(local_4._1_3_,1);
      (**(code **)(*piVar10 + 8))();
      FUN_0050a420();
      FUN_0051c4b0();
      goto switchD_0053f8c9_caseD_10;
    }
    local_4e = 0;
    uStack_4c = 0;
    local_50 = 6;
    uVar8 = FUN_007a7b3c();
    local_4e = (undefined2)uVar8;
    uStack_4c = (undefined2)((uint)uVar8 >> 0x10);
    iVar6 = FUN_00428460();
    if ((iVar6 != 0) && ((int *)(iVar6 + -0xc) != (int *)0x0)) {
      if (*(int *)(iVar6 + 0x52) == 0) {
        FUN_0050a420();
        FUN_0051c4b0();
      }
      else if (DAT_00dc4b5e != '\0') {
        (**(code **)(*(int *)(iVar6 + -0xc) + 0xc))();
        pcStack_88 = *(char **)(iVar6 + 6);
        pcStack_8c = s_ERROR___Leader___d___s__is_set_a_00851560;
        break;
      }
      goto switchD_0053f8c9_caseD_10;
    }
    if (DAT_00dc4b5e == '\0') goto switchD_0053f8c9_caseD_10;
    (**(code **)(*param_1 + 0xc))();
    pcStack_88 = (char *)CONCAT22(uStack_4c,local_4e);
    pcStack_8c = s_ERROR___Invalid_Leader_ID___d__u_00851520;
    break;
  case 0x164:
    iVar6 = FUN_007a7b3c();
    param_1[0x90] = iVar6;
    goto switchD_0053f8c9_caseD_10;
  case 0x1a0:
    iVar6 = FUN_00535600();
    if (iVar6 != 0) {
      local_48 = &PTR_LAB_007e378c;
      iVar6 = local_44;
      while (iVar6 != 0) {
        iVar6 = *(int *)(iVar6 + 8);
        FUN_00796cd8();
      }
      local_44 = 0;
      local_40 = 0;
      local_3c = (undefined **)0x0;
      local_20 = &PTR_LAB_007e378c;
      iVar6 = local_1c;
      while (iVar6 != 0) {
        iVar6 = *(int *)(iVar6 + 8);
        FUN_00796cd8();
      }
      ExceptionList = local_c;
      return 0xfffffffe;
    }
    goto switchD_0053f8c9_caseD_10;
  }
  goto LAB_0053ffe6;
code_r0x00540058:
  switch(iVar6) {
  case 0x4a6:
    *(bool *)((int)param_1 + 0x187) = param_2[0x103] == 0x111;
    goto switchD_0053f8c9_caseD_10;
  case 0x4a7:
    *(bool *)((int)param_1 + 0x251) = param_2[0x103] == 0x111;
    goto switchD_0053f8c9_caseD_10;
  case 0x4a8:
    *(bool *)((int)param_1 + 0x252) = param_2[0x103] == 0x111;
  default:
    goto switchD_0053f8c9_caseD_10;
  case 0x523:
    local_58 = 0;
    local_56 = 0;
    uStack_54 = 0;
    FUN_00427ed0();
    cVar4 = (**(code **)(param_1[5] + 4))();
    if (cVar4 != '\0') goto switchD_0053f8c9_caseD_10;
    if (DAT_00dc4b5f != '\0') {
      pcStack_88 = (char *)(uint)local_58;
      pcStack_8c = s_ID_conflict__type____d_id___d__a_008490c8;
      ppcStack_90 = (char **)0x5400c5;
      FUN_00429a50();
      goto switchD_0053f8c9_caseD_10;
    }
    pcStack_88 = (char *)(uint)local_58;
    pcStack_8c = s_ERROR___Air_Unit_ID_conflict__ty_008512b8;
  }
LAB_0053ffe6:
  ppcStack_90 = (char **)0x53ffeb;
  FUN_00429a00();
  DAT_00dc4b60 = DAT_00dc4b60 + 1;
  goto switchD_0053f8c9_caseD_10;
}


