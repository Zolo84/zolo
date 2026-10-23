// FUN_0051d770 @ 51d770 size=14496

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0051d770(int *param_1,int *param_2)

{
  undefined2 uVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  int iVar15;
  void *pvVar16;
  short sVar17;
  float10 fVar18;
  float10 fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 *puStack_c0;
  int *piStack_bc;
  undefined1 *puStack_b8;
  undefined1 uStack_56;
  byte bStack_55;
  undefined2 local_54;
  int local_38;
  float local_2c;
  float local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007c2138;
  local_10 = ExceptionList;
  if (*(char *)((int)param_1 + 0x17d) != '\0') {
    return 0;
  }
  ExceptionList = &local_10;
  cVar4 = (**(code **)(*param_1 + 0x30))();
  if ((cVar4 != '\0') &&
     (iVar5 = (**(code **)(param_1[0x47] + 4))(), iVar6 = DAT_00893530, iVar5 != 0)) {
    param_1[0x4d] = *(int *)(DAT_00893530 + 0x14);
    *(undefined2 *)(param_1 + 0x4e) = *(undefined2 *)(iVar6 + 0x18);
  }
  iVar6 = (**(code **)(*param_2 + 8))();
  if (0x86 < iVar6) {
    if (iVar6 < 0xea) {
      if (iVar6 == 0xe9) {
        iVar6 = FUN_00428ee0();
        if (iVar6 == 0) {
          (**(code **)(*param_1 + 0x18))();
          FUN_004ef880();
        }
        else {
          (**(code **)(*param_1 + 0x18))();
          FUN_004ef880();
        }
        goto switchD_0051d81e_caseD_18;
      }
      switch(iVar6) {
      case 0x88:
        iVar6 = param_1[0x92];
        iVar5 = (&DAT_0089cad8)[*(int *)(param_2[1] + 0x14)];
        iVar15 = (&DAT_0089cad8)[*(int *)((int)param_1 + 0x146)];
        if ((&DAT_0089cad8)[*(int *)((int)param_1 + 0x146)] == 0) {
          iVar15 = iVar6;
        }
        if (iVar6 == iVar15) {
          cVar4 = FUN_00444290();
          if (cVar4 != '\0') {
            piVar12 = *(int **)(iVar5 + 6);
            (**(code **)(*(int *)(iVar6 + 0xe) + 0xc))();
            (**(code **)(*param_1 + 0xc))();
            puStack_b8 = &DAT_0088ebf8;
            puStack_c0 = (undefined1 *)0x3a;
            uStack_c4 = 0x5203bb;
            piStack_bc = piVar12;
            FUN_006eab80();
            goto LAB_00520547;
          }
          cVar4 = FUN_00444290();
          if (cVar4 != '\0') {
            piVar12 = *(int **)(iVar5 + 6);
            (**(code **)(*param_1 + 0xc))();
            (**(code **)(*(int *)(iVar5 + 0xe) + 0xc))();
            puStack_b8 = &DAT_0088ebf8;
            puStack_c0 = (undefined1 *)0x38;
            uStack_c4 = 0x5203f7;
            piStack_bc = piVar12;
            FUN_006eab80();
            goto LAB_00520547;
          }
          if ((DAT_00dc4b5e == '\0') ||
             ((cVar4 = FUN_0044b280(), cVar4 != '\0' && (cVar4 = FUN_0044b280(), cVar4 != '\0'))))
          goto LAB_00520547;
          param_2 = *(int **)(iVar5 + 6);
          (**(code **)(*(int *)(iVar6 + 0xe) + 0xc))();
          (**(code **)(*param_1 + 0xc))();
          puStack_b8 = (undefined1 *)0x520459;
          puStack_b8 = (undefined1 *)(**(code **)(*(int *)(iVar5 + 0xe) + 0xc))();
          uStack_c4 = 0x39;
        }
        else {
          cVar4 = FUN_00444290();
          if (cVar4 != '\0') {
            piVar12 = *(int **)(iVar6 + 6);
            (**(code **)(*param_1 + 0xc))();
            (**(code **)(*(int *)(iVar6 + 0xe) + 0xc))();
            puStack_b8 = &DAT_0088ebf8;
            puStack_c0 = (undefined1 *)0x35;
            uStack_c4 = 0x52049f;
            piStack_bc = piVar12;
            FUN_006eab80();
            goto LAB_00520547;
          }
          cVar4 = FUN_00444290();
          if (cVar4 != '\0') {
            piVar12 = *(int **)(iVar5 + 6);
            (**(code **)(*param_1 + 0xc))();
            (**(code **)(*(int *)(iVar5 + 0xe) + 0xc))();
            puStack_b8 = &DAT_0088ebf8;
            puStack_c0 = (undefined1 *)0x37;
            uStack_c4 = 0x5204db;
            piStack_bc = piVar12;
            FUN_006eab80();
            goto LAB_00520547;
          }
          if ((DAT_00dc4b5e == '\0') ||
             ((cVar4 = FUN_0044b280(), cVar4 != '\0' && (cVar4 = FUN_0044b280(), cVar4 != '\0'))))
          goto LAB_00520547;
          param_2 = *(int **)(iVar5 + 6);
          (**(code **)(*(int *)(iVar6 + 0xe) + 0xc))();
          (**(code **)(*param_1 + 0xc))();
          puStack_b8 = (undefined1 *)0x520531;
          puStack_b8 = (undefined1 *)(**(code **)(*(int *)(iVar5 + 0xe) + 0xc))();
          uStack_c4 = 0x36;
        }
        piStack_bc = (int *)&DAT_0088ebf8;
        uStack_c8 = 0x520547;
        puStack_c0 = (undefined1 *)param_2;
        FUN_006ead30();
LAB_00520547:
        (**(code **)(*param_1 + 0x94))();
        cVar4 = FUN_00526ba0();
        if (cVar4 == '\0') {
          FUN_00522770();
          iVar6 = **(int **)((int)param_1 + 0x15a);
          FUN_0044b1c0();
          (**(code **)(iVar6 + 0x2c))();
        }
        else {
          (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x2c))();
        }
        (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x34))();
        iVar6 = *(int *)((int)param_1 + 0x15a);
        *(undefined4 *)(iVar6 + 0x22) = 0;
        *(undefined4 *)(iVar6 + 0x26) = 10;
        *(undefined1 *)(iVar6 + 0x67) = 0;
        puStack_b8 = (undefined1 *)0x5205c2;
        FUN_00413d60();
        puStack_b8 = (undefined1 *)0x5205d1;
        FUN_00415f20();
        ExceptionList = local_10;
        return 3;
      case 0xa9:
        if (((&DAT_0089cad8)[*(int *)(param_2[1] + 0x14)] == 0) ||
           ((&DAT_0089cad8)[*(int *)(param_2[1] + 0x14)] == 0)) {
          *(undefined4 *)((int)param_1 + 0x146) = 0xa4;
        }
        else {
          *(int *)((int)param_1 + 0x146) = *(int *)(param_2[1] + 0x14);
        }
        break;
      case 0xe6:
        cVar4 = FUN_00444290();
        if ((cVar4 != '\0') || (cVar4 = FUN_00444270(), cVar4 != '\0')) {
          piVar13 = (int *)FUN_004e9370();
          piVar12 = *(int **)(param_1[0x92] + 6);
          (**(code **)(*piVar13 + 0xc))();
          (**(code **)(*param_1 + 0xc))();
          puStack_b8 = &DAT_0088ebf8;
          puStack_c0 = (undefined1 *)0x6c;
          uStack_c4 = 0x52030d;
          piStack_bc = piVar12;
          FUN_006eab80();
        }
        break;
      case 0xe8:
        iVar6 = FUN_00428ee0();
        if (iVar6 == 0) {
          (**(code **)(*param_1 + 0x14))();
          FUN_00517160();
        }
        else {
          (**(code **)(*param_1 + 0x14))();
          FUN_00517160();
        }
      }
      goto switchD_0051d81e_caseD_18;
    }
    if (iVar6 == 0xea) {
      iVar6 = FUN_00428ee0();
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = iVar6 + -0x14;
      }
      *(undefined1 *)(iVar6 + 0x250) = 1;
      (**(code **)(*param_1 + 0x18))();
      FUN_004ef830();
      *(undefined1 *)(iVar6 + 0x250) = 1;
      iVar5 = DAT_00893530;
      *(undefined4 *)(iVar6 + 0x134) = *(undefined4 *)(DAT_00893530 + 0x14);
      *(undefined2 *)(iVar6 + 0x138) = *(undefined2 *)(iVar5 + 0x18);
      piVar12 = *(int **)((int)param_1 + 0x26);
      while (piVar12 != (int *)0x0) {
        piVar13 = (int *)piVar12[2];
        iVar5 = *piVar12;
        piVar12 = piVar13;
        if (_DAT_007e3380 < *(float *)(iVar5 + 0x2ec)) {
          *(undefined4 *)(iVar5 + 0xf4) = 0;
        }
      }
      iVar5 = FUN_004e9370();
      if (*(int *)(iVar5 + 0x3d8) != 0) {
        FUN_004e9370();
        cVar4 = FUN_0044a690();
        if (cVar4 != '\0') {
          for (iVar6 = *(int *)(iVar6 + 0x26); iVar6 != 0; iVar6 = *(int *)(iVar6 + 8)) {
          }
          puStack_b8 = (undefined1 *)0x520d04;
          FUN_004e9370();
          FUN_004ed460();
          FUN_004e9370();
          FUN_004ea3b0();
        }
      }
      goto switchD_0051d81e_caseD_18;
    }
    if (iVar6 != 0x191) {
      if (iVar6 == 0x202) {
        FUN_00526cf0();
        FUN_005264f0();
        ExceptionList = local_10;
        return 3;
      }
      goto switchD_0051d81e_caseD_18;
    }
    iVar6 = FUN_00526cf0();
    iVar6 = *(int *)(iVar6 + 0xe);
    cVar4 = (**(code **)(*param_1 + 0x2c))();
    if ((cVar4 == '\0') || (bVar3 = true, iVar6 < 1)) {
      bVar3 = false;
    }
    if (iVar6 != 0) goto LAB_005208f9;
    FUN_00526c90();
    FUN_00526e70();
    cVar4 = FUN_00526ea0();
    local_18 = 0.0;
    while (cVar4 != '\0') {
      FUN_00526e80();
      FUN_00526e90();
      FUN_00494b80();
      FUN_005269b0();
      cVar4 = FUN_005269e0();
      if (cVar4 == '\0') {
        FUN_00494b80();
        FUN_005269c0();
        cVar4 = FUN_005269e0();
        if (cVar4 != '\0') {
          piVar12 = (int *)FUN_005269b0();
          piVar13 = (int *)FUN_005269b0();
          (**(code **)(*piVar12 + 0xc))();
          iVar6 = FUN_00527b40();
          (**(code **)(*piVar13 + 0xc))();
          fVar19 = (float10)FUN_005277e0();
          fVar19 = fVar19 * (float10)iVar6;
          goto LAB_005207b3;
        }
      }
      else {
        piVar12 = (int *)FUN_005269c0();
        piVar13 = (int *)FUN_005269c0();
        (**(code **)(*piVar12 + 0xc))();
        iVar6 = FUN_00527b40();
        (**(code **)(*piVar13 + 0xc))();
        fVar19 = (float10)FUN_005277e0();
        fVar19 = fVar19 * (float10)iVar6;
LAB_005207b3:
        local_18 = (float)(fVar19 * (float10)_DAT_007e46cc + (float10)local_18);
      }
      cVar4 = FUN_00526ea0();
    }
    iVar6 = FUN_00494a60();
    if ((iVar6 == 0) || (cVar4 = (**(code **)(*param_1 + 0x28))(), cVar4 != '\0')) {
LAB_005208ad:
      fVar19 = (float10)local_18;
    }
    else {
      FUN_00494b80();
      FUN_005269b0();
      cVar4 = FUN_005269e0();
      if (cVar4 == '\0') {
        FUN_00494b80();
        FUN_005269c0();
        cVar4 = FUN_005269e0();
        if (cVar4 == '\0') goto LAB_005208ad;
        piVar12 = (int *)FUN_005269b0();
        piVar13 = (int *)FUN_005269b0();
        (**(code **)(*piVar12 + 0xc))();
        iVar6 = FUN_00527b40();
        (**(code **)(*piVar13 + 0xc))();
        fVar19 = (float10)FUN_005277e0();
        fVar19 = fVar19 * (float10)iVar6 * (float10)_DAT_007e8bd8 + (float10)local_18;
      }
      else {
        piVar12 = (int *)FUN_005269c0();
        piVar13 = (int *)FUN_005269c0();
        (**(code **)(*piVar12 + 0xc))();
        iVar6 = FUN_00527b40();
        (**(code **)(*piVar13 + 0xc))();
        fVar19 = (float10)FUN_005277e0();
        fVar19 = fVar19 * (float10)iVar6 * (float10)_DAT_007e8bd8 + (float10)local_18;
      }
    }
    if (fVar19 == (float10)_DAT_007e3380) {
      ExceptionList = local_10;
      return 3;
    }
    __ftol();
LAB_005208f9:
    FUN_00462830();
    FUN_00512530();
    (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
    cVar4 = (**(code **)(*param_1 + 0x28))();
    if ((((cVar4 == '\0') && (cVar4 = (**(code **)(*param_1 + 0x2c))(), cVar4 == '\0')) &&
        (cVar4 = (**(code **)(*param_1 + 0x30))(), cVar4 != '\0')) &&
       (cVar4 = FUN_00516310(), cVar4 != '\0')) {
      FUN_00516330();
    }
    FUN_00499720();
    cVar4 = FUN_00499750();
    while (cVar4 != '\0') {
      FUN_00499730();
      FUN_00499740();
      cVar4 = FUN_0048e0c0();
      if (((cVar4 == '\0') || (iVar6 = FUN_004fd560(), iVar6 != 0)) || (bVar3)) {
        FUN_004fbec0();
      }
      cVar4 = FUN_00499750();
    }
    bVar3 = false;
    FUN_00526c90();
    FUN_00526e70();
    cVar4 = FUN_00526ea0();
    while (cVar4 != '\0') {
      FUN_00526e80();
      FUN_00526e90();
      FUN_005269b0();
      iVar6 = FUN_005269d0();
      iVar5 = FUN_0051c480();
      if (iVar6 == iVar5) {
        bVar3 = true;
      }
      FUN_005269c0();
      iVar6 = FUN_005269d0();
      iVar5 = FUN_0051c480();
      if (iVar6 == iVar5) {
        bVar3 = true;
      }
      cVar4 = FUN_00526ea0();
    }
    cVar4 = FUN_00526c80();
    if (cVar4 != '\0') {
      FUN_0051c480();
      FUN_00526b20();
      FUN_0051c480();
      FUN_0050a080();
    }
    cVar4 = FUN_00526c80();
    if ((cVar4 != '\0') && (bVar3)) {
      FUN_0051c480();
      FUN_0044df10();
      FUN_00462830();
      FUN_00512530();
      FUN_0051c480();
      FUN_00509fb0();
      iVar6 = __ftol();
      if ((DAT_00dc165c + -2 < iVar6) && (cVar4 = FUN_00525df0(), cVar4 != '\0')) {
        FUN_0051c480();
        FUN_0050ad60();
      }
    }
    ExceptionList = local_10;
    return 3;
  }
  if (iVar6 == 0x86) {
    if (*(char *)((int)param_1 + 0x17d) == '\0') {
      sVar17 = *(short *)(param_2[1] + 0xe);
      if (((sVar17 == 0) && (param_1[0x99] != 0)) && (param_1[0x92] != 0)) {
        cVar4 = FUN_0050bde0();
        if ((cVar4 != '\0') &&
           ((cVar4 = FUN_00444290(), cVar4 != '\0' || (cVar4 = FUN_00444270(), cVar4 != '\0')))) {
          cVar4 = (**(code **)(*param_1 + 0x30))();
          if (cVar4 == '\0') {
            cVar4 = (**(code **)(*param_1 + 0x2c))();
            if (cVar4 != '\0') {
              puStack_b8 = (undefined1 *)FUN_00447250();
              piStack_bc = (int *)0x51ff0c;
              FUN_00446d10();
              puStack_b8 = (undefined1 *)0x51ff13;
              FUN_00526ce0();
              puStack_b8 = (undefined1 *)0x51ff1a;
              puStack_b8 = (undefined1 *)FUN_00514040();
              piStack_bc = (int *)0x51ff20;
              puStack_b8 = (undefined1 *)FUN_00514070();
              piStack_bc = (int *)0x51ff2b;
              piStack_bc = (int *)(**(code **)(*param_1 + 0xc))();
              puStack_c0 = &DAT_0088ebf8;
              uStack_c4 = 0x51ff38;
              FUN_00494b80();
              uStack_c4 = 0x51ff3f;
              uStack_c4 = FUN_00458280();
              uStack_c8 = 0x67;
              uStack_cc = 0x51ff4c;
              FUN_006eb830();
            }
          }
          else {
            puStack_b8 = (undefined1 *)FUN_00447250();
            piStack_bc = (int *)0x51fea0;
            FUN_00446d10();
            puStack_b8 = (undefined1 *)0x51fea7;
            FUN_00526ce0();
            puStack_b8 = (undefined1 *)0x51feae;
            puStack_b8 = (undefined1 *)FUN_00514040();
            piStack_bc = (int *)0x51feb4;
            puStack_b8 = (undefined1 *)FUN_00514070();
            piStack_bc = (int *)0x51febf;
            piStack_bc = (int *)(**(code **)(*param_1 + 0xc))();
            puStack_c0 = &DAT_0088ebf8;
            uStack_c4 = 0x51fecc;
            FUN_00494b80();
            uStack_c4 = 0x51fed3;
            uStack_c4 = FUN_00458280();
            uStack_c8 = 0x66;
            uStack_cc = 0x51fee0;
            FUN_006eb830();
          }
        }
      }
      else if (sVar17 == 0x22) {
        cVar4 = FUN_00444290();
        if ((cVar4 != '\0') || (cVar4 = FUN_00444270(), cVar4 != '\0')) {
          cVar4 = (**(code **)(*param_1 + 0x30))();
          if (cVar4 == '\0') {
            cVar4 = (**(code **)(*param_1 + 0x2c))();
            if (cVar4 == '\0') {
              puStack_b8 = (undefined1 *)FUN_00447250();
              piStack_bc = (int *)0x520048;
              FUN_00446d10();
              puStack_b8 = (undefined1 *)0x52004f;
              FUN_00526ce0();
              puStack_b8 = (undefined1 *)0x520056;
              puStack_b8 = (undefined1 *)FUN_00514040();
              piStack_bc = (int *)0x52005c;
              puStack_b8 = (undefined1 *)FUN_00514070();
              piStack_bc = (int *)0x520067;
              piStack_bc = (int *)(**(code **)(*param_1 + 0xc))();
              puStack_c0 = &DAT_0088ebf8;
              uStack_c4 = 0x520074;
              FUN_00494b80();
              uStack_c4 = 0x52007b;
              uStack_c4 = FUN_00458280();
              uStack_c8 = 0x68;
            }
            else {
              puStack_b8 = (undefined1 *)FUN_00447250();
              piStack_bc = (int *)0x51fffd;
              FUN_00446d10();
              puStack_b8 = (undefined1 *)0x520004;
              FUN_00526ce0();
              puStack_b8 = (undefined1 *)0x52000b;
              puStack_b8 = (undefined1 *)FUN_00514040();
              piStack_bc = (int *)0x520011;
              puStack_b8 = (undefined1 *)FUN_00514070();
              piStack_bc = (int *)0x52001c;
              piStack_bc = (int *)(**(code **)(*param_1 + 0xc))();
              puStack_c0 = &DAT_0088ebf8;
              uStack_c4 = 0x520029;
              FUN_00494b80();
              uStack_c4 = 0x520030;
              uStack_c4 = FUN_00458280();
              uStack_c8 = 0x6a;
            }
          }
          else {
            puStack_b8 = (undefined1 *)FUN_00447250();
            piStack_bc = (int *)0x51ff9f;
            FUN_00446d10();
            puStack_b8 = (undefined1 *)0x51ffa6;
            FUN_00526ce0();
            puStack_b8 = (undefined1 *)0x51ffad;
            puStack_b8 = (undefined1 *)FUN_00514040();
            piStack_bc = (int *)0x51ffb3;
            puStack_b8 = (undefined1 *)FUN_00514070();
            piStack_bc = (int *)0x51ffbe;
            piStack_bc = (int *)(**(code **)(*param_1 + 0xc))();
            puStack_c0 = &DAT_0088ebf8;
            uStack_c4 = 0x51ffcb;
            FUN_00494b80();
            uStack_c4 = 0x51ffd2;
            uStack_c4 = FUN_00458280();
            uStack_c8 = 0x69;
          }
          uStack_cc = 0x520088;
          FUN_006eb830();
        }
        sVar17 = 0;
      }
      else if ((sVar17 == 1) && ((uint)*(ushort *)(param_2[1] + 0x10) == param_1[3])) {
        sVar17 = 0;
      }
      else if (sVar17 == 2) {
        cVar4 = (**(code **)(*param_1 + 0x30))();
        if (cVar4 == '\0') {
          cVar4 = (**(code **)(*param_1 + 0x2c))();
          if (cVar4 != '\0') {
            FUN_004e9370();
            fVar18 = (float10)FUN_004ed6d0();
            fVar19 = (float10)_DAT_007e4088;
            piVar12 = *(int **)((int)param_1 + 0x26);
            while (piVar12 != (int *)0x0) {
              piVar13 = (int *)piVar12[2];
              iVar6 = *piVar12;
              fVar11 = _DAT_007e3374;
              if (*(float *)(iVar6 + 0x2f8) < (float)(fVar18 * fVar19)) {
                fVar11 = *(float *)(iVar6 + 0x2f8) / (float)(fVar18 * fVar19);
              }
              fVar11 = fVar11 * _DAT_007e40a4 * *(float *)(iVar6 + 0xf4);
              if (fVar11 < _DAT_007e3380) {
                fVar11 = _DAT_007e3380;
              }
              *(float *)(iVar6 + 0xf4) = fVar11;
              piVar12 = piVar13;
            }
          }
        }
        else {
          fVar18 = (float10)FUN_0044a9c0();
          fVar19 = (float10)_DAT_007e4088;
          piVar12 = *(int **)((int)param_1 + 0x26);
          while (piVar12 != (int *)0x0) {
            piVar13 = (int *)piVar12[2];
            iVar6 = *piVar12;
            if (*(float *)(iVar6 + 0x2f0) <= *(float *)(iVar6 + 0x2f4)) {
              fVar11 = *(float *)(iVar6 + 0x2f0);
            }
            else {
              fVar11 = *(float *)(iVar6 + 0x2f4);
            }
            fVar2 = _DAT_007e3374;
            if (fVar11 < (float)(fVar18 * fVar19)) {
              fVar2 = fVar11 / (float)(fVar18 * fVar19);
            }
            fVar11 = fVar2 * _DAT_007e40a4 * *(float *)(iVar6 + 0xf4);
            if (fVar11 < _DAT_007e3380) {
              fVar11 = _DAT_007e3380;
            }
            *(float *)(iVar6 + 0xf4) = fVar11;
            piVar12 = piVar13;
          }
        }
      }
      iVar6 = param_2[1];
      *(undefined1 *)((int)param_1 + 0x253) = *(undefined1 *)(iVar6 + 0x36);
      iVar5 = param_2[1];
      puStack_b8 = (undefined1 *)
                   CONCAT31((int3)((uint)*(undefined4 *)(iVar5 + 0x32) >> 8),
                            *(undefined1 *)(iVar5 + 0x2f));
      piStack_bc = (int *)CONCAT31((int3)((uint)iVar6 >> 8),*(undefined1 *)(iVar5 + 0x2e));
      puStack_c0 = *(undefined1 **)(iVar5 + 0x2a);
      uStack_c8 = *(undefined4 *)(iVar5 + 0x24);
      uStack_c4 = CONCAT22(uStack_c4._2_2_,*(undefined2 *)(iVar5 + 0x28));
      uStack_d0 = *(undefined4 *)(iVar5 + 0x1e);
      uStack_cc = CONCAT22(uStack_cc._2_2_,*(undefined2 *)(iVar5 + 0x22));
      FUN_0050bd10(sVar17,*(undefined2 *)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0x18),
                   CONCAT31((int3)(CONCAT22((short)((uint)(iVar5 + 0x1e) >> 0x10),
                                            *(undefined2 *)(iVar5 + 0x22)) >> 8),
                            *(undefined1 *)(iVar5 + 0x1c)),
                   CONCAT31((int3)((uint)&uStack_d0 >> 8),*(undefined1 *)(iVar5 + 0x1d)));
    }
    ExceptionList = local_10;
    return 3;
  }
  switch(iVar6) {
  case 0x17:
    if ((DAT_00dc191a != '\0') && ((char)param_1[0x33] != '\0')) {
      FUN_005264f0();
    }
    iVar6 = (**(code **)(param_1[0x47] + 4))();
    if ((iVar6 != 0) || (*(int *)((int)param_1 + 0x176) != 0)) {
      puVar14 = operator_new(0xc);
      local_8 = 0;
      if (puVar14 != (undefined4 *)0x0) {
        FUN_00499310();
        *puVar14 = &PTR_FUN_007e5f60;
        *(undefined4 *)(puVar14[1] + 0xe) = 0;
      }
      local_8 = 0xffffffff;
      FUN_00565c50();
    }
    cVar4 = (**(code **)(*param_1 + 0x2c))();
    if ((cVar4 != '\0') && (cVar4 = FUN_0042e980(), cVar4 != '\0')) {
      iVar6 = (**(code **)(*param_1 + 0x14))();
      iVar6 = (**(code **)(**(int **)(iVar6 + 0x2aa) + 4))();
      if (iVar6 < 1) {
        iVar6 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
        if ((iVar6 == 0) && (iVar6 = FUN_004e9370(), *(int *)(iVar6 + 0x3d8) != 0)) {
          FUN_004e9370();
          cVar4 = FUN_0044b280();
          if (cVar4 != '\0') {
            puVar14 = operator_new(0xc);
            uVar1 = DAT_0088f28c;
            local_8 = 3;
            if (puVar14 != (undefined4 *)0x0) {
              uStack_56 = (undefined1)DAT_0088f28e;
              bStack_55 = (byte)((uint)DAT_0088f28e >> 8);
              local_54 = (undefined2)((uint)DAT_0088f28e >> 0x10);
              FUN_00458490();
              *puVar14 = &PTR_FUN_007e5370;
              iVar6 = puVar14[1];
              *(int *)(iVar6 + 0xe) = param_1[6];
              *(short *)(iVar6 + 0x12) = (short)param_1[7];
              *(undefined1 *)(puVar14[1] + 0x14) = 1;
              *(undefined1 *)(puVar14[1] + 0x15) = 0;
              *(undefined4 *)(puVar14[1] + 0x16) = 0;
              iVar6 = puVar14[1];
              *(uint *)(iVar6 + 0x1a) = CONCAT13(bStack_55,CONCAT12(uStack_56,uVar1));
              *(undefined2 *)(iVar6 + 0x1e) = local_54;
            }
LAB_0051dc15:
            local_8 = 0xffffffff;
            FUN_00565ca0();
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0x14))();
        iVar6 = FUN_00516f50();
        (**(code **)(*param_1 + 0x14))();
        iVar5 = FUN_00516cc0();
        if (iVar5 < iVar6) {
          iVar6 = (**(code **)(*param_1 + 0x14))();
          piVar12 = *(int **)(*(int *)(iVar6 + 0x2aa) + 4);
          if (piVar12 != (int *)0x0) {
            iVar6 = *piVar12;
            iVar5 = (**(code **)(*(int *)(iVar6 + 0x22) + 4))();
            if (0 < iVar5) {
              iVar5 = **(int **)(iVar6 + 0x26);
              puVar14 = operator_new(0xc);
              uVar1 = DAT_0088f28c;
              local_8 = 1;
              if (puVar14 != (undefined4 *)0x0) {
                uStack_56 = (undefined1)DAT_0088f28e;
                bStack_55 = (byte)((uint)DAT_0088f28e >> 8);
                local_54 = (undefined2)((uint)DAT_0088f28e >> 0x10);
                FUN_00498970();
                *puVar14 = &PTR_FUN_007e6180;
                iVar15 = puVar14[1];
                *(undefined4 *)(iVar15 + 0xe) = *(undefined4 *)(iVar5 + 0xc);
                *(undefined2 *)(iVar15 + 0x12) = *(undefined2 *)(iVar5 + 0x10);
                iVar5 = puVar14[1];
                *(uint *)(iVar5 + 0x14) = CONCAT13(bStack_55,CONCAT12(uStack_56,uVar1));
                *(undefined2 *)(iVar5 + 0x18) = local_54;
                *(undefined1 *)(puVar14[1] + 0x1a) = 0;
                *(undefined4 *)(puVar14[1] + 0x1c) = 0xfffffff8;
              }
              local_8 = 0xffffffff;
              FUN_00565bc0();
            }
            iVar5 = (**(code **)(*(int *)(iVar6 + 0x22) + 4))();
            if (iVar5 == 0) {
              puVar14 = operator_new(0xc);
              uVar1 = DAT_0088f28c;
              local_8 = 2;
              if (puVar14 != (undefined4 *)0x0) {
                uStack_56 = (undefined1)DAT_0088f28e;
                bStack_55 = (byte)((uint)DAT_0088f28e >> 8);
                local_54 = (undefined2)((uint)DAT_0088f28e >> 0x10);
                FUN_00458490();
                *puVar14 = &PTR_FUN_007e5370;
                iVar5 = puVar14[1];
                *(undefined4 *)(iVar5 + 0xe) = *(undefined4 *)(iVar6 + 0x18);
                *(undefined2 *)(iVar5 + 0x12) = *(undefined2 *)(iVar6 + 0x1c);
                *(undefined1 *)(puVar14[1] + 0x14) = 1;
                *(undefined1 *)(puVar14[1] + 0x15) = 0;
                *(undefined4 *)(puVar14[1] + 0x16) = 0;
                iVar6 = puVar14[1];
                *(uint *)(iVar6 + 0x1a) = CONCAT13(bStack_55,CONCAT12(uStack_56,uVar1));
                *(undefined2 *)(iVar6 + 0x1e) = local_54;
              }
              goto LAB_0051dc15;
            }
          }
        }
      }
    }
    cVar4 = FUN_0042e980();
    if ((((cVar4 != '\0') && (param_1[0x99] == 8)) &&
        (iVar6 = (**(code **)(param_1[0x47] + 4))(), iVar6 != 0)) &&
       ((cVar4 = FUN_0050c360(), cVar4 != '\0' && (cVar4 = FUN_0042ddd0(), cVar4 != '\0')))) {
      FUN_004e9370();
      cVar4 = FUN_0044a690();
      if (cVar4 == '\0') {
        FUN_004e9370();
        cVar4 = FUN_005861a0();
        if (cVar4 == '\0') goto LAB_0051dd18;
      }
      piVar12 = (int *)param_1[0x48];
      do {
        if (piVar12 == (int *)0x0) goto LAB_0051dd18;
        iVar6 = *piVar12;
        piVar12 = (int *)piVar12[2];
      } while (*(int *)(iVar6 + 0x74) != 1);
      (**(code **)(**(int **)(iVar6 + 0x84) + 0x48))();
    }
LAB_0051dd18:
    cVar4 = FUN_00444290();
    if ((cVar4 != '\0') || (cVar4 = FUN_00444270(), cVar4 != '\0')) {
      (**(code **)(*param_1 + 0x80))();
    }
    if ((((param_1[0x90] == 0) && (iVar6 = (**(code **)(param_1[0x47] + 4))(), iVar6 == 0)) &&
        (param_1[3] != 0)) && (cVar4 = (**(code **)(*param_1 + 0x28))(), cVar4 != '\0')) {
      param_1[0x90] = param_1[3];
    }
    cVar4 = (**(code **)(*param_1 + 0x28))();
    if (((cVar4 != '\0') && (iVar6 = (**(code **)(param_1[0x47] + 4))(), iVar6 == 0)) &&
       ((char)param_1[0x94] != '\0')) {
      *(undefined1 *)(param_1 + 0x94) = 0;
    }
    cVar4 = (**(code **)(*param_1 + 0x28))();
    if (cVar4 != '\0') {
      cVar4 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
      if (cVar4 == '\0') {
        if (((DAT_00dc1734 != '\0') && (*(char *)((int)param_1 + 0x253) != '\0')) &&
           ((iVar6 = (**(code **)(param_1[0x47] + 4))(), iVar6 == 0 &&
            (*(int *)((int)param_1 + 0x176) == 0)))) {
          iVar6 = *(int *)(DAT_00893530 + 0x14);
          uVar1 = *(undefined2 *)(DAT_00893530 + 0x18);
          cVar4 = FUN_0042dd70();
          if (cVar4 != '\0') {
            pcVar7 = (char *)FUN_0042e060();
            iVar5 = (int)*pcVar7 +
                    ((int)pcVar7[1] + ((int)pcVar7[2] + *(short *)(pcVar7 + 4) * 0xc) * 0x1e) * 0x18
            ;
            FUN_005212f0();
            local_8 = 4;
            (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
            FUN_004e9370();
            FUN_004e9370();
            (**(code **)(*param_1 + 0x10))();
            puStack_b8 = (undefined1 *)0x51df0e;
            iVar15 = FUN_00430cc0();
            if ((iVar15 != iVar5) &&
               (pcVar7 = (char *)FUN_0042e060(),
               0 < iVar15 - (int)ROUND(((float)(iVar5 - ((int)*pcVar7 +
                                                        ((int)pcVar7[1] +
                                                        ((int)pcVar7[2] +
                                                        *(short *)(pcVar7 + 4) * 0xc) * 0x1e) * 0x18
                                                        )) / (float)iVar5) * (float)iVar15))) {
              bStack_55 = (byte)((uint)iVar6 >> 0x18);
              FUN_0042db80();
              FUN_0042db80();
              cVar4 = FUN_0042e980();
              if (cVar4 != '\0') {
                FUN_005b91d4();
                puVar14 = operator_new(0xc);
                local_8._0_1_ = 5;
                if (puVar14 == (undefined4 *)0x0) {
                  puVar14 = (undefined4 *)0x0;
                }
                else {
                  cVar4 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
                  if (cVar4 == '\0') {
                    local_2c._0_2_ = (undefined2)**(undefined4 **)((int)param_1 + 0x232);
                  }
                  else {
                    local_2c._0_2_ = 0;
                  }
                  FUN_004c0a70();
                  *puVar14 = &PTR_FUN_007e7784;
                  iVar5 = puVar14[1];
                  *(int *)(iVar5 + 0xe) = param_1[6];
                  *(short *)(iVar5 + 0x12) = (short)param_1[7];
                  *(undefined2 *)(iVar5 + 0x14) = local_2c._0_2_;
                }
                local_8 = CONCAT31(local_8._1_3_,4);
                param_1[0x91] = (int)puVar14;
                FUN_00565af0();
              }
              param_1[0x8a] = iVar6;
              *(undefined2 *)(param_1 + 0x8b) = uVar1;
              *(int *)((int)param_1 + 0x222) = iVar6;
              *(undefined2 *)((int)param_1 + 0x226) = uVar1;
            }
            local_8 = 0xffffffff;
            FUN_0045a680();
          }
        }
        cVar4 = FUN_0042e980();
        if (cVar4 != '\0') {
          (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
          puVar8 = (undefined1 *)FUN_004e9370();
          iVar5 = 0;
          local_18 = 0.0;
          iVar6 = FUN_004e9370();
          if (0 < *(int *)(iVar6 + 0x290)) {
            iVar6 = 0;
            do {
              iVar15 = FUN_004e9370();
              iVar15 = *(int *)(*(int *)(iVar15 + 0x298) + iVar6);
              cVar4 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
              if (cVar4 == '\0') {
                iVar9 = **(int **)((int)param_1 + 0x232);
              }
              else {
                iVar9 = 0;
              }
              if (iVar15 == iVar9) {
                iVar5 = FUN_004e9370();
                iVar5 = *(int *)(iVar5 + 0x298) + iVar6;
              }
              iVar6 = iVar6 + 0xc;
              local_18 = (float)((int)local_18 + 1);
              iVar15 = FUN_004e9370();
            } while ((int)local_18 < *(int *)(iVar15 + 0x290));
          }
          FUN_004ee3c0();
          local_8 = 6;
          if (iVar5 != 0) {
            puStack_b8 = (undefined1 *)0x51e17c;
            FUN_004e9370();
            puStack_c0 = (undefined1 *)0x51e18d;
            piStack_bc = param_1;
            puStack_b8 = puVar8;
            cVar4 = FUN_004318d0();
            if (cVar4 == '\0') {
              FUN_0050bca0();
              (**(code **)(*param_1 + 0x74))();
            }
          }
          local_8 = 0xffffffff;
          FUN_0045a680();
        }
      }
    }
    cVar4 = FUN_0042e980();
    if ((((cVar4 != '\0') && (*(char *)(DAT_00893530 + 0x14) == '\x17')) &&
        (*(char *)((int)param_1 + 0x17d) == '\0')) &&
       ((cVar4 = (**(code **)(*param_1 + 0x28))(), cVar4 != '\0' && (0 < param_1[3])))) {
      iVar6 = FUN_004e9370();
      if ((((*(int *)(iVar6 + 0x254) == 8) || (*(int *)(iVar6 + 0x254) == 9)) &&
          (((cVar4 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))(), cVar4 != '\0' &&
            (*(char *)((int)param_1 + 0x17b) == '\0')) &&
           (iVar6 = (**(code **)(param_1[0x47] + 4))(), iVar6 == 0)))) &&
         ((*(int *)((int)param_1 + 0x176) == 0 &&
          (iVar6 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))(), 0 < iVar6)))) {
        piVar12 = *(int **)((int)param_1 + 0x26);
        while (piVar12 != (int *)0x0) {
          piVar13 = (int *)piVar12[2];
          iVar6 = *piVar12;
          puVar14 = operator_new(0xc);
          uVar1 = DAT_0088f28c;
          local_8 = 7;
          if (puVar14 != (undefined4 *)0x0) {
            uStack_56 = (undefined1)DAT_0088f28e;
            bStack_55 = (byte)((uint)DAT_0088f28e >> 8);
            local_54 = (undefined2)((uint)DAT_0088f28e >> 0x10);
            FUN_00498970();
            *puVar14 = &PTR_FUN_007e6180;
            iVar5 = puVar14[1];
            *(undefined4 *)(iVar5 + 0xe) = *(undefined4 *)(iVar6 + 0xc);
            *(undefined2 *)(iVar5 + 0x12) = *(undefined2 *)(iVar6 + 0x10);
            iVar6 = puVar14[1];
            *(uint *)(iVar6 + 0x14) = CONCAT13(bStack_55,CONCAT12(uStack_56,uVar1));
            *(undefined2 *)(iVar6 + 0x18) = local_54;
            *(undefined1 *)(puVar14[1] + 0x1a) = 0;
            *(undefined4 *)(puVar14[1] + 0x1c) = 0xfffffff8;
          }
          local_8 = 0xffffffff;
          FUN_00565bc0();
          piVar12 = piVar13;
        }
        iVar6 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
        if (iVar6 == 0) {
          puVar14 = operator_new(0xc);
          uVar1 = DAT_0088f28c;
          local_8 = 8;
          if (puVar14 != (undefined4 *)0x0) {
            uStack_56 = (undefined1)DAT_0088f28e;
            bStack_55 = (byte)((uint)DAT_0088f28e >> 8);
            local_54 = (undefined2)((uint)DAT_0088f28e >> 0x10);
            FUN_00458490();
            *puVar14 = &PTR_FUN_007e5370;
            iVar6 = puVar14[1];
            *(int *)(iVar6 + 0xe) = param_1[6];
            *(short *)(iVar6 + 0x12) = (short)param_1[7];
            *(undefined1 *)(puVar14[1] + 0x14) = 1;
            *(undefined1 *)(puVar14[1] + 0x15) = 0;
            *(undefined4 *)(puVar14[1] + 0x16) = 0;
            iVar6 = puVar14[1];
            *(uint *)(iVar6 + 0x1a) = CONCAT13(bStack_55,CONCAT12(uStack_56,uVar1));
            *(undefined2 *)(iVar6 + 0x1e) = local_54;
          }
          local_8 = 0xffffffff;
          FUN_00565ca0();
        }
      }
    }
    cVar4 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
    if ((cVar4 == '\0') &&
       (iVar5 = (**(code **)(param_1[0x47] + 4))(), iVar6 = DAT_00893530, iVar5 != 0)) {
      param_1[0x4d] = *(int *)(DAT_00893530 + 0x14);
      *(undefined2 *)(param_1 + 0x4e) = *(undefined2 *)(iVar6 + 0x18);
      cVar4 = (**(code **)(*param_1 + 0x28))();
      if ((cVar4 != '\0') &&
         (iVar6 = (**(code **)(*param_1 + 0x10))(), *(int *)(iVar6 + 0x2ae) != 0)) {
        iVar6 = (**(code **)(*param_1 + 0x10))();
        iVar5 = DAT_00893530;
        iVar6 = *(int *)(iVar6 + 0x2ae);
        *(undefined4 *)(iVar6 + 0x2b4) = *(undefined4 *)(DAT_00893530 + 0x14);
        *(undefined2 *)(iVar6 + 0x2b8) = *(undefined2 *)(iVar5 + 0x18);
      }
    }
    FUN_0050be10();
    if (((&DAT_0089cad8)[*(int *)((int)param_1 + 0x146)] == 0) && (param_1[0x92] == 0)) {
      *(undefined4 *)((int)param_1 + 0x146) = 0xa4;
    }
    iVar6 = *(int *)((int)param_1 + 0x26);
    while (iVar6 != 0) {
      puVar14 = (undefined4 *)FUN_00499730();
      iVar5 = *(int *)*puVar14;
      fVar19 = (float10)FUN_00503610();
      local_18 = (float)((float10)*(float *)(iVar5 + 0xf4) + fVar19);
      if (local_18 < _DAT_007e3380) {
        local_18 = 0.0;
      }
      fVar19 = (float10)FUN_004fd510();
      if ((float10)local_18 <= fVar19) {
        fVar19 = (float10)local_18;
      }
      else {
        fVar19 = (float10)FUN_004fd510();
      }
      if (fVar19 < (float10)_DAT_007e3380) {
        fVar19 = (float10)_DAT_007e3380;
      }
      *(float *)(iVar5 + 0xf4) = (float)fVar19;
    }
    FUN_0051d630();
    cVar4 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
    if (((cVar4 == '\0') && (cVar4 = FUN_0042ddd0(), cVar4 != '\0')) &&
       (cVar4 = (**(code **)(*param_1 + 0x28))(), cVar4 != '\0')) {
      iVar6 = (**(code **)(*param_1 + 0x10))();
      *(undefined4 *)(iVar6 + 0x29e) = 0;
    }
    if (*(char *)(DAT_00893530 + 0x14) == '\x01') {
      FUN_0051cda0();
      cVar4 = (**(code **)(*param_1 + 0x28))();
      if ((cVar4 == '\0') || (*(char *)(param_1[0x92] + 0xe312) == '\0')) {
        cVar4 = (**(code **)(*param_1 + 0x2c))();
        if (cVar4 == '\0') {
          cVar4 = (**(code **)(*param_1 + 0x30))();
          if (cVar4 != '\0') {
            iVar6 = (**(code **)(*param_1 + 0x18))();
            iVar6 = *(int *)(*(int *)(iVar6 + 0x294) + 4);
            while (iVar6 != 0) {
              iVar6 = *(int *)(iVar6 + 8);
              FUN_0051cda0();
            }
          }
        }
        else {
          iVar6 = (**(code **)(*param_1 + 0x14))();
          iVar6 = *(int *)(*(int *)(iVar6 + 0x2aa) + 4);
          while (iVar6 != 0) {
            iVar6 = *(int *)(iVar6 + 8);
            FUN_0051cda0();
          }
          iVar6 = (**(code **)(*param_1 + 0x14))();
          iVar6 = *(int *)(*(int *)(iVar6 + 0x2ae) + 4);
          while (iVar6 != 0) {
            iVar6 = *(int *)(iVar6 + 8);
            FUN_0051cda0();
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0x10))();
        FUN_00509510();
      }
    }
    if (*(char *)((int)param_1 + 0x17b) == '\0') {
LAB_0051e990:
      if (*(char *)((int)param_1 + 0x17d) == '\0') {
        cVar4 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
        if (cVar4 == '\0') {
LAB_0051ec78:
          if ((*(char *)((int)param_1 + 0x17d) != '\0') ||
             (((iVar6 = (**(code **)(param_1[0x47] + 4))(), iVar6 != 0 ||
               (*(int *)((int)param_1 + 0x176) != 0)) || (*(char *)((int)param_1 + 0x17b) != '\0')))
             ) goto LAB_0051ecc7;
          cVar4 = FUN_0042e980();
        }
        else {
          iVar6 = (**(code **)(param_1[0x47] + 4))();
          if ((iVar6 != 0) || (*(int *)((int)param_1 + 0x176) != 0)) goto LAB_0051ec78;
          iVar6 = FUN_004e9370();
          if (*(int *)(iVar6 + 0x3d8) != 0) {
            FUN_004e9370();
            cVar4 = FUN_0044b280();
            if (cVar4 != '\0') {
              iVar6 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
              if (iVar6 < 1) {
                cVar4 = (**(code **)(*param_1 + 0x28))();
                if (cVar4 != '\0') {
                  iVar6 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
                  if (iVar6 != 0) {
                    local_18 = 0.0;
                    piVar12 = *(int **)((int)param_1 + 0x26);
                    while (piVar12 != (int *)0x0) {
                      piVar13 = (int *)piVar12[2];
                      fVar11 = *(float *)(*piVar12 + 0xf4);
                      fVar19 = (float10)FUN_004fd510();
                      local_18 = (float)((float10)fVar11 / fVar19 + (float10)local_18);
                      piVar12 = piVar13;
                    }
                    iVar6 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
                    if (_DAT_007e34c0 <= local_18 / (float)iVar6) {
                      *(undefined1 *)(param_1 + 0x5f) = 0;
                      *(undefined1 *)((int)param_1 + 0x17b) = 0;
                      if ((((char)param_1[0x5f] == '\0') || (*(int *)((int)param_1 + 0x176) != 0))
                         || ((iVar6 = (**(code **)(param_1[0x47] + 4))(), iVar6 != 0 ||
                             (*(char *)((int)param_1 + 0x17b) != '\0')))) goto LAB_0051ec0a;
                      (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x2c))();
                      goto LAB_0051ec2f;
                    }
                  }
                  cVar4 = FUN_0042e980();
                  if (cVar4 != '\0') {
                    puVar14 = operator_new(0xc);
                    uVar1 = DAT_0088f28c;
                    local_8 = 0xb;
                    if (puVar14 != (undefined4 *)0x0) {
                      uStack_56 = (undefined1)DAT_0088f28e;
                      bStack_55 = (byte)((uint)DAT_0088f28e >> 8);
                      local_54 = (undefined2)((uint)DAT_0088f28e >> 0x10);
                      FUN_00458490();
                      *puVar14 = &PTR_FUN_007e5370;
                      iVar6 = puVar14[1];
                      *(int *)(iVar6 + 0xe) = param_1[6];
                      *(short *)(iVar6 + 0x12) = (short)param_1[7];
                      *(undefined1 *)(puVar14[1] + 0x14) = 1;
                      *(undefined1 *)(puVar14[1] + 0x15) = 0;
                      *(undefined4 *)(puVar14[1] + 0x16) = 0;
                      iVar6 = puVar14[1];
                      *(uint *)(iVar6 + 0x1a) = CONCAT13(bStack_55,CONCAT12(uStack_56,uVar1));
                      *(undefined2 *)(iVar6 + 0x1e) = local_54;
                    }
                    local_8 = 0xffffffff;
                    FUN_00565ca0();
                  }
                  break;
                }
              }
              else {
                *(undefined1 *)(param_1 + 0x5f) = 0;
                *(undefined1 *)((int)param_1 + 0x17b) = 0;
                if ((((char)param_1[0x5f] == '\0') || (*(int *)((int)param_1 + 0x176) != 0)) ||
                   ((iVar6 = (**(code **)(param_1[0x47] + 4))(), iVar6 != 0 ||
                    (*(char *)((int)param_1 + 0x17b) != '\0')))) {
LAB_0051ec0a:
                  FUN_00522770();
                  iVar6 = **(int **)((int)param_1 + 0x15a);
                  FUN_0044b1c0();
                  (**(code **)(iVar6 + 0x2c))();
                }
                else {
                  (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x2c))();
                }
LAB_0051ec2f:
                (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x34))();
                iVar6 = *(int *)((int)param_1 + 0x15a);
                *(undefined4 *)(iVar6 + 0x22) = 0;
                *(undefined4 *)(iVar6 + 0x26) = 10;
                *(undefined1 *)(iVar6 + 0x67) = 0;
                FUN_00413d60();
                FUN_00415f20();
              }
            }
          }
          cVar4 = FUN_0042e980();
        }
        if (cVar4 != '\0') {
          FUN_005afd90();
        }
      }
    }
    else {
      iVar6 = (**(code **)(param_1[0x47] + 4))();
      if ((iVar6 != 0) || (*(int *)((int)param_1 + 0x176) != 0)) goto LAB_0051e990;
      cVar4 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
      if (cVar4 != '\0') {
        iVar6 = FUN_004e9370();
        if (*(int *)(iVar6 + 0x3d8) == 0) {
LAB_0051e968:
          *(undefined1 *)((int)param_1 + 0x17b) = 0;
          if (((char)param_1[0x5f] == '\0') || (*(int *)((int)param_1 + 0x176) != 0))
          goto LAB_0051e900;
          iVar6 = param_1[0x47];
LAB_0051e8d8:
          iVar6 = (**(code **)(iVar6 + 4))();
          if ((iVar6 != 0) || (*(char *)((int)param_1 + 0x17b) != '\0')) goto LAB_0051e900;
          (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x2c))();
        }
        else {
          FUN_004e9370();
          cVar4 = FUN_0044b280();
          if (cVar4 == '\0') goto LAB_0051e968;
          cVar4 = (**(code **)(*param_1 + 0x28))();
          if (cVar4 == '\0') goto LAB_0051ecc7;
          iVar6 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
          if (iVar6 == 0) {
LAB_0051e75e:
            cVar4 = FUN_0042e980();
            if (cVar4 != '\0') {
              if (DAT_00dc191b == '\0') {
                puVar14 = operator_new(0xc);
                uVar1 = DAT_0088f28c;
                local_8 = 10;
                if (puVar14 != (undefined4 *)0x0) {
                  uStack_56 = (undefined1)DAT_0088f28e;
                  bStack_55 = (byte)((uint)DAT_0088f28e >> 8);
                  local_54 = (undefined2)((uint)DAT_0088f28e >> 0x10);
                  FUN_00458490();
                  *puVar14 = &PTR_FUN_007e5370;
                  iVar6 = puVar14[1];
                  *(int *)(iVar6 + 0xe) = param_1[6];
                  *(short *)(iVar6 + 0x12) = (short)param_1[7];
                  *(undefined1 *)(puVar14[1] + 0x14) = 1;
                  *(undefined1 *)(puVar14[1] + 0x15) = 0;
                  *(undefined4 *)(puVar14[1] + 0x16) = 0;
                  iVar6 = puVar14[1];
                  *(uint *)(iVar6 + 0x1a) = CONCAT13(bStack_55,CONCAT12(uStack_56,uVar1));
                  *(undefined2 *)(iVar6 + 0x1e) = local_54;
                }
              }
              else {
                puVar14 = operator_new(0xc);
                uVar1 = DAT_0088f28c;
                local_8 = 9;
                if (puVar14 != (undefined4 *)0x0) {
                  uStack_56 = (undefined1)DAT_0088f28e;
                  bStack_55 = (byte)((uint)DAT_0088f28e >> 8);
                  local_54 = (undefined2)((uint)DAT_0088f28e >> 0x10);
                  iVar6 = FUN_004e9370();
                  uVar10 = *(undefined4 *)(*(int *)(iVar6 + 0x3d8) + 6);
                  FUN_00458490();
                  *puVar14 = &PTR_FUN_007e5370;
                  iVar6 = puVar14[1];
                  *(int *)(iVar6 + 0xe) = param_1[6];
                  *(short *)(iVar6 + 0x12) = (short)param_1[7];
                  *(undefined1 *)(puVar14[1] + 0x14) = 1;
                  *(undefined1 *)(puVar14[1] + 0x15) = 0;
                  *(undefined4 *)(puVar14[1] + 0x16) = uVar10;
                  iVar6 = puVar14[1];
                  *(uint *)(iVar6 + 0x1a) = CONCAT13(bStack_55,CONCAT12(uStack_56,uVar1));
                  *(undefined2 *)(iVar6 + 0x1e) = local_54;
                }
              }
              local_8 = 0xffffffff;
              FUN_00565ca0();
            }
            goto LAB_0051ecc7;
          }
          local_18 = 0.0;
          piVar12 = *(int **)((int)param_1 + 0x26);
          while (piVar12 != (int *)0x0) {
            piVar13 = (int *)piVar12[2];
            fVar11 = *(float *)(*piVar12 + 0xf4);
            fVar19 = (float10)FUN_004fd510();
            local_18 = (float)((float10)fVar11 / fVar19 + (float10)local_18);
            piVar12 = piVar13;
          }
          iVar6 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
          if (local_18 / (float)iVar6 < _DAT_007e34c0) goto LAB_0051e75e;
          *(undefined1 *)((int)param_1 + 0x17b) = 0;
          if (((char)param_1[0x5f] != '\0') && (*(int *)((int)param_1 + 0x176) == 0)) {
            iVar6 = param_1[0x47];
            goto LAB_0051e8d8;
          }
LAB_0051e900:
          FUN_00522770();
          iVar6 = **(int **)((int)param_1 + 0x15a);
          FUN_0044b1c0();
          (**(code **)(iVar6 + 0x2c))();
        }
        (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x34))();
        iVar6 = *(int *)((int)param_1 + 0x15a);
        *(undefined4 *)(iVar6 + 0x22) = 0;
        *(undefined4 *)(iVar6 + 0x26) = 10;
        *(undefined1 *)(iVar6 + 0x67) = 0;
        FUN_00413d60();
        FUN_00415f20();
      }
    }
LAB_0051ecc7:
    cVar4 = FUN_0042e980();
    if ((cVar4 != '\0') &&
       (((((cVar4 = FUN_005129d0(), cVar4 != '\0' || (param_1[0x99] == 0x12)) &&
          (*(int *)((int)param_1 + 0x176) == 0)) &&
         ((iVar6 = (**(code **)(param_1[0x47] + 4))(), iVar6 == 0 &&
          (cVar4 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))(), cVar4 != '\0')))) &&
        (*(int *)((int)param_1 + 0x212) != param_1[3])))) {
      puVar14 = operator_new(0xc);
      local_8 = 0xc;
      if (puVar14 != (undefined4 *)0x0) {
        uVar10 = *(undefined4 *)((int)param_1 + 0x212);
        FUN_00516380();
        *puVar14 = &PTR_FUN_007e875c;
        *(undefined2 *)(puVar14[1] + 0xe) = 1;
        *(short *)(puVar14[1] + 0x10) = (short)uVar10;
      }
      local_8 = 0xffffffff;
      FUN_00565bc0();
      puVar14 = operator_new(0xc);
      local_8 = 0xd;
      if (puVar14 != (undefined4 *)0x0) {
        uVar10 = *(undefined4 *)((int)param_1 + 0x212);
        FUN_004c0990();
        *puVar14 = &PTR_FUN_007e7804;
        iVar6 = puVar14[1];
        *(short *)(iVar6 + 0x14) = (short)uVar10;
        *(int *)(iVar6 + 0xe) = param_1[6];
        *(short *)(iVar6 + 0x12) = (short)param_1[7];
        *(undefined1 *)(iVar6 + 0x16) = 1;
        *(uint *)(iVar6 + 0x18) = (uint)bStack_55 << 0x18;
        *(undefined2 *)(iVar6 + 0x1c) = 0;
      }
      local_8 = 0xffffffff;
      FUN_00565c30();
    }
    if (((*(char *)((int)param_1 + 0x17b) == '\0') ||
        (cVar4 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))(), cVar4 != '\0')) ||
       (cVar4 = (**(code **)(*param_1 + 0x28))(), cVar4 == '\0')) {
LAB_0051f20a:
      cVar4 = FUN_0042e980();
      if ((cVar4 != '\0') && (*(char *)((int)param_1 + 0x17b) == '\0')) {
        cVar4 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
        if ((cVar4 == '\0') && (cVar4 = (**(code **)(*param_1 + 0x28))(), cVar4 != '\0')) {
          cVar4 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
          if (cVar4 == '\0') {
            FUN_00526ad0();
          }
          FUN_004e9370();
          (**(code **)(*param_1 + 0x10))();
          cVar4 = FUN_005081a0();
          if (cVar4 == '\x01') {
            FUN_00523f70();
            FUN_004e9370();
            (**(code **)(*param_1 + 0x10))();
            cVar4 = FUN_00508170();
            if (cVar4 == '\0') {
              FUN_00523f70();
              FUN_005afd90();
            }
          }
          goto LAB_0051f344;
        }
      }
      cVar4 = FUN_0042e980();
      if (((cVar4 != '\0') && (cVar4 = FUN_00526b90(), cVar4 != '\0')) &&
         (cVar4 = FUN_00516340(), cVar4 != '\0')) {
        FUN_00526c40();
        FUN_00462830();
        cVar4 = FUN_0042dd70();
        if (cVar4 != '\0') {
          iVar6 = FUN_00523f70();
          if (iVar6 == 0) {
            iVar6 = FUN_00516300();
            if (iVar6 == 0) {
              (**(code **)(*param_1 + 0x74))();
            }
          }
          else {
            uVar10 = FUN_00523f70();
            *(undefined4 *)((int)param_1 + 0x13a) = uVar10;
            *(undefined4 *)((int)param_1 + 0x13e) = 99999;
            FUN_005bd0c9();
          }
        }
      }
    }
    else {
      iVar6 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
      if (iVar6 == 0) goto LAB_0051f20a;
      local_18 = 0.0;
      piVar12 = *(int **)((int)param_1 + 0x26);
      while (piVar12 != (int *)0x0) {
        piVar13 = (int *)piVar12[2];
        fVar11 = *(float *)(*piVar12 + 0xf4);
        fVar19 = (float10)FUN_004fd510();
        local_18 = (float)((float10)fVar11 / fVar19 + (float10)local_18);
        piVar12 = piVar13;
      }
      iVar6 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
      if (local_18 / (float)iVar6 <= _DAT_007e8bdc) goto LAB_0051f20a;
      piVar12 = (int *)((int)param_1 + 0x22e);
      (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
      FUN_004e9370();
      (**(code **)(*param_1 + 0x10))();
      cVar4 = FUN_005081a0();
      if (cVar4 == '\x01') {
        (**(code **)(*piVar12 + 8))();
        FUN_004e9370();
        (**(code **)(*param_1 + 0x10))();
        cVar4 = FUN_00508170();
        if (cVar4 == '\0') {
          FUN_004e9370();
          (**(code **)(*param_1 + 0x10))();
          cVar4 = FUN_005081a0();
          if (cVar4 != '\0') {
            (**(code **)(*piVar12 + 8))();
            FUN_004e9370();
            cVar4 = FUN_0044a690();
            if (cVar4 == '\0') {
              cVar4 = FUN_0042e980();
              if ((cVar4 == '\0') || (DAT_00dc191b == '\0')) {
                cVar4 = FUN_0042e980();
                if (cVar4 == '\0') goto LAB_0051f344;
                puVar14 = operator_new(0xc);
                uVar1 = DAT_0088f28c;
                local_8 = 0xf;
                if (puVar14 != (undefined4 *)0x0) {
                  uStack_56 = (undefined1)DAT_0088f28e;
                  bStack_55 = (byte)((uint)DAT_0088f28e >> 8);
                  local_54 = (undefined2)((uint)DAT_0088f28e >> 0x10);
                  FUN_00458490();
                  *puVar14 = &PTR_FUN_007e5370;
                  iVar6 = puVar14[1];
                  *(int *)(iVar6 + 0xe) = param_1[6];
                  *(short *)(iVar6 + 0x12) = (short)param_1[7];
                  *(undefined1 *)(puVar14[1] + 0x14) = 1;
                  *(undefined1 *)(puVar14[1] + 0x15) = 0;
                  *(undefined4 *)(puVar14[1] + 0x16) = 0;
                  iVar6 = puVar14[1];
                  *(uint *)(iVar6 + 0x1a) = CONCAT13(bStack_55,CONCAT12(uStack_56,uVar1));
                  *(undefined2 *)(iVar6 + 0x1e) = local_54;
                }
              }
              else {
                puVar14 = operator_new(0xc);
                uVar1 = DAT_0088f28c;
                local_8 = 0xe;
                if (puVar14 != (undefined4 *)0x0) {
                  uStack_56 = (undefined1)DAT_0088f28e;
                  bStack_55 = (byte)((uint)DAT_0088f28e >> 8);
                  local_54 = (undefined2)((uint)DAT_0088f28e >> 0x10);
                  (**(code **)(*piVar12 + 8))();
                  iVar6 = FUN_004e9370();
                  uVar10 = *(undefined4 *)(*(int *)(iVar6 + 0x3d8) + 6);
                  FUN_00458490();
                  *puVar14 = &PTR_FUN_007e5370;
                  iVar6 = puVar14[1];
                  *(int *)(iVar6 + 0xe) = param_1[6];
                  *(short *)(iVar6 + 0x12) = (short)param_1[7];
                  *(undefined1 *)(puVar14[1] + 0x14) = 1;
                  *(undefined1 *)(puVar14[1] + 0x15) = 0;
                  *(undefined4 *)(puVar14[1] + 0x16) = uVar10;
                  iVar6 = puVar14[1];
                  *(uint *)(iVar6 + 0x1a) = CONCAT13(bStack_55,CONCAT12(uStack_56,uVar1));
                  *(undefined2 *)(iVar6 + 0x1e) = local_54;
                }
              }
              local_8 = 0xffffffff;
              FUN_00565ca0();
              goto LAB_0051f344;
            }
          }
          *(undefined1 *)((int)param_1 + 0x17b) = 0;
          if ((((char)param_1[0x5f] == '\0') || (*(int *)((int)param_1 + 0x176) != 0)) ||
             ((iVar6 = (**(code **)(param_1[0x47] + 4))(), iVar6 != 0 ||
              (*(char *)((int)param_1 + 0x17b) != '\0')))) {
            FUN_00522770();
            iVar6 = **(int **)((int)param_1 + 0x15a);
            FUN_0044b1c0();
            (**(code **)(iVar6 + 0x2c))();
          }
          else {
            (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x2c))();
          }
          (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x34))();
          iVar6 = *(int *)((int)param_1 + 0x15a);
          *(undefined4 *)(iVar6 + 0x22) = 0;
          *(undefined4 *)(iVar6 + 0x26) = 10;
          *(undefined1 *)(iVar6 + 0x67) = 0;
          FUN_00413d60();
          FUN_00415f20();
          cVar4 = FUN_0042e980();
          if (cVar4 != '\0') {
            cVar4 = (**(code **)(*piVar12 + 8))();
            if (cVar4 == '\0') {
              FUN_005afd90();
            }
            else {
              FUN_005afd90();
            }
          }
        }
      }
    }
LAB_0051f344:
    cVar4 = FUN_0042e980();
    if (cVar4 != '\0') {
      cVar4 = (**(code **)(*param_1 + 0x2c))();
      if (cVar4 != '\0') {
        FUN_00462830();
        iVar6 = FUN_00521150();
        if (iVar6 == 1) {
          FUN_00526ce0();
          uVar10 = FUN_00514040();
          switch(uVar10) {
          case 1:
          case 2:
          case 3:
          case 0x1b:
          case 0x1c:
          case 0x20:
            break;
          default:
            FUN_0051b230();
            cVar4 = FUN_004e8f30();
            if (cVar4 == '\0') {
LAB_0051f444:
              FUN_00462830();
              iVar6 = FUN_00521160();
              if (iVar6 % 0xf == 0) {
                FUN_00516370();
                FUN_004e9370();
                cVar4 = FUN_004e8f30();
                if ((cVar4 != '\0') && (iVar6 = FUN_00513f90(), iVar6 != 0)) {
                  FUN_00494b80();
                  cVar4 = FUN_004a3020();
                  if (cVar4 == '\0') {
                    local_38 = 0;
                    local_2c = 2.312234e-35;
                    iVar6 = FUN_00516300();
                    FUN_004e9370();
                    cVar4 = FUN_004e8f30();
                    if ((cVar4 == '\0') || (iVar5 = FUN_00513f90(), iVar5 == 0)) {
LAB_0051f530:
                      cVar4 = FUN_004e8f30();
                      if (cVar4 != '\0') {
                        FUN_005269a0();
                      }
                      FUN_00526a00();
                      local_8 = 0x10;
                      iVar6 = 1;
                      do {
                        FUN_00494b80();
                        iVar5 = FUN_00458280();
                        if (iVar6 == iVar5) {
LAB_0051f581:
                          FUN_00459f50();
                        }
                        else {
                          FUN_00494b80();
                          cVar4 = FUN_004a33e0();
                          if (cVar4 != '\0') goto LAB_0051f581;
                        }
                        iVar6 = iVar6 + 1;
                      } while (iVar6 < 0x158);
                      FUN_00516230();
                      cVar4 = FUN_00516260();
                      iVar6 = local_38;
                      while (cVar4 != '\0') {
                        FUN_00516240();
                        FUN_00516250();
                        iVar5 = FUN_00465c30();
                        local_38 = iVar6;
                        if (iVar5 != 0) {
                          FUN_00526a60();
                          FUN_00526ac0();
                          cVar4 = FUN_00526b10();
                          while (cVar4 != '\0') {
                            FUN_00526af0();
                            FUN_00526b00();
                            FUN_004e9370();
                            cVar4 = FUN_00526990();
                            if ((cVar4 != '\0') && (iVar6 = FUN_004ece90(), iVar6 != 0)) {
                              FUN_00494b80();
                              cVar4 = FUN_0049ee30();
                              if (cVar4 != '\0') {
                                FUN_005269a0();
                                FUN_00494b80();
                                cVar4 = FUN_004ed600();
                                if (cVar4 != '\0') {
                                  FUN_004ed6d0();
                                  iVar6 = __ftol();
                                  if (iVar6 < (int)local_2c) {
                                    local_38 = FUN_0048b970();
                                    local_2c = (float)iVar6;
                                  }
                                }
                              }
                            }
                            cVar4 = FUN_00526b10();
                          }
                        }
                        cVar4 = FUN_00516260();
                        iVar6 = local_38;
                      }
                      local_8 = 0xffffffff;
                      FUN_00430580();
                    }
                    else {
                      iVar5 = FUN_00494b80();
                      iVar15 = FUN_00513f90();
                      if (iVar15 != iVar5) {
                        FUN_00494b80();
                        FUN_00458280();
                        FUN_00513f90();
                        cVar4 = FUN_0044b300();
                        if (cVar4 == '\0') goto LAB_0051f530;
                      }
                      if (iVar6 < 1) break;
                    }
                    if (0 < iVar6) {
                      puStack_b8 = (undefined1 *)0x1;
                      piStack_bc = (int *)0x0;
                      puStack_c0 = (undefined1 *)0xffffffff;
                      uStack_c4 = 1;
                      uStack_c8 = 0x51f6ec;
                      puVar14 = (undefined4 *)FUN_0042d2d0();
                      uStack_cc = *puVar14;
                      uStack_c8 = CONCAT22(uStack_c8._2_2_,*(undefined2 *)(puVar14 + 1));
                      uStack_d0 = 0x51f708;
                      puVar14 = (undefined4 *)FUN_00462830();
                      uVar10 = *puVar14;
                      uVar23 = 1;
                      uVar22 = 1;
                      uVar21 = 0;
                      uStack_d0 = CONCAT22(uStack_d0._2_2_,*(undefined2 *)(puVar14 + 1));
                      uVar20 = 2;
                      goto LAB_0051f722;
                    }
                  }
                }
              }
            }
            else {
              FUN_0051b230();
              iVar6 = FUN_00513f90();
              if (iVar6 == 0) goto LAB_0051f444;
              FUN_0051b230();
              FUN_00494b80();
              cVar4 = FUN_004a3020();
              if (cVar4 != '\0') goto LAB_0051f444;
              puStack_b8 = (undefined1 *)0x1;
              piStack_bc = (int *)0x0;
              puStack_c0 = (undefined1 *)0xffffffff;
              uStack_c4 = 1;
              uStack_c8 = 0x51f3fb;
              puVar14 = (undefined4 *)FUN_0042d2d0();
              uStack_cc = *puVar14;
              uStack_c8 = CONCAT22(uStack_c8._2_2_,*(undefined2 *)(puVar14 + 1));
              uStack_d0 = 0x51f417;
              puVar14 = (undefined4 *)FUN_00462830();
              uVar10 = *puVar14;
              uVar23 = 1;
              uVar22 = 1;
              uVar21 = 0;
              uStack_d0 = CONCAT22(uStack_d0._2_2_,*(undefined2 *)(puVar14 + 1));
              FUN_0051b230(0,1,1,uVar10);
              iVar6 = FUN_005269a0();
              uVar20 = 1;
LAB_0051f722:
              piVar12 = param_1;
              FUN_00526ce0(param_1,uVar20,iVar6,uVar21,uVar22,uVar23,uVar10);
              FUN_0050b600(piVar12,uVar20,iVar6,uVar21,uVar22,uVar23,uVar10);
            }
          }
        }
      }
      FUN_0051b230();
      cVar4 = FUN_004e8f30();
      if (cVar4 != '\0') {
        FUN_0051b230();
        iVar6 = FUN_00513f90();
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*param_1 + 0x2c))(), cVar4 == '\0')) {
          FUN_00494b80();
          FUN_00458280();
          FUN_0051b230();
          FUN_00513f90();
          cVar4 = FUN_0044b280();
          if (cVar4 == '\0') {
            FUN_00494b80();
            FUN_00458280();
            FUN_0051b230();
            FUN_0048b980();
            cVar4 = FUN_0044b280();
            if (cVar4 == '\0') {
              FUN_0051b230();
              FUN_00494b80();
              cVar4 = FUN_004a3020();
              if (cVar4 == '\0') {
                cVar4 = (**(code **)(*param_1 + 0x30))();
                if (cVar4 == '\0') {
                  pvVar16 = operator_new(0xc);
                  local_8 = 0x11;
                  if (pvVar16 == (void *)0x0) goto LAB_0051f943;
                  FUN_00522770();
                  FUN_00493d20();
                }
                else {
                  local_2c = 3.4028235e+38;
                  FUN_00494b80();
                  piVar12 = (int *)FUN_004a5a30();
                  iVar6 = (**(code **)(*piVar12 + 4))();
                  if (0 < iVar6) {
                    FUN_00494b80();
                    FUN_004a5a30();
                    FUN_00526d10();
                    cVar4 = FUN_00526d40();
                    while (cVar4 != '\0') {
                      FUN_00526d30();
                      FUN_00521220();
                      iVar6 = FUN_00513f90();
                      if (iVar6 != 0) {
                        iVar6 = FUN_00494b80();
                        iVar5 = FUN_00513f90();
                        if (iVar5 == iVar6) {
                          FUN_00494b80();
                          FUN_0048b970();
                          (**(code **)(*param_1 + 0x18))();
                          FUN_00516370();
                          fVar19 = (float10)FUN_0044a9c0();
                          if (fVar19 < (float10)local_2c) {
                            FUN_0048b970();
                            local_2c = (float)fVar19;
                          }
                        }
                      }
                      FUN_00526d20();
                      cVar4 = FUN_00526d40();
                    }
                  }
                  pvVar16 = operator_new(0xc);
                  local_8 = 0x12;
                  if (pvVar16 == (void *)0x0) goto LAB_0051f943;
                }
                FUN_00447250();
                FUN_00522770();
                FUN_0045fec0();
                puStack_b8 = (undefined1 *)0x36;
                piStack_bc = (int *)0x51f93f;
                FUN_00521230();
LAB_0051f943:
                local_8 = 0xffffffff;
                FUN_00565bc0();
                ExceptionList = local_10;
                return 0;
              }
            }
          }
        }
      }
      FUN_00494b80();
      iVar6 = FUN_00458280();
      if (((((&DAT_00dc0fd4)[iVar6] != 1) && ((&DAT_00dc0fd4)[iVar6] != 2)) &&
          (cVar4 = (**(code **)(*param_1 + 0x28))(), cVar4 != '\0')) &&
         (((iVar6 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))(), iVar6 < 1 &&
           (cVar4 = FUN_00526c10(), cVar4 == '\0')) &&
          ((cVar4 = FUN_00516310(), cVar4 == '\0' && (cVar4 = FUN_00516330(), cVar4 == '\0')))))) {
        FUN_00494b80();
        FUN_00460000();
      }
    }
    iVar6 = FUN_00494b80();
    if (((iVar6 == DAT_00d0ca90) && (cVar4 = (**(code **)(*param_1 + 0x28))(), cVar4 != '\0')) &&
       ((iVar6 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))(), iVar6 < 1 &&
        ((((cVar4 = FUN_00526c10(), cVar4 == '\0' && (cVar4 = FUN_00516310(), cVar4 == '\0')) &&
          (cVar4 = FUN_00516330(), cVar4 == '\0')) &&
         ((cVar4 = FUN_00526b80(), cVar4 == '\0' && (cVar4 = FUN_0042e910(), cVar4 == '\0')))))))) {
      FUN_00494b80();
      FUN_00460000();
    }
    break;
  case 0x1b:
    cVar4 = (**(code **)(*param_1 + 0x2c))();
    if (((cVar4 != '\0') && (cVar4 = FUN_00516340(), cVar4 != '\0')) &&
       (cVar4 = FUN_0042e980(), cVar4 != '\0')) {
      (**(code **)(*param_1 + 0x14))();
      FUN_005211e0();
      FUN_004986f0();
      cVar4 = FUN_00498730();
      while (cVar4 != '\0') {
        FUN_00498700();
        FUN_00498710();
        FUN_00526ce0();
        iVar6 = FUN_00514040();
        if ((iVar6 != 0) || (cVar4 = FUN_00516340(), cVar4 != '\0')) {
          FUN_0051bbd0();
        }
        cVar4 = FUN_00498730();
      }
    }
    cVar4 = FUN_00516340();
    if (((cVar4 != '\0') && (cVar4 = FUN_00516310(), cVar4 != '\0')) &&
       (cVar4 = (**(code **)(*param_1 + 0x28))(), cVar4 != '\0')) {
      piVar12 = (int *)FUN_00462830();
      param_1[0x4d] = *piVar12;
      *(short *)(param_1 + 0x4e) = (short)piVar12[1];
      cVar4 = (**(code **)(*param_1 + 0x28))();
      if (cVar4 != '\0') {
        (**(code **)(*param_1 + 0x10))();
        iVar6 = FUN_005211d0();
        if (iVar6 != 0) {
          FUN_00462830();
          (**(code **)(*param_1 + 0x10))();
          FUN_005211d0();
          FUN_005211f0();
        }
      }
    }
    iVar6 = FUN_00465c30();
    if (iVar6 != 0) {
      param_1[0x97] = 0;
      pvVar16 = operator_new(0xc);
      local_8 = 0x14;
      if (pvVar16 != (void *)0x0) {
        FUN_0045f730();
        puStack_b8 = (undefined1 *)0x1;
        piStack_bc = (int *)0x51fddc;
        piStack_bc = (int *)FUN_00447250();
        puStack_c0 = (undefined1 *)0x51fde4;
        puStack_c0 = (undefined1 *)FUN_0045fec0();
        uStack_c4 = 0xa8;
        uStack_c8 = 0x51fdf1;
        FUN_00521370();
      }
      local_8 = 0xffffffff;
      FUN_00565c30();
    }
    break;
  case 0x2c:
    *(undefined1 *)((int)param_1 + 0x186) = *(undefined1 *)(param_2[1] + 0x14);
    ExceptionList = local_10;
    return 3;
  case 0x2d:
    *(undefined1 *)((int)param_1 + 0x17b) = 1;
    (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x2c))();
    (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x34))();
    iVar6 = *(int *)((int)param_1 + 0x15a);
    *(undefined4 *)(iVar6 + 0x22) = 0;
    *(undefined4 *)(iVar6 + 0x26) = 10;
    *(undefined1 *)(iVar6 + 0x67) = 0;
    FUN_00413d60();
    FUN_00415f20();
    break;
  case 0x2f:
    FUN_00526ab0();
    cVar4 = FUN_0042e980();
    if ((cVar4 != '\0') && (iVar6 = FUN_00523f70(), iVar6 != 0)) {
      FUN_005b91d4();
      pvVar16 = operator_new(0xc);
      local_8 = 0x13;
      if (pvVar16 != (void *)0x0) {
        FUN_00523f70();
        FUN_00447250();
        FUN_00521480();
      }
      local_8 = 0xffffffff;
      FUN_00526c70();
      FUN_00565af0();
    }
    FUN_00526ab0();
    FUN_00526c50();
    FUN_00526c20();
    ExceptionList = local_10;
    return 3;
  case 0x37:
    FUN_00526a50();
    FUN_00526cc0();
    ExceptionList = local_10;
    return 3;
  case 0x39:
    iVar6 = FUN_00521c10();
    ExceptionList = local_10;
    return iVar6;
  case 0x48:
    cVar4 = FUN_00526c10();
    if ((((cVar4 == '\0') && (FUN_00521540(), DAT_00893750 != 0)) &&
        (cVar4 = FUN_0042e8e0(), cVar4 != '\0')) && (cVar4 = FUN_0042e980(), cVar4 != '\0')) {
      FUN_00516300();
      FUN_005afd90();
      cVar4 = FUN_00526c10();
      if (cVar4 == '\0') {
        cVar4 = (**(code **)(*param_1 + 0x28))();
        if (cVar4 == '\0') {
          cVar4 = (**(code **)(*param_1 + 0x2c))();
          if (cVar4 == '\0') {
            (**(code **)(*param_1 + 0x18))();
            FUN_006ad2b0();
            (**(code **)(*param_1 + 0x18))();
            FUN_005211b0();
          }
          else {
            (**(code **)(*param_1 + 0x14))();
            FUN_006ad320();
            (**(code **)(*param_1 + 0x14))();
            FUN_00521190();
          }
        }
        else {
          (**(code **)(*param_1 + 0x10))();
          FUN_006ad240();
          (**(code **)(*param_1 + 0x10))();
          FUN_00521170();
        }
        iVar6 = FUN_00521210();
        if (*(char *)(iVar6 + 0xe) == '\0') {
          piVar12 = (int *)FUN_00494b80();
          cVar4 = (**(code **)(*piVar12 + 0x1c))();
          if (cVar4 == '\0') {
            FUN_0051cc70();
          }
        }
      }
    }
    ExceptionList = local_10;
    return 3;
  case 0x85:
    FUN_0050bd90();
    ExceptionList = local_10;
    return 3;
  }
switchD_0051d81e_caseD_18:
  iVar6 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
  if (iVar6 < 2) {
    (**(code **)(**(int **)((int)param_1 + 0x172) + 0x38))();
    iVar6 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
    if (iVar6 == 1) {
      FUN_00526d00();
      fVar19 = (float10)FUN_00526a20();
      if (fVar19 < (float10)_DAT_007e68c4) {
        (**(code **)(**(int **)((int)param_1 + 0x172) + 0x38))();
      }
    }
  }
  else {
    iVar6 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
    if (iVar6 < 4) {
      (**(code **)(**(int **)((int)param_1 + 0x172) + 0x38))();
    }
    else {
      (**(code **)(**(int **)((int)param_1 + 0x172) + 0x38))();
    }
  }
  cVar4 = FUN_00516310();
  if (cVar4 != '\0') {
    puVar14 = (undefined4 *)FUN_00462830();
    *(undefined4 *)((int)param_1 + 0x12e) = *puVar14;
    *(undefined2 *)((int)param_1 + 0x132) = *(undefined2 *)(puVar14 + 1);
  }
  iVar6 = (**(code **)((int)param_1 + 0x21a))();
  if (((iVar6 == 0) && (cVar4 = FUN_0042e980(), cVar4 != '\0')) &&
     ((cVar4 = FUN_00516310(), cVar4 == '\0' &&
      (((cVar4 = FUN_00516330(), cVar4 == '\0' && (iVar5 = FUN_00516300(), iVar5 != 0)) &&
       (cVar4 = (**(code **)(*param_1 + 0x30))(), cVar4 != '\0')))))) {
    iVar5 = FUN_00516370();
    iVar15 = FUN_00516300();
    if ((iVar15 == iVar5) && (cVar4 = FUN_00526c10(), cVar4 == '\0')) {
      FUN_0051b230();
      iVar5 = FUN_00513f90();
      if (iVar5 != 0) {
        FUN_00522770();
        FUN_00458280();
        puStack_b8 = (undefined1 *)0x520e87;
        FUN_0051b230();
        puStack_b8 = (undefined1 *)0x520e8e;
        FUN_00513f90();
        puStack_b8 = (undefined1 *)0x520e95;
        cVar4 = FUN_0044b280();
        if (cVar4 != '\0') {
          FUN_0051b230();
          FUN_00513f90();
          FUN_00458280();
          puStack_b8 = (undefined1 *)0x520eba;
          FUN_00522770();
          puStack_b8 = (undefined1 *)0x520ec1;
          cVar4 = FUN_0049ed40();
          if (cVar4 == '\0') {
            if (DAT_00dc191b == '\0') {
              puStack_b8 = (undefined1 *)0x520f9c;
              pvVar16 = operator_new(0xc);
              local_8 = 0x17;
              if (pvVar16 != (void *)0x0) {
                puStack_b8 = (undefined1 *)0x520fbf;
                FUN_0045f730();
                puStack_b8 = (undefined1 *)0x0;
                piStack_bc = (int *)0x0;
                puStack_c0 = (undefined1 *)0x1;
                uStack_c4 = 0x520fce;
                uStack_c4 = FUN_00447250();
                uStack_c8 = 0x520fd6;
                FUN_00494b80();
                uStack_c8 = 0x520fdd;
                uStack_c8 = FUN_0045fec0();
                uStack_cc = 0x35;
                uStack_d0 = 0x520fe7;
                FUN_00521370();
              }
            }
            else {
              puStack_b8 = (undefined1 *)0x520f35;
              pvVar16 = operator_new(0xc);
              local_8 = 0x16;
              if (pvVar16 != (void *)0x0) {
                puStack_b8 = (undefined1 *)0x520f59;
                FUN_0045f730();
                puStack_b8 = (undefined1 *)0x520f61;
                FUN_0051b230();
                puStack_b8 = (undefined1 *)0x520f68;
                FUN_00513f90();
                puStack_b8 = (undefined1 *)0x520f6f;
                puStack_b8 = (undefined1 *)FUN_00458280();
                piStack_bc = (int *)0x0;
                puStack_c0 = (undefined1 *)0x1;
                uStack_c4 = 0x520f7c;
                uStack_c4 = FUN_00447250();
                uStack_c8 = 0x520f84;
                FUN_00494b80();
                uStack_c8 = 0x520f8b;
                uStack_c8 = FUN_0045fec0();
                uStack_cc = 0x35;
                uStack_d0 = 0x520f95;
                FUN_00521370();
              }
            }
          }
          else {
            puStack_b8 = (undefined1 *)0x520ecc;
            pvVar16 = operator_new(0xc);
            local_8 = 0x15;
            if (pvVar16 != (void *)0x0) {
              puStack_b8 = (undefined1 *)0x520ef0;
              FUN_0045f730();
              piStack_bc = (int *)0x1;
              uStack_c4 = 0x520efd;
              puStack_c0 = (undefined1 *)iVar6;
              puStack_b8 = (undefined1 *)iVar6;
              uStack_c4 = FUN_00447250();
              uStack_c8 = 0x520f05;
              FUN_0051b230();
              uStack_c8 = 0x520f0c;
              FUN_00513f90();
              uStack_c8 = 0x520f13;
              uStack_c8 = FUN_0045fec0();
              uStack_cc = 0xa8;
              uStack_d0 = 0x520f20;
              FUN_00521370();
            }
          }
          local_8 = 0xffffffff;
          puStack_b8 = (undefined1 *)0x520ff8;
          FUN_00565ca0();
        }
      }
    }
  }
  ExceptionList = local_10;
  return iVar6;
}


