// FUN_006b70f0 @ 6b70f0 size=1119

undefined4 __thiscall FUN_006b70f0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  bool bVar10;
  float10 fVar11;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007d6d13;
  local_c = ExceptionList;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
LAB_006b7134:
  while (iVar4 = FUN_00535490(), iVar4 != 1) {
    piVar9 = (int *)FUN_00534391();
    if (*piVar9 == 4) {
      FUN_005343dc();
      while (local_1c != (int *)0x0) {
        piVar9 = (int *)local_1c[2];
        FUN_00796cd8(local_1c);
        local_1c = piVar9;
      }
      ExceptionList = local_c;
      return 0;
    }
  }
  piVar9 = local_1c;
  piVar5 = local_18;
  if (DAT_00dc4b5e != '\0') {
    iVar4 = param_2[1];
    for (; piVar9 != (int *)0x0; piVar9 = (int *)piVar9[2]) {
      cVar3 = (*(code *)PTR_FUN_007e3798)(*piVar9,iVar4);
      if (cVar3 != '\0') {
        if (piVar9 != (int *)0x0) {
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
      piVar5[1] = (int)local_18;
      piVar5[2] = 0;
      *(undefined1 *)(piVar5 + 3) = 0;
    }
    iVar4 = local_14 + 1;
    bVar10 = local_14 != 0;
    piVar9 = piVar5;
    local_14 = iVar4;
    if (bVar10) {
      local_18[2] = (int)piVar5;
      piVar9 = local_1c;
    }
  }
  local_18 = piVar5;
  local_1c = piVar9;
  iVar4 = param_2[1];
  if (iVar4 < 0x233) {
    if (iVar4 == 0x232) {
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x38) = (float)fVar11;
    }
    else {
      switch(iVar4) {
      case 0xf6:
        fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x3c) = (float)fVar11;
        break;
      default:
        goto switchD_006b7217_caseD_f7;
      case 0x148:
        fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x28) = (float)fVar11;
        break;
      case 0x149:
        puVar8 = *(undefined4 **)(param_1 + 0x1a);
        while (puVar8 != (undefined4 *)0x0) {
          puVar1 = (undefined4 *)puVar8[2];
          FUN_00796cd8(*puVar8);
          FUN_00796cd8(puVar8);
          puVar8 = puVar1;
        }
        *(undefined4 *)(param_1 + 0x1a) = 0;
        *(undefined4 *)(param_1 + 0x1e) = 0;
        *(undefined4 *)(param_1 + 0x22) = 0;
        do {
          while (iVar4 = FUN_00535490(), iVar4 == 1) {
            iVar4 = FUN_004af6b0(param_2 + 2);
            if (iVar4 == 0) {
              if (DAT_00dc4b5e != '\0') {
                FUN_00429a00(s_ERROR___Invalid_country_TAG___s__00869f08,param_2 + 2,
                             *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                DAT_00dc4b60 = DAT_00dc4b60 + 1;
              }
            }
            else {
              pvVar6 = operator_new(8);
              local_4._0_1_ = 1;
              if (pvVar6 == (void *)0x0) {
                piVar9 = (int *)0x0;
              }
              else {
                piVar9 = (int *)FUN_0076c770();
              }
              local_4 = (uint)local_4._1_3_ << 8;
              *piVar9 = iVar4;
              iVar7 = FUN_007a7b3c(param_2 + 0x104);
              piVar9[1] = iVar7;
              cVar3 = (**(code **)(*(int *)(param_1 + 0x16) + 0x24))(piVar9);
              if (cVar3 == '\0') {
                iVar7 = *(int *)(param_1 + 0x1e);
                puVar8 = operator_new(0xe);
                if (puVar8 == (undefined4 *)0x0) {
                  puVar8 = (undefined4 *)0x0;
                }
                else {
                  *puVar8 = piVar9;
                  puVar8[1] = iVar7;
                  puVar8[2] = 0;
                  *(undefined1 *)(puVar8 + 3) = 0;
                }
                iVar2 = *(int *)(param_1 + 0x22);
                *(undefined4 **)(param_1 + 0x1e) = puVar8;
                *(int *)(param_1 + 0x22) = iVar2 + 1;
                if (iVar2 == 0) {
                  *(undefined4 **)(param_1 + 0x1a) = puVar8;
                }
                else {
                  *(undefined4 **)(iVar7 + 8) = puVar8;
                }
              }
              if (DAT_00dc4b5e != '\0') {
                iVar7 = 0;
                puVar8 = *(undefined4 **)(param_1 + 0x1a);
                if (*(undefined4 **)(param_1 + 0x1a) != (undefined4 *)0x0) {
                  do {
                    piVar9 = puVar8 + 2;
                    if (*(int *)*puVar8 == iVar4) {
                      iVar7 = iVar7 + 1;
                    }
                    puVar8 = (undefined4 *)*piVar9;
                  } while ((undefined4 *)*piVar9 != (undefined4 *)0x0);
                  if (1 < iVar7) {
                    FUN_00429a00(s_ERROR___Country_TAG___s__is_used_00869f5c,param_2 + 2,iVar7,
                                 *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                    DAT_00dc4b60 = DAT_00dc4b60 + 1;
                  }
                }
              }
            }
          }
          if (iVar4 == 2) {
            while (local_1c != (int *)0x0) {
              piVar9 = (int *)local_1c[2];
              FUN_00796cd8(local_1c);
              local_1c = piVar9;
            }
            ExceptionList = local_c;
            return 0;
          }
          piVar9 = (int *)FUN_00534391();
        } while (*piVar9 != 4);
        FUN_005343dc();
        break;
      case 0x14a:
        (**(code **)(*(int *)(param_1 + 4) + 0x10))();
        FUN_005358c0(param_1 + 4);
      }
    }
    goto LAB_006b7134;
  }
  if (iVar4 < 0x236) {
    if (iVar4 == 0x235) {
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x2c) = (float)fVar11;
      goto LAB_006b7134;
    }
    if (iVar4 == 0x233) {
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x30) = (float)fVar11;
      goto LAB_006b7134;
    }
    if (iVar4 == 0x234) {
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x34) = (float)fVar11;
      goto LAB_006b7134;
    }
  }
  else if (iVar4 == 0x382) {
    fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
    *(float *)(param_1 + 0x40) = (float)fVar11;
    goto LAB_006b7134;
  }
switchD_006b7217_caseD_f7:
  FUN_005349b0(s_ai_prefs___Unexpected_field_00867a80);
  while (local_1c != (int *)0x0) {
    piVar9 = (int *)local_1c[2];
    FUN_00796cd8(local_1c);
    local_1c = piVar9;
  }
  ExceptionList = local_c;
  return 0xfffffffe;
}


