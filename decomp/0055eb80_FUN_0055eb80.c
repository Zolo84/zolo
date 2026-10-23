// FUN_0055eb80 @ 55eb80 size=3696

/* WARNING: Removing unreachable block (ram,0x0055f86d) */
/* WARNING: Removing unreachable block (ram,0x0055f875) */
/* WARNING: Removing unreachable block (ram,0x0055f883) */
/* WARNING: Removing unreachable block (ram,0x0055f89e) */
/* WARNING: Removing unreachable block (ram,0x0055f96f) */
/* WARNING: Removing unreachable block (ram,0x0055f8bb) */
/* WARNING: Removing unreachable block (ram,0x0055f8f9) */
/* WARNING: Removing unreachable block (ram,0x0055f8dd) */
/* WARNING: Removing unreachable block (ram,0x0055f8fb) */
/* WARNING: Removing unreachable block (ram,0x0055f971) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0055eb80(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  float10 fVar11;
  char *pcVar12;
  int local_58;
  int local_54;
  undefined **local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined **local_20;
  int local_1c;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_007c6218;
  local_c = ExceptionList;
  local_58 = 0;
  local_54 = 0;
  local_1c = 0;
  local_10 = (void *)((uint)local_10 & 0xffffff00);
  local_20 = &PTR_LAB_007e378c;
  ExceptionList = &local_c;
  *(undefined1 *)((int)param_1 + 0x25a) = 0;
  local_30 = 0;
  param_1[0x95] = DAT_00d61388;
  local_2c = 0;
  local_28 = 0;
  *(undefined2 *)(param_1 + 0x96) = DAT_00d6138c;
  local_34 = &PTR_LAB_007e378c;
  local_4 = 1;
  uStack_3 = 0;
switchD_0055ed22_caseD_10:
  while (iVar2 = FUN_00535490(), iVar2 != 1) {
    piVar7 = (int *)FUN_00534391();
    if (*piVar7 == 4) {
      FUN_005343dc();
      if ((DAT_0088f28e == *(int *)((int)param_1 + 0x1a)) && (DAT_0088f28c == (short)param_1[6])) {
        FUN_00428eb0();
        (**(code **)(param_1[5] + 4))();
      }
      if (local_54 == 0) {
        if (*(char *)(DAT_00d685a6 + 0x2ce2) == '\0') {
          if (DAT_00dc4b5f != '\0') {
            (**(code **)(*param_1 + 0xc))();
            FUN_00429a50();
          }
          (**(code **)(*param_1 + 0xc))();
          FUN_00429a00(s_ERROR___Invalid_or_missing_base_f_00853138);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
      }
      else {
        (**(code **)(*param_1 + 0x98))();
      }
      (**(code **)(*param_1 + 0x80))();
      if (local_58 == 0) {
        if (DAT_00dc4b5f != '\0') {
          (**(code **)(*param_1 + 0xc))();
          FUN_00429a50();
        }
        (**(code **)(*param_1 + 0xc))();
        FUN_00429a00(s_ERROR___Invalid_or_missing_locat_008530b0);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      (**(code **)param_1[2])();
      while (local_34 != (undefined **)0x0) {
        local_34 = (undefined **)local_34[2];
        FUN_00796cd8();
      }
      while (local_20 != (undefined **)0x0) {
        local_20 = (undefined **)local_20[2];
        FUN_00796cd8();
      }
      ExceptionList = local_10;
      return 0;
    }
  }
  iVar2 = local_30;
  iVar4 = local_2c;
  if ((((DAT_00dc4b5e != '\0') && (iVar8 = *(int *)(param_2 + 4), iVar8 != 0xb8)) && (iVar8 != 0xee)
      ) && (iVar8 != 0xf0)) {
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
      cVar1 = (*(code *)PTR_FUN_007e3798)();
      if (cVar1 != '\0') {
        if (iVar2 != 0) {
          FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        break;
      }
    }
    pvVar3 = operator_new(0xe);
    local_4 = 2;
    if (pvVar3 == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0049a7a0();
    }
    local_4 = 1;
    iVar8 = local_28 + 1;
    bVar10 = local_28 != 0;
    iVar2 = iVar4;
    local_28 = iVar8;
    if (bVar10) {
      *(int *)(local_2c + 8) = iVar4;
      iVar2 = local_30;
    }
  }
  local_2c = iVar4;
  local_30 = iVar2;
  iVar2 = *(int *)(param_2 + 4);
  if (0x1a1 < iVar2) {
    if (0x48a < iVar2) goto code_r0x0055f46a;
    if (iVar2 == 0x48a) {
      iVar2 = FUN_004af6b0();
      param_1[0x97] = iVar2;
    }
    else {
      switch(iVar2) {
      case 0x1dd:
        fVar11 = (float10)FUN_00429d80();
        param_1[0x60] = (int)(float)fVar11;
        break;
      case 0x223:
        if (*(int *)(param_2 + 0x40c) == 0x111) {
          *(undefined1 *)((int)param_1 + 0x25a) = 1;
          cVar1 = FUN_0042e980();
          if (cVar1 != '\0') {
            pvVar3 = operator_new(0xc);
            local_4 = 3;
            if (pvVar3 != (void *)0x0) {
              uVar5 = FUN_00447250();
              FUN_00446d10(uVar5);
              FUN_0044a560(0x48);
            }
            local_4 = 1;
            FUN_00565b30();
          }
        }
        else if (*(int *)(param_2 + 0x40c) != 0x112) {
          FUN_005349b0();
        }
        break;
      case 0x228:
        if (*(int *)(param_2 + 0x40c) == 0x111) {
          *(undefined1 *)((int)param_1 + 0x186) = 1;
        }
        break;
      case 0x24f:
        FUN_0054f130();
        break;
      case 0x250:
        break;
      case 0x295:
        (**(code **)param_1[0x98])();
      }
    }
    goto switchD_0055ed22_caseD_10;
  }
  if (iVar2 == 0x1a1) {
    if (*(int *)(param_2 + 0x40c) == 3) {
      FUN_0054f130();
    }
    goto switchD_0055ed22_caseD_10;
  }
  if (iVar2 < 0xfe) {
    if (iVar2 == 0xfd) {
      FUN_0054f130();
      goto switchD_0055ed22_caseD_10;
    }
    switch(iVar2) {
    case 0xf:
      uVar5 = FUN_007a7b3c();
      *(undefined4 *)((int)param_1 + 0x142) = uVar5;
    default:
      goto switchD_0055ed22_caseD_10;
    case 0xb8:
      if (*(int *)(param_2 + 0x40c) == 3) {
        piVar7 = operator_new(0x300);
        local_4 = 6;
        if (piVar7 == (int *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          FUN_004fb840();
          *piVar7 = (int)&PTR_FUN_007e69a8;
          piVar7[2] = (int)&PTR_LAB_007e6994;
          *(undefined ***)((int)piVar7 + 0x12) = &PTR_FUN_007e698c;
          piVar9 = piVar7 + 0xb3;
          for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar9 = 0;
            piVar9 = piVar9 + 1;
          }
          *(undefined1 *)((int)piVar7 + 0x161) = 1;
        }
        local_4 = 1;
        piVar7[0x17] = param_1[0x92];
        piVar7[0x1b] = (int)param_1;
        (**(code **)(*piVar7 + 8))();
        iVar2 = *(int *)((int)param_1 + 0x2a);
        puVar6 = operator_new(0xe);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = piVar7;
          puVar6[1] = iVar2;
          puVar6[2] = 0;
          *(undefined1 *)(puVar6 + 3) = 0;
        }
        iVar4 = *(int *)((int)param_1 + 0x2e);
        *(undefined4 **)((int)param_1 + 0x2a) = puVar6;
        *(int *)((int)param_1 + 0x2e) = iVar4 + 1;
        if (iVar4 == 0) {
          *(undefined4 **)((int)param_1 + 0x26) = puVar6;
        }
        else {
          *(undefined4 **)(iVar2 + 8) = puVar6;
        }
        goto switchD_0055ed22_caseD_10;
      }
      break;
    case 0xe9:
      if (*(int *)(param_2 + 0x40c) == 0x527) {
        FUN_00425ba0();
      }
      goto switchD_0055ed22_caseD_10;
    case 0xee:
      if (*(int *)(param_2 + 0x40c) == 3) {
        pvVar3 = operator_new(0x2b6);
        local_4 = 4;
        if (pvVar3 == (void *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = (int *)FUN_00507bc0();
        }
        local_4 = 1;
        (**(code **)(*piVar7 + 0x38))();
        FUN_00521540();
        (**(code **)(*piVar7 + 8))();
        iVar2 = param_1[0x92];
        iVar4 = *(int *)(iVar2 + 0x450c);
        puVar6 = operator_new(0xe);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = piVar7;
          puVar6[1] = iVar4;
          puVar6[2] = 0;
          *(undefined1 *)(puVar6 + 3) = 0;
        }
        iVar8 = *(int *)(iVar2 + 0x4510);
        *(undefined4 **)(iVar2 + 0x450c) = puVar6;
        *(int *)(iVar2 + 0x4510) = iVar8 + 1;
        if (iVar8 == 0) {
          *(undefined4 **)(iVar2 + 0x4508) = puVar6;
          FUN_00517160();
        }
        else {
          *(undefined4 **)(iVar4 + 8) = puVar6;
          FUN_00517160();
        }
        goto switchD_0055ed22_caseD_10;
      }
      break;
    case 0xf0:
      if (*(int *)(param_2 + 0x40c) == 3) {
        pvVar3 = operator_new(0x2aa);
        local_4 = 5;
        if (pvVar3 == (void *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = (int *)FUN_004ef550();
        }
        local_4 = 1;
        (**(code **)(*piVar7 + 0x38))();
        FUN_00521540();
        (**(code **)(*piVar7 + 8))();
        iVar2 = param_1[0x92];
        iVar4 = *(int *)(iVar2 + 0x450c);
        puVar6 = operator_new(0xe);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = piVar7;
          puVar6[1] = iVar4;
          puVar6[2] = 0;
          *(undefined1 *)(puVar6 + 3) = 0;
        }
        iVar8 = *(int *)(iVar2 + 0x4510);
        *(undefined4 **)(iVar2 + 0x450c) = puVar6;
        *(int *)(iVar2 + 0x4510) = iVar8 + 1;
        if (iVar8 == 0) {
          *(undefined4 **)(iVar2 + 0x4508) = puVar6;
          FUN_00517410();
        }
        else {
          *(undefined4 **)(iVar4 + 8) = puVar6;
          FUN_00517410();
        }
        goto switchD_0055ed22_caseD_10;
      }
      break;
    case 0xf4:
      if (*(int *)(param_2 + 0x40c) == 0x524) {
        local_58 = FUN_007a7b3c();
        if ((local_58 < 0) || (DAT_00877690 < local_58)) {
          if (DAT_00dc4b5f != '\0') {
            (**(code **)(*param_1 + 0xc))();
            FUN_00429a50(s_Invalid_province_ID___d__set_as_l_0085349c);
          }
          (**(code **)(*param_1 + 0xc))();
          FUN_00429a00(s_ERROR___Invalid_province_ID___d__00853418,local_58);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
          local_58 = *(int *)(*(int *)(param_2 + 0x610) + 0x117de);
        }
        else {
          iVar2 = FUN_004e9370();
          if (*(char *)(iVar2 + 0x180) != '\0') {
            if (DAT_00dc4b5f != '\0') {
              (**(code **)(*param_1 + 0xc))();
              FUN_00429a50(s_Ignored_province_ID___d__set_as_l_00853594);
            }
            (**(code **)(*param_1 + 0xc))();
            FUN_00429a00(s_ERROR___Ignored_province_ID___d__00853510,local_58);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
            local_58 = *(int *)(*(int *)(param_2 + 0x610) + 0x117de);
          }
        }
      }
      goto switchD_0055ed22_caseD_10;
    }
    FUN_005349b0();
    goto switchD_0055ed22_caseD_10;
  }
  switch(iVar2) {
  case 0x10b:
    uVar5 = FUN_004af6b0();
    *(undefined4 *)((int)param_1 + 0x146) = uVar5;
    goto switchD_0055ed22_caseD_10;
  case 0x10c:
    if (*(int *)(param_2 + 0x40c) == 0x524) {
      fVar11 = (float10)FUN_00429d80();
      *(float *)((int)param_1 + 0x2a6) = (float)fVar11;
    }
  default:
    goto switchD_0055ed22_caseD_10;
  case 0x12d:
    if (*(int *)(param_2 + 0x40c) == 3) {
      pvVar3 = operator_new(0x68);
      local_4 = 7;
      if (pvVar3 == (void *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)FUN_00509d30();
      }
      local_4 = 1;
      (**(code **)(*piVar7 + 8))();
      FUN_0050a420();
      FUN_0051c4b0();
      goto switchD_0055ed22_caseD_10;
    }
    iVar2 = FUN_007a7b3c();
    iVar4 = FUN_00428460();
    if ((iVar4 != 0) && ((int *)(iVar4 + -0xc) != (int *)0x0)) {
      if (*(int *)(iVar4 + 0x52) == 0) {
        FUN_0050a420();
        FUN_0051c4b0();
      }
      else if (DAT_00dc4b5e != '\0') {
        (**(code **)(*(int *)(iVar4 + -0xc) + 0xc))();
        iVar2 = *(int *)(iVar4 + 6);
        pcVar12 = s_ERROR___Leader___d___s__is_set_a_00851560;
        break;
      }
      goto switchD_0055ed22_caseD_10;
    }
    if (DAT_00dc4b5e == '\0') goto switchD_0055ed22_caseD_10;
    (**(code **)(*param_1 + 0xc))();
    pcVar12 = s_ERROR___Invalid_Leader_ID___d__u_00851520;
    break;
  case 0x164:
    iVar2 = FUN_007a7b3c();
    param_1[0x90] = iVar2;
    goto switchD_0055ed22_caseD_10;
  case 0x1a0:
    iVar2 = FUN_00535600();
    if (iVar2 != 0) {
      while (local_30 != 0) {
        local_30 = *(int *)(local_30 + 8);
        FUN_00796cd8();
      }
      while (local_1c != 0) {
        local_1c = *(int *)(local_1c + 8);
        FUN_00796cd8();
      }
      ExceptionList = local_c;
      return 0xfffffffe;
    }
    goto switchD_0055ed22_caseD_10;
  }
LAB_0055f607:
  FUN_00429a00(pcVar12,iVar2);
  DAT_00dc4b60 = DAT_00dc4b60 + 1;
  goto switchD_0055ed22_caseD_10;
code_r0x0055f46a:
  switch(iVar2) {
  case 0x48c:
    iVar2 = FUN_007a7b3c();
    if ((iVar2 < 0) || (DAT_00877690 < iVar2)) {
      if (DAT_00dc4b5f != '\0') {
        (**(code **)(*param_1 + 0xc))();
        FUN_00429a50(s_Invalid_province_ID___d__set_as_b_0085320c);
      }
      (**(code **)(*param_1 + 0xc))();
      pcVar12 = s_ERROR___Invalid_province_ID___d__008531b8;
    }
    else {
      iVar4 = FUN_004e9370();
      if (*(char *)(iVar4 + 0x180) == '\0') {
        iVar4 = FUN_004e9370();
        local_54 = iVar2;
        if ((*(int *)(iVar4 + 0x254) != 8) && (*(int *)(iVar4 + 0x254) != 9))
        goto switchD_0055ed22_caseD_10;
        if (DAT_00dc4b5f != '\0') {
          (**(code **)(*param_1 + 0xc))();
          FUN_00429a50(s_Non_land_province_ID___d__set_as_008532d0);
        }
        (**(code **)(*param_1 + 0xc))();
        pcVar12 = s_ERROR___Non_land_province_ID___d_00853250;
        break;
      }
      if (DAT_00dc4b5f != '\0') {
        (**(code **)(*param_1 + 0xc))();
        FUN_00429a50(s_Ignored_province_ID___d__set_as_b_00853394);
      }
      (**(code **)(*param_1 + 0xc))();
      pcVar12 = s_ERROR___Ignored_province_ID___d__00853340;
    }
    FUN_00429a00(pcVar12,iVar2);
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
    local_54 = 0;
    goto switchD_0055ed22_caseD_10;
  default:
    goto switchD_0055ed22_caseD_10;
  case 0x4a6:
    *(bool *)((int)param_1 + 0x187) = *(int *)(param_2 + 0x40c) == 0x111;
    goto switchD_0055ed22_caseD_10;
  case 0x4a7:
    *(bool *)((int)param_1 + 0x251) = *(int *)(param_2 + 0x40c) == 0x111;
    goto switchD_0055ed22_caseD_10;
  case 0x4a8:
    *(bool *)((int)param_1 + 0x252) = *(int *)(param_2 + 0x40c) == 0x111;
    goto switchD_0055ed22_caseD_10;
  case 0x523:
    FUN_00427ed0();
    cVar1 = (**(code **)(param_1[5] + 4))();
    if (cVar1 != '\0') goto switchD_0055ed22_caseD_10;
    if (DAT_00dc4b5f != '\0') {
      FUN_00429a50(s_ID_conflict__type____d_id___d__a_008490c8,0);
      goto switchD_0055ed22_caseD_10;
    }
    iVar2 = 0;
    pcVar12 = s_ERROR___Naval_Unit_ID_conflict___008533d8;
  }
  goto LAB_0055f607;
}


