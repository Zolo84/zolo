// FUN_00677b40 @ 677b40 size=6532

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __thiscall FUN_00677b40(int param_1,float *param_2)

{
  undefined **ppuVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  void *pvVar11;
  float fVar12;
  undefined4 *puVar13;
  int iVar14;
  bool bVar15;
  float10 fVar16;
  float fStack_d4;
  int iStack_d0;
  int iStack_cc;
  int *piStack_c8;
  undefined4 *puStack_c4;
  int *piStack_c0;
  int local_ac [9];
  int local_88;
  int local_84;
  undefined **local_80;
  int *local_7c;
  int *local_78;
  int local_74;
  undefined1 local_70;
  int local_6c;
  float local_68;
  int local_60;
  int *local_5c;
  float local_58;
  undefined1 *local_54 [2];
  undefined **local_4c;
  int *local_48;
  int *local_44;
  int local_40;
  undefined1 local_3c;
  char local_39;
  char local_38;
  char local_37;
  char local_36;
  char local_35;
  float local_34;
  undefined4 *local_30;
  int *local_2c;
  int *local_28;
  float local_24;
  int local_20;
  float local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007d49f6;
  local_10 = ExceptionList;
  iVar14 = *(int *)(*(int *)(param_1 + 10) + 0x120);
  local_20 = iVar14;
  local_18 = param_1;
  if (*(char *)(param_1 + 0x909) == '\0') {
    ExceptionList = &local_10;
    local_14 = (int *)FUN_0044ab40();
    local_58 = (*param_2 + _DAT_007e5dd0) * (float)(int)local_14 * *(float *)(iVar14 + 0x9ce);
  }
  else {
    ExceptionList = &local_10;
    local_14 = (int *)FUN_0044ab40();
    local_58 = (float)(int)local_14 * *param_2;
  }
  local_34 = 0.0;
  local_48 = (int *)0x0;
  local_44 = (int *)0x0;
  local_40 = 0;
  local_3c = 0;
  local_4c = &PTR_LAB_007f35d0;
  local_8 = 0;
  piVar10 = local_ac;
  for (iVar14 = 0xb; iVar14 != 0; iVar14 = iVar14 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  local_60 = 0;
  local_6c = 0;
  piVar10 = *(int **)(*(int *)(param_1 + 10) + 0x3b7e);
  while (piVar10 != (int *)0x0) {
    piVar8 = (int *)piVar10[2];
    piVar2 = (int *)*piVar10;
    cVar5 = FUN_004f2390();
    piVar10 = piVar8;
    if (cVar5 == '\0') {
      cVar5 = (**(code **)(*piVar2 + 0x10))();
      if (cVar5 == '\0') {
        cVar5 = (**(code **)(*piVar2 + 0x1c))();
        if (cVar5 != '\0') {
          local_34 = (float)piVar2[10] + local_34;
          if (*(int *)((int)piVar2 + 0x5a) == 0) {
            local_60 = local_60 + (int)DAT_00ad2e6c * (piVar2[0xc] - piVar2[0xd]);
          }
          else {
            local_6c = local_6c +
                       (int)(&DAT_00ad2e6c)[*(int *)((int)piVar2 + 0x5a)] *
                       (piVar2[0xc] - piVar2[0xd]);
          }
        }
      }
      else {
        local_34 = (float)piVar2[10] + local_34;
        local_ac[*(int *)((int)piVar2 + 0x5a)] =
             local_ac[*(int *)((int)piVar2 + 0x5a)] + (piVar2[0xc] - piVar2[0xd]);
      }
    }
  }
  local_2c = (int *)(local_58 - local_34);
  if ((float)local_2c <= _DAT_007e3380) {
    local_8 = 0xffffffff;
    local_4c = &PTR_LAB_007f35d0;
    FUN_0067a730();
    ExceptionList = local_10;
    return;
  }
  iVar14 = FUN_0044ab40();
  local_5c = (int *)(iVar14 / 0x32);
  if ((int)local_5c < 10) {
    if ((int)local_5c < 1) {
      local_5c = (int *)0x1;
    }
  }
  else {
    local_5c = (int *)&DAT_0000000a;
  }
  FUN_006a9d50();
  iVar14 = local_20;
  if (((*(int *)(local_20 + 0xa5c) == 0) ||
      ((*(int *)(local_20 + 0xa5c) == 2 && (cVar5 = FUN_0044beb0(), cVar5 != '\0')))) ||
     ((*(int *)(iVar14 + 0xa5c) == 3 && (cVar5 = FUN_0044beb0(), cVar5 == '\0')))) {
    bVar15 = true;
  }
  else {
    bVar15 = false;
  }
  if (*(char *)(*(int *)(local_18 + 10) + 0xe32a) == '\0') {
    bVar15 = false;
  }
  iVar6 = FUN_0044e750();
  piStack_c0 = (int *)0x677d61;
  local_28 = (int *)(iVar6 + local_88);
  FUN_004d0d40();
  iVar7 = __ftol();
  iVar14 = local_18;
  if (*(int *)(local_20 + 0xa60) < iVar7) {
    iVar7 = *(int *)(local_20 + 0xa60);
  }
  piVar8 = (int *)(iVar7 - (iVar6 + local_88));
  piVar10 = local_48;
  if (((bVar15) && (0 < (int)piVar8)) && (local_88 < 1)) {
    iVar7 = *(int *)(local_20 + 0xa64);
    local_30 = (undefined4 *)iVar7;
    fVar16 = (float10)FUN_0044e660();
    if (fVar16 <= (float10)_DAT_007e3380) {
      if (iVar7 < 1) {
        local_30 = *(undefined4 **)(*(int *)(iVar14 + 10) + 0x117de);
      }
    }
    else {
      iVar14 = *(int *)(*(int *)(iVar14 + 10) + 0xe892);
      do {
        if (iVar14 == 0) goto LAB_00677e0e;
        iVar14 = *(int *)(iVar14 + 8);
        piStack_c0 = (int *)0x677dd4;
        iVar7 = FUN_004e9370();
      } while (*(float *)(*(int *)(iVar7 + 0x1ea) + 0x10) <= _DAT_007e3380);
      local_30 = *(undefined4 **)(iVar7 + 0x12);
    }
LAB_00677e0e:
    param_2 = (float *)(0x168 / (longlong)(int)DAT_008effc2);
    if ((int)param_2 < 2) {
      param_2 = (float *)0x1;
    }
    if ((int)local_5c <= (int)param_2) {
      param_2 = (float *)local_5c;
    }
    if ((int)piVar8 <= (int)param_2) {
      param_2 = (float *)piVar8;
    }
    piStack_c0 = (int *)0x677e42;
    puVar9 = operator_new(0xc);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
    }
    puVar9[2] = local_30;
    piStack_c0 = (int *)0x677e66;
    FUN_004d0d40();
    piVar10 = (int *)__ftol();
    piVar8 = local_44;
    if ((int)piVar10 <= (int)param_2) {
      param_2 = (float *)piVar10;
    }
    *puVar9 = 9;
    puVar9[1] = (float)(int)param_2;
    piStack_c0 = (int *)0x677e91;
    pvVar11 = operator_new(0xe);
    local_8._0_1_ = 1;
    if (pvVar11 == (void *)0x0) {
      local_44 = (int *)0x0;
    }
    else {
      piStack_c0 = piVar8;
      piStack_c8 = (int *)0x677ea9;
      puStack_c4 = puVar9;
      local_44 = (int *)FUN_0067a880();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    iVar14 = local_40 + 1;
    bVar15 = local_40 != 0;
    piVar10 = local_44;
    local_40 = iVar14;
    if (bVar15) {
      piVar8[2] = (int)local_44;
      piVar10 = local_48;
    }
  }
  local_48 = piVar10;
  iVar14 = local_20;
  if (((*(int *)(local_20 + 0xa68) == 0) ||
      ((*(int *)(local_20 + 0xa68) == 2 && (cVar5 = FUN_0044beb0(), cVar5 != '\0')))) ||
     ((*(int *)(iVar14 + 0xa68) == 3 && (cVar5 = FUN_0044beb0(), cVar5 == '\0')))) {
    bVar15 = true;
  }
  else {
    bVar15 = false;
  }
  if (*(char *)(*(int *)(local_18 + 10) + 0xe32b) == '\0') {
    bVar15 = false;
  }
  iVar6 = FUN_0044e700();
  piStack_c0 = (int *)0x677f30;
  local_28 = (int *)(iVar6 + local_84);
  FUN_004d0d40();
  iVar7 = __ftol();
  iVar14 = local_18;
  if (*(int *)(local_20 + 0xa6c) < iVar7) {
    iVar7 = *(int *)(local_20 + 0xa6c);
  }
  piVar8 = (int *)(iVar7 - (iVar6 + local_84));
  piVar10 = local_48;
  if (((bVar15) && (0 < (int)piVar8)) && (local_84 < 1)) {
    iVar7 = *(int *)(local_20 + 0xa70);
    local_30 = (undefined4 *)iVar7;
    fVar16 = (float10)FUN_0044e6b0();
    if (fVar16 <= (float10)_DAT_007e3380) {
      if (iVar7 < 1) {
        local_30 = *(undefined4 **)(*(int *)(iVar14 + 10) + 0x117de);
      }
    }
    else {
      iVar7 = *(int *)(*(int *)(iVar14 + 10) + 0xe892);
      do {
        if (iVar7 == 0) goto LAB_00677fdd;
        iVar7 = *(int *)(iVar7 + 8);
        piStack_c0 = (int *)0x677fa3;
        iVar6 = FUN_004e9370();
      } while (*(float *)(*(int *)(iVar6 + 0x1ee) + 0x10) <= _DAT_007e3380);
      local_30 = *(undefined4 **)(iVar6 + 0x12);
    }
LAB_00677fdd:
    param_2 = (float *)(0x168 / (longlong)(int)DAT_008effc4);
    if ((int)param_2 < 2) {
      param_2 = (float *)0x1;
    }
    if ((int)local_5c <= (int)param_2) {
      param_2 = (float *)local_5c;
    }
    if ((int)piVar8 <= (int)param_2) {
      param_2 = (float *)piVar8;
    }
    piStack_c0 = (int *)0x678011;
    puVar9 = operator_new(0xc);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
    }
    puVar9[2] = local_30;
    piStack_c0 = (int *)0x678035;
    FUN_004d0d40();
    piVar10 = (int *)__ftol();
    piVar8 = local_44;
    if ((int)piVar10 <= (int)param_2) {
      param_2 = (float *)piVar10;
    }
    *puVar9 = 10;
    puVar9[1] = (float)(int)param_2;
    piStack_c0 = (int *)0x678060;
    pvVar11 = operator_new(0xe);
    local_8._0_1_ = 2;
    if (pvVar11 == (void *)0x0) {
      local_44 = (int *)0x0;
    }
    else {
      piStack_c0 = piVar8;
      piStack_c8 = (int *)0x678079;
      puStack_c4 = puVar9;
      local_44 = (int *)FUN_0067a880();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    iVar7 = local_40 + 1;
    bVar15 = local_40 != 0;
    piVar10 = local_44;
    local_40 = iVar7;
    if (bVar15) {
      piVar8[2] = (int)local_44;
      piVar10 = local_48;
    }
  }
  local_48 = piVar10;
  piStack_c0 = (int *)0x6780aa;
  FUN_0049b4b0();
  piStack_c0 = (int *)0x6780b6;
  FUN_0049b530();
  iVar7 = __ftol();
  piStack_c0 = (int *)0x6780d2;
  FUN_0049b4b0();
  piStack_c0 = (int *)0x6780de;
  FUN_0049b530();
  iVar6 = __ftol();
  if (iVar6 <= iVar7) {
    iVar7 = iVar6;
  }
  piStack_c0 = (int *)0x6780f8;
  FUN_0049b4b0();
  piStack_c0 = (int *)0x678104;
  FUN_0049b530();
  iVar6 = __ftol();
  if (iVar6 <= iVar7) {
    iVar7 = iVar6;
  }
  if (*(char *)(iVar14 + 0x909) != '\0') {
    iVar7 = FUN_0044ab40();
    iVar7 = iVar7 / 10;
    if (iVar7 < 2) {
      iVar7 = 1;
    }
  }
  if ((int)*(short *)(DAT_00893530 + 0x18) < *(int *)(local_20 + 0xaa2)) {
    FUN_0044ab40();
    piStack_c0 = (int *)0x678176;
    FUN_00467350();
    iVar7 = __ftol();
    if (iVar7 < 2) {
      iVar7 = 1;
    }
  }
  iVar6 = local_20;
  if (*(int *)(local_20 + 0xaa6) < (int)*(short *)(DAT_00893530 + 0x18)) {
    iVar7 = 0;
  }
  local_30 = (undefined4 *)(iVar7 - local_ac[1]);
  if (*(char *)(*(int *)(iVar14 + 10) + 0xe322) == '\0') {
    local_30 = (undefined4 *)0x0;
  }
  puVar9 = local_30;
  FUN_006a9d50();
  if ((0 < (int)puVar9) &&
     ((cVar5 = FUN_0044beb0(), cVar5 == '\0' || (*(char *)(iVar6 + 0xaa0) != '\0')))) {
    local_80 = &PTR_FUN_007e6eac;
    local_7c = (int *)0x0;
    local_78 = (int *)0x0;
    local_74 = 0;
    local_70 = 0;
    local_8 = CONCAT31(local_8._1_3_,3);
    local_1c = *(float *)(*(int *)(iVar14 + 10) + 0xe8a4);
    piVar10 = local_7c;
    iVar14 = local_18;
joined_r0x0067820e:
    local_7c = piVar10;
    local_18 = iVar14;
    if (local_1c != 0.0) {
      local_1c = *(float *)((int)local_1c + 8);
      piStack_c0 = (int *)0x678225;
      piVar8 = (int *)FUN_004e9370();
      local_14 = piVar8;
      fVar16 = (float10)FUN_004eceb0();
      piVar10 = local_7c;
      iVar14 = local_18;
      if ((float10)_DAT_007e6f18 <= fVar16) {
        fVar16 = (float10)FUN_004ed140();
        param_2 = (float *)(float)-fVar16;
        piStack_c0 = (int *)0x678263;
        cVar5 = (**(code **)(*(int *)(local_20 + 0xaaa) + 0x24))();
        iVar14 = local_18;
        if (cVar5 != '\0') {
          param_2 = (float *)((float)param_2 + _DAT_007e68c8);
        }
        piStack_c0 = (int *)0x678281;
        cVar5 = FUN_004e8ab0();
        if (cVar5 == '\0') {
          param_2 = (float *)((float)param_2 - (float)_DAT_007f35c8);
        }
        else {
          param_2 = (float *)((float)param_2 + _DAT_007e6818);
        }
        local_24 = *(float *)((int)piVar8 + 0x12);
        local_28 = (int *)0x0;
        piVar10 = *(int **)(*(int *)(iVar14 + 10) + 0x3b7e);
        if (piVar10 != (int *)0x0) {
          do {
            piVar2 = (int *)piVar10[2];
            piVar10 = (int *)*piVar10;
            cVar5 = (**(code **)(*piVar10 + 0x10))();
            if ((((cVar5 != '\0') && (cVar5 = FUN_004f2390(), cVar5 == '\0')) &&
                (*(int *)((int)piVar10 + 0x5a) == 1)) &&
               (*(float *)((int)piVar10 + 0x16) == local_24)) {
              local_28 = (int *)((int)local_28 + piVar10[0xc]);
            }
            piVar10 = piVar2;
          } while (piVar2 != (int *)0x0);
          if (0 < (int)local_28) {
            param_2 = (float *)((float)param_2 - _DAT_007f35c4);
          }
        }
        piVar10 = local_7c;
        iVar14 = local_18;
        piVar2 = local_78;
        if (_DAT_007e3380 < (float)param_2) {
          while (local_28 = piVar10, local_78 = piVar2, local_28 != (int *)0x0) {
            iVar14 = *local_28;
            fVar16 = (float10)FUN_004ed140();
            local_24 = (float)-fVar16;
            piStack_c0 = (int *)0x67834a;
            cVar5 = (**(code **)(*(int *)(local_20 + 0xaaa) + 0x24))();
            if (cVar5 != '\0') {
              local_24 = local_24 + _DAT_007e68c8;
            }
            piStack_c0 = (int *)0x678368;
            cVar5 = FUN_004e8ab0();
            if (cVar5 == '\0') {
              param_2 = (float *)((float)param_2 - (float)_DAT_007f35c8);
            }
            else {
              local_24 = local_24 + _DAT_007e6818;
            }
            local_68 = *(float *)(iVar14 + 0x12);
            iVar14 = 0;
            piVar10 = *(int **)(*(int *)(local_18 + 10) + 0x3b7e);
            if (piVar10 != (int *)0x0) {
              do {
                piVar8 = (int *)piVar10[2];
                piVar10 = (int *)*piVar10;
                cVar5 = (**(code **)(*piVar10 + 0x10))();
                if (((cVar5 != '\0') && (cVar5 = FUN_004f2390(), cVar5 == '\0')) &&
                   ((*(int *)((int)piVar10 + 0x5a) == 1 &&
                    (*(float *)((int)piVar10 + 0x16) == local_68)))) {
                  iVar14 = iVar14 + piVar10[0xc];
                }
                piVar10 = piVar8;
              } while (piVar8 != (int *)0x0);
              if (0 < iVar14) {
                local_24 = local_24 - _DAT_007f35c4;
              }
            }
            if (local_24 < (float)param_2) {
              piStack_c0 = local_14;
              puStack_c4 = (undefined4 *)0x67843d;
              FUN_0067a690();
              piVar10 = local_7c;
              iVar14 = local_18;
              goto joined_r0x0067820e;
            }
            piVar8 = local_14;
            piVar2 = local_78;
            piVar10 = (int *)local_28[2];
          }
          piStack_c0 = (int *)0x67840d;
          local_78 = operator_new(0xe);
          if (local_78 == (int *)0x0) {
            local_78 = (int *)0x0;
          }
          else {
            *local_78 = (int)piVar8;
            local_78[1] = (int)piVar2;
            local_78[2] = 0;
            *(undefined1 *)(local_78 + 3) = 0;
          }
          iVar14 = local_74 + 1;
          bVar15 = local_74 != 0;
          piVar10 = local_78;
          local_74 = iVar14;
          iVar14 = local_18;
          if (bVar15) {
            piVar2[2] = (int)local_78;
            piVar10 = local_7c;
          }
        }
      }
      goto joined_r0x0067820e;
    }
    param_2 = (float *)(0x168 / (longlong)(int)DAT_008effb2);
    if ((int)param_2 < 2) {
      param_2 = (float *)0x1;
    }
    if ((int)local_5c <= (int)param_2) {
      param_2 = (float *)local_5c;
    }
    piStack_c0 = (int *)0x678497;
    fVar16 = (float10)FUN_00467350();
    local_14 = (int *)(float)fVar16;
    local_68 = *(float *)(*(int *)(iVar14 + 10) + 0x39cc);
    piStack_c0 = (int *)0x6784ad;
    fVar16 = (float10)FUN_00467460();
    fVar16 = (float10)local_68 / fVar16;
    if ((float10)(float)local_2c / (float10)(float)local_14 < fVar16) {
      fVar16 = (float10)(float)local_2c / (float10)(float)local_14;
    }
    local_14 = (int *)(float)fVar16;
    local_28 = (int *)(int)ROUND((float)local_14);
    local_2c = local_28;
    piVar10 = local_7c;
    for (; ((piVar10 != (int *)0x0 && (0 < (int)local_30)) && (0 < (int)local_28));
        local_28 = (int *)((int)local_28 - iVar14)) {
      piVar8 = (int *)piVar10[2];
      iVar14 = *piVar10;
      piStack_c0 = (int *)0x67850a;
      puVar9 = operator_new(0xc);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
      }
      puVar9[2] = *(undefined4 *)(iVar14 + 0x12);
      piStack_c0 = (int *)0x67852e;
      fVar16 = (float10)FUN_004d0d40();
      local_2c = (int *)(float)fVar16;
      FUN_004ed140();
      local_14 = (int *)__ftol();
      piVar10 = local_44;
      if ((int)param_2 < (int)local_14) {
        local_14 = (int *)param_2;
      }
      puVar9[1] = (float)(int)local_14;
      local_1c = (float)(int)local_30;
      if (local_1c < (float)(int)local_14) {
        puVar9[1] = local_1c;
      }
      *puVar9 = 1;
      piStack_c0 = (int *)0x678580;
      local_44 = operator_new(0xe);
      if (local_44 == (int *)0x0) {
        local_44 = (int *)0x0;
      }
      else {
        *local_44 = (int)puVar9;
        local_44[1] = (int)piVar10;
        local_44[2] = 0;
        *(undefined1 *)(local_44 + 3) = 0;
      }
      piVar2 = local_44;
      if (local_40 != 0) {
        piVar10[2] = (int)local_44;
        piVar2 = local_48;
      }
      local_48 = piVar2;
      local_40 = local_40 + 1;
      local_30 = (undefined4 *)__ftol();
      iVar14 = __ftol();
      piVar10 = piVar8;
    }
    local_8 = local_8 & 0xffffff00;
    local_80 = &PTR_FUN_007e6eac;
    FUN_00499f60();
    iVar14 = local_18;
    iVar6 = local_20;
  }
  param_2._3_1_ = '\0';
  if (*(char *)(*(int *)(iVar14 + 10) + 0xe325) != '\0') {
    iVar7 = *(int *)(iVar6 + 0x9da);
    if (iVar7 == 0) {
      param_2._3_1_ = '\x01';
    }
    else if (iVar7 == 2) {
      param_2._3_1_ = FUN_0044beb0();
    }
    else if (iVar7 == 3) {
      cVar5 = FUN_0044beb0();
      param_2._3_1_ = cVar5 == '\0';
    }
  }
  if (((*(int *)(iVar6 + 0xa74) == 0) ||
      ((*(int *)(iVar6 + 0xa74) == 2 && (cVar5 = FUN_0044beb0(), cVar5 != '\0')))) ||
     ((*(int *)(iVar6 + 0xa74) == 3 && (cVar5 = FUN_0044beb0(), cVar5 == '\0')))) {
    local_35 = '\x01';
  }
  else {
    local_35 = '\0';
  }
  if (*(char *)(*(int *)(iVar14 + 10) + 0xe324) == '\0') {
    local_35 = '\0';
  }
  if (((*(int *)(iVar6 + 0x9f4) == 0) ||
      ((*(int *)(iVar6 + 0x9f4) == 2 && (cVar5 = FUN_0044beb0(), cVar5 != '\0')))) ||
     ((*(int *)(iVar6 + 0x9f4) == 3 && (cVar5 = FUN_0044beb0(), cVar5 == '\0')))) {
    local_37 = '\x01';
  }
  else {
    local_37 = '\0';
  }
  if (*(char *)(*(int *)(iVar14 + 10) + 0xe323) == '\0') {
    local_37 = '\0';
  }
  if (((*(int *)(iVar6 + 0xa0e) == 0) ||
      ((*(int *)(iVar6 + 0xa0e) == 2 && (cVar5 = FUN_0044beb0(), cVar5 != '\0')))) ||
     ((*(int *)(iVar6 + 0xa0e) == 3 && (cVar5 = FUN_0044beb0(), cVar5 == '\0')))) {
    local_39 = '\x01';
  }
  else {
    local_39 = '\0';
  }
  if (*(char *)(*(int *)(iVar14 + 10) + 0xe329) == '\0') {
    local_39 = '\0';
  }
  if (((*(int *)(iVar6 + 0xa28) == 0) ||
      ((*(int *)(iVar6 + 0xa28) == 2 && (cVar5 = FUN_0044beb0(), cVar5 != '\0')))) ||
     ((*(int *)(iVar6 + 0xa28) == 3 && (cVar5 = FUN_0044beb0(), cVar5 == '\0')))) {
    local_36 = '\x01';
  }
  else {
    local_36 = '\0';
  }
  if (*(char *)(*(int *)(iVar14 + 10) + 0xe327) == '\0') {
    local_36 = '\0';
  }
  if (((*(int *)(iVar6 + 0xa42) == 0) ||
      ((*(int *)(iVar6 + 0xa42) == 2 && (cVar5 = FUN_0044beb0(), cVar5 != '\0')))) ||
     ((*(int *)(iVar6 + 0xa42) == 3 && (cVar5 = FUN_0044beb0(), cVar5 == '\0')))) {
    local_38 = '\x01';
  }
  else {
    local_38 = '\0';
  }
  if (*(char *)(*(int *)(iVar14 + 10) + 0xe328) == '\0') {
    local_38 = '\0';
  }
  local_30 = *(undefined4 **)(*(int *)(iVar14 + 10) + 0xe8a4);
  piVar10 = local_48;
  while (local_48 = piVar10, local_30 != (undefined4 *)0x0) {
    local_30 = (undefined4 *)local_30[2];
    piStack_c0 = (int *)0x6787c5;
    fVar12 = (float)FUN_004e9370();
    piVar10 = local_48;
    local_24 = fVar12;
    if (param_2._3_1_ != '\0') {
      piStack_c0 = (int *)0x6787ee;
      cVar5 = (**(code **)(*(int *)(local_20 + 0x9e2) + 0x24))();
      piVar10 = local_48;
      if (cVar5 != '\0') {
        local_2c = *(int **)((int)fVar12 + 0x12);
        local_1c = 0.0;
        local_68 = *(float *)(*(int *)((int)fVar12 + 0x1d6) + 0x10);
        piVar10 = *(int **)(*(int *)(local_18 + 10) + 0x3b7e);
        while (piVar10 != (int *)0x0) {
          piVar8 = (int *)piVar10[2];
          piVar2 = (int *)*piVar10;
          cVar5 = (**(code **)(*piVar2 + 0x10))();
          piVar10 = piVar8;
          if ((((cVar5 != '\0') && (cVar5 = FUN_004f2390(), cVar5 == '\0')) &&
              (*(int *)((int)piVar2 + 0x5a) == 4)) && (*(int **)((int)piVar2 + 0x16) == local_2c)) {
            local_1c = (float)((int)local_1c + piVar2[0xc]);
          }
        }
        iVar7 = __ftol();
        piStack_c0 = (int *)0x67886f;
        FUN_004d0d40();
        iVar14 = __ftol();
        if (*(int *)(local_20 + 0x9de) < iVar14) {
          iVar14 = *(int *)(local_20 + 0x9de);
        }
        local_14 = (int *)(iVar14 - iVar7);
        piVar10 = local_48;
        if (0 < (int)local_14) {
          piVar10 = (int *)(0x168 / (longlong)(int)DAT_008effb8);
          if ((int)piVar10 < 2) {
            piVar10 = (int *)0x1;
          }
          if ((int)piVar10 < (int)local_14) {
            local_14 = piVar10;
          }
          piStack_c0 = (int *)0x6788be;
          puVar13 = operator_new(0xc);
          piVar8 = local_44;
          puVar9 = (undefined4 *)0x0;
          if (puVar13 != (undefined4 *)0x0) {
            *puVar13 = 0;
            puVar13[1] = 0;
            puVar13[2] = 0;
            puVar9 = puVar13;
          }
          uVar3 = *(undefined4 *)((int)fVar12 + 0x12);
          *puVar9 = 4;
          puVar9[2] = uVar3;
          puVar9[1] = (float)(int)local_14;
          piStack_c0 = (int *)0x6788eb;
          local_44 = operator_new(0xe);
          if (local_44 == (int *)0x0) {
            local_44 = (int *)0x0;
          }
          else {
            *local_44 = (int)puVar9;
            local_44[1] = (int)piVar8;
            local_44[2] = 0;
            *(undefined1 *)(local_44 + 3) = 0;
          }
          iVar14 = local_40 + 1;
          bVar15 = local_40 != 0;
          piVar10 = local_44;
          local_40 = iVar14;
          if (bVar15) {
            piVar8[2] = (int)local_44;
            piVar10 = local_48;
          }
        }
      }
    }
    local_48 = piVar10;
    piStack_c0 = (int *)0x67892c;
    cVar5 = FUN_004e9500();
    piVar10 = local_48;
    if (cVar5 == '\0') {
      if (local_35 != '\0') {
        local_2c = *(int **)((int)fVar12 + 0x12);
        local_1c = 0.0;
        piVar10 = *(int **)(*(int *)(local_18 + 10) + 0x3b7e);
        while (piVar10 != (int *)0x0) {
          piVar8 = (int *)piVar10[2];
          piVar2 = (int *)*piVar10;
          cVar5 = (**(code **)(*piVar2 + 0x10))();
          piVar10 = piVar8;
          if (((cVar5 != '\0') && (cVar5 = FUN_004f2390(), cVar5 == '\0')) &&
             ((*(int *)((int)piVar2 + 0x5a) == 3 && (*(int **)((int)piVar2 + 0x16) == local_2c)))) {
            local_1c = (float)((int)local_1c + piVar2[0xc]);
          }
        }
        FUN_004ecfc0();
        iVar7 = __ftol();
        piStack_c0 = (int *)0x6789b0;
        FUN_004d0d40();
        iVar14 = __ftol();
        if (*(int *)(local_20 + 0xa8a) < iVar14) {
          iVar14 = *(int *)(local_20 + 0xa8a);
        }
        local_14 = (int *)(iVar14 - iVar7);
        piVar10 = local_48;
        if (0 < (int)local_14) {
          piVar10 = (int *)(0x168 / (longlong)(int)DAT_008effb6);
          if ((int)piVar10 < 2) {
            piVar10 = (int *)0x1;
          }
          if ((int)piVar10 < (int)local_14) {
            local_14 = piVar10;
          }
          iVar14 = 0;
          if (0 < *(int *)((int)fVar12 + 0x290)) {
            do {
              piStack_c0 = (int *)0x678a13;
              iVar7 = FUN_004e9370();
              if (*(int *)(iVar7 + 0x3d8) != 0) {
                piStack_c0 = (int *)0x678a32;
                cVar5 = (**(code **)(*(int *)(local_20 + 0xa78) + 0x24))();
                if (cVar5 != '\0') goto LAB_00678a5a;
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < *(int *)((int)fVar12 + 0x290));
          }
          piStack_c0 = (int *)0x678a56;
          cVar5 = (**(code **)(*(int *)(local_20 + 0xa8e) + 0x24))();
          piVar10 = local_48;
          if (cVar5 != '\0') {
LAB_00678a5a:
            piStack_c0 = (int *)0x678a61;
            puVar13 = operator_new(0xc);
            piVar8 = local_44;
            puVar9 = (undefined4 *)0x0;
            if (puVar13 != (undefined4 *)0x0) {
              *puVar13 = 0;
              puVar13[1] = 0;
              puVar13[2] = 0;
              puVar9 = puVar13;
            }
            uVar3 = *(undefined4 *)((int)fVar12 + 0x12);
            *puVar9 = 3;
            puVar9[2] = uVar3;
            puVar9[1] = (float)(int)local_14;
            piStack_c0 = (int *)0x678a90;
            local_44 = operator_new(0xe);
            if (local_44 == (int *)0x0) {
              local_44 = (int *)0x0;
            }
            else {
              *local_44 = (int)puVar9;
              local_44[1] = (int)piVar8;
              local_44[2] = 0;
              *(undefined1 *)(local_44 + 3) = 0;
            }
            iVar14 = local_40 + 1;
            bVar15 = local_40 != 0;
            piVar10 = local_44;
            local_40 = iVar14;
            if (bVar15) {
              piVar8[2] = (int)local_44;
              piVar10 = local_48;
            }
          }
        }
      }
      local_48 = piVar10;
      piVar10 = local_48;
      if ((local_37 != '\0') && (*(char *)((int)fVar12 + 0x470) != '\0')) {
        piVar10 = (int *)(local_20 + 0x9fc);
        piStack_c0 = (int *)0x678af4;
        cVar5 = (**(code **)(*(int *)(local_20 + 0x9fc) + 0x24))();
        if ((cVar5 != '\0') ||
           ((iVar14 = (**(code **)(*piVar10 + 4))(), piVar10 = local_48, iVar14 == 0 &&
            (0 < *(int *)((int)fVar12 + 0x182))))) {
          local_2c = *(int **)((int)fVar12 + 0x12);
          local_1c = 0.0;
          piVar10 = *(int **)(*(int *)(local_18 + 10) + 0x3b7e);
          while (piVar10 != (int *)0x0) {
            piVar8 = (int *)piVar10[2];
            piVar2 = (int *)*piVar10;
            cVar5 = (**(code **)(*piVar2 + 0x10))();
            piVar10 = piVar8;
            if ((((cVar5 != '\0') && (cVar5 = FUN_004f2390(), cVar5 == '\0')) &&
                (*(int *)((int)piVar2 + 0x5a) == 2)) && (*(int **)((int)piVar2 + 0x16) == local_2c))
            {
              local_1c = (float)((int)local_1c + piVar2[0xc]);
            }
          }
          FUN_004ed080();
          iVar7 = __ftol();
          piStack_c0 = (int *)0x678b86;
          FUN_004d0d40();
          iVar14 = __ftol();
          if (*(int *)(local_20 + 0x9f8) < iVar14) {
            iVar14 = *(int *)(local_20 + 0x9f8);
          }
          local_14 = (int *)(iVar14 - iVar7);
          piVar10 = local_48;
          if (0 < (int)local_14) {
            piVar10 = (int *)(0x168 / (longlong)(int)DAT_008effb4);
            if ((int)piVar10 < 2) {
              piVar10 = (int *)0x1;
            }
            if ((int)piVar10 < (int)local_14) {
              local_14 = piVar10;
            }
            piStack_c0 = (int *)0x678bd3;
            puVar13 = operator_new(0xc);
            piVar8 = local_44;
            puVar9 = (undefined4 *)0x0;
            if (puVar13 != (undefined4 *)0x0) {
              *puVar13 = 0;
              puVar13[1] = 0;
              puVar13[2] = 0;
              puVar9 = puVar13;
            }
            uVar3 = *(undefined4 *)((int)fVar12 + 0x12);
            *puVar9 = 2;
            puVar9[2] = uVar3;
            puVar9[1] = (float)(int)local_14;
            piStack_c0 = (int *)0x678c02;
            local_44 = operator_new(0xe);
            if (local_44 == (int *)0x0) {
              local_44 = (int *)0x0;
            }
            else {
              *local_44 = (int)puVar9;
              local_44[1] = (int)piVar8;
              local_44[2] = 0;
              *(undefined1 *)(local_44 + 3) = 0;
            }
            iVar14 = local_40 + 1;
            bVar15 = local_40 != 0;
            piVar10 = local_44;
            local_40 = iVar14;
            if (bVar15) {
              piVar8[2] = (int)local_44;
              piVar10 = local_48;
            }
          }
        }
      }
      local_48 = piVar10;
      piVar10 = local_48;
      if (local_39 != '\0') {
        piStack_c0 = (int *)0x678c52;
        cVar5 = (**(code **)(*(int *)(local_20 + 0xa16) + 0x24))();
        piVar10 = local_48;
        if (cVar5 != '\0') {
          iVar14 = 0;
          local_14 = (int *)0x0;
          local_2c = *(int **)((int)local_24 + 0x12);
          local_28 = *(int **)(*(int *)((int)local_24 + 0x1e6) + 0x10);
          piVar10 = *(int **)(*(int *)(local_18 + 10) + 0x3b7e);
          while (piVar10 != (int *)0x0) {
            piVar8 = (int *)piVar10[2];
            piVar2 = (int *)*piVar10;
            cVar5 = (**(code **)(*piVar2 + 0x10))();
            piVar10 = piVar8;
            if (((cVar5 != '\0') && (cVar5 = FUN_004f2390(), cVar5 == '\0')) &&
               ((*(int *)((int)piVar2 + 0x5a) == 8 && (*(int **)((int)piVar2 + 0x16) == local_2c))))
            {
              iVar14 = iVar14 + piVar2[0xc];
            }
          }
          local_14 = (int *)iVar14;
          iVar7 = __ftol();
          piStack_c0 = (int *)0x678ccf;
          FUN_004d0d40();
          iVar14 = __ftol();
          if (*(int *)(local_20 + 0xa12) < iVar14) {
            iVar14 = *(int *)(local_20 + 0xa12);
          }
          local_14 = (int *)(iVar14 - iVar7);
          piVar10 = local_48;
          if (0 < (int)local_14) {
            piVar10 = (int *)(0x168 / (longlong)(int)DAT_008effc0);
            if ((int)piVar10 < 2) {
              piVar10 = (int *)0x1;
            }
            if ((int)piVar10 < (int)local_14) {
              local_14 = piVar10;
            }
            piStack_c0 = (int *)0x678d1c;
            puVar9 = operator_new(0xc);
            piVar8 = local_44;
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              *puVar9 = 0;
              puVar9[1] = 0;
              puVar9[2] = 0;
            }
            puVar9[2] = *(undefined4 *)((int)local_24 + 0x12);
            puVar9[1] = (float)(int)local_14;
            *puVar9 = 8;
            piStack_c0 = (int *)0x678d52;
            local_44 = operator_new(0xe);
            if (local_44 == (int *)0x0) {
              local_44 = (int *)0x0;
            }
            else {
              *local_44 = (int)puVar9;
              local_44[1] = (int)piVar8;
              local_44[2] = 0;
              *(undefined1 *)(local_44 + 3) = 0;
            }
            iVar14 = local_40 + 1;
            bVar15 = local_40 != 0;
            piVar10 = local_44;
            local_40 = iVar14;
            if (bVar15) {
              piVar8[2] = (int)local_44;
              piVar10 = local_48;
            }
          }
        }
      }
      local_48 = piVar10;
      piVar10 = local_48;
      if (local_36 != '\0') {
        piStack_c0 = (int *)0x678da1;
        cVar5 = (**(code **)(*(int *)(local_20 + 0xa30) + 0x24))();
        piVar10 = local_48;
        if (cVar5 != '\0') {
          iVar14 = 0;
          local_14 = (int *)0x0;
          local_2c = *(int **)((int)local_24 + 0x12);
          local_5c = *(int **)(*(int *)((int)local_24 + 0x1de) + 0x10);
          piVar10 = *(int **)(*(int *)(local_18 + 10) + 0x3b7e);
          while (piVar10 != (int *)0x0) {
            piVar8 = (int *)piVar10[2];
            piVar2 = (int *)*piVar10;
            cVar5 = (**(code **)(*piVar2 + 0x10))();
            piVar10 = piVar8;
            if (((cVar5 != '\0') && (cVar5 = FUN_004f2390(), cVar5 == '\0')) &&
               ((*(int *)((int)piVar2 + 0x5a) == 6 && (*(int **)((int)piVar2 + 0x16) == local_2c))))
            {
              iVar14 = iVar14 + piVar2[0xc];
            }
          }
          local_14 = (int *)iVar14;
          iVar7 = __ftol();
          piStack_c0 = (int *)0x678e1e;
          FUN_004d0d40();
          iVar14 = __ftol();
          if (*(int *)(local_20 + 0xa2c) < iVar14) {
            iVar14 = *(int *)(local_20 + 0xa2c);
          }
          local_14 = (int *)(iVar14 - iVar7);
          piVar10 = local_48;
          if (0 < (int)local_14) {
            piVar10 = (int *)(0x168 / (longlong)(int)DAT_008effbc);
            if ((int)piVar10 < 2) {
              piVar10 = (int *)0x1;
            }
            if ((int)piVar10 < (int)local_14) {
              local_14 = piVar10;
            }
            piStack_c0 = (int *)0x678e6b;
            puVar9 = operator_new(0xc);
            piVar8 = local_44;
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              *puVar9 = 0;
              puVar9[1] = 0;
              puVar9[2] = 0;
            }
            puVar9[2] = *(undefined4 *)((int)local_24 + 0x12);
            puVar9[1] = (float)(int)local_14;
            *puVar9 = 6;
            piStack_c0 = (int *)0x678ea1;
            local_44 = operator_new(0xe);
            if (local_44 == (int *)0x0) {
              local_44 = (int *)0x0;
            }
            else {
              *local_44 = (int)puVar9;
              local_44[1] = (int)piVar8;
              local_44[2] = 0;
              *(undefined1 *)(local_44 + 3) = 0;
            }
            iVar14 = local_40 + 1;
            bVar15 = local_40 != 0;
            piVar10 = local_44;
            local_40 = iVar14;
            if (bVar15) {
              piVar8[2] = (int)local_44;
              piVar10 = local_48;
            }
          }
        }
      }
      local_48 = piVar10;
      piVar10 = local_48;
      if (local_38 != '\0') {
        piStack_c0 = (int *)0x678ef0;
        cVar5 = (**(code **)(*(int *)(local_20 + 0xa4a) + 0x24))();
        piVar10 = local_48;
        if (cVar5 != '\0') {
          iVar14 = 0;
          local_14 = (int *)0x0;
          local_2c = *(int **)((int)local_24 + 0x12);
          local_54[0] = *(undefined1 **)(*(int *)((int)local_24 + 0x1e2) + 0x10);
          piVar10 = *(int **)(*(int *)(local_18 + 10) + 0x3b7e);
          while (piVar10 != (int *)0x0) {
            piVar8 = (int *)piVar10[2];
            piVar2 = (int *)*piVar10;
            cVar5 = (**(code **)(*piVar2 + 0x10))();
            piVar10 = piVar8;
            if ((((cVar5 != '\0') && (cVar5 = FUN_004f2390(), cVar5 == '\0')) &&
                (*(int *)((int)piVar2 + 0x5a) == 7)) && (*(int **)((int)piVar2 + 0x16) == local_2c))
            {
              iVar14 = iVar14 + piVar2[0xc];
            }
          }
          local_14 = (int *)iVar14;
          iVar7 = __ftol();
          piStack_c0 = (int *)0x678f6d;
          FUN_004d0d40();
          iVar14 = __ftol();
          if (*(int *)(local_20 + 0xa46) < iVar14) {
            iVar14 = *(int *)(local_20 + 0xa46);
          }
          local_14 = (int *)(iVar14 - iVar7);
          piVar10 = local_48;
          if (0 < (int)local_14) {
            piVar10 = (int *)(0x168 / (longlong)(int)DAT_008effbe);
            if ((int)piVar10 < 2) {
              piVar10 = (int *)0x1;
            }
            if ((int)piVar10 < (int)local_14) {
              local_14 = piVar10;
            }
            piStack_c0 = (int *)0x678fba;
            puVar9 = operator_new(0xc);
            piVar8 = local_44;
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              *puVar9 = 0;
              puVar9[1] = 0;
              puVar9[2] = 0;
            }
            puVar9[2] = *(undefined4 *)((int)local_24 + 0x12);
            puVar9[1] = (float)(int)local_14;
            *puVar9 = 7;
            piStack_c0 = (int *)0x678ff0;
            local_44 = operator_new(0xe);
            if (local_44 == (int *)0x0) {
              local_44 = (int *)0x0;
            }
            else {
              *local_44 = (int)puVar9;
              local_44[1] = (int)piVar8;
              local_44[2] = 0;
              *(undefined1 *)(local_44 + 3) = 0;
            }
            iVar14 = local_40 + 1;
            bVar15 = local_40 != 0;
            piVar10 = local_44;
            local_40 = iVar14;
            if (bVar15) {
              piVar8[2] = (int)local_44;
              piVar10 = local_48;
            }
          }
        }
      }
    }
  }
  if ((0 < *(int *)(*(int *)(local_18 + 10) + 0x117e4)) &&
     (iVar7 = (**(code **)(*(int *)(*(int *)(local_18 + 10) + 0xe86a) + 4))(), iVar14 = local_18,
     1 < iVar7)) {
    piStack_c0 = (int *)0x679065;
    iVar7 = FUN_004a6740();
    local_54[0] = (undefined1 *)(local_60 + iVar7);
    piStack_c0 = (int *)0x679079;
    FUN_004a6700();
    iVar14 = *(int *)(*(int *)(iVar14 + 10) + 0x120);
    fVar12 = *(float *)(iVar14 + 0x378);
    cVar5 = FUN_0044beb0();
    if (cVar5 != '\0') {
      fVar12 = *(float *)(iVar14 + 0x37c);
    }
    fVar12 = (fVar12 + _DAT_007e3374) * (float)*(int *)(*(int *)(local_18 + 10) + 0x3902) -
             (float)(int)local_54[0];
    local_1c = fVar12 * _DAT_007e6800;
    FUN_006a9d50();
    local_54[0] = (undefined1 *)(int)DAT_00ad2e6e;
    local_1c = local_1c / (float)(int)local_54[0];
    piVar10 = (int *)(int)ROUND(fVar12 / (float)(int)DAT_00ad2e6c);
    local_28 = (int *)(int)ROUND(local_1c);
    iVar7 = *(int *)(iVar14 + 0x36c);
    local_14 = piVar10;
    cVar5 = FUN_0044beb0();
    if (cVar5 != '\0') {
      iVar7 = *(int *)(iVar14 + 0x370);
    }
    piStack_c0 = (int *)0x0;
    puStack_c4 = (undefined4 *)0x67912a;
    local_30 = (undefined4 *)FUN_004671c0();
    local_1c = 1.4013e-45;
    if (iVar7 < (int)local_30) {
      piStack_c0 = (int *)0x0;
      puStack_c4 = (undefined4 *)0x679144;
      iVar14 = FUN_004671c0();
      piVar10 = (int *)(iVar7 / (iVar14 + 1));
      local_1c = (float)((int)local_30 / iVar7);
      if ((int)local_1c < 1) {
        local_1c = 1.4013e-45;
      }
    }
    piStack_c0 = (int *)0x1;
    puStack_c4 = (undefined4 *)0x679171;
    local_54[0] = (undefined1 *)FUN_004671c0();
    param_2 = (float *)0x1;
    if (iVar7 < (int)local_54[0]) {
      piStack_c0 = (int *)0x1;
      puStack_c4 = (undefined4 *)0x67918b;
      iVar14 = FUN_004671c0();
      local_28 = (int *)(iVar7 / (iVar14 + 1));
      param_2 = (float *)((int)local_54[0] / iVar7);
      if ((int)param_2 < 1) {
        param_2 = (float *)0x1;
      }
    }
    if (0 < (int)piVar10) {
      piStack_c0 = (int *)0x6791bd;
      cVar5 = FUN_0049f350();
      if ((cVar5 != '\0') && (local_60 < 0x32)) {
        piStack_c0 = (int *)0x6791d9;
        fVar16 = (float10)FUN_00467370();
        local_14 = (int *)(float)fVar16;
        piStack_c0 = (int *)0x0;
        puStack_c4 = (undefined4 *)0x6791e7;
        local_30 = (undefined4 *)FUN_004671c0();
        piStack_c0 = (int *)0x6791f4;
        fVar16 = (float10)FUN_00467470();
        local_54[0] = (undefined1 *)(float)fVar16;
        fVar12 = local_1c;
        if (local_34 < local_58) {
          do {
            if (((int)fVar12 < 1) || (0x31 < local_60)) break;
            piStack_c0 = (int *)0x67921a;
            FUN_00428eb0();
            piStack_c0 = local_14;
            puStack_c4 = local_30;
            iStack_cc = 0;
            local_2c = (int *)&fStack_d4;
            piStack_c8 = piVar10;
            FUN_00446d10();
            FUN_00667670();
            FUN_0045e110();
            local_34 = (float)local_14 + local_34;
            local_60 = local_60 + (int)piVar10;
            fVar12 = (float)((int)fVar12 + -1);
          } while (local_34 < local_58);
        }
      }
    }
    piVar10 = local_28;
    if (0 < (int)local_28) {
      piStack_c0 = (int *)0x67927c;
      cVar5 = FUN_0049f350();
      if ((cVar5 != '\0') && (local_6c < 0x14)) {
        piStack_c0 = (int *)0x679298;
        fVar16 = (float10)FUN_00467370();
        local_14 = (int *)(float)fVar16;
        piStack_c0 = (int *)0x1;
        puStack_c4 = (undefined4 *)0x6792a6;
        puVar9 = (undefined4 *)FUN_004671c0();
        piStack_c0 = (int *)0x6792b4;
        fVar16 = (float10)FUN_00467470();
        local_54[0] = (undefined1 *)(float)fVar16;
        iVar14 = local_6c;
        piVar8 = local_48;
        if (local_34 < local_58) {
          do {
            if (((int)param_2 < 1) || (0x31 < iVar14)) goto LAB_00679330;
            piStack_c0 = (int *)0x6792e0;
            FUN_00428eb0();
            piStack_c0 = local_14;
            piStack_c8 = piVar10;
            iStack_cc = 1;
            local_2c = (int *)&fStack_d4;
            puStack_c4 = puVar9;
            FUN_00446d10();
            FUN_00667670();
            FUN_0045e110();
            local_34 = (float)local_14 + local_34;
            param_2 = (float *)((int)param_2 + -1);
            iVar14 = iVar14 + (int)piVar10;
            piVar8 = local_48;
          } while (local_34 < local_58);
        }
        goto joined_r0x00679495;
      }
    }
  }
LAB_00679330:
  piVar8 = local_48;
  if (local_34 < local_58) {
    do {
      iVar14 = local_40;
      piVar8 = local_48;
      if (local_40 < 1) break;
      iVar7 = _rand();
      piVar10 = local_48;
      for (iVar7 = iVar7 % iVar14; iVar7 != 0; iVar7 = iVar7 + -1) {
        piVar10 = (int *)piVar10[2];
      }
      piVar10 = (int *)*piVar10;
      puStack_c4 = (undefined4 *)&stack0xffffff44;
      ppuVar1 = local_4c + 7;
      piStack_c8 = (int *)0x67937a;
      piStack_c0 = piVar10;
      (*(code *)local_4c[10])();
      piStack_c8 = (int *)0x67937f;
      (*(code *)*ppuVar1)();
      piStack_c0 = (int *)0x679388;
      iVar14 = FUN_004e9370();
      fVar12 = *(float *)(*(int *)(iVar14 + 0x1c6 + *piVar10 * 4) + 0x10) + (float)piVar10[1];
      piVar8 = *(int **)(*(int *)(local_18 + 10) + 0x3b7e);
      while (piVar8 != (int *)0x0) {
        piVar2 = (int *)piVar8[2];
        piVar4 = (int *)*piVar8;
        cVar5 = (**(code **)(*piVar4 + 0x10))();
        piVar8 = piVar2;
        if (((cVar5 != '\0') && (*(int *)((int)piVar4 + 0x16) == piVar10[2])) &&
           (*(int *)((int)piVar4 + 0x5a) == *piVar10)) {
          fVar12 = (float)piVar4[0xc] + fVar12;
        }
      }
      piStack_c0 = (int *)0x6793ea;
      fVar16 = (float10)FUN_004d0d40();
      if ((float10)fVar12 <= fVar16) {
        piStack_c0 = (int *)0x679400;
        FUN_00428eb0();
        piStack_c0 = (int *)0x679410;
        FUN_00467460();
        piStack_c0 = (int *)*piVar10;
        puStack_c4 = (undefined4 *)0x67941e;
        fVar16 = (float10)FUN_00467350();
        piStack_c0 = (int *)(float)fVar16;
        puStack_c4 = (undefined4 *)0x67942a;
        puStack_c4 = (undefined4 *)__ftol();
        piStack_c8 = (int *)*piVar10;
        iStack_cc = 0x679435;
        puStack_c4 = (undefined4 *)FUN_00467100();
        piStack_c8 = (int *)0x67943e;
        piStack_c8 = (int *)__ftol();
        iStack_cc = piVar10[2];
        iStack_d0 = *piVar10;
        FUN_00446d10(local_54);
        FUN_00667670();
        FUN_0045e050();
        piStack_c0 = (int *)0x679470;
        fVar16 = (float10)FUN_00467350();
        local_34 = (float)(fVar16 + (float10)local_34);
      }
      piStack_c0 = (int *)0x67947c;
      FUN_00796cd8();
      piVar8 = local_48;
    } while (local_34 < local_58);
  }
joined_r0x00679495:
  while (piVar8 != (int *)0x0) {
    piVar10 = (int *)piVar8[2];
    piStack_c0 = (int *)0x6794a2;
    FUN_00796cd8();
    puStack_c4 = (undefined4 *)0x6794a8;
    piStack_c0 = piVar8;
    FUN_00796cd8();
    piVar8 = piVar10;
  }
  ExceptionList = local_10;
  return;
}


