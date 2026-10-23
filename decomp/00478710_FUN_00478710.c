// FUN_00478710 @ 478710 size=3231

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00478710(int *param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  undefined1 *puVar18;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bd021;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar6 = FUN_00428ee0();
  if (iVar6 == 0) {
    ExceptionList = local_c;
    return 3;
  }
  piVar1 = (int *)(iVar6 + -8);
  if (piVar1 == (int *)0x0) {
    ExceptionList = local_c;
    return 3;
  }
  cVar5 = (**(code **)(*piVar1 + 0x14))();
  if ((cVar5 == '\0') && (cVar5 = (**(code **)(*piVar1 + 0x18))(), cVar5 == '\0')) {
    ExceptionList = local_c;
    return 3;
  }
  cVar5 = (**(code **)(*piVar1 + 0x14))();
  if (cVar5 == '\0') {
    piVar7 = (int *)FUN_0044c5b0();
    fStack_18 = *(float *)(iVar6 + 0x52);
  }
  else {
    piVar7 = (int *)FUN_0044c3d0();
    fStack_18 = *(float *)(iVar6 + 0x56);
  }
  cVar5 = (**(code **)(*piVar7 + 0xc))();
  if (cVar5 == '\0') {
    cVar5 = (**(code **)(*piVar7 + 0x14))();
    if (cVar5 == '\0') {
      cVar5 = (**(code **)(*piVar7 + 0x10))();
      if (cVar5 == '\0') {
        ExceptionList = local_c;
        return 0;
      }
      piVar8 = operator_new(0x300);
      uStack_4 = 2;
      if (piVar8 == (int *)0x0) goto LAB_004788fc;
      FUN_004fb840();
      *piVar8 = (int)&PTR_FUN_007e69a8;
      piVar8[2] = (int)&PTR_LAB_007e6994;
      *(undefined ***)((int)piVar8 + 0x12) = &PTR_FUN_007e698c;
      piVar17 = piVar8 + 0xb3;
      for (iVar14 = 0xd; iVar14 != 0; iVar14 = iVar14 + -1) {
        *piVar17 = 0;
        piVar17 = piVar17 + 1;
      }
      *(undefined1 *)((int)piVar8 + 0x161) = 1;
    }
    else {
      piVar8 = operator_new(0x2fc);
      uStack_4 = 1;
      if (piVar8 == (int *)0x0) {
LAB_004788fc:
        piVar8 = (int *)0x0;
      }
      else {
        FUN_004fb840();
        *piVar8 = (int)&PTR_FUN_007e6a00;
        piVar8[2] = (int)&PTR_LAB_007e69ec;
        *(undefined ***)((int)piVar8 + 0x12) = &PTR_LAB_007e69e4;
        piVar8[0xb3] = 0;
        piVar17 = piVar8 + 0xb4;
        for (iVar14 = 0xb; iVar14 != 0; iVar14 = iVar14 + -1) {
          *piVar17 = 0;
          piVar17 = piVar17 + 1;
        }
        piVar8[0xbd] = 0x7f7fffff;
        *(undefined1 *)(piVar8 + 0x58) = 1;
      }
    }
  }
  else {
    piVar8 = operator_new(0x300);
    uStack_4 = 0;
    if (piVar8 == (int *)0x0) goto LAB_004788fc;
    FUN_004fb840();
    *piVar8 = (int)&PTR_FUN_007e6a58;
    piVar8[2] = (int)&PTR_LAB_007e6a44;
    *(undefined ***)((int)piVar8 + 0x12) = &PTR_FUN_007e6a3c;
    piVar17 = piVar8 + 0xb3;
    for (iVar14 = 0xd; iVar14 != 0; iVar14 = iVar14 + -1) {
      *piVar17 = 0;
      piVar17 = piVar17 + 1;
    }
    *(undefined1 *)((int)piVar8 + 0x15f) = 1;
  }
  piVar8[0x17] = (int)param_1;
  uStack_4 = 0xffffffff;
  (**(code **)(piVar8[2] + 4))();
  cVar5 = (**(code **)(*piVar1 + 0x14))();
  if (cVar5 == '\0') {
    (**(code **)(*piVar1 + 0x18))();
  }
  else {
    (**(code **)(*piVar1 + 0x18))();
    fStack_18 = 0.0;
    iStack_1c = 0;
  }
  FUN_004fbc90(piVar7,iStack_1c,fStack_18);
  cVar5 = (**(code **)(*piVar1 + 0x14))();
  if (cVar5 != '\0') {
    if (*(int *)(iVar6 + 0x56) != 0) {
      (**(code **)(*piVar8 + 0x20))(*(int *)(iVar6 + 0x56));
    }
    if (*(int *)(iVar6 + 0x72) != 0) {
      (**(code **)(*piVar8 + 0x20))(*(int *)(iVar6 + 0x72));
    }
    if (*(int *)(iVar6 + 0x76) != 0) {
      (**(code **)(*piVar8 + 0x20))(*(int *)(iVar6 + 0x76));
    }
    if (*(int *)(iVar6 + 0x7a) != 0) {
      (**(code **)(*piVar8 + 0x20))(*(int *)(iVar6 + 0x7a));
    }
    if (*(int *)(iVar6 + 0x7e) != 0) {
      (**(code **)(*piVar8 + 0x20))(*(int *)(iVar6 + 0x7e));
    }
  }
  (**(code **)(*piVar1 + 0xc))();
  FUN_00425ba0();
  cVar5 = (**(code **)(*piVar1 + 0x14))();
  if (cVar5 != '\0') {
    pcVar9 = (char *)(**(code **)(*piVar8 + 0xc))();
    uVar15 = 0xffffffff;
    do {
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      cVar5 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar5 != '\0');
    if (~uVar15 - 1 < 2) {
      FUN_005bf284();
      FUN_00425ba0();
    }
  }
  cVar5 = (**(code **)(*piVar1 + 0x14))();
  if (cVar5 == '\0') {
    fVar2 = _DAT_007e4088;
    if ((float)piVar8[0x3c] < _DAT_007e4088) {
      fVar2 = (float)piVar8[0x3c];
    }
    piVar8[0x3b] = (int)fVar2;
    piVar8[0x3c] = 0x42c80000;
  }
  else {
    fVar2 = *(float *)((int)param_1 + piVar8[0x4c] * 4 + 0x40a2);
    if ((float)piVar8[0x3c] < fVar2) {
      fVar2 = (float)piVar8[0x3c];
    }
    piVar8[0x3b] = (int)fVar2;
    piVar8[0x3c] = *(int *)((int)param_1 + piVar8[0x4c] * 4 + 0x40a2);
  }
  piVar8[0x52] = 0;
  iVar14 = param_1[0x1148];
  puVar10 = operator_new(0xe);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    *puVar10 = piVar8;
    puVar10[1] = iVar14;
    puVar10[2] = 0;
    *(undefined1 *)(puVar10 + 3) = 0;
  }
  iVar11 = param_1[0x1149];
  param_1[0x1148] = (int)puVar10;
  param_1[0x1149] = iVar11 + 1;
  if (iVar11 == 0) {
    param_1[0x1147] = (int)puVar10;
  }
  else {
    *(undefined4 **)(iVar14 + 8) = puVar10;
  }
  piVar8[0x3d] = 0;
  fVar2 = (*(float *)(param_1[0x91] + 0x86) - _DAT_007e3374) * _DAT_007e4088;
  if (fVar2 < _DAT_007e3380) {
    fVar2 = _DAT_007e3380;
  }
  piVar8[0x40] = (int)fVar2;
  iVar14 = *(int *)(iVar6 + 0x2c) + 1;
  if (iVar14 < 0) {
    iVar14 = 0;
  }
  *(int *)(iVar6 + 0x2c) = iVar14;
  if (iVar14 == *(int *)(iVar6 + 0x28)) {
    (**(code **)(*(int *)((int)param_1 + 0x3b7a) + 0x18))();
    (**(code **)*piVar1)();
    cVar5 = (**(code **)(*param_1 + 0x1c))();
    if ((cVar5 != '\0') && (cVar5 = FUN_0042e980(), cVar5 != '\0')) {
      FUN_0067a310();
    }
    goto LAB_00479344;
  }
  if (*(char *)(iVar6 + 0x4e) == '\0') goto LAB_00479344;
  cVar5 = (**(code **)(*piVar1 + 0x14))();
  if (cVar5 == '\0') {
    cVar5 = (**(code **)(*piVar1 + 0x18))();
    if (cVar5 == '\0') goto LAB_00479344;
    fStack_18 = *(float *)(iVar6 + 0x56);
    iVar14 = *(int *)(iVar6 + 0x52);
    bVar4 = false;
    fStack_14 = 0.0;
    iVar11 = FUN_00789ce0();
    if (iVar11 != 0) {
      while( true ) {
        iVar16 = *(int *)(iVar11 + 0xb8);
        iVar3 = *(int *)(iVar11 + 0xb4);
        if (iVar16 < 0) break;
        iVar11 = FUN_00789ce0();
        if ((iVar11 == 0) ||
           (cVar5 = (**(code **)(*(int *)((int)param_1 + iVar3 * 0x12 + 0x55c0) + 0x24))(),
           cVar5 == '\0')) goto LAB_004792c3;
        if (iVar3 != iVar14) {
          cVar5 = *(char *)(iVar3 + 0x4b5c + (int)param_1);
        }
        if (cVar5 == '\0') goto LAB_004792c3;
        fStack_14 = fStack_14 + _DAT_007e3374;
        bVar4 = true;
        iVar14 = iVar3;
        fStack_18 = (float)iVar16;
      }
      iVar11 = FUN_0044c4a0();
      if ((int)fStack_18 < iVar11) {
        fStack_14 = (float)(iVar11 - (int)fStack_18) + fStack_14;
        fStack_18 = (float)iVar11;
      }
      else {
LAB_004792c3:
        if (!bVar4) goto LAB_00479328;
      }
      fStack_14 = fStack_14 * _DAT_008775e0;
      *(float *)(iVar6 + 0x56) = fStack_18;
      *(int *)(iVar6 + 0x52) = iVar14;
      FUN_0044e100();
      FUN_00425ba0();
      if (_DAT_007e3380 < fStack_14) {
        fStack_14 = *(float *)(iVar6 + 0x46) - fStack_14;
        if (fStack_14 < _DAT_007e3380) {
          fStack_14 = _DAT_007e3380;
        }
        *(float *)(iVar6 + 0x46) = fStack_14;
      }
    }
LAB_00479328:
    if (param_1 != DAT_00d0ca90) goto LAB_00479344;
    iVar6 = DAT_00d0ca90[0x8788];
  }
  else {
    iVar14 = *(int *)(iVar6 + 0x5a);
    iStack_1c = *(int *)(iVar6 + 0x52);
    fStack_18 = 0.0;
    bVar4 = false;
    fStack_20 = 0.0;
    iVar11 = FUN_0044c3d0();
    if (iVar11 != 0) {
      while( true ) {
        iVar16 = *(int *)(iVar11 + 0xb8);
        iVar3 = *(int *)(iVar11 + 0xb4);
        if (iVar16 < 0) break;
        iVar11 = FUN_0044c3d0();
        if ((iVar11 == 0) ||
           (cVar5 = (**(code **)(*(int *)((int)param_1 + iVar3 * 0x12 + 0x4be8) + 0x24))(),
           cVar5 == '\0')) goto LAB_00478c89;
        if (iVar3 != iStack_1c) {
          cVar5 = *(char *)(iVar3 + 0x4ad0 + (int)param_1);
        }
        if (cVar5 == '\0') goto LAB_00478c89;
        fStack_20 = fStack_20 + _DAT_007e3374;
        bVar4 = true;
        iVar14 = iVar16;
        iStack_1c = iVar3;
      }
      iVar11 = FUN_0044c450();
      if (iVar14 < iVar11) {
        fStack_20 = (float)(iVar11 - iVar14) + fStack_20;
        iVar14 = iVar11;
      }
      else {
LAB_00478c89:
        if (!bVar4) goto LAB_00478cb1;
      }
      fStack_18 = _DAT_008775dc * fStack_20;
      *(int *)(iVar6 + 0x5a) = iVar14;
      *(int *)(iVar6 + 0x52) = iStack_1c;
    }
LAB_00478cb1:
    iStack_1c = *(int *)(iVar6 + 0x56);
    if (iStack_1c != 0) {
      iVar14 = *(int *)(iVar6 + 0x6e);
      bVar4 = false;
      iVar11 = FUN_00789ce0();
      fStack_20 = 0.0;
      if (iVar11 != 0) {
        while( true ) {
          iVar16 = *(int *)(iVar11 + 0xb8);
          iVar3 = *(int *)(iVar11 + 0xb4);
          if (iVar16 < 0) break;
          iVar11 = FUN_00789ce0();
          if ((iVar11 == 0) ||
             (cVar5 = (**(code **)(*(int *)((int)param_1 + iVar3 * 0x12 + 0x55c0) + 0x24))(),
             cVar5 == '\0')) goto LAB_00478d82;
          if (iVar3 != iStack_1c) {
            cVar5 = *(char *)(iVar3 + 0x4b5c + (int)param_1);
          }
          if (cVar5 == '\0') goto LAB_00478d82;
          fStack_20 = fStack_20 + _DAT_007e3374;
          bVar4 = true;
          iVar14 = iVar16;
          iStack_1c = iVar3;
        }
        iVar14 = FUN_0044c4a0();
        if (iVar14 < iVar16) {
          fStack_20 = (float)(iVar16 - iVar14) + fStack_20;
        }
        else {
LAB_00478d82:
          iVar16 = iVar14;
          if (!bVar4) goto LAB_00478daa;
        }
        fStack_20 = _DAT_008775e0 * fStack_20;
        *(int *)(iVar6 + 0x6e) = iVar16;
        *(int *)(iVar6 + 0x56) = iStack_1c;
        fStack_18 = fStack_20 + fStack_18;
      }
    }
LAB_00478daa:
    iStack_1c = *(int *)(iVar6 + 0x72);
    if (iStack_1c != 0) {
      iVar14 = *(int *)(iVar6 + 0x5e);
      bVar4 = false;
      iVar11 = FUN_00789ce0();
      fStack_20 = 0.0;
      if (iVar11 != 0) {
        while( true ) {
          iVar16 = *(int *)(iVar11 + 0xb8);
          iVar3 = *(int *)(iVar11 + 0xb4);
          if (iVar16 < 0) break;
          iVar11 = FUN_00789ce0();
          if ((iVar11 == 0) ||
             (cVar5 = (**(code **)(*(int *)((int)param_1 + iVar3 * 0x12 + 0x55c0) + 0x24))(),
             cVar5 == '\0')) goto LAB_00478e7b;
          if (iVar3 != iStack_1c) {
            cVar5 = *(char *)(iVar3 + 0x4b5c + (int)param_1);
          }
          if (cVar5 == '\0') goto LAB_00478e7b;
          fStack_20 = fStack_20 + _DAT_007e3374;
          bVar4 = true;
          iVar14 = iVar16;
          iStack_1c = iVar3;
        }
        iVar14 = FUN_0044c4a0();
        if (iVar14 < iVar16) {
          fStack_20 = (float)(iVar16 - iVar14) + fStack_20;
        }
        else {
LAB_00478e7b:
          iVar16 = iVar14;
          if (!bVar4) goto LAB_00478ea3;
        }
        fStack_20 = _DAT_008775e0 * fStack_20;
        *(int *)(iVar6 + 0x5e) = iVar16;
        *(int *)(iVar6 + 0x72) = iStack_1c;
        fStack_18 = fStack_20 + fStack_18;
      }
    }
LAB_00478ea3:
    iStack_1c = *(int *)(iVar6 + 0x76);
    if (iStack_1c != 0) {
      iVar14 = *(int *)(iVar6 + 0x62);
      bVar4 = false;
      iVar11 = FUN_00789ce0();
      fStack_20 = 0.0;
      if (iVar11 != 0) {
        while( true ) {
          iVar16 = *(int *)(iVar11 + 0xb8);
          iVar3 = *(int *)(iVar11 + 0xb4);
          if (iVar16 < 0) break;
          iVar11 = FUN_00789ce0();
          if ((iVar11 == 0) ||
             (cVar5 = (**(code **)(*(int *)((int)param_1 + iVar3 * 0x12 + 0x55c0) + 0x24))(),
             cVar5 == '\0')) goto LAB_00478f74;
          if (iVar3 != iStack_1c) {
            cVar5 = *(char *)(iVar3 + 0x4b5c + (int)param_1);
          }
          if (cVar5 == '\0') goto LAB_00478f74;
          fStack_20 = fStack_20 + _DAT_007e3374;
          bVar4 = true;
          iVar14 = iVar16;
          iStack_1c = iVar3;
        }
        iVar14 = FUN_0044c4a0();
        if (iVar14 < iVar16) {
          fStack_20 = (float)(iVar16 - iVar14) + fStack_20;
        }
        else {
LAB_00478f74:
          iVar16 = iVar14;
          if (!bVar4) goto LAB_00478f9c;
        }
        fStack_20 = _DAT_008775e0 * fStack_20;
        *(int *)(iVar6 + 0x62) = iVar16;
        *(int *)(iVar6 + 0x76) = iStack_1c;
        fStack_18 = fStack_20 + fStack_18;
      }
    }
LAB_00478f9c:
    iStack_1c = *(int *)(iVar6 + 0x7a);
    if (iStack_1c != 0) {
      iVar14 = *(int *)(iVar6 + 0x66);
      bVar4 = false;
      iVar11 = FUN_00789ce0();
      fStack_20 = 0.0;
      if (iVar11 != 0) {
        while( true ) {
          iVar16 = *(int *)(iVar11 + 0xb8);
          iVar3 = *(int *)(iVar11 + 0xb4);
          if (iVar16 < 0) break;
          iVar11 = FUN_00789ce0();
          if ((iVar11 == 0) ||
             (cVar5 = (**(code **)(*(int *)((int)param_1 + iVar3 * 0x12 + 0x55c0) + 0x24))(),
             cVar5 == '\0')) goto LAB_00479070;
          if (iVar3 != iStack_1c) {
            cVar5 = *(char *)(iVar3 + 0x4b5c + (int)param_1);
          }
          if (cVar5 == '\0') goto LAB_00479070;
          fStack_20 = fStack_20 + _DAT_007e3374;
          bVar4 = true;
          iVar14 = iVar16;
          iStack_1c = iVar3;
        }
        iVar14 = FUN_0044c4a0();
        if (iVar14 < iVar16) {
          fStack_20 = (float)(iVar16 - iVar14) + fStack_20;
        }
        else {
LAB_00479070:
          iVar16 = iVar14;
          if (!bVar4) goto LAB_0047909b;
        }
        fStack_20 = _DAT_008775e0 * fStack_20;
        *(int *)(iVar6 + 0x66) = iVar16;
        *(int *)(iVar6 + 0x7a) = iStack_1c;
        fStack_18 = fStack_20 + fStack_18;
      }
    }
LAB_0047909b:
    iStack_1c = *(int *)(iVar6 + 0x7e);
    if (iStack_1c != 0) {
      iVar14 = *(int *)(iVar6 + 0x6a);
      bVar4 = false;
      iVar11 = FUN_00789ce0();
      fStack_20 = 0.0;
      if (iVar11 != 0) {
        while( true ) {
          iVar16 = *(int *)(iVar11 + 0xb8);
          iVar3 = *(int *)(iVar11 + 0xb4);
          if (iVar16 < 0) break;
          iVar11 = FUN_00789ce0();
          if ((iVar11 == 0) ||
             (cVar5 = (**(code **)(*(int *)((int)param_1 + iVar3 * 0x12 + 0x55c0) + 0x24))(),
             cVar5 == '\0')) goto LAB_0047916f;
          if (iVar3 != iStack_1c) {
            cVar5 = *(char *)(iVar3 + 0x4b5c + (int)param_1);
          }
          if (cVar5 == '\0') goto LAB_0047916f;
          fStack_20 = fStack_20 + _DAT_007e3374;
          bVar4 = true;
          iVar14 = iVar16;
          iStack_1c = iVar3;
        }
        iVar14 = FUN_0044c4a0();
        if (iVar14 < iVar16) {
          fStack_20 = (float)(iVar16 - iVar14) + fStack_20;
        }
        else {
LAB_0047916f:
          iVar16 = iVar14;
          if (!bVar4) goto LAB_0047919a;
        }
        fStack_20 = _DAT_008775e0 * fStack_20;
        *(int *)(iVar6 + 0x6a) = iVar16;
        *(int *)(iVar6 + 0x7e) = iStack_1c;
        fStack_18 = fStack_20 + fStack_18;
      }
    }
LAB_0047919a:
    if (_DAT_007e3380 < fStack_18) {
      fStack_18 = *(float *)(iVar6 + 0x46) - fStack_18;
      if (fStack_18 < _DAT_007e3380) {
        fStack_18 = _DAT_007e3380;
      }
      *(float *)(iVar6 + 0x46) = fStack_18;
    }
    if (param_1 != DAT_00d0ca90) goto LAB_00479344;
    iVar6 = DAT_00d0ca90[0x8788];
  }
  if (iVar6 != 0) {
    FUN_00635e60();
  }
LAB_00479344:
  cVar5 = FUN_00444290();
  if (cVar5 != '\0') {
    uVar12 = FUN_00447250();
    FUN_00446d10(uVar12);
    uVar12 = (**(code **)(*piVar8 + 0xc))();
    puVar18 = &DAT_0088ebf8;
    uVar13 = FUN_00458280(&DAT_0088ebf8,uVar12);
    FUN_006eb730(3,uVar13,puVar18,uVar12);
  }
  ExceptionList = local_c;
  return 3;
}


