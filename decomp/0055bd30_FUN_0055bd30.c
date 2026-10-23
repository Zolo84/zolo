// FUN_0055bd30 @ 55bd30 size=2965

/* WARNING: Removing unreachable block (ram,0x0055c71d) */
/* WARNING: Removing unreachable block (ram,0x0055c725) */
/* WARNING: Removing unreachable block (ram,0x0055c733) */
/* WARNING: Removing unreachable block (ram,0x0055c74e) */
/* WARNING: Removing unreachable block (ram,0x0055c81f) */
/* WARNING: Removing unreachable block (ram,0x0055c76b) */
/* WARNING: Removing unreachable block (ram,0x0055c7a1) */
/* WARNING: Removing unreachable block (ram,0x0055c78d) */
/* WARNING: Removing unreachable block (ram,0x0055c7a3) */
/* WARNING: Removing unreachable block (ram,0x0055c821) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0055bd30(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 unaff_EBX;
  int *piVar9;
  bool bVar10;
  float10 fVar11;
  char *pcVar12;
  byte bStack_39;
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
  
  puStack_8 = &LAB_007c5d7a;
  local_c = ExceptionList;
  local_1c = 0;
  local_10 = (void *)((uint)local_10 & 0xffffff00);
  local_20 = &PTR_LAB_007e378c;
  ExceptionList = &local_c;
  *(undefined1 *)((int)param_1 + 0x25a) = 0;
  param_1[0x95] = DAT_00d61388;
  *(undefined2 *)(param_1 + 0x96) = DAT_00d6138c;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  param_1[0x4d] = (uint)bStack_39 << 0x18;
  local_34 = &PTR_LAB_007e378c;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  local_4 = 1;
  uStack_3 = 0;
switchD_0055bec9_caseD_10:
  while (iVar2 = FUN_00535490(), iVar2 != 1) {
    piVar6 = (int *)FUN_00534391();
    if (*piVar6 == 4) {
      FUN_005343dc();
      if ((DAT_0088f28e == *(int *)((int)param_1 + 0x1a)) && (DAT_0088f28c == (short)param_1[6])) {
        FUN_00428eb0();
        (**(code **)(param_1[5] + 4))();
      }
      (**(code **)(*param_1 + 0x80))();
      (**(code **)param_1[2])();
      if ((((char)((uint)unaff_EBX >> 0x18) == '\0') && (*(char *)(DAT_00d685a6 + 0x2ce2) == '\0'))
         && (param_1[3] != 0)) {
        param_1[0x90] = param_1[3];
      }
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
  if ((DAT_00dc4b5e != '\0') && (*(int *)(param_2 + 4) != 0xb8)) {
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
  iVar4 = DAT_00893530;
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 < 0x12e) {
    if (iVar2 != 0x12d) {
      switch(iVar2) {
      case 0xf:
        uVar7 = FUN_007a7b3c();
        *(undefined4 *)((int)param_1 + 0x142) = uVar7;
        break;
      case 0x35:
        FUN_0054f130();
        break;
      case 0x6b:
        *(bool *)(param_1 + 0xa7) = *(int *)(param_2 + 0x40c) == 0x111;
        break;
      case 0x6c:
        iVar2 = FUN_007a7b3c();
        param_1[0xa5] = iVar2;
        break;
      case 0x6d:
        iVar2 = FUN_007a7b3c();
        param_1[0xa6] = iVar2;
        break;
      case 0x8b:
        if (*(int *)(param_2 + 0x40c) == 0x524) {
          fVar11 = (float10)FUN_00429d80();
          *(float *)((int)param_1 + 0x2aa) = (float)fVar11;
        }
        break;
      case 0x8c:
        if (*(int *)(param_2 + 0x40c) == 0x524) {
          fVar11 = (float10)FUN_00429d80();
          *(float *)((int)param_1 + 0x2a6) = (float)fVar11;
        }
        break;
      case 0x8d:
        if (*(int *)(param_2 + 0x40c) == 0x524) {
          fVar11 = (float10)FUN_00429d80();
          *(float *)((int)param_1 + 0x2a2) = (float)fVar11;
        }
        break;
      case 0x90:
        *(bool *)(param_1 + 0x94) = *(int *)(param_2 + 0x40c) == 0x111;
        break;
      case 0xb8:
        if (*(int *)(param_2 + 0x40c) == 3) {
          piVar6 = operator_new(0x300);
          local_4 = 5;
          if (piVar6 == (int *)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            FUN_004fb840();
            *piVar6 = (int)&PTR_FUN_007e6a58;
            piVar6[2] = (int)&PTR_LAB_007e6a44;
            *(undefined ***)((int)piVar6 + 0x12) = &PTR_FUN_007e6a3c;
            piVar9 = piVar6 + 0xb3;
            for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
              *piVar9 = 0;
              piVar9 = piVar9 + 1;
            }
            *(undefined1 *)((int)piVar6 + 0x15f) = 1;
          }
          local_4 = 1;
          piVar6[0x17] = param_1[0x92];
          piVar6[0x1b] = (int)param_1;
          (**(code **)(*piVar6 + 8))();
          iVar2 = *(int *)((int)param_1 + 0x2a);
          puVar5 = operator_new(0xe);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            *puVar5 = piVar6;
            puVar5[1] = iVar2;
            puVar5[2] = 0;
            *(undefined1 *)(puVar5 + 3) = 0;
          }
          iVar4 = *(int *)((int)param_1 + 0x2e);
          *(undefined4 **)((int)param_1 + 0x2a) = puVar5;
          *(int *)((int)param_1 + 0x2e) = iVar4 + 1;
          if (iVar4 == 0) {
            *(undefined4 **)((int)param_1 + 0x26) = puVar5;
          }
          else {
            *(undefined4 **)(iVar2 + 8) = puVar5;
          }
        }
        else {
          FUN_005349b0();
        }
        break;
      case 0xe9:
        if (*(int *)(param_2 + 0x40c) == 0x527) {
          FUN_00425ba0();
        }
        break;
      case 0xf4:
        if (*(int *)(param_2 + 0x40c) == 0x524) {
          iVar2 = FUN_007a7b3c();
          if ((iVar2 < 0) || (DAT_00877690 < iVar2)) {
            if (DAT_00dc4b5f != '\0') {
              (**(code **)(*param_1 + 0xc))();
              FUN_00429a50(s_Invalid_province_ID___d__set_as_l_00852f20);
            }
            (**(code **)(*param_1 + 0xc))();
            FUN_00429a00(s_ERROR___Invalid_province_ID___d__00852ea0,iVar2);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          else {
            iVar4 = FUN_004e9370();
            if (*(char *)(iVar4 + 0x180) != '\0') {
              if (DAT_00dc4b5f != '\0') {
                (**(code **)(*param_1 + 0xc))();
                FUN_00429a50(s_Ignored_province_ID___d__set_as_l_00853010);
              }
              (**(code **)(*param_1 + 0xc))();
              FUN_00429a00(s_ERROR___Ignored_province_ID___d__00852f90,iVar2);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
          }
        }
        break;
      case 0xfc:
        param_1[0x8a] = *(int *)(DAT_00893530 + 0x14);
        *(undefined2 *)(param_1 + 0x8b) = *(undefined2 *)(iVar4 + 0x18);
        FUN_007a7b3c();
        FUN_0042db80();
        break;
      case 0xfd:
        FUN_0054f130();
        break;
      case 0x10b:
        uVar7 = FUN_004af6b0();
        *(undefined4 *)((int)param_1 + 0x146) = uVar7;
      }
      goto switchD_0055bec9_caseD_10;
    }
    if (*(int *)(param_2 + 0x40c) == 3) {
      pvVar3 = operator_new(0x68);
      local_4 = 4;
      if (pvVar3 == (void *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)FUN_00509d30();
      }
      local_4 = 1;
      (**(code **)(*piVar6 + 8))();
      FUN_0050a420();
      FUN_0051c4b0();
      goto switchD_0055bec9_caseD_10;
    }
    uVar7 = FUN_007a7b3c();
    iVar2 = FUN_00428460();
    if ((iVar2 != 0) && ((int *)(iVar2 + -0xc) != (int *)0x0)) {
      if (*(int *)(iVar2 + 0x52) == 0) {
        FUN_0050a420();
        FUN_0051c4b0();
      }
      else if (DAT_00dc4b5e != '\0') {
        (**(code **)(*(int *)(iVar2 + -0xc) + 0xc))();
        uVar7 = *(undefined4 *)(iVar2 + 6);
        pcVar12 = s_ERROR___Leader___d___s__is_set_a_00851560;
        goto LAB_0055c348;
      }
      goto switchD_0055bec9_caseD_10;
    }
    if (DAT_00dc4b5e == '\0') goto switchD_0055bec9_caseD_10;
    (**(code **)(*param_1 + 0xc))();
    pcVar12 = s_ERROR___Invalid_Leader_ID___d__u_00851520;
  }
  else {
    if (iVar2 < 0x296) {
      if (iVar2 == 0x295) {
        (**(code **)param_1[0x98])();
      }
      else {
        switch(iVar2) {
        case 0x164:
          iVar2 = FUN_007a7b3c();
          param_1[0x90] = iVar2;
          break;
        case 0x17d:
          fVar11 = (float10)FUN_00429d80();
          *(float *)((int)param_1 + 0x29e) = (float)fVar11;
          break;
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
          break;
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
                uVar7 = FUN_00447250();
                FUN_00446d10(uVar7);
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
        case 0x24f:
          FUN_0054f130();
          break;
        case 0x250:
        }
      }
      goto switchD_0055bec9_caseD_10;
    }
    if (iVar2 < 0x4a8) {
      if (iVar2 == 0x4a7) {
        *(bool *)((int)param_1 + 0x251) = *(int *)(param_2 + 0x40c) == 0x111;
      }
      else if (iVar2 == 0x33c) {
        if (*(int *)(param_2 + 0x40c) == 0x112) {
          *(undefined1 *)((int)param_1 + 0x253) = 0;
        }
      }
      else if (iVar2 == 0x48a) {
        iVar2 = FUN_004af6b0();
        param_1[0x97] = iVar2;
      }
      else if (iVar2 == 0x4a6) {
        *(bool *)((int)param_1 + 0x187) = *(int *)(param_2 + 0x40c) == 0x111;
      }
      goto switchD_0055bec9_caseD_10;
    }
    if (iVar2 == 0x4a8) {
      *(bool *)((int)param_1 + 0x252) = *(int *)(param_2 + 0x40c) == 0x111;
      goto switchD_0055bec9_caseD_10;
    }
    if (iVar2 != 0x523) goto switchD_0055bec9_caseD_10;
    FUN_00427ed0();
    cVar1 = (**(code **)(param_1[5] + 4))();
    if (cVar1 != '\0') goto switchD_0055bec9_caseD_10;
    if (DAT_00dc4b5f != '\0') {
      FUN_00429a50(s_ID_conflict__type____d_id___d__a_008490c8,0);
      goto switchD_0055bec9_caseD_10;
    }
    uVar7 = 0;
    pcVar12 = s_ERROR___Land_Unit_ID_conflict__t_00852e64;
  }
LAB_0055c348:
  FUN_00429a00(pcVar12,uVar7);
  DAT_00dc4b60 = DAT_00dc4b60 + 1;
  goto switchD_0055bec9_caseD_10;
}


