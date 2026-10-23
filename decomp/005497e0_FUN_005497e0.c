// FUN_005497e0 @ 5497e0 size=14484

/* WARNING: Removing unreachable block (ram,0x0054beba) */
/* WARNING: Removing unreachable block (ram,0x0054bec0) */
/* WARNING: Removing unreachable block (ram,0x0054becf) */
/* WARNING: Removing unreachable block (ram,0x0054bee7) */
/* WARNING: Removing unreachable block (ram,0x0054bed9) */
/* WARNING: Removing unreachable block (ram,0x0054bec5) */
/* WARNING: Removing unreachable block (ram,0x0054bf11) */
/* WARNING: Removing unreachable block (ram,0x0054bf18) */
/* WARNING: Removing unreachable block (ram,0x0054be1f) */
/* WARNING: Removing unreachable block (ram,0x0054be25) */
/* WARNING: Removing unreachable block (ram,0x0054be34) */
/* WARNING: Removing unreachable block (ram,0x0054be4c) */
/* WARNING: Removing unreachable block (ram,0x0054be3e) */
/* WARNING: Removing unreachable block (ram,0x0054be2a) */
/* WARNING: Removing unreachable block (ram,0x0054be76) */
/* WARNING: Removing unreachable block (ram,0x0054be7d) */
/* WARNING: Removing unreachable block (ram,0x0054bd84) */
/* WARNING: Removing unreachable block (ram,0x0054bd8a) */
/* WARNING: Removing unreachable block (ram,0x0054bd99) */
/* WARNING: Removing unreachable block (ram,0x0054bdb1) */
/* WARNING: Removing unreachable block (ram,0x0054bda3) */
/* WARNING: Removing unreachable block (ram,0x0054bd8f) */
/* WARNING: Removing unreachable block (ram,0x0054bddb) */
/* WARNING: Removing unreachable block (ram,0x0054bde2) */
/* WARNING: Removing unreachable block (ram,0x0054b4aa) */
/* WARNING: Removing unreachable block (ram,0x0054b4b0) */
/* WARNING: Removing unreachable block (ram,0x0054b4c6) */
/* WARNING: Removing unreachable block (ram,0x0054b4e9) */
/* WARNING: Removing unreachable block (ram,0x0054b516) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005497e0(int *param_1,int *param_2)

{
  undefined2 uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  void *pvVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  char *pcVar18;
  bool bVar19;
  float10 fVar20;
  int *local_1f8;
  bool local_1e5;
  int local_1dc;
  int *local_1c4;
  int *local_1c0;
  int local_1bc;
  int local_1b0;
  int local_19c;
  undefined4 *local_188;
  undefined2 local_164;
  int local_154;
  int local_130;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007c45c0;
  local_c = ExceptionList;
  bVar3 = false;
  local_154 = 0;
  bVar2 = true;
  local_188 = (undefined4 *)0x0;
  local_1b0 = 0;
  local_19c = 0;
  local_1dc = 0;
  local_1c4 = (int *)0x0;
  local_1c0 = (int *)0x0;
  local_1bc = 0;
  local_4 = 5;
  puVar14 = _DAT_00d77b3e;
  ExceptionList = &local_c;
switchD_0054b9c7_caseD_405:
  while (_DAT_00d77b3e = puVar14, iVar5 = FUN_00535490(), iVar5 != 1) {
    if (iVar5 == 2) {
      while (local_1c4 != (int *)0x0) {
        local_1c4 = (int *)local_1c4[2];
        FUN_00796cd8();
      }
      while (local_1dc != 0) {
        local_1dc = *(int *)(local_1dc + 8);
        FUN_00796cd8();
      }
      while (local_19c != 0) {
        local_19c = *(int *)(local_19c + 10);
        FUN_00796cd8();
      }
      while (local_1b0 != 0) {
        local_1b0 = *(int *)(local_1b0 + 10);
        FUN_00796cd8();
      }
      while (local_188 != (undefined4 *)0x0) {
        local_188 = *(undefined4 **)((int)local_188 + 10);
        FUN_00796cd8();
      }
      while (local_154 != 0) {
        local_154 = *(int *)(local_154 + 8);
        FUN_00796cd8();
      }
      ExceptionList = local_c;
      return 0xfffffffe;
    }
    piVar11 = (int *)FUN_00534391();
    puVar14 = _DAT_00d77b3e;
    if (*piVar11 == 4) {
      FUN_005343dc();
      if (bVar2) {
        FUN_00540ed0();
      }
      while (local_188 != (undefined4 *)0x0) {
        puVar14 = *(undefined4 **)((int)local_188 + 10);
        uVar10 = *local_188;
        local_164 = (undefined2)((uint)*(undefined4 *)((int)local_188 + 2) >> 0x10);
        iVar5 = FUN_00428460();
        local_188 = puVar14;
        if ((iVar5 != 0) && (iVar5 != 0xc)) {
          puVar14 = operator_new(0xc);
          local_4._0_1_ = 0x1a;
          if (puVar14 != (undefined4 *)0x0) {
            pvVar8 = operator_new(0x14);
            local_4._0_1_ = 0x1b;
            if (pvVar8 == (void *)0x0) {
              pvVar8 = (void *)0x0;
            }
            else {
              FUN_0042d2d0();
              *(undefined2 *)((int)pvVar8 + 8) = 0;
              *(undefined4 *)((int)pvVar8 + 10) = 0;
              *(undefined2 *)((int)pvVar8 + 0xe) = 0;
              *(undefined4 *)((int)pvVar8 + 0x10) = 0;
            }
            puVar14[1] = pvVar8;
            *(undefined1 *)(puVar14 + 2) = 0;
            *(undefined1 *)((int)puVar14 + 9) = 1;
            *puVar14 = &PTR_LAB_007e3ebc;
            *puVar14 = &PTR_FUN_007e68a0;
            *(undefined1 *)((int)puVar14 + 10) = 0;
            *(undefined2 *)puVar14[1] = 0x91;
            iVar5 = puVar14[1];
            *(undefined4 *)(iVar5 + 8) = *(undefined4 *)((int)param_1 + -10);
            *(undefined2 *)(iVar5 + 0xc) = *(undefined2 *)((int)param_1 + -6);
            puVar9 = (undefined4 *)FUN_0042d2f0(0);
            iVar5 = puVar14[1];
            *(undefined4 *)(iVar5 + 2) = *puVar9;
            *(undefined2 *)(iVar5 + 6) = *(undefined2 *)(puVar9 + 1);
            *puVar14 = &PTR_FUN_007e6880;
            iVar5 = puVar14[1];
            *(undefined4 *)(iVar5 + 0xe) = uVar10;
            *(undefined2 *)(iVar5 + 0x12) = local_164;
          }
          local_4 = CONCAT31(local_4._1_3_,5);
          FUN_00565c30();
        }
      }
      while (local_1b0 != 0) {
        local_1b0 = *(int *)(local_1b0 + 10);
        piVar11 = (int *)FUN_0048c9c0();
        cVar4 = (**(code **)(*piVar11 + 0x24))();
        if (cVar4 == '\0') {
          FUN_00446d10();
          FUN_0048c9c0();
          FUN_004739f0();
        }
      }
      FUN_0054ef50();
      FUN_0054ef80();
      cVar4 = FUN_0054ef70();
      while (cVar4 != '\0') {
        FUN_004b3f60();
        FUN_0045aac0();
        piVar11 = (int *)FUN_00465ae0();
        iVar5 = *piVar11;
        FUN_00446d10();
        cVar4 = (**(code **)(iVar5 + 0x24))();
        if (cVar4 == '\0') {
          FUN_00446d10();
          FUN_00465ae0();
          FUN_004739f0();
        }
        cVar4 = FUN_0054ef70();
      }
      if (!bVar3) {
        piVar11 = (int *)FUN_0054edb0();
        iVar5 = (**(code **)(*piVar11 + 4))();
        if (iVar5 == 0) {
          FUN_0054d800();
        }
      }
      FUN_00449650();
      local_4._0_1_ = 4;
      FUN_00417370();
      local_4._0_1_ = 3;
      FUN_00417370();
      local_4._0_1_ = 2;
      FUN_00458a60();
      local_4._0_1_ = 1;
      FUN_00458a60();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00458a60();
      local_4 = 0xffffffff;
      FUN_00499640();
      ExceptionList = local_c;
      return 0;
    }
  }
  piVar11 = local_1c4;
  piVar6 = local_1c0;
  if (DAT_00dc4b5e != '\0') {
    iVar5 = param_2[1];
    if (iVar5 < 0x228) {
      if (iVar5 < 0x224) {
        if (iVar5 < 0x10c) {
          if (iVar5 != 0x10b) {
            switch(iVar5) {
            case 0xc:
            case 0xb9:
            case 0xba:
            case 0xbb:
            case 0xee:
            case 0xef:
            case 0xf0:
              break;
            default:
              goto switchD_00549915_caseD_d;
            }
          }
        }
        else if ((iVar5 != 0x120) && (iVar5 != 0x12d)) goto switchD_00549915_caseD_d;
      }
    }
    else if (iVar5 < 0x339) {
      if ((iVar5 != 0x338) && ((iVar5 != 0x29e && (iVar5 != 0x2be)))) {
switchD_00549915_caseD_d:
        for (; piVar11 != (int *)0x0; piVar11 = (int *)piVar11[2]) {
          cVar4 = (*(code *)PTR_FUN_007e3798)();
          if (cVar4 != '\0') {
            if (piVar11 != (int *)0x0) {
              FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
            break;
          }
        }
        iVar5 = param_2[1];
        piVar6 = operator_new(0xe);
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          *piVar6 = iVar5;
          piVar6[1] = (int)local_1c0;
          piVar6[2] = 0;
          *(undefined1 *)(piVar6 + 3) = 0;
        }
        iVar5 = local_1bc + 1;
        bVar19 = local_1bc != 0;
        piVar11 = piVar6;
        local_1bc = iVar5;
        if (bVar19) {
          local_1c0[2] = (int)piVar6;
          piVar11 = local_1c4;
        }
      }
    }
    else if ((iVar5 != 0x38b) && (iVar5 != 0x504)) goto switchD_00549915_caseD_d;
  }
  local_1c0 = piVar6;
  local_1c4 = piVar11;
  iVar7 = FUN_005144a0();
  iVar5 = param_2[0x103];
  if (((iVar5 == 0x111) || (iVar5 == 0x112)) && (iVar7 != 0)) {
    *(bool *)(iVar7 + 0x3792 + (int)param_1) = iVar5 == 0x111;
    puVar14 = _DAT_00d77b3e;
    goto switchD_0054b9c7_caseD_405;
  }
  iVar7 = param_2[1];
  puVar14 = _DAT_00d77b3e;
  if (iVar7 < 0x36e) {
    if (iVar7 == 0x36d) {
      fVar20 = (float10)FUN_00429d80();
      param_1[0x38c3] = (int)(float)fVar20;
      puVar14 = _DAT_00d77b3e;
      goto switchD_0054b9c7_caseD_405;
    }
    if (iVar7 < 0x194) {
      if (iVar7 == 0x193) {
        if (iVar5 == 3) {
          FUN_0054f130();
          puVar14 = _DAT_00d77b3e;
          goto switchD_0054b9c7_caseD_405;
        }
      }
      else {
        if (0x116 < iVar7) {
          switch(iVar7) {
          case 0x117:
            (**(code **)(*(int *)((int)param_1 + -0xe) + 0x80))();
            puVar14 = _DAT_00d77b3e;
            goto switchD_0054b9c7_caseD_405;
          case 0x118:
            (**(code **)(*(int *)((int)param_1 + -0xe) + 0x90))();
            puVar14 = _DAT_00d77b3e;
            goto switchD_0054b9c7_caseD_405;
          case 0x119:
            (**(code **)(*(int *)((int)param_1 + -0xe) + 0x94))();
            puVar14 = _DAT_00d77b3e;
            goto switchD_0054b9c7_caseD_405;
          case 0x11a:
            (**(code **)(*(int *)((int)param_1 + -0xe) + 0x98))();
            puVar14 = _DAT_00d77b3e;
            goto switchD_0054b9c7_caseD_405;
          case 0x11b:
            (**(code **)(*(int *)((int)param_1 + -0xe) + 0x9c))();
            puVar14 = _DAT_00d77b3e;
            goto switchD_0054b9c7_caseD_405;
          default:
            goto switchD_00549aa9_caseD_d;
          case 0x120:
            FUN_007a7b3c();
            iVar5 = FUN_00428460();
            puVar14 = _DAT_00d77b3e;
            if (((iVar5 == 0) || (iVar5 + -0xc == 0)) || (*(int *)(iVar5 + 0x52) != 0))
            goto switchD_0054b9c7_caseD_405;
            if (*(int *)(iVar5 + 0x56) != 0) {
              (**(code **)(*(int *)(*(int *)(iVar5 + 0x56) + 0x117f4) + 0x18))();
            }
            *(int *)(iVar5 + 10) = param_1[-2];
            FUN_0050a420();
            *(undefined1 *)(iVar5 + 0x20) = 0;
            iVar7 = *(int *)((int)param_1 + 0x117ee);
            piVar6 = operator_new(0xe);
            if (piVar6 == (int *)0x0) {
              piVar6 = (int *)0x0;
            }
            else {
              *piVar6 = iVar5 + -0xc;
              piVar6[1] = iVar7;
              piVar6[2] = 0;
              *(undefined1 *)(piVar6 + 3) = 0;
            }
            iVar5 = *(int *)((int)param_1 + 0x117f2);
            *(int **)((int)param_1 + 0x117ee) = piVar6;
            *(int *)((int)param_1 + 0x117f2) = iVar5 + 1;
            if (iVar5 != 0) {
              *(int **)(iVar7 + 8) = piVar6;
              puVar14 = _DAT_00d77b3e;
              goto switchD_0054b9c7_caseD_405;
            }
            break;
          case 0x124:
            iVar5 = FUN_00535600();
            if (iVar5 == 0) {
              for (piVar11 = *(int **)((int)param_1 + 0xe896); puVar14 = _DAT_00d77b3e,
                  piVar11 != (int *)0x0; piVar11 = (int *)piVar11[2]) {
                iVar5 = *piVar11;
                if ((iVar5 < 1) || (DAT_00877690 <= iVar5)) {
                  FUN_007a630a();
                  FUN_005349b0();
                  while (local_1c4 != (int *)0x0) {
                    local_1c4 = (int *)local_1c4[2];
                    FUN_00796cd8();
                  }
                  while (local_1dc != 0) {
                    local_1dc = *(int *)(local_1dc + 8);
                    FUN_00796cd8();
                  }
                  while (local_19c != 0) {
                    local_19c = *(int *)(local_19c + 10);
                    FUN_00796cd8();
                  }
                  while (local_1b0 != 0) {
                    local_1b0 = *(int *)(local_1b0 + 10);
                    FUN_00796cd8();
                  }
                  while (local_188 != (undefined4 *)0x0) {
                    local_188 = *(undefined4 **)((int)local_188 + 10);
                    FUN_00796cd8();
                  }
                  while (local_154 != 0) {
                    local_154 = *(int *)(local_154 + 8);
                    FUN_00796cd8();
                  }
                  ExceptionList = local_c;
                  return 0xfffffffe;
                }
                piVar6 = (int *)(DAT_00ab27b4 + iVar5 * 0x4b2);
                iVar5 = *(int *)(DAT_00ab27b4 + 0x3d8 + iVar5 * 0x4b2);
                if (iVar5 != 0) {
                  if (DAT_00dc4b5f != '\0') {
                    (**(code **)(*param_1 + 0xc))();
                    (**(code **)(*(int *)(iVar5 + 0xe) + 0xc))();
                    uVar10 = (**(code **)(*piVar6 + 0xc))();
                    FUN_00429a50(s__s___d__is_already_controlled_by_0085207c,uVar10);
                  }
                  iVar5 = piVar6[0xf6];
                  uVar10 = *(undefined4 *)((int)piVar6 + 0x12);
                  (**(code **)(*param_1 + 0xc))();
                  uVar13 = (**(code **)(*(int *)(iVar5 + 0xe) + 0xc))();
                  uVar10 = (**(code **)(*piVar6 + 0xc))(uVar10,uVar13);
                  FUN_00429a00(s_ERROR____s___d__is_already_contr_0085202c,uVar10);
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
                FUN_004e78e0();
                FUN_004d8360();
              }
            }
            else {
              FUN_005349b0();
              puVar14 = _DAT_00d77b3e;
            }
            goto switchD_0054b9c7_caseD_405;
          case 0x126:
            iVar5 = FUN_00535600();
            if (iVar5 == 0) {
              for (piVar11 = (int *)param_1[0x3a21]; puVar14 = _DAT_00d77b3e, piVar11 != (int *)0x0;
                  piVar11 = (int *)piVar11[2]) {
                iVar5 = *piVar11;
                if ((iVar5 < 1) || (DAT_00877690 <= iVar5)) {
                  FUN_007a630a();
                  FUN_005349b0();
                  while (local_1c4 != (int *)0x0) {
                    local_1c4 = (int *)local_1c4[2];
                    FUN_00796cd8();
                  }
                  while (local_1dc != 0) {
                    local_1dc = *(int *)(local_1dc + 8);
                    FUN_00796cd8();
                  }
                  while (local_19c != 0) {
                    local_19c = *(int *)(local_19c + 10);
                    FUN_00796cd8();
                  }
                  while (local_1b0 != 0) {
                    local_1b0 = *(int *)(local_1b0 + 10);
                    FUN_00796cd8();
                  }
                  while (local_188 != (undefined4 *)0x0) {
                    local_188 = *(undefined4 **)((int)local_188 + 10);
                    FUN_00796cd8();
                  }
                  while (local_154 != 0) {
                    local_154 = *(int *)(local_154 + 8);
                    FUN_00796cd8();
                  }
                  ExceptionList = local_c;
                  return 0xfffffffe;
                }
                piVar6 = (int *)(DAT_00ab27b4 + iVar5 * 0x4b2);
                iVar5 = *(int *)(DAT_00ab27b4 + 0x3d4 + iVar5 * 0x4b2);
                if (iVar5 != 0) {
                  if (DAT_00dc4b5f != '\0') {
                    (**(code **)(*param_1 + 0xc))();
                    (**(code **)(*(int *)(iVar5 + 0xe) + 0xc))();
                    uVar10 = (**(code **)(*piVar6 + 0xc))();
                    FUN_00429a50(s__s___d__is_already_owned_by__s_w_00852114,uVar10);
                  }
                  iVar5 = piVar6[0xf5];
                  uVar10 = *(undefined4 *)((int)piVar6 + 0x12);
                  (**(code **)(*param_1 + 0xc))();
                  uVar13 = (**(code **)(*(int *)(iVar5 + 0xe) + 0xc))();
                  uVar10 = (**(code **)(*piVar6 + 0xc))(uVar10,uVar13);
                  FUN_00429a00(s_ERROR____s___d__is_already_owned_008520cc,uVar10);
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
                FUN_004e72a0();
                FUN_004d8360();
              }
            }
            else {
              FUN_005349b0();
              puVar14 = _DAT_00d77b3e;
            }
            goto switchD_0054b9c7_caseD_405;
          case 0x127:
            iVar5 = FUN_00535600();
            if (iVar5 == 0) {
              for (piVar11 = (int *)param_1[0x3a2a]; puVar14 = _DAT_00d77b3e, piVar11 != (int *)0x0;
                  piVar11 = (int *)piVar11[2]) {
                iVar5 = *piVar11;
                if ((iVar5 < 1) || (DAT_00877690 <= iVar5)) {
                  FUN_007a630a();
                  FUN_005349b0();
                  while (local_1c4 != (int *)0x0) {
                    local_1c4 = (int *)local_1c4[2];
                    FUN_00796cd8();
                  }
                  while (local_1dc != 0) {
                    local_1dc = *(int *)(local_1dc + 8);
                    FUN_00796cd8();
                  }
                  while (local_19c != 0) {
                    local_19c = *(int *)(local_19c + 10);
                    FUN_00796cd8();
                  }
                  while (local_1b0 != 0) {
                    local_1b0 = *(int *)(local_1b0 + 10);
                    FUN_00796cd8();
                  }
                  while (local_188 != (undefined4 *)0x0) {
                    local_188 = *(undefined4 **)((int)local_188 + 10);
                    FUN_00796cd8();
                  }
                  while (local_154 != 0) {
                    local_154 = *(int *)(local_154 + 8);
                    FUN_00796cd8();
                  }
                  ExceptionList = local_c;
                  return 0xfffffffe;
                }
                if (DAT_00dc4b5e != '\0') {
                  piVar6 = (int *)(DAT_00ab27b4 + iVar5 * 0x4b2);
                  iVar5 = *(int *)(DAT_00ab27b4 + 0x254 + iVar5 * 0x4b2);
                  if ((iVar5 == 8) || (iVar5 == 9)) {
                    uVar10 = *(undefined4 *)((int)piVar6 + 0x12);
                    (**(code **)(*param_1 + 0xc))();
                    uVar10 = (**(code **)(*piVar6 + 0xc))(uVar10);
                    FUN_00429a00(s_ERROR___Province__s___d__defined_00851fac,uVar10);
                    DAT_00dc4b60 = DAT_00dc4b60 + 1;
                  }
                  if ((char)piVar6[0x60] != '\0') {
                    uVar10 = *(undefined4 *)((int)piVar6 + 0x12);
                    (**(code **)(*param_1 + 0xc))();
                    uVar10 = (**(code **)(*piVar6 + 0xc))(uVar10);
                    FUN_00429a00(s_ERROR___Province__s___d__defined_00851f30,uVar10);
                    DAT_00dc4b60 = DAT_00dc4b60 + 1;
                  }
                }
              }
            }
            else {
              FUN_005349b0();
              puVar14 = _DAT_00d77b3e;
            }
            goto switchD_0054b9c7_caseD_405;
          case 0x128:
            iVar5 = FUN_00535600();
            if (iVar5 == 0) {
              for (piVar11 = *(int **)((int)param_1 + 0xe8ba); puVar14 = _DAT_00d77b3e,
                  piVar11 != (int *)0x0; piVar11 = (int *)piVar11[2]) {
                iVar5 = *piVar11;
                if ((iVar5 < 1) || (DAT_00877690 <= iVar5)) {
                  FUN_007a630a();
                  FUN_005349b0();
                  while (local_1c4 != (int *)0x0) {
                    local_1c4 = (int *)local_1c4[2];
                    FUN_00796cd8();
                  }
                  while (local_1dc != 0) {
                    local_1dc = *(int *)(local_1dc + 8);
                    FUN_00796cd8();
                  }
                  while (local_19c != 0) {
                    local_19c = *(int *)(local_19c + 10);
                    FUN_00796cd8();
                  }
                  while (local_1b0 != 0) {
                    local_1b0 = *(int *)(local_1b0 + 10);
                    FUN_00796cd8();
                  }
                  while (local_188 != (undefined4 *)0x0) {
                    local_188 = *(undefined4 **)((int)local_188 + 10);
                    FUN_00796cd8();
                  }
                  while (local_154 != 0) {
                    local_154 = *(int *)(local_154 + 8);
                    FUN_00796cd8();
                  }
                  ExceptionList = local_c;
                  return 0xfffffffe;
                }
                if (DAT_00dc4b5e != '\0') {
                  piVar6 = (int *)(DAT_00ab27b4 + iVar5 * 0x4b2);
                  iVar5 = *(int *)(DAT_00ab27b4 + 0x254 + iVar5 * 0x4b2);
                  if ((iVar5 == 8) || (iVar5 == 9)) {
                    uVar10 = *(undefined4 *)((int)piVar6 + 0x12);
                    (**(code **)(*param_1 + 0xc))();
                    uVar10 = (**(code **)(*piVar6 + 0xc))(uVar10);
                    FUN_00429a00(s_ERROR___Province__s___d__defined_00851eb0,uVar10);
                    DAT_00dc4b60 = DAT_00dc4b60 + 1;
                  }
                  if ((char)piVar6[0x60] != '\0') {
                    uVar10 = *(undefined4 *)((int)piVar6 + 0x12);
                    (**(code **)(*param_1 + 0xc))();
                    uVar10 = (**(code **)(*piVar6 + 0xc))(uVar10);
                    FUN_00429a00(s_ERROR___Province__s___d__defined_00851e34,uVar10);
                    DAT_00dc4b60 = DAT_00dc4b60 + 1;
                  }
                }
              }
            }
            else {
              FUN_005349b0();
              puVar14 = _DAT_00d77b3e;
            }
            goto switchD_0054b9c7_caseD_405;
          case 300:
            if (iVar5 == 0x524) {
              iVar5 = FUN_007a7b3c();
              param_1[0x45f4] = iVar5;
              *(int *)((int)param_1 + 0x117e2) = iVar5;
              puVar14 = _DAT_00d77b3e;
            }
            goto switchD_0054b9c7_caseD_405;
          case 0x12d:
            if (iVar5 != 3) goto LAB_0054a5a4;
            pvVar8 = operator_new(0x68);
            local_4._0_1_ = 7;
            if (pvVar8 == (void *)0x0) {
              piVar11 = (int *)0x0;
            }
            else {
              piVar11 = (int *)FUN_00509d30();
            }
            local_4 = CONCAT31(local_4._1_3_,5);
            iVar5 = (**(code **)(*piVar11 + 8))();
            if (iVar5 != 0) {
LAB_0054a58f:
              puVar14 = _DAT_00d77b3e;
              if (piVar11 != (int *)0x0) {
                (**(code **)*piVar11)();
                puVar14 = _DAT_00d77b3e;
              }
              goto switchD_0054b9c7_caseD_405;
            }
            FUN_0050a420();
            FUN_0050a020();
            iVar5 = *(int *)((int)param_1 + 0x117ee);
            piVar6 = operator_new(0xe);
            if (piVar6 == (int *)0x0) {
              piVar6 = (int *)0x0;
            }
            else {
              *piVar6 = (int)piVar11;
              piVar6[1] = iVar5;
              piVar6[2] = 0;
              *(undefined1 *)(piVar6 + 3) = 0;
            }
            iVar7 = *(int *)((int)param_1 + 0x117f2);
            *(int **)((int)param_1 + 0x117ee) = piVar6;
            *(int *)((int)param_1 + 0x117f2) = iVar7 + 1;
            if (iVar7 != 0) {
              *(int **)(iVar5 + 8) = piVar6;
              puVar14 = _DAT_00d77b3e;
              goto switchD_0054b9c7_caseD_405;
            }
            break;
          case 0x134:
            if (iVar5 != 3) goto LAB_0054a3a0;
            (**(code **)(*(int *)param_1[0x4b3] + 8))();
            puVar14 = _DAT_00d77b3e;
            goto switchD_0054b9c7_caseD_405;
          case 0x137:
            FUN_0054f130();
            puVar14 = _DAT_00d77b3e;
            goto switchD_0054b9c7_caseD_405;
          case 0x14f:
            fVar20 = (float10)FUN_00429d80();
            param_1[0xe3e] = (int)(float)fVar20;
            puVar14 = _DAT_00d77b3e;
            goto switchD_0054b9c7_caseD_405;
          case 0x150:
            fVar20 = (float10)FUN_00429d80();
            param_1[0xe3f] = (int)(float)fVar20;
            puVar14 = _DAT_00d77b3e;
            goto switchD_0054b9c7_caseD_405;
          case 0x152:
            fVar20 = (float10)FUN_00429d80();
            param_1[0xe41] = (int)(float)fVar20;
            puVar14 = _DAT_00d77b3e;
            goto switchD_0054b9c7_caseD_405;
          case 0x153:
            fVar20 = (float10)FUN_00429d80();
            param_1[0xe42] = (int)(float)fVar20;
            puVar14 = _DAT_00d77b3e;
            goto switchD_0054b9c7_caseD_405;
          }
          *(int **)((int)param_1 + 0x117ea) = piVar6;
          puVar14 = _DAT_00d77b3e;
          goto switchD_0054b9c7_caseD_405;
        }
        if (iVar7 == 0x116) {
          (**(code **)(*(int *)((int)param_1 + -0xe) + 0x7c))();
          puVar14 = _DAT_00d77b3e;
          goto switchD_0054b9c7_caseD_405;
        }
        if (iVar7 < 0xef) {
          if (iVar7 != 0xee) {
            switch(iVar7) {
            case 0xc:
              pvVar8 = operator_new(0x158);
              local_4._0_1_ = 0xb;
              if (pvVar8 == (void *)0x0) {
                piVar11 = (int *)0x0;
              }
              else {
                piVar11 = (int *)FUN_004d2c60();
              }
              local_4 = CONCAT31(local_4._1_3_,5);
              iVar5 = (**(code **)(*piVar11 + 8))();
              if (iVar5 != 0) goto LAB_0054a58f;
              iVar5 = *(int *)((int)param_1 + 0x3b62);
              puVar14 = operator_new(0xe);
              if (puVar14 == (undefined4 *)0x0) {
                puVar14 = (undefined4 *)0x0;
              }
              else {
                *puVar14 = piVar11;
                puVar14[1] = iVar5;
                puVar14[2] = 0;
                *(undefined1 *)(puVar14 + 3) = 0;
              }
              iVar7 = *(int *)((int)param_1 + 0x3b66);
              *(undefined4 **)((int)param_1 + 0x3b62) = puVar14;
              *(int *)((int)param_1 + 0x3b66) = iVar7 + 1;
              if (iVar7 == 0) {
                *(undefined4 **)((int)param_1 + 0x3b5e) = puVar14;
                puVar14 = _DAT_00d77b3e;
              }
              else {
                *(undefined4 **)(iVar5 + 8) = puVar14;
                puVar14 = _DAT_00d77b3e;
              }
              goto switchD_0054b9c7_caseD_405;
            default:
              goto switchD_00549aa9_caseD_d;
            case 0x19:
              FUN_005359b0();
              puVar14 = _DAT_00d77b3e;
              goto switchD_0054b9c7_caseD_405;
            case 0x34:
              FUN_005359b0();
              puVar14 = _DAT_00d77b3e;
              goto switchD_0054b9c7_caseD_405;
            case 0x84:
              fVar20 = (float10)FUN_00429d80();
              if (fVar20 <= (float10)_DAT_007e4088) {
                if (fVar20 < (float10)_DAT_007e3380) {
                  fVar20 = (float10)_DAT_007e3380;
                }
                *(float *)((int)param_1 + 0x226) = (float)fVar20;
                puVar14 = _DAT_00d77b3e;
              }
              else {
                *(float *)((int)param_1 + 0x226) = _DAT_007e4088;
                puVar14 = _DAT_00d77b3e;
              }
              goto switchD_0054b9c7_caseD_405;
            case 0xb9:
              piVar11 = operator_new(0x300);
              local_4._0_1_ = 0x10;
              if (piVar11 == (int *)0x0) {
                piVar11 = (int *)0x0;
              }
              else {
                FUN_004fb840();
                *piVar11 = (int)&PTR_FUN_007e6a58;
                piVar11[2] = (int)&PTR_LAB_007e6a44;
                *(undefined ***)((int)piVar11 + 0x12) = &PTR_FUN_007e6a3c;
                piVar6 = piVar11 + 0xb3;
                for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *piVar6 = 0;
                  piVar6 = piVar6 + 1;
                }
                *(undefined1 *)((int)piVar11 + 0x15f) = 1;
              }
              piVar11[0x17] = (int)param_1 + -0xe;
              iVar5 = *(int *)((int)param_1 + 0x4512);
              local_4 = CONCAT31(local_4._1_3_,5);
              puVar14 = operator_new(0xe);
              if (puVar14 == (undefined4 *)0x0) {
                puVar14 = (undefined4 *)0x0;
              }
              else {
                *puVar14 = piVar11;
                puVar14[1] = iVar5;
                puVar14[2] = 0;
                *(undefined1 *)(puVar14 + 3) = 0;
              }
              iVar7 = *(int *)((int)param_1 + 0x4516);
              *(int *)((int)param_1 + 0x4512) = (int)puVar14;
              *(int *)((int)param_1 + 0x4516) = iVar7 + 1;
              if (iVar7 != 0) {
                *(undefined4 **)(iVar5 + 8) = puVar14;
                (**(code **)(*piVar11 + 8))();
                puVar14 = _DAT_00d77b3e;
                goto switchD_0054b9c7_caseD_405;
              }
              break;
            case 0xba:
              piVar11 = operator_new(0x300);
              local_4._0_1_ = 0x12;
              if (piVar11 == (int *)0x0) {
                piVar11 = (int *)0x0;
              }
              else {
                FUN_004fb840();
                *piVar11 = (int)&PTR_FUN_007e69a8;
                piVar11[2] = (int)&PTR_LAB_007e6994;
                *(undefined ***)((int)piVar11 + 0x12) = &PTR_FUN_007e698c;
                piVar6 = piVar11 + 0xb3;
                for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *piVar6 = 0;
                  piVar6 = piVar6 + 1;
                }
                *(undefined1 *)((int)piVar11 + 0x161) = 1;
              }
              piVar11[0x17] = (int)param_1 + -0xe;
              iVar5 = *(int *)((int)param_1 + 0x4512);
              local_4 = CONCAT31(local_4._1_3_,5);
              puVar14 = operator_new(0xe);
              if (puVar14 == (undefined4 *)0x0) {
                puVar14 = (undefined4 *)0x0;
              }
              else {
                *puVar14 = piVar11;
                puVar14[1] = iVar5;
                puVar14[2] = 0;
                *(undefined1 *)(puVar14 + 3) = 0;
              }
              iVar7 = *(int *)((int)param_1 + 0x4516);
              *(int *)((int)param_1 + 0x4512) = (int)puVar14;
              *(int *)((int)param_1 + 0x4516) = iVar7 + 1;
              if (iVar7 != 0) {
                *(undefined4 **)(iVar5 + 8) = puVar14;
                (**(code **)(*piVar11 + 8))();
                puVar14 = _DAT_00d77b3e;
                goto switchD_0054b9c7_caseD_405;
              }
              break;
            case 0xbb:
              piVar11 = operator_new(0x2fc);
              local_4._0_1_ = 0x11;
              if (piVar11 == (int *)0x0) {
                piVar11 = (int *)0x0;
              }
              else {
                FUN_004fb840();
                *piVar11 = (int)&PTR_FUN_007e6a00;
                piVar11[2] = (int)&PTR_LAB_007e69ec;
                *(undefined ***)((int)piVar11 + 0x12) = &PTR_LAB_007e69e4;
                piVar11[0xb3] = 0;
                piVar6 = piVar11 + 0xb4;
                for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *piVar6 = 0;
                  piVar6 = piVar6 + 1;
                }
                piVar11[0xbd] = 0x7f7fffff;
                *(undefined1 *)(piVar11 + 0x58) = 1;
              }
              piVar11[0x17] = (int)param_1 + -0xe;
              iVar5 = *(int *)((int)param_1 + 0x4512);
              local_4 = CONCAT31(local_4._1_3_,5);
              puVar14 = operator_new(0xe);
              if (puVar14 == (undefined4 *)0x0) {
                puVar14 = (undefined4 *)0x0;
              }
              else {
                *puVar14 = piVar11;
                puVar14[1] = iVar5;
                puVar14[2] = 0;
                *(undefined1 *)(puVar14 + 3) = 0;
              }
              iVar7 = *(int *)((int)param_1 + 0x4516);
              *(int *)((int)param_1 + 0x4512) = (int)puVar14;
              *(int *)((int)param_1 + 0x4516) = iVar7 + 1;
              if (iVar7 != 0) {
                *(undefined4 **)(iVar5 + 8) = puVar14;
                (**(code **)(*piVar11 + 8))();
                puVar14 = _DAT_00d77b3e;
                goto switchD_0054b9c7_caseD_405;
              }
              break;
            case 0xe4:
              iVar5 = param_1[0x4b3];
              uVar10 = FUN_004af6b0();
              *(undefined4 *)(iVar5 + 0x3b30) = uVar10;
              puVar14 = _DAT_00d77b3e;
              goto switchD_0054b9c7_caseD_405;
            case 0xe9:
              puVar14 = operator_new(0xc);
              local_4._0_1_ = 6;
              if (puVar14 != (undefined4 *)0x0) {
                FUN_0054ede0();
                uVar15 = 0xffffffff;
                *puVar14 = &PTR_FUN_007e93f4;
                piVar11 = param_2 + 0x104;
                do {
                  piVar6 = piVar11;
                  if (uVar15 == 0) break;
                  uVar15 = uVar15 - 1;
                  piVar6 = (int *)((int)piVar11 + 1);
                  iVar5 = *piVar11;
                  piVar11 = piVar6;
                } while ((char)iVar5 != '\0');
                uVar15 = ~uVar15;
                puVar9 = (undefined4 *)((int)piVar6 - uVar15);
                puVar14 = (undefined4 *)(puVar14[1] + 0xe);
                for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *puVar14 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar14 = puVar14 + 1;
                }
                for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                  *(undefined1 *)puVar14 = *(undefined1 *)puVar9;
                  puVar9 = (undefined4 *)((int)puVar9 + 1);
                  puVar14 = (undefined4 *)((int)puVar14 + 1);
                }
              }
              local_4 = CONCAT31(local_4._1_3_,5);
              FUN_00565c30();
              puVar14 = _DAT_00d77b3e;
              goto switchD_0054b9c7_caseD_405;
            }
            *(undefined4 **)((int)param_1 + 0x450e) = puVar14;
            (**(code **)(*piVar11 + 8))();
            puVar14 = _DAT_00d77b3e;
            goto switchD_0054b9c7_caseD_405;
          }
          if (iVar5 == 3) {
            pvVar8 = operator_new(0x2b6);
            local_4._0_1_ = 0x18;
            if (pvVar8 == (void *)0x0) {
              piVar11 = (int *)0x0;
            }
            else {
              piVar11 = (int *)FUN_00507bc0();
            }
            local_4 = CONCAT31(local_4._1_3_,5);
            (**(code **)(*piVar11 + 0x38))();
            (**(code **)(*piVar11 + 8))();
            FUN_00521540();
            iVar5 = *(int *)((int)param_1 + 0x44fe);
            puVar14 = (undefined4 *)((int)param_1 + 0x44fe);
            puVar9 = operator_new(0xe);
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              *puVar9 = piVar11;
              puVar9[1] = iVar5;
              puVar9[2] = 0;
              *(undefined1 *)(puVar9 + 3) = 0;
            }
            *puVar14 = puVar9;
            iVar7 = *(int *)((int)param_1 + 0x4502);
            *(int *)((int)param_1 + 0x4502) = iVar7 + 1;
            if (iVar7 == 0) {
              *(undefined4 *)((int)param_1 + 0x44fa) = *puVar14;
              FUN_005088c0();
              puVar14 = _DAT_00d77b3e;
            }
            else {
              *(undefined4 *)(iVar5 + 8) = *puVar14;
              FUN_005088c0();
              puVar14 = _DAT_00d77b3e;
            }
            goto switchD_0054b9c7_caseD_405;
          }
        }
        else {
          switch(iVar7) {
          case 0xef:
            if (iVar5 == 3) {
              pvVar8 = operator_new(700);
              local_4._0_1_ = 0x17;
              if (pvVar8 == (void *)0x0) {
                piVar11 = (int *)0x0;
              }
              else {
                piVar11 = (int *)FUN_005169b0();
              }
              local_4 = CONCAT31(local_4._1_3_,5);
              (**(code **)(*piVar11 + 0x38))();
              (**(code **)(*piVar11 + 8))();
              FUN_00521540();
              iVar5 = *(int *)((int)param_1 + 0x44fe);
              puVar14 = (undefined4 *)((int)param_1 + 0x44fe);
              puVar9 = operator_new(0xe);
              if (puVar9 == (undefined4 *)0x0) {
                puVar9 = (undefined4 *)0x0;
              }
              else {
                *puVar9 = piVar11;
                puVar9[1] = iVar5;
                puVar9[2] = 0;
                *(undefined1 *)(puVar9 + 3) = 0;
              }
              *puVar14 = puVar9;
              iVar7 = *(int *)((int)param_1 + 0x4502);
              *(int *)((int)param_1 + 0x4502) = iVar7 + 1;
              if (iVar7 == 0) {
                *(undefined4 *)((int)param_1 + 0x44fa) = *puVar14;
                (**(code **)(*piVar11 + 0x60))();
                puVar14 = _DAT_00d77b3e;
              }
              else {
                *(undefined4 *)(iVar5 + 8) = *puVar14;
                (**(code **)(*piVar11 + 0x60))();
                puVar14 = _DAT_00d77b3e;
              }
              goto switchD_0054b9c7_caseD_405;
            }
            break;
          case 0xf0:
            if (iVar5 == 3) {
              pvVar8 = operator_new(0x2aa);
              local_4._0_1_ = 0x19;
              if (pvVar8 == (void *)0x0) {
                piVar11 = (int *)0x0;
              }
              else {
                piVar11 = (int *)FUN_004ef550();
              }
              local_4 = CONCAT31(local_4._1_3_,5);
              (**(code **)(*piVar11 + 0x38))();
              (**(code **)(*piVar11 + 8))();
              FUN_00521540();
              iVar5 = *(int *)((int)param_1 + 0x44fe);
              puVar14 = (undefined4 *)((int)param_1 + 0x44fe);
              puVar9 = operator_new(0xe);
              if (puVar9 == (undefined4 *)0x0) {
                puVar9 = (undefined4 *)0x0;
              }
              else {
                *puVar9 = piVar11;
                puVar9[1] = iVar5;
                puVar9[2] = 0;
                *(undefined1 *)(puVar9 + 3) = 0;
              }
              *puVar14 = puVar9;
              iVar7 = *(int *)((int)param_1 + 0x4502);
              *(int *)((int)param_1 + 0x4502) = iVar7 + 1;
              if (iVar7 == 0) {
                *(undefined4 *)((int)param_1 + 0x44fa) = *puVar14;
                FUN_004f00e0();
                puVar14 = _DAT_00d77b3e;
              }
              else {
                *(undefined4 *)(iVar5 + 8) = *puVar14;
                FUN_004f00e0();
                puVar14 = _DAT_00d77b3e;
              }
              goto switchD_0054b9c7_caseD_405;
            }
            break;
          default:
            goto switchD_00549aa9_caseD_d;
          case 0xf6:
            fVar20 = (float10)FUN_00429d80();
            *(float *)((int)param_1 + 0x39ba) = (float)fVar20;
            *(float *)((int)param_1 + 0x39da) = (float)fVar20;
            puVar14 = _DAT_00d77b3e;
            goto switchD_0054b9c7_caseD_405;
          case 0x10b:
            iVar5 = FUN_004af6b0();
            *(undefined1 *)(iVar5 + 0x349e + (int)param_1) = 1;
            puVar14 = _DAT_00d77b3e;
            goto switchD_0054b9c7_caseD_405;
          case 0x10c:
            if (iVar5 == 0x524) {
              fVar20 = (float10)FUN_00429d80();
              *(float *)((int)param_1 + 0x3a02) = (float)fVar20;
              puVar14 = _DAT_00d77b3e;
            }
            goto switchD_0054b9c7_caseD_405;
          case 0x10d:
            if (iVar5 == 0x524) {
              fVar20 = (float10)FUN_00429d80();
              *(float *)((int)param_1 + 0x3a06) = (float)fVar20;
              puVar14 = _DAT_00d77b3e;
            }
            goto switchD_0054b9c7_caseD_405;
          case 0x113:
            local_130 = 0;
            local_4._0_1_ = 0x15;
            FUN_005359b0();
            local_4 = CONCAT31(local_4._1_3_,5);
            bVar19 = false;
            while (puVar14 = _DAT_00d77b3e, bVar19) {
              local_130 = *(int *)(local_130 + 10);
              FUN_00796cd8();
              bVar19 = local_130 != 0;
            }
            goto switchD_0054b9c7_caseD_405;
          case 0x114:
            FUN_005359b0();
            puVar14 = _DAT_00d77b3e;
            if (*(char *)(DAT_00d685a6 + 0x2ce2) == '\0') {
              iVar5 = *(int *)((int)param_1 + 0x35fe);
              while (puVar14 = _DAT_00d77b3e, iVar5 != 0) {
                iVar5 = *(int *)(iVar5 + 10);
                iVar7 = FUN_00428460();
                if ((iVar7 == 0) || (iVar7 == 8)) {
                  if (DAT_00dc4b5f != '\0') {
                    (**(code **)(*param_1 + 0xc))();
                    FUN_00429a50();
                  }
                  uVar10 = (**(code **)(*param_1 + 0xc))();
                  FUN_00429a00(s_ERROR____s_has_an_unknown_tech_I_00852158,uVar10);
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                  (**(code **)(*(int *)((int)param_1 + 0x35fa) + 0x18))();
                }
                else {
                  FUN_007264e0();
                }
              }
            }
            goto switchD_0054b9c7_caseD_405;
          case 0x115:
            (**(code **)(*(int *)((int)param_1 + -0xe) + 0x78))();
            puVar14 = _DAT_00d77b3e;
            goto switchD_0054b9c7_caseD_405;
          }
        }
      }
LAB_0054a3a0:
      FUN_005349b0();
      puVar14 = _DAT_00d77b3e;
      goto switchD_0054b9c7_caseD_405;
    }
    if (iVar7 < 0x242) {
      if (iVar7 != 0x241) {
        switch(iVar7) {
        case 0x194:
          bVar3 = true;
          if (iVar5 == 3) {
            (**(code **)(*(int *)param_1[0x45fe] + 0x30))();
            puVar14 = _DAT_00d77b3e;
          }
          else if (iVar5 == 0x527) {
            iVar5 = *param_2;
            FUN_00429d50();
            pvVar8 = operator_new(0x316);
            local_4._0_1_ = 0x16;
            if (pvVar8 == (void *)0x0) {
              iVar7 = 0;
            }
            else {
              iVar7 = FUN_00533e40();
            }
            *param_2 = iVar7;
            local_4 = CONCAT31(local_4._1_3_,5);
            (**(code **)(*(int *)param_1[0x45fe] + 0x30))();
            if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
              (*(code *)**(undefined4 **)*param_2)();
            }
            *param_2 = iVar5;
            puVar14 = _DAT_00d77b3e;
          }
          else {
            FUN_005349b0();
            puVar14 = _DAT_00d77b3e;
          }
          goto switchD_0054b9c7_caseD_405;
        default:
          goto switchD_00549aa9_caseD_d;
        case 0x1b3:
          if (iVar5 == 0x524) {
            fVar20 = (float10)FUN_00429d80();
            *(float *)((int)param_1 + 0x39be) = (float)fVar20;
          }
          *(undefined4 *)((int)param_1 + 0x39de) = *(undefined4 *)((int)param_1 + 0x39be);
          puVar14 = _DAT_00d77b3e;
          goto switchD_0054b9c7_caseD_405;
        case 0x1dc:
          (**(code **)(*(int *)((int)param_1 + -0xe) + 0x8c))();
          puVar14 = _DAT_00d77b3e;
          goto switchD_0054b9c7_caseD_405;
        case 500:
          if (iVar5 == 0x524) {
            fVar20 = (float10)FUN_00429d80();
            param_1[0x4600] = (int)(float)fVar20;
            FUN_006cb0f0();
            puVar14 = _DAT_00d77b3e;
          }
          goto switchD_0054b9c7_caseD_405;
        case 0x1f9:
          if (iVar5 == 3) {
            uVar15 = 0xffffffff;
            pcVar17 = &DAT_0088ebf8;
            do {
              pcVar18 = pcVar17;
              if (uVar15 == 0) break;
              uVar15 = uVar15 - 1;
              pcVar18 = pcVar17 + 1;
              cVar4 = *pcVar17;
              pcVar17 = pcVar18;
            } while (cVar4 != '\0');
            uVar15 = ~uVar15;
            pcVar17 = pcVar18 + -uVar15;
            pcVar18 = (char *)((int)param_1 + 0x116);
            for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar18 = *(undefined4 *)pcVar17;
              pcVar17 = pcVar17 + 4;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
              *pcVar18 = *pcVar17;
              pcVar17 = pcVar17 + 1;
              pcVar18 = pcVar18 + 1;
            }
            DAT_00dc4b64 = 1;
            FUN_006b3b90();
            DAT_00dc4b64 = 0;
            bVar2 = false;
            puVar14 = _DAT_00d77b3e;
          }
          else if (iVar5 == 0x527) {
            FUN_00540ab0();
            bVar2 = false;
            puVar14 = _DAT_00d77b3e;
          }
          else {
            FUN_005349b0();
            puVar14 = _DAT_00d77b3e;
          }
          goto switchD_0054b9c7_caseD_405;
        case 0x202:
          iVar5 = FUN_00535b80();
          puVar14 = _DAT_00d77b3e;
          if (iVar5 != 0) {
            FUN_005349b0();
            puVar14 = _DAT_00d77b3e;
          }
          goto switchD_0054b9c7_caseD_405;
        case 0x206:
          if (iVar5 == 0x524) {
            fVar20 = (float10)FUN_00429d80();
            param_1[0xe07] = (int)(float)fVar20;
            puVar14 = _DAT_00d77b3e;
          }
          goto switchD_0054b9c7_caseD_405;
        case 0x209:
          do {
            while (iVar5 = FUN_00535490(), iVar5 == 1) {
              FUN_004af6b0();
              FUN_0054f130();
            }
            piVar11 = (int *)FUN_00534391();
          } while (*piVar11 != 4);
          FUN_005343dc();
          puVar14 = _DAT_00d77b3e;
          goto switchD_0054b9c7_caseD_405;
        case 0x20a:
          (**(code **)(*(int *)((int)param_1 + 0x4652) + 8))();
          puVar14 = _DAT_00d77b3e;
          goto switchD_0054b9c7_caseD_405;
        case 0x20b:
          (**(code **)(*(int *)((int)param_1 + 0x464e) + 8))();
          puVar14 = _DAT_00d77b3e;
          goto switchD_0054b9c7_caseD_405;
        case 0x20c:
          (**(code **)(*(int *)((int)param_1 + 0x4656) + 8))();
          puVar14 = _DAT_00d77b3e;
          goto switchD_0054b9c7_caseD_405;
        case 0x224:
          pvVar8 = operator_new(0x8a);
          local_4._0_1_ = 0xd;
          if (pvVar8 == (void *)0x0) {
            local_1f8 = (int *)0x0;
          }
          else {
            local_1f8 = (int *)FUN_004f10b0();
          }
          iVar5 = param_1[0xedd];
          local_4 = CONCAT31(local_4._1_3_,5);
          puVar14 = operator_new(0xe);
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = (undefined4 *)0x0;
          }
          else {
            puVar14[1] = iVar5;
            *puVar14 = local_1f8;
            puVar14[2] = 0;
            *(undefined1 *)(puVar14 + 3) = 0;
          }
          iVar7 = param_1[0xede];
          param_1[0xedd] = (int)puVar14;
          param_1[0xede] = iVar7 + 1;
          if (iVar7 == 0) {
            param_1[0xedc] = (int)puVar14;
            local_1f8[0xb] = (int)param_1 + -0xe;
            (**(code **)(*local_1f8 + 8))();
            puVar14 = _DAT_00d77b3e;
          }
          else {
            *(undefined4 **)(iVar5 + 8) = puVar14;
            local_1f8[0xb] = (int)param_1 + -0xe;
            (**(code **)(*local_1f8 + 8))();
            puVar14 = _DAT_00d77b3e;
          }
          goto switchD_0054b9c7_caseD_405;
        case 0x225:
          pvVar8 = operator_new(0x62);
          local_4._0_1_ = 0xc;
          if (pvVar8 == (void *)0x0) {
            local_1f8 = (int *)0x0;
          }
          else {
            local_1f8 = (int *)FUN_004f11a0();
          }
          iVar5 = param_1[0xedd];
          local_4 = CONCAT31(local_4._1_3_,5);
          puVar14 = operator_new(0xe);
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = (undefined4 *)0x0;
          }
          else {
LAB_0054aef8:
            *puVar14 = local_1f8;
            puVar14[1] = iVar5;
            puVar14[2] = 0;
            *(undefined1 *)(puVar14 + 3) = 0;
          }
          break;
        case 0x226:
          pvVar8 = operator_new(0x5e);
          local_4._0_1_ = 0xe;
          if (pvVar8 == (void *)0x0) {
            piVar11 = (int *)0x0;
          }
          else {
            piVar11 = (int *)FUN_004f0fc0();
          }
          iVar5 = param_1[0xedd];
          local_4 = CONCAT31(local_4._1_3_,5);
          puVar14 = operator_new(0xe);
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = (undefined4 *)0x0;
          }
          else {
            *puVar14 = piVar11;
            puVar14[1] = iVar5;
            puVar14[2] = 0;
            *(undefined1 *)(puVar14 + 3) = 0;
          }
          iVar7 = param_1[0xede];
          param_1[0xedd] = (int)puVar14;
          param_1[0xede] = iVar7 + 1;
          if (iVar7 == 0) {
            param_1[0xedc] = (int)puVar14;
          }
          else {
            *(undefined4 **)(iVar5 + 8) = puVar14;
          }
          piVar11[0xb] = (int)param_1 + -0xe;
          (**(code **)(*piVar11 + 8))();
          iVar5 = *(int *)((int)piVar11 + 0x16);
          puVar14 = _DAT_00d77b3e;
          if (iVar5 != 0) {
            iVar7 = *(int *)(DAT_00ab27b4 + 0x22 + iVar5 * 0x4b2);
            iVar5 = DAT_00ab27b4 + 0x1a + iVar5 * 0x4b2;
            puVar14 = operator_new(0xe);
            if (puVar14 == (undefined4 *)0x0) {
              puVar14 = (undefined4 *)0x0;
            }
            else {
              *puVar14 = piVar11;
              puVar14[1] = iVar7;
              puVar14[2] = 0;
              *(undefined1 *)(puVar14 + 3) = 0;
            }
            iVar12 = *(int *)(iVar5 + 0xc);
            *(undefined4 **)(iVar5 + 8) = puVar14;
            *(int *)(iVar5 + 0xc) = iVar12 + 1;
            if (iVar12 == 0) {
              *(undefined4 **)(iVar5 + 4) = puVar14;
              puVar14 = _DAT_00d77b3e;
            }
            else {
              *(undefined4 **)(iVar7 + 8) = puVar14;
              puVar14 = _DAT_00d77b3e;
            }
          }
          goto switchD_0054b9c7_caseD_405;
        case 0x227:
          pvVar8 = operator_new(0x5e);
          local_4._0_1_ = 0xf;
          if (pvVar8 == (void *)0x0) {
            local_1f8 = (int *)0x0;
          }
          else {
            local_1f8 = (int *)FUN_004f0ff0();
          }
          iVar5 = param_1[0xedd];
          local_4 = CONCAT31(local_4._1_3_,5);
          puVar14 = operator_new(0xe);
          if (puVar14 != (undefined4 *)0x0) goto LAB_0054aef8;
          puVar14 = (undefined4 *)0x0;
          break;
        case 0x232:
          fVar20 = (float10)FUN_00429d80();
          *(float *)((int)param_1 + 0x39b2) = (float)fVar20;
          *(float *)((int)param_1 + 0x39d2) = (float)fVar20;
          puVar14 = _DAT_00d77b3e;
          goto switchD_0054b9c7_caseD_405;
        case 0x233:
          fVar20 = (float10)FUN_00429d80();
          *(float *)((int)param_1 + 0x39ae) = (float)fVar20;
          *(float *)((int)param_1 + 0x39ce) = (float)fVar20;
          puVar14 = _DAT_00d77b3e;
          goto switchD_0054b9c7_caseD_405;
        case 0x234:
          fVar20 = (float10)FUN_00429d80();
          *(float *)((int)param_1 + 0x39aa) = (float)fVar20;
          *(float *)((int)param_1 + 0x39ca) = (float)fVar20;
          puVar14 = _DAT_00d77b3e;
          goto switchD_0054b9c7_caseD_405;
        case 0x235:
          fVar20 = (float10)FUN_00429d80();
          *(float *)((int)param_1 + 0x39a6) = (float)fVar20;
          *(float *)((int)param_1 + 0x39c6) = (float)fVar20;
          puVar14 = _DAT_00d77b3e;
          goto switchD_0054b9c7_caseD_405;
        }
        param_1[0xedd] = (int)puVar14;
        iVar7 = param_1[0xede];
        param_1[0xede] = iVar7 + 1;
        if (iVar7 == 0) {
          param_1[0xedc] = (int)puVar14;
          local_1f8[0xb] = (int)param_1 + -0xe;
          (**(code **)(*local_1f8 + 8))();
          puVar14 = _DAT_00d77b3e;
        }
        else {
          *(undefined4 **)(iVar5 + 8) = puVar14;
          local_1f8[0xb] = (int)param_1 + -0xe;
          (**(code **)(*local_1f8 + 8))();
          puVar14 = _DAT_00d77b3e;
        }
        goto switchD_0054b9c7_caseD_405;
      }
      iVar5 = FUN_004af6b0();
      param_1[0x4613] = iVar5;
      puVar14 = _DAT_00d77b3e;
      goto switchD_0054b9c7_caseD_405;
    }
    if (iVar7 < 0x2c0) {
      if (iVar7 == 0x2bf) {
        local_4._0_1_ = 0x14;
        FUN_005359b0();
        iVar5 = 0;
        bVar19 = false;
        local_4 = CONCAT31(local_4._1_3_,5);
        while (puVar14 = _DAT_00d77b3e, bVar19) {
          iVar5 = *(int *)(iVar5 + 10);
          FUN_00796cd8();
          bVar19 = iVar5 != 0;
        }
      }
      else {
        switch(iVar7) {
        case 0x242:
          iVar5 = FUN_00763ce0();
          param_1[0x4614] = iVar5;
          puVar14 = _DAT_00d77b3e;
          break;
        default:
          goto switchD_00549aa9_caseD_d;
        case 0x251:
          do {
            while (iVar5 = FUN_00535490(), iVar5 == 1) {
              FUN_004af6b0();
              FUN_0054f130();
            }
            piVar11 = (int *)FUN_00534391();
          } while (*piVar11 != 4);
          FUN_005343dc();
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x25c:
          if (iVar5 != 3) goto LAB_0054a3a0;
          (**(code **)(**(int **)((int)param_1 + 0x236) + 0xc))();
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x29e:
          if (iVar5 == 3) {
            pvVar8 = operator_new(0xc0);
            local_4._0_1_ = 9;
            if (pvVar8 == (void *)0x0) {
              piVar11 = (int *)0x0;
            }
            else {
              piVar11 = (int *)FUN_00761c60();
            }
            local_4._0_1_ = 5;
            (**(code **)(*piVar11 + 8))();
            piVar11[0x1f] = param_1[-2];
            pvVar8 = operator_new(0xc);
            local_4._0_1_ = 10;
            if (pvVar8 != (void *)0x0) {
              uVar10 = FUN_00447250();
              FUN_00449290(uVar10);
              uVar10 = FUN_00458110();
              uVar13 = FUN_0045fec0(uVar10);
              FUN_004639d0(0x129,uVar13,uVar10);
            }
            local_4 = CONCAT31(local_4._1_3_,5);
            FUN_00565c30();
            puVar9 = DAT_00d77b42;
            DAT_00d77b42 = operator_new(0xe);
            if (DAT_00d77b42 == (undefined4 *)0x0) {
              DAT_00d77b42 = (undefined4 *)0x0;
            }
            else {
              *DAT_00d77b42 = piVar11;
              DAT_00d77b42[1] = puVar9;
              DAT_00d77b42[2] = 0;
              *(undefined1 *)(DAT_00d77b42 + 3) = 0;
            }
            iVar5 = DAT_00d77b46 + 1;
            bVar19 = DAT_00d77b46 != 0;
            puVar14 = DAT_00d77b42;
            DAT_00d77b46 = iVar5;
            if (bVar19) {
              puVar9[2] = DAT_00d77b42;
              puVar14 = _DAT_00d77b3e;
            }
          }
          else {
LAB_0054a5a4:
            FUN_005349b0();
            puVar14 = _DAT_00d77b3e;
          }
          break;
        case 0x2a8:
          *(bool *)((int)param_1 + 0xe305) = iVar5 == 0x111;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x2ab:
          fVar20 = (float10)FUN_00429d80();
          *(float *)((int)param_1 + 0x22e) = (float)fVar20;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x2ac:
          fVar20 = (float10)FUN_00429d80();
          *(float *)((int)param_1 + 0x232) = (float)fVar20;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x2b2:
          if (iVar5 == 0x524) {
            fVar20 = (float10)FUN_00429d80();
            *(float *)((int)param_1 + 0x333e) = (float)fVar20;
            puVar14 = _DAT_00d77b3e;
          }
          break;
        case 0x2be:
          pvVar8 = operator_new(0xde);
          local_4._0_1_ = 8;
          if (pvVar8 == (void *)0x0) {
            piVar11 = (int *)0x0;
          }
          else {
            piVar11 = (int *)FUN_0075afb0();
          }
          local_4 = CONCAT31(local_4._1_3_,5);
          (**(code **)(*piVar11 + 8))();
          piVar11[0x32] = param_1[-2];
          iVar5 = param_1[0xd97];
          puVar14 = operator_new(0xe);
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = (undefined4 *)0x0;
          }
          else {
            *puVar14 = piVar11;
            puVar14[1] = iVar5;
            puVar14[2] = 0;
            *(undefined1 *)(puVar14 + 3) = 0;
          }
          iVar7 = param_1[0xd98];
          param_1[0xd97] = (int)puVar14;
          param_1[0xd98] = iVar7 + 1;
          if (iVar7 == 0) {
            param_1[0xd96] = (int)puVar14;
            puVar14 = _DAT_00d77b3e;
          }
          else {
            *(undefined4 **)(iVar5 + 8) = puVar14;
            puVar14 = _DAT_00d77b3e;
          }
        }
      }
      goto switchD_0054b9c7_caseD_405;
    }
    switch(iVar7) {
    case 0x338:
      pvVar8 = operator_new(0x42);
      local_4._0_1_ = 0x13;
      if (pvVar8 == (void *)0x0) {
        local_1f8 = (int *)0x0;
      }
      else {
        local_1f8 = (int *)FUN_0075a7c0();
      }
      iVar5 = *(int *)((int)param_1 + 0x364a);
      local_4 = CONCAT31(local_4._1_3_,5);
      puVar14 = operator_new(0xe);
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        puVar14[1] = iVar5;
        *puVar14 = local_1f8;
        puVar14[2] = 0;
        *(undefined1 *)(puVar14 + 3) = 0;
      }
      iVar7 = *(int *)((int)param_1 + 0x364e);
      *(undefined4 **)((int)param_1 + 0x364a) = puVar14;
      *(int *)((int)param_1 + 0x364e) = iVar7 + 1;
      if (iVar7 == 0) {
        *(undefined4 **)((int)param_1 + 0x3646) = puVar14;
        (**(code **)(*local_1f8 + 8))();
        puVar14 = _DAT_00d77b3e;
      }
      else {
        *(undefined4 **)(iVar5 + 8) = puVar14;
        (**(code **)(*local_1f8 + 8))();
        puVar14 = _DAT_00d77b3e;
      }
      goto switchD_0054b9c7_caseD_405;
    case 0x343:
      (**(code **)(*(int *)((int)param_1 + -0xe) + 0x84))();
      puVar14 = _DAT_00d77b3e;
      goto switchD_0054b9c7_caseD_405;
    case 0x344:
      (**(code **)(*(int *)((int)param_1 + -0xe) + 0x84))();
      puVar14 = _DAT_00d77b3e;
      goto switchD_0054b9c7_caseD_405;
    case 0x368:
      fVar20 = (float10)FUN_00429d80();
      param_1[0xdfe] = (int)(float)fVar20;
      puVar14 = _DAT_00d77b3e;
      goto switchD_0054b9c7_caseD_405;
    case 0x369:
      *(bool *)(param_1 + 0x38c1) = iVar5 == 0x111;
      puVar14 = _DAT_00d77b3e;
      goto switchD_0054b9c7_caseD_405;
    case 0x36a:
      *(bool *)((int)param_1 + 0xe311) = iVar5 == 0x111;
      puVar14 = _DAT_00d77b3e;
      goto switchD_0054b9c7_caseD_405;
    case 0x36b:
      *(bool *)(param_1 + 0x38c4) = iVar5 == 0x111;
      puVar14 = _DAT_00d77b3e;
      goto switchD_0054b9c7_caseD_405;
    case 0x36c:
      iVar5 = FUN_007a7b3c();
      param_1[0x38c2] = iVar5;
      puVar14 = _DAT_00d77b3e;
      goto switchD_0054b9c7_caseD_405;
    }
  }
  else {
    if (iVar7 < 0x3bc) {
      if (iVar7 == 0x3bb) {
        FUN_005359b0();
        puVar14 = _DAT_00d77b3e;
      }
      else {
        switch(iVar7) {
        case 0x36e:
          *(bool *)((int)param_1 + 0xe306) = iVar5 == 0x111;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x36f:
          iVar5 = FUN_007a7b3c();
          param_1[0xe00] = iVar5;
          puVar14 = _DAT_00d77b3e;
          break;
        default:
          goto switchD_00549aa9_caseD_d;
        case 0x371:
          fVar20 = (float10)FUN_00429d80();
          param_1[0xdf2] = (int)(float)fVar20;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x372:
          fVar20 = (float10)FUN_00429d80();
          param_1[0xded] = (int)(float)fVar20;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x373:
          fVar20 = (float10)FUN_00429d80();
          param_1[0xdef] = (int)(float)fVar20;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x374:
          fVar20 = (float10)FUN_00429d80();
          param_1[0xdf0] = (int)(float)fVar20;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x375:
          fVar20 = (float10)FUN_00429d80();
          param_1[0xdf1] = (int)(float)fVar20;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x376:
          fVar20 = (float10)FUN_00429d80();
          param_1[0xdee] = (int)(float)fVar20;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x377:
          fVar20 = (float10)FUN_00429d80();
          param_1[0xdf3] = (int)(float)fVar20;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x37c:
          fVar20 = (float10)FUN_00429d80();
          param_1[0xdf7] = (int)(float)fVar20;
          param_1[0xdf9] = (int)(float)fVar20;
          param_1[0xdfa] = param_1[0xdf7];
          param_1[0xdfb] = param_1[0xdf7];
          param_1[0xdfc] = param_1[0xdf7];
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x37d:
          fVar20 = (float10)FUN_00429d80();
          param_1[0xdf8] = (int)(float)fVar20;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x37e:
          fVar20 = (float10)FUN_00429d80();
          param_1[0xdff] = (int)(float)fVar20;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x37f:
          fVar20 = (float10)FUN_00429d80();
          param_1[0xdf5] = (int)(float)fVar20;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x380:
          fVar20 = (float10)FUN_00429d80();
          param_1[0xdf6] = (int)(float)fVar20;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x382:
          fVar20 = (float10)FUN_00429d80();
          *(float *)((int)param_1 + 0x39b6) = (float)fVar20;
          *(float *)((int)param_1 + 0x39d6) = (float)fVar20;
          puVar14 = _DAT_00d77b3e;
          break;
        case 900:
          fVar20 = (float10)FUN_00429d80();
          param_1[0x38bc] = (int)(float)fVar20;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x385:
          fVar20 = (float10)FUN_00429d80();
          param_1[0x38bd] = (int)(float)fVar20;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x386:
          fVar20 = (float10)FUN_00429d80();
          param_1[0x38be] = (int)(float)fVar20;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x387:
          fVar20 = (float10)FUN_00429d80();
          param_1[0x38bf] = (int)(float)fVar20;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x388:
          fVar20 = (float10)FUN_00429d80();
          *(float *)((int)param_1 + 0xe856) = (float)fVar20;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x389:
          iVar5 = FUN_007a7b3c();
          param_1[0x38c0] = iVar5;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x38a:
          *(bool *)((int)param_1 + 0xe312) = iVar5 == 0x111;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x38b:
          iVar5 = FUN_007a7b3c();
          param_1[0x1191] = iVar5;
          puVar14 = _DAT_00d77b3e;
          break;
        case 0x38c:
          FUN_0054f130();
          puVar14 = _DAT_00d77b3e;
        }
      }
      goto switchD_0054b9c7_caseD_405;
    }
    if (iVar7 < 0x49d) {
      if (iVar7 == 0x49c) {
        fVar20 = (float10)FUN_00429d80();
        *(float *)((int)param_1 + 0xe852) = (float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      }
      switch(iVar7) {
      case 0x3cf:
        if (iVar5 == 0x524) {
          iVar5 = FUN_007a7b3c();
          param_1[0xe43] = iVar5;
          puVar14 = _DAT_00d77b3e;
        }
        goto switchD_0054b9c7_caseD_405;
      case 0x3d0:
        if (iVar5 != 3) goto LAB_0054a3a0;
        FUN_0054f130();
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x3e1:
        FUN_005359b0();
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x3e2:
        FUN_005359b0();
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x3e3:
        FUN_005359b0();
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x3e5:
        (**(code **)(param_1[0xe08] + 4))();
        puVar14 = _DAT_00d77b3e;
      case 0x405:
        goto switchD_0054b9c7_caseD_405;
      case 0x46d:
        fVar20 = (float10)FUN_00429d80();
        param_1[0x38ba] = (int)(float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x46e:
        fVar20 = (float10)FUN_00429d80();
        param_1[0x38bb] = (int)(float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x475:
        fVar20 = (float10)FUN_00429d80();
        param_1[0x38b3] = (int)(float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x476:
        fVar20 = (float10)FUN_00429d80();
        param_1[0x38b4] = (int)(float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x477:
        fVar20 = (float10)FUN_00429d80();
        param_1[0x38b5] = (int)(float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x478:
        fVar20 = (float10)FUN_00429d80();
        param_1[0x38b6] = (int)(float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x479:
        fVar20 = (float10)FUN_00429d80();
        param_1[0x38b7] = (int)(float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x47a:
        fVar20 = (float10)FUN_00429d80();
        param_1[0x38b8] = (int)(float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x47b:
        fVar20 = (float10)FUN_00429d80();
        param_1[0x38b9] = (int)(float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x489:
        fVar20 = (float10)FUN_00429d80();
        param_1[0xe40] = (int)(float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x493:
        uVar10 = FUN_007a7b3c();
        *(undefined4 *)((int)param_1 + 0x3962) = uVar10;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x494:
        fVar20 = (float10)FUN_00429d80();
        *(float *)((int)param_1 + 0xe83a) = (float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x495:
        fVar20 = (float10)FUN_00429d80();
        *(float *)((int)param_1 + 0xe83e) = (float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x496:
        fVar20 = (float10)FUN_00429d80();
        *(float *)((int)param_1 + 0xe842) = (float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x497:
        fVar20 = (float10)FUN_00429d80();
        *(float *)((int)param_1 + 0xe846) = (float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x498:
        FUN_00429d80();
        iVar5 = __ftol();
        param_1[0xdf4] = iVar5;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x499:
        fVar20 = (float10)FUN_00429d80();
        *(float *)((int)param_1 + 0xe84a) = (float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x49a:
        fVar20 = (float10)FUN_00429d80();
        *(float *)((int)param_1 + 0xe84e) = (float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      }
    }
    else if (iVar7 < 0x566) {
      if (iVar7 == 0x565) {
        fVar20 = (float10)FUN_00429d80();
        param_1[0xe04] = (int)(float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      }
      switch(iVar7) {
      case 0x49f:
        *(bool *)((int)param_1 + 0xe85a) = iVar5 == 0x111;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x4a0:
        *(bool *)((int)param_1 + 0xe85b) = iVar5 == 0x111;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x4a4:
        (**(code **)(*(int *)((int)param_1 + -0xe) + 0xa0))();
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x4a5:
        (**(code **)(*(int *)((int)param_1 + -0xe) + 0xa4))();
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x504:
        iVar5 = 0;
        iVar7 = 0;
        local_1e5 = false;
        uVar10 = *(undefined4 *)(DAT_00893530 + 0x14);
        uVar1 = *(undefined2 *)(DAT_00893530 + 0x18);
        do {
          while (iVar12 = FUN_00535490(), iVar12 == 1) {
            iVar12 = param_2[1];
            if (iVar12 < 0x506) {
              if (iVar12 == 0x505) {
                local_1e5 = param_2[0x103] == 0x111;
              }
              else if (iVar12 == 0xec) {
                iVar5 = FUN_004af6b0();
              }
              else if (iVar12 == 0xfd) {
                FUN_0054f130();
              }
            }
            else if (iVar12 == 0x52b) {
              iVar7 = FUN_007a7b3c();
            }
          }
          piVar11 = (int *)FUN_00534391();
        } while (*piVar11 != 4);
        FUN_005343dc();
        puVar14 = _DAT_00d77b3e;
        if (iVar5 != 0) {
          param_1[iVar5 + 0x203] = iVar7;
          *(bool *)(iVar5 + 0xd6c + (int)param_1) = local_1e5;
          *(undefined4 *)((int)param_1 + iVar5 * 6 + 0x1b08) = uVar10;
          *(undefined2 *)((int)param_1 + iVar5 * 6 + 0x1b0c) = uVar1;
          puVar14 = _DAT_00d77b3e;
        }
        goto switchD_0054b9c7_caseD_405;
      case 0x55e:
        (*(code *)PTR_FUN_007e379c)();
        iVar5 = FUN_00535600();
        puVar14 = _DAT_00d77b3e;
        if (iVar5 != 0) {
          FUN_005349b0();
          puVar14 = _DAT_00d77b3e;
        }
        goto switchD_0054b9c7_caseD_405;
      case 0x55f:
        (*(code *)PTR_FUN_007e379c)();
        iVar5 = FUN_00535600();
        puVar14 = _DAT_00d77b3e;
        if (iVar5 != 0) {
          FUN_005349b0();
          puVar14 = _DAT_00d77b3e;
        }
        goto switchD_0054b9c7_caseD_405;
      case 0x560:
        (*(code *)PTR_FUN_007e379c)();
        iVar5 = FUN_00535600();
        puVar14 = _DAT_00d77b3e;
        if (iVar5 != 0) {
          FUN_005349b0();
          puVar14 = _DAT_00d77b3e;
        }
        goto switchD_0054b9c7_caseD_405;
      case 0x561:
        do {
          while (iVar5 = FUN_00535490(), iVar5 == 1) {
            FUN_004af6b0();
            FUN_0054f130();
          }
          piVar11 = (int *)FUN_00534391();
        } while (*piVar11 != 4);
        FUN_005343dc();
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x562:
        fVar20 = (float10)FUN_00429d80();
        param_1[0xe01] = (int)(float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x563:
        fVar20 = (float10)FUN_00429d80();
        param_1[0xe02] = (int)(float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x564:
        fVar20 = (float10)FUN_00429d80();
        param_1[0xe03] = (int)(float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      }
    }
    else if (iVar7 < 0x68d) {
      if (iVar7 == 0x68c) {
        fVar20 = (float10)FUN_00429d80();
        param_1[0xdf7] = (int)(float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      }
      if (iVar7 < 0x682) {
        if (iVar7 == 0x681) {
          if (iVar5 != 3) goto LAB_0054a3a0;
          DAT_00dc4b64 = 1;
          FUN_006b3b90();
          DAT_00dc4b64 = 0;
          puVar14 = _DAT_00d77b3e;
          goto switchD_0054b9c7_caseD_405;
        }
        if (iVar7 == 0x573) {
          uVar15 = 0xffffffff;
          piVar11 = param_2 + 0x104;
          do {
            piVar6 = piVar11;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            piVar6 = (int *)((int)piVar11 + 1);
            iVar5 = *piVar11;
            piVar11 = piVar6;
          } while ((char)iVar5 != '\0');
          uVar15 = ~uVar15;
          piVar11 = (int *)((int)piVar6 - uVar15);
          piVar6 = param_1 + 0xc3;
          for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *piVar6 = *piVar11;
            piVar11 = piVar11 + 1;
            piVar6 = piVar6 + 1;
          }
          for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(char *)piVar6 = (char)*piVar11;
            piVar11 = (int *)((int)piVar11 + 1);
            piVar6 = (int *)((int)piVar6 + 1);
          }
          FUN_004af700();
          FUN_0044b330();
          iVar5 = **(int **)((int)param_1 + 0x35f6);
          FUN_0044b1c0();
          (**(code **)(iVar5 + 0x2c))();
          (**(code **)(**(int **)((int)param_1 + 0x35f6) + 0x34))();
          puVar14 = _DAT_00d77b3e;
          goto switchD_0054b9c7_caseD_405;
        }
        if (iVar7 == 0x58b) {
          (**(code **)(*(int *)((int)param_1 + -0xe) + 0xac))();
          puVar14 = _DAT_00d77b3e;
          goto switchD_0054b9c7_caseD_405;
        }
        if (iVar7 == 0x66c) {
          (**(code **)(*(int *)((int)param_1 + -0xe) + 0x54))();
          puVar14 = _DAT_00d77b3e;
          goto switchD_0054b9c7_caseD_405;
        }
      }
      else {
        if (iVar7 == 0x68a) {
          fVar20 = (float10)FUN_00429d80();
          param_1[0xe05] = (int)(float)fVar20;
          puVar14 = _DAT_00d77b3e;
          goto switchD_0054b9c7_caseD_405;
        }
        if (iVar7 == 0x68b) {
          fVar20 = (float10)FUN_00429d80();
          param_1[0xe06] = (int)(float)fVar20;
          puVar14 = _DAT_00d77b3e;
          goto switchD_0054b9c7_caseD_405;
        }
      }
    }
    else {
      switch(iVar7) {
      case 0x68d:
        fVar20 = (float10)FUN_00429d80();
        param_1[0xdf9] = (int)(float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x68e:
        fVar20 = (float10)FUN_00429d80();
        param_1[0xdfa] = (int)(float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x68f:
        fVar20 = (float10)FUN_00429d80();
        param_1[0xdfb] = (int)(float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x690:
        fVar20 = (float10)FUN_00429d80();
        param_1[0xdfc] = (int)(float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      case 0x691:
        fVar20 = (float10)FUN_00429d80();
        param_1[0xdfd] = (int)(float)fVar20;
        puVar14 = _DAT_00d77b3e;
        goto switchD_0054b9c7_caseD_405;
      }
    }
  }
switchD_00549aa9_caseD_d:
  iVar5 = FUN_00763c60();
  if (iVar5 == 10) {
    FUN_005349b0();
    while (local_1c4 != (int *)0x0) {
      local_1c4 = (int *)local_1c4[2];
      FUN_00796cd8();
    }
    while (local_1dc != 0) {
      local_1dc = *(int *)(local_1dc + 8);
      FUN_00796cd8();
    }
    while (local_19c != 0) {
      local_19c = *(int *)(local_19c + 10);
      FUN_00796cd8();
    }
    while (local_1b0 != 0) {
      local_1b0 = *(int *)(local_1b0 + 10);
      FUN_00796cd8();
    }
    while (local_188 != (undefined4 *)0x0) {
      local_188 = *(undefined4 **)((int)local_188 + 10);
      FUN_00796cd8();
    }
    while (local_154 != 0) {
      local_154 = *(int *)(local_154 + 8);
      FUN_00796cd8();
    }
    ExceptionList = local_c;
    return 0xfffffffe;
  }
  FUN_00427ed0();
  puVar14 = _DAT_00d77b3e;
  if (((DAT_00dc4b5e != '\0') && (DAT_00d685a6 != 0)) && (*(char *)(DAT_00d685a6 + 0x2ce2) == '\0'))
  {
    iVar7 = FUN_0044c640();
    if (iVar7 == 0) {
      (**(code **)(*param_1 + 0xc))();
      uVar10 = FUN_00763b00(iVar5);
      FUN_00429a00(s_ERROR___Invalid_minister_ID___s__00851be4,param_2 + 0x104,uVar10);
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
      puVar14 = _DAT_00d77b3e;
    }
    else {
      iVar7 = FUN_0044c640();
      if ((*(int *)(iVar7 + 0x1e) <= (int)DAT_00d6138c) ||
         (iVar7 = FUN_0044c640(), *(int *)(iVar7 + 0x22) <= (int)DAT_00d6138c)) {
        FUN_0044c640();
        iVar7 = FUN_0044c640();
        uVar10 = *(undefined4 *)(iVar7 + 0x1e);
        iVar7 = FUN_0044c640();
        piVar11 = (int *)FUN_0044c640();
        uVar10 = (**(code **)(*param_1 + 0xc))((int)DAT_00d6138c,uVar10);
        uVar10 = FUN_00763b00(iVar5,uVar10);
        uVar10 = (**(code **)(*piVar11 + 0xc))(*(undefined4 *)(iVar7 + 0xe),uVar10);
        FUN_00429a00(s_ERROR___Not_valid_for_this_scena_00851b3c,uVar10);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      iVar7 = FUN_0044c640();
      if ((int)DAT_00d6138c < *(int *)(iVar7 + 0x1a)) {
        FUN_0044c640();
        iVar7 = FUN_0044c640();
        piVar11 = (int *)FUN_0044c640();
        uVar10 = (**(code **)(*param_1 + 0xc))((int)DAT_00d6138c);
        uVar10 = FUN_00763b00(iVar5,uVar10);
        uVar10 = (**(code **)(*piVar11 + 0xc))(*(undefined4 *)(iVar7 + 0xe),uVar10);
        FUN_00429a00(s_ERROR___Not_valid_for_this_scena_00851aa8,uVar10);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      iVar7 = FUN_0044c640();
      if (*(int *)(iVar7 + 0x80) != iVar5) {
        iVar7 = FUN_0044c640();
        piVar11 = (int *)FUN_0044c640();
        iVar12 = FUN_0044c640();
        uVar10 = *(undefined4 *)(iVar12 + 0x80);
        (**(code **)(*param_1 + 0xc))();
        uVar13 = (**(code **)(*piVar11 + 0xc))(*(undefined4 *)(iVar7 + 0xe));
        uVar10 = FUN_00763b00(uVar10,uVar13);
        uVar10 = FUN_00763b00(iVar5,uVar10);
        FUN_00429a00(s_ERROR___Invalid_office_position___00851a40,uVar10);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      iVar7 = FUN_0044c640();
      puVar14 = _DAT_00d77b3e;
      if (*(int *)(iVar7 + 0x7c) != param_1[-2]) {
        iVar7 = FUN_0044c640();
        uVar10 = *(undefined4 *)(iVar7 + 0x7c);
        iVar7 = FUN_0044c640();
        piVar11 = (int *)FUN_0044c640();
        (**(code **)(*param_1 + 0xc))();
        uVar13 = FUN_00763b00(iVar5);
        uVar10 = FUN_004af740(uVar10,uVar13);
        uVar10 = (**(code **)(*piVar11 + 0xc))(*(undefined4 *)(iVar7 + 0xe),uVar10);
        FUN_00429a00(s_ERROR___Invalid_minister___s__ID_008519f0,uVar10);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
        puVar14 = _DAT_00d77b3e;
      }
    }
  }
  goto switchD_0054b9c7_caseD_405;
}


