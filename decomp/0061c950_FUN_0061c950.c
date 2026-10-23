// FUN_0061c950 @ 61c950 size=4933

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __thiscall FUN_0061c950(int param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined6 *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  undefined8 uVar15;
  double dVar16;
  undefined2 uVar18;
  undefined8 uVar17;
  int local_16c;
  undefined4 local_168;
  undefined4 local_158;
  undefined2 local_154;
  undefined4 local_150;
  undefined2 local_14c;
  undefined4 local_148;
  undefined2 local_144;
  undefined4 local_140;
  undefined2 local_13c;
  undefined4 local_138;
  undefined2 local_134;
  undefined1 local_108 [260];
  
  iVar12 = *(int *)(param_1 + 200);
  DAT_00cf9908 = 0;
  iVar6 = FUN_00585e50();
  iVar9 = *(int *)(param_1 + 0x90);
  if ((*(float *)(iVar9 + 0x39c8) < (float)iVar6) && (_DAT_007e3380 < (float)iVar6)) {
    dVar16 = (double)iVar6;
    goto LAB_0061c9d6;
  }
  iVar13 = *(int *)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0x12da) + 0x3b30);
  if ((iVar13 == 0) || (iVar13 == *(int *)(iVar9 + 6))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  iVar9 = *(int *)(*(int *)(iVar9 + 0x12da) + 0x3b30);
  if ((iVar9 == 0) || (iVar9 == *(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 6))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  DAT_00cf9d08 = 0;
  switch(param_2) {
  case 0:
    cVar5 = (**(code **)(**(int **)(param_1 + 0x90) + 0x450))(iVar12,0);
    if (cVar5 != '\0') {
      dVar16 = (double)iVar6;
      uVar7 = FUN_0042b6c9();
      goto LAB_0061ca88;
    }
    iVar9 = *(int *)(*(int *)(param_1 + 0x90) + 0x12da);
    if (*(char *)(iVar9 + 0x31 + iVar12 * 0x2c) == '\0') {
      if (*(char *)(iVar9 + iVar12 * 0x2c + 0x32) == '\0') {
        if (*(int *)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0x12da) + 0x3b30) ==
            *(int *)(*(int *)(param_1 + 0x90) + 6)) {
          (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
        }
        else {
          cVar5 = FUN_005861e0();
          if (cVar5 == '\0') {
            cVar5 = FUN_005861a0();
            if ((cVar5 != '\0') ||
               (((*(int *)(*DAT_00d12b40 + 0x3fa) == 0 && (cVar5 = FUN_0044d840(), cVar5 != '\0'))
                && (fVar1 = *(float *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0x334c),
                   fVar14 = (float10)FUN_00761090(), (float10)fVar1 < fVar14)))) goto LAB_0061cbdf;
            if ((*(int *)(*DAT_00d12b40 + 0x3fa) == 0) &&
               (fVar1 = *(float *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0x334c),
               fVar14 = (float10)FUN_00761090(), (float10)fVar1 < fVar14)) {
              iVar12 = (&DAT_0089cad8)[*(int *)(param_1 + 200)];
              dVar16 = (double)*(float *)(iVar12 + 0x334c);
              fVar14 = (float10)FUN_00761090();
              uVar7 = (**(code **)(*(int *)(iVar12 + 0xe) + 0xc))((double)fVar14,dVar16);
              uVar8 = FUN_0042b6c9(s_DIPROL_WAR8_0085fa84);
              FUN_007a630a(&DAT_00cf9908,uVar8,uVar7);
              return &DAT_00cf9908;
            }
            if ((*(int *)(*DAT_00d12b40 + 0x3fa) != 0) ||
               (fVar1 = *(float *)(*(int *)(*(int *)(param_1 + 0x90) + 0x244) + 0xaa),
               fVar14 = (float10)FUN_005885d0(), fVar14 <= (float10)fVar1)) {
              if (DAT_00dc18e9 != '\0') {
                iVar9 = (&DAT_0089cad8)[*(int *)(param_1 + 200)];
                if (*(int *)(*(int *)(iVar9 + 0x12da) + 0x3b30) != 0) {
                  uVar7 = FUN_004af740();
                  uVar8 = (**(code **)(*(int *)(iVar9 + 0xe) + 0xc))();
                  dVar16 = (double)CONCAT44(uVar7,uVar8);
                  goto LAB_0061c9d6;
                }
                if (*(int *)(*(int *)(DAT_00d0ca90 + 0x12da) + 0x3b30) != 0) {
                  FUN_004af740();
                  goto LAB_0061da8f;
                }
                if (*(int *)(DAT_00d0ca90 + 0x3350) == 0) {
                  local_16c = DAT_00d0ca90;
                }
                else {
                  iVar9 = FUN_00584c90();
                  local_16c = (&DAT_0089cad8)[iVar9];
                }
                if ((((&DAT_0089cad8)[iVar12] != 0) &&
                    (*(int *)((&DAT_0089cad8)[iVar12] + 0x3350) != 0)) &&
                   (iVar9 = FUN_00584c90(), iVar9 != iVar12)) {
                  FUN_00584c90();
                }
                if ((local_16c != 0) && (cVar5 = FUN_005861e0(), cVar5 != '\0')) {
                  iVar12 = (&DAT_0089cad8)[*(int *)(param_1 + 200)];
                  FUN_004af740();
                  uVar7 = (**(code **)(*(int *)(local_16c + 0xe) + 0xc))();
                  (**(code **)(*(int *)(iVar12 + 0xe) + 0xc))(uVar7);
                  goto LAB_0061cda7;
                }
              }
              iVar9 = (&DAT_0089cad8)[*(int *)(param_1 + 200)];
              local_168._2_1_ =
                   (char)((uint)*(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1306 + iVar12 * 6) >>
                         0x10);
              uVar7 = FUN_0042b6c9((&PTR_s_JANUARY_00866390)[local_168._2_1_]);
              (**(code **)(*(int *)(iVar9 + 0xe) + 0xc))(uVar7);
            }
            else {
              (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))
                        ((double)*(float *)(*(int *)(*(int *)(param_1 + 0x90) + 0x244) + 0xaa));
            }
LAB_0061cda7:
            uVar7 = FUN_0042b6c9();
            FUN_007a630a(&DAT_00cf9908,uVar7);
            return &DAT_00cf9908;
          }
          (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
        }
      }
      else {
        (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
      }
    }
    else {
      (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
    }
    goto LAB_0061da8f;
  case 1:
  case 2:
    cVar5 = FUN_004a32f0();
    if (cVar5 == '\0') {
      cVar5 = FUN_00586640();
      if (cVar5 == '\0') {
        if (*(char *)(*(int *)(*(int *)(param_1 + 0x90) + 0x12da) + iVar12 * 0x2c + 0x2c) == '\0') {
          if (*(float *)(*(int *)(*(int *)(param_1 + 0x90) + 0x244) + 0x2a) < _DAT_007e3374)
          goto LAB_0061cbdf;
          cVar5 = FUN_0044beb0();
          if ((cVar5 != '\0') ||
             (_DAT_007e3374 <=
              *(float *)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0x244) + 0x2a))) {
            if ((*(int *)(*(int *)(param_1 + 0x90) + 0x3350) != 0) &&
               (iVar12 = *(int *)(*(int *)(param_1 + 0x90) + 6), iVar9 = FUN_00584c90(),
               iVar9 != iVar12)) {
              puVar11 = (undefined *)FUN_0042b6c9();
              return puVar11;
            }
            if (*(int *)(*(int *)(*(int *)(param_1 + 0x90) + 0x12da) + 0x3b30) != 0) {
              puVar11 = (undefined *)FUN_0042b6c9();
              return puVar11;
            }
            (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
          }
          else {
            (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
          }
        }
        else {
          (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
        }
        goto LAB_0061da8f;
      }
      FUN_00586600();
      iVar9 = FUN_00428ee0();
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = iVar9 + -8;
      }
      FUN_0043ea10(&DAT_00cf9d08,*(undefined4 *)(iVar9 + 0x22),iVar12,0);
      puVar11 = &DAT_00cf9d08;
      uVar7 = (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
      dVar16 = (double)CONCAT44(puVar11,uVar7);
      goto LAB_0061c9d6;
    }
    if (param_2 == 2) {
      (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
    }
    else {
      (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
    }
    FUN_0042b6c9();
    FUN_007a630a();
    goto LAB_0061dc52;
  case 3:
    cVar5 = FUN_004a32f0();
    if ((cVar5 != '\0') && (cVar5 = FUN_004a0a20(), cVar5 != '\0')) {
      FUN_00586600();
      iVar9 = FUN_00428ee0();
      if ((iVar9 != 0) && (iVar9 != 8)) {
        FUN_00586600();
        iVar9 = FUN_00428ee0();
        if (iVar9 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = iVar9 + -8;
        }
        FUN_0043ea10(&DAT_00cf9d08,*(undefined4 *)(iVar9 + 0x22),iVar12,0);
        puVar11 = &DAT_00cf9d08;
        uVar7 = (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
        uVar15 = CONCAT44(puVar11,uVar7);
        uVar7 = FUN_0042b6c9();
        FUN_007a630a(&DAT_00cf9908,uVar7,uVar15);
        goto LAB_0061dc52;
      }
    }
    cVar5 = FUN_00586640();
    if (cVar5 != '\0') {
      puVar11 = (undefined *)FUN_0042b6c9();
      return puVar11;
    }
    if ((*(float *)(*(int *)(DAT_00d0ca90 + 0x244) + 0x2a) < _DAT_007e3374) &&
       ((cVar5 = FUN_0044beb0(), cVar5 == '\0' || (*(int *)(DAT_00d0ca90 + 0x3350) != 0)))) {
      puVar11 = (undefined *)FUN_0042b6c9();
      return puVar11;
    }
    cVar5 = FUN_00586640();
    if (cVar5 == '\0') {
      return (undefined *)0x0;
    }
    FUN_00586600();
    iVar12 = FUN_00428ee0();
    if (iVar12 == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = iVar12 + -8;
    }
    for (piVar2 = *(int **)(*(int *)(iVar12 + 0x22) + 4); piVar2 != (int *)0x0;
        piVar2 = (int *)piVar2[2]) {
      if (((&DAT_0089cad8)[*piVar2] != 0) &&
         (*(char *)(*(int *)(*(int *)(param_1 + 0x90) + 0x12da) + *piVar2 * 0x2c + 0x2c) != '\0')) {
        (**(code **)(*(int *)((&DAT_0089cad8)[*piVar2] + 0xe) + 0xc))();
        goto LAB_0061da8f;
      }
    }
    FUN_00586600();
    FUN_00428ee0();
    iVar12 = FUN_00584c90();
    iVar12 = (&DAT_0089cad8)[iVar12];
    uVar7 = (**(code **)(*(int *)(iVar12 + 0xe) + 0xc))();
    uVar8 = (**(code **)(*(int *)(iVar12 + 0xe) + 0xc))();
    dVar16 = (double)CONCAT44(uVar7,uVar8);
    goto LAB_0061c9d6;
  case 4:
    if (*(int *)(DAT_00d0ca90 + 0x3350) == 0) {
      puVar11 = (undefined *)FUN_0042b6c9();
      return puVar11;
    }
    cVar5 = FUN_004a1c10();
    if (cVar5 == '\0') {
      puVar11 = (undefined *)FUN_0042b6c9();
      return puVar11;
    }
    (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
    break;
  case 5:
    if ((*(int *)(DAT_00d0ca90 + 0x3350) == 0) ||
       (iVar9 = *(int *)(DAT_00d0ca90 + 6), iVar13 = FUN_00584c90(), iVar13 != iVar9)) {
      puVar11 = (undefined *)FUN_0042b6c9();
      return puVar11;
    }
    cVar5 = FUN_004a1cd0(*(undefined4 *)(DAT_00d0ca90 + 0x3350),iVar12);
    if (cVar5 == '\0') {
      (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
      FUN_0042b6c9(s_DIPROL_BA_1_0085f8bc);
      FUN_007a630a();
      return &DAT_00cf9d08;
    }
    (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
    break;
  case 6:
    (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
    break;
  case 7:
    (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
    break;
  case 8:
    (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
    break;
  case 9:
    (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
    break;
  case 10:
    (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
    break;
  case 0xb:
    (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
    break;
  case 0xc:
    (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
    break;
  case 0xd:
    cVar5 = FUN_004a01c0();
    if (cVar5 == '\0') {
LAB_0061cbdf:
      uVar7 = FUN_0042b6c9();
      FUN_007a630a(&DAT_00cf9908,uVar7);
      return &DAT_00cf9908;
    }
    iVar12 = (&DAT_0089cad8)[*(int *)(param_1 + 200)];
    if (iVar12 == 0) {
      return (undefined *)0x0;
    }
    if ((*(int *)(iVar12 + 0x3350) == 0) ||
       (*(int *)(DAT_00d0ca90 + 0x3350) != *(int *)(iVar12 + 0x3350))) {
LAB_0061d781:
      uVar7 = FUN_0042b6c9();
      FUN_007a630a(&DAT_00cf9d08,uVar7);
      return &DAT_00cf9d08;
    }
    (**(code **)(*(int *)(iVar12 + 0xe) + 0xc))();
    break;
  case 0xe:
    if (*(float *)(*(int *)(DAT_00d0ca90 + 0x244) + 0x3a) < _DAT_007e3374) {
      puVar11 = (undefined *)FUN_0042b6c9();
      return puVar11;
    }
    (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
    break;
  case 0xf:
    cVar5 = FUN_004a0b90();
    if (cVar5 == '\0') {
      puVar11 = (undefined *)FUN_0042b6c9();
      return puVar11;
    }
    dVar16 = (double)iVar6;
    uVar7 = FUN_0042b6c9();
LAB_0061ca88:
    uVar8 = FUN_0042b6c9();
    FUN_007a630a(&DAT_00cf9908,s__s__s____f_0085f470,uVar8,uVar7,dVar16);
    return &DAT_00cf9908;
  case 0x10:
    (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
    break;
  case 0x11:
    cVar5 = FUN_004a7650();
    if (cVar5 == '\0') {
      (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
      goto LAB_0061da8f;
    }
    (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
    break;
  case 0x12:
    if ((bVar3) || (bVar4)) {
LAB_0061da73:
      (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
LAB_0061da8f:
      FUN_0042b6c9();
      FUN_007a630a();
      return &DAT_00cf9908;
    }
    local_148 = *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x2326 + *(int *)(param_1 + 200) * 6);
    local_144 = *(undefined2 *)(*(int *)(param_1 + 0x90) + *(int *)(param_1 + 200) * 6 + 0x232a);
    cVar5 = FUN_0042dd70();
    if (cVar5 != '\0') {
      uVar7 = FUN_0042b6c9();
      FUN_007a630a(&DAT_00cf9908,uVar7);
      local_150 = *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x2326 + *(int *)(param_1 + 200) * 6);
      local_14c = *(undefined2 *)(*(int *)(param_1 + 0x90) + *(int *)(param_1 + 200) * 6 + 0x232a);
      FUN_0079168d(local_108,&local_150);
LAB_0061d8fa:
      FUN_007a630a(&DAT_00cf9d08,s__s__s_0085f800,&DAT_00cf9908,local_108);
      return &DAT_00cf9d08;
    }
    (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
    break;
  case 0x13:
    (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
    break;
  case 0x14:
    if (*(float *)(*(int *)(*(int *)(param_1 + 0x90) + 0x244) + 0x36) < _DAT_007e3374) {
      (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
      FUN_0042b6c9(s_DIPROL_NO_NAP_CANCEL_0085f7ac);
      FUN_007a630a();
      return &DAT_00cf9d08;
    }
    (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
    break;
  case 0x15:
    if ((bVar3) || (bVar4)) goto LAB_0061da73;
    if (DAT_00dc1540 == '\0') {
      puVar11 = (undefined *)FUN_0042b6c9();
      return puVar11;
    }
    local_140 = *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x2326 + *(int *)(param_1 + 200) * 6);
    local_13c = *(undefined2 *)(*(int *)(param_1 + 0x90) + *(int *)(param_1 + 200) * 6 + 0x232a);
    cVar5 = FUN_0042dd70();
    if (cVar5 != '\0') {
      uVar7 = FUN_0042b6c9();
      FUN_007a630a(&DAT_00cf9908,uVar7);
      local_158 = *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x2326 + *(int *)(param_1 + 200) * 6);
      local_154 = *(undefined2 *)(*(int *)(param_1 + 0x90) + *(int *)(param_1 + 200) * 6 + 0x232a);
      FUN_0079168d(local_108,&local_158);
      goto LAB_0061d8fa;
    }
    cVar5 = FUN_004a74e0();
    if ((cVar5 != '\0') || (cVar5 = FUN_004a74e0(), cVar5 != '\0')) goto LAB_0061d781;
    (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
    break;
  case 0x16:
    cVar5 = FUN_0042dd70();
    if (cVar5 != '\0') {
      uVar7 = FUN_0042b6c9();
      FUN_007a630a(&DAT_00cf9908,uVar7);
      local_138 = *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x2326 + *(int *)(param_1 + 200) * 6);
      local_134 = *(undefined2 *)(*(int *)(param_1 + 0x90) + *(int *)(param_1 + 200) * 6 + 0x232a);
      FUN_0079168d(local_108,&local_138);
      FUN_007a630a(&DAT_00cf9d08,s__s__s_0085f800,&DAT_00cf9908,local_108);
      return &DAT_00cf9d08;
    }
    (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
    break;
  default:
    DAT_00cf9d08 = 0;
    return (undefined *)0x0;
  case 0x18:
    cVar5 = FUN_004a2450();
    if (cVar5 != '\0') {
      dVar16 = (double)iVar6;
      uVar7 = FUN_0042b6c9();
      goto LAB_0061ca88;
    }
    iVar9 = FUN_005862f0();
    if (iVar9 == 0) {
      return (undefined *)0x0;
    }
    local_16c = *(undefined4 *)(iVar9 + 0x22);
    local_168 = *(undefined4 *)(iVar9 + 0x26);
    cVar5 = FUN_00584e20();
    if (cVar5 == '\x01') {
      local_168 = *(undefined4 *)(iVar9 + 0x22);
      local_16c = *(undefined4 *)(iVar9 + 0x26);
    }
    uVar18 = 0x61;
    puVar10 = (undefined6 *)FUN_00447250();
    uVar17 = CONCAT26(uVar18,*puVar10);
    uVar15 = CONCAT44(local_168,local_16c);
    iVar9 = iVar12;
    uVar7 = FUN_00458280(iVar12,local_16c,local_168,uVar17);
    cVar5 = FUN_004a24e0(uVar7,iVar9,uVar15,uVar17);
    if (cVar5 != '\0') {
      puVar11 = (undefined *)FUN_0042b6c9();
      return puVar11;
    }
    iVar9 = (int)*(short *)(*(int *)(param_1 + 0x90) + iVar12 * 6 + 0x130a);
    local_168._2_1_ =
         (char)((uint)*(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1306 + iVar12 * 6) >> 0x10);
    uVar7 = FUN_0042b6c9((&PTR_s_JANUARY_00866390)[local_168._2_1_]);
    dVar16 = (double)CONCAT44(iVar9,uVar7);
LAB_0061c9d6:
    uVar7 = FUN_0042b6c9();
    FUN_007a630a(&DAT_00cf9908,uVar7,dVar16);
    return &DAT_00cf9908;
  case 0x19:
    (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 0xe) + 0xc))();
  }
  FUN_0042b6c9();
  FUN_007a630a();
LAB_0061dc52:
  dVar16 = (double)iVar6;
  uVar7 = FUN_0042b6c9();
  FUN_007a630a(&DAT_00cf9d08,s__s__s____f_0085f470,&DAT_00cf9908,uVar7,dVar16);
  return &DAT_00cf9d08;
}


