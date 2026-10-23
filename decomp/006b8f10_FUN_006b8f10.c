// FUN_006b8f10 @ 6b8f10 size=1744

undefined4 __thiscall FUN_006b8f10(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  bool bVar11;
  float10 fVar12;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007d6fd3;
  local_c = ExceptionList;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
LAB_006b8f54:
  while (iVar4 = FUN_00535490(), iVar4 != 1) {
    piVar10 = (int *)FUN_00534391();
    if (*piVar10 == 4) {
      FUN_005343dc();
      while (local_1c != (int *)0x0) {
        piVar10 = (int *)local_1c[2];
        FUN_00796cd8(local_1c);
        local_1c = piVar10;
      }
      ExceptionList = local_c;
      return 0;
    }
  }
  piVar10 = local_1c;
  piVar5 = local_18;
  if (DAT_00dc4b5e != '\0') {
    iVar4 = param_2[1];
    for (; piVar10 != (int *)0x0; piVar10 = (int *)piVar10[2]) {
      cVar3 = (*(code *)PTR_FUN_007e3798)(*piVar10,iVar4);
      if (cVar3 != '\0') {
        if (piVar10 != (int *)0x0) {
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
    bVar11 = local_14 != 0;
    piVar10 = piVar5;
    local_14 = iVar4;
    if (bVar11) {
      local_18[2] = (int)piVar5;
      piVar10 = local_1c;
    }
  }
  local_18 = piVar5;
  local_1c = piVar10;
  iVar4 = param_2[1];
  if (iVar4 < 0x161) {
    if (iVar4 == 0x160) {
      fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0xe) = (float)fVar12;
    }
    else {
      switch(iVar4) {
      case 0x6b:
        *(bool *)(param_1 + 4) = param_2[0x103] == 0x111;
        break;
      case 0x6c:
        (**(code **)(*(int *)(param_1 + 0x58) + 0x10))();
        FUN_00535600(param_1 + 0x58);
        if (DAT_00dc4b5e != '\0') {
          piVar10 = *(int **)(param_1 + 0x5c);
joined_r0x006b90cd:
          if (piVar10 != (int *)0x0) {
            piVar5 = (int *)piVar10[2];
            iVar4 = *piVar10;
            piVar10 = piVar5;
            if ((0 < iVar4) && (iVar4 < DAT_00877690)) goto code_r0x006b90e6;
            FUN_00429a00(s_ERROR___Invalid_Province_ID___d__0086a2c0,iVar4,*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
            goto LAB_006b914e;
          }
        }
        break;
      case 0x6d:
        puVar8 = *(undefined4 **)(param_1 + 0x4a);
        while (puVar8 != (undefined4 *)0x0) {
          puVar1 = (undefined4 *)puVar8[2];
          FUN_00796cd8(*puVar8);
          FUN_00796cd8(puVar8);
          puVar8 = puVar1;
        }
        *(undefined4 *)(param_1 + 0x4a) = 0;
        *(undefined4 *)(param_1 + 0x4e) = 0;
        *(undefined4 *)(param_1 + 0x52) = 0;
        do {
          while (iVar4 = FUN_00535490(), iVar4 == 1) {
            iVar4 = FUN_007a7b3c(param_2 + 2);
            if ((iVar4 < 1) || (DAT_00877690 <= iVar4)) {
              if (DAT_00dc4b5e != '\0') {
                FUN_00429a00(s_ERROR___Invalid_Province_ID___s__0086a1b0,param_2 + 2,
                             *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                DAT_00dc4b60 = DAT_00dc4b60 + 1;
              }
            }
            else {
              pvVar6 = operator_new(8);
              local_4._0_1_ = 1;
              if (pvVar6 == (void *)0x0) {
                piVar10 = (int *)0x0;
              }
              else {
                piVar10 = (int *)FUN_0076c790();
              }
              local_4 = (uint)local_4._1_3_ << 8;
              *piVar10 = iVar4;
              iVar7 = FUN_007a7b3c(param_2 + 0x104);
              piVar10[1] = iVar7;
              cVar3 = (**(code **)(*(int *)(param_1 + 0x46) + 0x24))(piVar10);
              if (cVar3 == '\0') {
                iVar7 = *(int *)(param_1 + 0x4e);
                puVar8 = operator_new(0xe);
                if (puVar8 == (undefined4 *)0x0) {
                  puVar8 = (undefined4 *)0x0;
                }
                else {
                  *puVar8 = piVar10;
                  puVar8[1] = iVar7;
                  puVar8[2] = 0;
                  *(undefined1 *)(puVar8 + 3) = 0;
                }
                iVar2 = *(int *)(param_1 + 0x52);
                *(undefined4 **)(param_1 + 0x4e) = puVar8;
                *(int *)(param_1 + 0x52) = iVar2 + 1;
                if (iVar2 == 0) {
                  *(undefined4 **)(param_1 + 0x4a) = puVar8;
                }
                else {
                  *(undefined4 **)(iVar7 + 8) = puVar8;
                }
              }
              if (DAT_00dc4b5e != '\0') {
                piVar10 = (int *)(DAT_00ab27b4 + iVar4 * 0x4b2);
                if (*(int *)(DAT_00ab27b4 + 0x182 + iVar4 * 0x4b2) == 0) {
                  uVar9 = (**(code **)(*piVar10 + 0xc))
                                    (*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                  FUN_00429a00(s_ERROR___Specified_province_ID____0086a25c,iVar4,uVar9);
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
                iVar7 = 0;
                puVar8 = *(undefined4 **)(param_1 + 0x4a);
                if (*(undefined4 **)(param_1 + 0x4a) != (undefined4 *)0x0) {
                  do {
                    piVar5 = puVar8 + 2;
                    if (*(int *)*puVar8 == iVar4) {
                      iVar7 = iVar7 + 1;
                    }
                    puVar8 = (undefined4 *)*piVar5;
                  } while ((undefined4 *)*piVar5 != (undefined4 *)0x0);
                  if (1 < iVar7) {
                    uVar9 = (**(code **)(*piVar10 + 0xc))
                                      (iVar7,*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                    FUN_00429a00(s_ERROR___Province_ID___d____s__us_0086a200,iVar4,uVar9);
                    DAT_00dc4b60 = DAT_00dc4b60 + 1;
                  }
                }
              }
            }
          }
          if (iVar4 == 2) {
            while (local_1c != (int *)0x0) {
              piVar10 = (int *)local_1c[2];
              FUN_00796cd8(local_1c);
              local_1c = piVar10;
            }
            ExceptionList = local_c;
            return 0;
          }
          piVar10 = (int *)FUN_00534391();
        } while (*piVar10 != 4);
        FUN_005343dc();
        break;
      case 0x6e:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x12) = (float)fVar12;
        break;
      case 0x6f:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x22) = (float)fVar12;
        break;
      case 0x70:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x26) = (float)fVar12;
        break;
      case 0x71:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x2e) = (float)fVar12;
        break;
      default:
        goto switchD_006b9030_default;
      }
    }
    goto LAB_006b8f54;
  }
  if (iVar4 < 0x435) {
    if (iVar4 == 0x434) {
      *(bool *)(param_1 + 0x40) = param_2[0x103] == 0x111;
      goto LAB_006b8f54;
    }
    if (iVar4 < 0x3fb) {
      if (iVar4 == 0x3fa) {
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 10) = (float)fVar12;
        goto LAB_006b8f54;
      }
      if (iVar4 == 400) {
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x16) = (float)fVar12;
        goto LAB_006b8f54;
      }
      if (iVar4 == 0x191) {
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x1a) = (float)fVar12;
        goto LAB_006b8f54;
      }
      if (iVar4 == 0x192) {
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x1e) = (float)fVar12;
        goto LAB_006b8f54;
      }
    }
    else {
      if (iVar4 == 0x419) {
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x32) = (float)fVar12;
        goto LAB_006b8f54;
      }
      if (iVar4 == 0x41a) {
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x36) = (float)fVar12;
        goto LAB_006b8f54;
      }
    }
  }
  else {
    switch(iVar4) {
    case 0x488:
      fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x2a) = (float)fVar12;
      goto LAB_006b8f54;
    case 0x48c:
      fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 6) = (float)fVar12;
      goto LAB_006b8f54;
    case 0x4aa:
      *(bool *)(param_1 + 0x3f) = param_2[0x103] == 0x111;
      goto LAB_006b8f54;
    case 0x4ab:
      *(bool *)(param_1 + 0x3e) = param_2[0x103] == 0x111;
      goto LAB_006b8f54;
    case 0x4ac:
      fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x3a) = (float)fVar12;
      goto LAB_006b8f54;
    case 0x4af:
      iVar4 = param_2[0x103];
      if (iVar4 == 0xf) {
        *(undefined4 *)(param_1 + 0x42) = 2;
      }
      else if (iVar4 == 0x4ad) {
        *(undefined4 *)(param_1 + 0x42) = 0;
      }
      else if (iVar4 == 0x4ae) {
        *(undefined4 *)(param_1 + 0x42) = 1;
      }
      goto LAB_006b8f54;
    }
  }
switchD_006b9030_default:
  FUN_005349b0(s_ai_prefs___Unexpected_field_00867a80);
  while (local_1c != (int *)0x0) {
    piVar10 = (int *)local_1c[2];
    FUN_00796cd8(local_1c);
    local_1c = piVar10;
  }
  ExceptionList = local_c;
  return 0xfffffffe;
code_r0x006b90e6:
  iVar7 = *(int *)(DAT_00ab27b4 + 0x254 + iVar4 * 0x4b2);
  if ((iVar7 == 8) || (iVar7 == 9)) {
    uVar9 = (**(code **)(*(int *)(DAT_00ab27b4 + iVar4 * 0x4b2) + 0xc))
                      (*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
    FUN_00429a00(s_ERROR___Specified_province_ID____0086a31c,iVar4,uVar9);
LAB_006b914e:
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
  goto joined_r0x006b90cd;
}


