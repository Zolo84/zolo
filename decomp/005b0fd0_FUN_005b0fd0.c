// FUN_005b0fd0 @ 5b0fd0 size=13961

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005b0fd0(int *param_1)

{
  undefined1 uVar1;
  int *piVar2;
  undefined ***pppuVar3;
  int *piVar4;
  char cVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined2 uVar16;
  uint uVar17;
  undefined ***pppuVar18;
  undefined4 uVar19;
  bool bVar20;
  float10 fVar21;
  undefined4 uStack_23c;
  undefined1 **ppuStack_238;
  undefined1 *puStack_234;
  undefined ***pppuStack_22c;
  undefined ***pppuStack_228;
  undefined ***pppuStack_220;
  undefined2 uStack_204;
  undefined2 uStack_202;
  undefined2 uStack_200;
  undefined4 *puStack_1fc;
  char cStack_1f5;
  undefined1 uStack_1f4;
  undefined1 uStack_1f3;
  undefined2 uStack_1f2;
  undefined2 uStack_1f0;
  int *piStack_1ec;
  undefined ***pppuStack_1e8;
  char cStack_1e1;
  undefined ***pppuStack_1e0;
  undefined4 *puStack_1dc;
  int *local_1d8;
  undefined ***pppuStack_1d4;
  int *piStack_1d0;
  undefined1 *puStack_1cc;
  undefined2 uStack_1c8;
  undefined **ppuStack_1c4;
  int *piStack_1c0;
  int *piStack_1bc;
  int iStack_1b8;
  undefined1 uStack_1b4;
  undefined **ppuStack_1b0;
  undefined2 uStack_1ac;
  undefined **ppuStack_1a8;
  int *piStack_1a4;
  int *piStack_1a0;
  int iStack_19c;
  undefined **appuStack_194 [2];
  undefined2 uStack_18c;
  int iStack_18a;
  undefined2 uStack_184;
  int iStack_182;
  undefined2 uStack_17c;
  undefined4 uStack_17a;
  undefined2 uStack_174;
  int iStack_172;
  undefined2 uStack_16c;
  int iStack_16a;
  undefined2 uStack_164;
  int iStack_162;
  undefined2 uStack_15c;
  int iStack_15a;
  undefined2 uStack_154;
  int iStack_152;
  undefined2 uStack_14c;
  int iStack_14a;
  undefined2 uStack_144;
  int iStack_142;
  undefined2 uStack_13c;
  int iStack_13a;
  undefined2 uStack_134;
  int iStack_132;
  undefined2 uStack_12c;
  undefined4 uStack_12a;
  undefined1 auStack_124 [8];
  undefined **appuStack_11c [2];
  undefined **appuStack_114 [2];
  undefined **appuStack_10c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cbe02;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar5 = FUN_0042e980();
  if (cVar5 == '\0') {
    ExceptionList = local_c;
    return 0;
  }
  uVar6 = (**(code **)(*param_1 + 8))();
  switch(uVar6) {
  case 0x89:
    piVar13 = (int *)(&DAT_0089cad8)[*(int *)(param_1[1] + 0x16)];
    pppuStack_1e8 = (undefined ***)(&DAT_0089cad8)[*(int *)(param_1[1] + 0x1a)];
    if (piVar13 == (int *)0x0) {
      ExceptionList = local_c;
      return 0;
    }
    if (pppuStack_1e8 == (undefined ***)0x0) {
      ExceptionList = local_c;
      return 0;
    }
    local_1d8 = piVar13;
    iVar9 = _rand();
    pppuVar18 = (undefined ***)(iVar9 % 5 + 1);
    if ((*(int *)(param_1[1] + 0xe) == 6) && (_DAT_007e3380 < (float)piVar13[0xe72])) {
      iVar15 = 7;
      iVar9 = FUN_0046a1b0();
      puStack_1dc = (undefined4 *)FUN_0044d810();
      iVar14 = FUN_0044d810();
      uVar17 = iVar14 - (int)puStack_1dc >> 0x1f;
      iVar14 = 4 - ((iVar14 - (int)puStack_1dc ^ uVar17) - uVar17);
      uStack_1f4 = (undefined1)iVar14;
      uStack_1f3 = (undefined1)((uint)iVar14 >> 8);
      uStack_1f2 = (undefined2)((uint)iVar14 >> 0x10);
      if (iVar14 < 0) {
        iVar15 = 2;
      }
      else if (0 < iVar9) {
        if (iVar9 < 0x5f) {
          if (iVar9 < 0x5a) {
            if (iVar9 < 0x55) {
              if (iVar9 < 0x46) {
                if (iVar9 < 0x37) {
                  iVar15 = (0x27 < iVar9) + 1;
                }
                else {
                  iVar15 = 3;
                }
              }
              else {
                iVar15 = 4;
              }
            }
            else {
              iVar15 = 5;
            }
          }
          else {
            iVar15 = 6;
          }
        }
        else {
          iVar15 = 7;
        }
      }
      if ((DAT_00d610e6 == '\0') || ((&DAT_00dc0fd4)[*(int *)((int)pppuStack_1e8 + 6)] != 0)) {
        iVar14 = _rand();
        if (iVar14 % 100 < iVar9) {
          iVar9 = _rand();
          pppuVar18 = (undefined ***)(iVar9 % iVar15 + 1);
        }
        else {
          iVar9 = _rand();
          pppuVar18 = (undefined ***)(iVar9 % 6 + -4);
        }
      }
      else {
        pppuVar18 = (undefined ***)&DAT_00000007;
      }
    }
    uStack_204 = (undefined2)*(undefined4 *)(DAT_00893530 + 0x14);
    uStack_202 = (undefined2)((uint)*(undefined4 *)(DAT_00893530 + 0x14) >> 0x10);
    uStack_200 = *(undefined2 *)(DAT_00893530 + 0x18);
    iVar9 = *(int *)(param_1[1] + 0xe);
    if ((iVar9 == 0x12) || (iVar9 == 0x15)) {
      cStack_1f5 = '\x01';
LAB_005b122c:
      FUN_0042dc20();
      pvVar7 = operator_new(0xc);
      uStack_1f4 = SUB41(pvVar7,0);
      uStack_1f3 = (undefined1)((uint)pvVar7 >> 8);
      uStack_1f2 = (undefined2)((uint)pvVar7 >> 0x10);
      uStack_4 = 0;
      if (pvVar7 != (void *)0x0) {
        pppuStack_220 = *(undefined ****)((int)pppuStack_1e8 + 6);
        pppuStack_22c = (undefined ***)FUN_0045fec0();
        puStack_1cc = (undefined1 *)&pppuStack_228;
        FUN_00446d10();
        pppuStack_22c = (undefined ***)0x1d0;
        FUN_00465280();
      }
      uStack_4 = 0xffffffff;
      FUN_00565ca0();
      if (cStack_1f5 != '\0') {
        puVar8 = operator_new(0xc);
        uStack_4 = 2;
        puStack_1fc = puVar8;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          iVar9 = param_1[1];
          cStack_1e1 = *(char *)(iVar9 + 0xe6);
          cStack_1f5 = *(char *)(iVar9 + 0xe0);
          uVar6 = *(undefined4 *)(iVar9 + 0xe2);
          puStack_1cc = *(undefined1 **)(iVar9 + 0xdc);
          appuStack_194[0] = *(undefined ***)(iVar9 + 0xd4);
          piStack_1ec = *(int **)(iVar9 + 0xd0);
          uStack_1f4 = (undefined1)uVar6;
          uStack_1f3 = (undefined1)((uint)uVar6 >> 8);
          uStack_1f2 = (undefined2)((uint)uVar6 >> 0x10);
          ppuStack_1b0 = *(undefined ***)(iVar9 + 0xd8);
          puStack_1dc = *(undefined4 **)(iVar9 + 0x16);
          uVar1 = *(undefined1 *)(iVar9 + 0xe1);
          pppuStack_1e0 = *(undefined ****)(iVar9 + 200);
          uVar6 = *(undefined4 *)(iVar9 + 0x1a);
          piStack_1d0 = *(int **)(iVar9 + 0xcc);
          local_1d8 = *(int **)(iVar9 + 0xe);
          pppuStack_1d4 = *(undefined ****)(iVar9 + 0x12);
          pppuStack_220 = (undefined ***)0x5b13ac;
          FUN_005b4ba0();
          *puVar8 = &PTR_FUN_007e5fe0;
          *(undefined4 **)(puVar8[1] + 0x16) = puStack_1dc;
          *(undefined4 *)(puVar8[1] + 0x1a) = uVar6;
          *(int **)(puVar8[1] + 0xe) = local_1d8;
          *(undefined ****)(puVar8[1] + 0x12) = pppuStack_1d4;
          *(undefined ****)(puVar8[1] + 200) = pppuStack_1e0;
          *(int **)(puVar8[1] + 0xcc) = piStack_1d0;
          *(int **)(puVar8[1] + 0xd0) = piStack_1ec;
          *(undefined ***)(puVar8[1] + 0xd4) = appuStack_194[0];
          *(undefined ***)(puVar8[1] + 0xd8) = ppuStack_1b0;
          *(undefined1 **)(puVar8[1] + 0xdc) = puStack_1cc;
          *(char *)(puVar8[1] + 0xe0) = cStack_1f5;
          *(undefined1 *)(puVar8[1] + 0xe1) = uVar1;
          iVar14 = 0x3c;
          do {
            *(undefined4 *)(puVar8[1] + -0x14 + iVar14) = *(undefined4 *)(iVar9 + -0x14 + iVar14);
            *(undefined4 *)(puVar8[1] + iVar14) = *(undefined4 *)(iVar9 + iVar14);
            *(undefined4 *)(puVar8[1] + 0x14 + iVar14) = *(undefined4 *)(iVar9 + 0x14 + iVar14);
            *(undefined4 *)(puVar8[1] + 0x28 + iVar14) = *(undefined4 *)(iVar9 + 0x28 + iVar14);
            *(undefined4 *)(puVar8[1] + 0x3c + iVar14) = *(undefined4 *)(iVar9 + 0x3c + iVar14);
            *(undefined4 *)(puVar8[1] + 0x50 + iVar14) = *(undefined4 *)(iVar9 + 0x50 + iVar14);
            *(undefined4 *)(puVar8[1] + 100 + iVar14) = *(undefined4 *)(iVar9 + 100 + iVar14);
            *(undefined4 *)(puVar8[1] + 0x78 + iVar14) = *(undefined4 *)(iVar9 + 0x78 + iVar14);
            iVar14 = iVar14 + 4;
          } while (iVar14 < 0x50);
          *(uint *)(puVar8[1] + 0xe2) = CONCAT22(uStack_1f2,CONCAT11(uStack_1f3,uStack_1f4));
          *(char *)(puVar8[1] + 0xe6) = cStack_1e1;
        }
        iVar9 = puVar8[1];
        uStack_4 = 0xffffffff;
        puVar8 = (undefined4 *)FUN_00428eb0();
        *(undefined4 *)(iVar9 + 0x22) = *puVar8;
        *(undefined2 *)(iVar9 + 0x26) = *(undefined2 *)(puVar8 + 1);
        pppuStack_220 = (undefined ***)0x5b14ee;
        FUN_00565bc0();
        ExceptionList = local_c;
        return 0;
      }
    }
    else {
      cStack_1f5 = '\0';
      if (iVar9 == 0x16) goto LAB_005b122c;
      FUN_0042dc20();
      pvVar7 = operator_new(0xc);
      uStack_1f4 = SUB41(pvVar7,0);
      uStack_1f3 = (undefined1)((uint)pvVar7 >> 8);
      uStack_1f2 = (undefined2)((uint)pvVar7 >> 0x10);
      uStack_4 = 1;
      if (pvVar7 != (void *)0x0) {
        pppuStack_220 = *(undefined ****)((int)pppuStack_1e8 + 6);
        pppuStack_22c = (undefined ***)FUN_0045fec0();
        puStack_1cc = (undefined1 *)&pppuStack_228;
        FUN_00446d10();
        pppuStack_22c = (undefined ***)0xa7;
        FUN_00465280();
      }
      uStack_4 = 0xffffffff;
      FUN_00565ca0();
    }
    iVar9 = param_1[1];
    if (((*(int *)(iVar9 + 0xe) == 0x13) && (*(int *)(iVar9 + 0x12) == 2)) &&
       (pppuVar18 = *(undefined ****)(iVar9 + 0x1e), (int)pppuVar18 < 1)) {
      pppuVar18 = (undefined ***)0x0;
    }
    puStack_1fc = operator_new(0xc);
    uStack_4 = 3;
    if (puStack_1fc != (undefined4 *)0x0) {
      FUN_00498cc0();
      uStack_1f4 = SUB41(&stack0xfffffde4,0);
      uStack_1f3 = (undefined1)((uint)&stack0xfffffde4 >> 8);
      uStack_1f2 = (undefined2)((uint)&stack0xfffffde4 >> 0x10);
      pppuStack_220 = pppuVar18;
      FUN_00498cc0();
      pppuStack_228 = (undefined ***)0x5b154e;
      iVar9 = FUN_00498cc0();
      pppuStack_228 = *(undefined ****)(iVar9 + 0x16);
      pppuStack_22c = (undefined ***)0x5b1559;
      iVar9 = FUN_00498cc0();
      pppuStack_22c = *(undefined ****)(iVar9 + 0x12);
      FUN_00498cc0();
      puStack_234 = (undefined1 *)0x5b1571;
      puStack_234 = (undefined1 *)FUN_0045fec0();
      ppuStack_238 = (undefined1 **)0x89;
      uStack_23c = 0x5b157e;
      FUN_00464820();
    }
    break;
  default:
    goto switchD_005b1026_caseD_8a;
  case 0xba:
    FUN_005b4c50();
    iVar9 = FUN_005b4d40();
    if (iVar9 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    FUN_005b4c50();
    FUN_005b4d60();
    cVar5 = FUN_00584e20();
    if (cVar5 != '\x01') {
      ExceptionList = local_c;
      return 0;
    }
    FUN_005b4c50();
    FUN_005b4d70();
    cVar5 = FUN_00584e20();
    if (cVar5 != '\x01') {
      ExceptionList = local_c;
      return 0;
    }
    FUN_00428eb0();
    pppuStack_220 = (undefined ***)0x5b455a;
    FUN_00428eb0();
    pppuStack_220 = appuStack_11c;
    FUN_00428eb0();
    pppuStack_228 = (undefined ***)0x5b4574;
    FUN_00428eb0();
    pppuStack_228 = appuStack_10c;
    pppuStack_22c = (undefined ***)0x5b4581;
    FUN_00428eb0();
    pppuStack_22c = appuStack_194;
    FUN_00428eb0();
    puStack_234 = (undefined1 *)0x5b4595;
    puStack_1fc = operator_new(0xc);
    uStack_4 = 0x45;
    if (puStack_1fc != (undefined4 *)0x0) {
      FUN_005b4c50();
      FUN_005b4c50();
      pppuStack_220 = appuStack_194;
      pppuStack_228 = appuStack_11c;
      pppuStack_22c = appuStack_114;
      puStack_234 = auStack_124;
      ppuStack_238 = (undefined1 **)0x5b45fa;
      iVar9 = FUN_005b4c50();
      ppuStack_238 = (undefined1 **)(iVar9 + 0xe);
      uStack_23c = 0x5b4605;
      iVar9 = FUN_005b4c50();
      uStack_23c = *(undefined4 *)(iVar9 + 0x14);
      uStack_23c = FUN_00477fc0(3);
      FUN_005b4900(0xbb);
    }
    break;
  case 0xc1:
    iVar9 = *(int *)(param_1[1] + 0x12);
    iVar14 = *(int *)(param_1[1] + 0xe);
    if ((&DAT_0089cad8)[iVar9] == 0) {
      ExceptionList = local_c;
      return 0;
    }
    if ((&DAT_0089cad8)[iVar14] == 0) {
      ExceptionList = local_c;
      return 0;
    }
    cVar5 = FUN_004a0910();
    if (cVar5 == '\0') {
      ExceptionList = local_c;
      return 0;
    }
    puVar8 = operator_new(0xc);
    uStack_4 = 0x20;
    puStack_1fc = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      uStack_16c = 3;
      pppuStack_220 = (undefined ***)0x5b2739;
      iStack_16a = iVar9;
      FUN_005b4b00();
      *puVar8 = &PTR_FUN_007e6324;
      *(int *)(puVar8[1] + 0xe) = iVar14;
      *(int *)(puVar8[1] + 0x12) = iVar9;
      *(undefined1 *)(puVar8[1] + 0x16) = 0;
      *(undefined1 *)(puVar8[1] + 0x17) = 0;
    }
    break;
  case 0xc2:
    iVar9 = *(int *)(param_1[1] + 0x12);
    iVar14 = *(int *)(param_1[1] + 0xe);
    if ((&DAT_0089cad8)[iVar9] == 0) {
      ExceptionList = local_c;
      return 0;
    }
    if ((&DAT_0089cad8)[iVar14] == 0) {
      ExceptionList = local_c;
      return 0;
    }
    cVar5 = FUN_004a0910();
    if (cVar5 == '\0') {
      ExceptionList = local_c;
      return 0;
    }
    puVar8 = operator_new(0xc);
    uStack_4 = 0x22;
    puStack_1fc = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      uStack_15c = 3;
      iStack_15a = iVar14;
LAB_005b27d2:
      pppuStack_220 = (undefined ***)0x5b27d9;
      puStack_1fc = puVar8;
      FUN_005b4b00();
      *puVar8 = &PTR_FUN_007e6324;
      *(int *)(puVar8[1] + 0xe) = iVar14;
      *(int *)(puVar8[1] + 0x12) = iVar9;
      *(undefined1 *)(puVar8[1] + 0x16) = 0;
      *(undefined1 *)(puVar8[1] + 0x17) = 0;
    }
    break;
  case 0xc3:
    iVar9 = *(int *)(param_1[1] + 0x12);
    iVar14 = *(int *)(param_1[1] + 0xe);
    if ((&DAT_0089cad8)[iVar9] == 0) {
      ExceptionList = local_c;
      return 0;
    }
    if ((&DAT_0089cad8)[iVar14] == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar8 = operator_new(0xc);
    uStack_4 = 0x21;
    puStack_1fc = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      uStack_134 = 3;
      iStack_132 = iVar14;
      goto LAB_005b27d2;
    }
    break;
  case 0xc4:
    iVar9 = param_1[1];
    uStack_204 = *(undefined2 *)(iVar9 + 0x12);
    iVar14 = *(int *)(iVar9 + 0x18);
    uStack_202 = (undefined2)*(undefined4 *)(iVar9 + 0x14);
    uStack_200 = (undefined2)((uint)*(undefined4 *)(iVar9 + 0x14) >> 0x10);
    iVar9 = FUN_00428ee0();
    if (iVar9 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    if (iVar9 == 8) {
      ExceptionList = local_c;
      return 0;
    }
    iVar9 = (**(code **)(**(int **)(iVar9 + 0x1a) + 4))();
    if (iVar9 < 1) {
      ExceptionList = local_c;
      return 0;
    }
    iVar9 = FUN_00584c90();
    if (iVar9 != iVar14) {
      ExceptionList = local_c;
      return 0;
    }
    puVar8 = operator_new(0xc);
    uStack_4 = 0x23;
    puStack_1fc = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      uStack_13c = 3;
      pppuStack_220 = (undefined ***)0x5b292d;
      iStack_13a = iVar14;
      FUN_00498cd0();
      *puVar8 = &PTR_FUN_007e6364;
      iVar9 = puVar8[1];
      *(uint *)(iVar9 + 0x12) = CONCAT22(uStack_202,uStack_204);
      *(undefined2 *)(iVar9 + 0x16) = uStack_200;
      *(int *)(puVar8[1] + 0x18) = iVar14;
      *(undefined1 *)(puVar8[1] + 0x1c) = 0;
    }
    uStack_4 = 0xffffffff;
    iVar9 = FUN_00584c90();
    iVar9 = *(int *)(&DAT_0089cad8)[iVar9];
    FUN_00584c90();
    pppuStack_220 = (undefined ***)0x5b2985;
    (**(code **)(iVar9 + 0x488))();
    ExceptionList = local_c;
    return 0;
  case 0xc5:
    uStack_204 = *(undefined2 *)(param_1[1] + 0x12);
    uVar6 = *(undefined4 *)(param_1[1] + 0x14);
    uStack_202 = (undefined2)uVar6;
    uStack_200 = (undefined2)((uint)uVar6 >> 0x10);
    iVar9 = FUN_00428ee0();
    if (iVar9 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = iVar9 + -8;
    }
    if (iVar9 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    cVar5 = FUN_00584e20();
    if (cVar5 != '\0') {
      ExceptionList = local_c;
      return 0;
    }
    cVar5 = FUN_00586220();
    if (cVar5 == '\0') {
      ExceptionList = local_c;
      return 0;
    }
    FUN_00584c90();
    cVar5 = FUN_004a0780();
    if (cVar5 == '\0') {
      ExceptionList = local_c;
      return 0;
    }
    cVar5 = FUN_004a1d90();
    if (cVar5 != '\0') {
      ExceptionList = local_c;
      return 0;
    }
    iVar14 = FUN_00584c90();
    if ((&DAT_0089cad8)[iVar14] == 0) {
      ExceptionList = local_c;
      return 0;
    }
    iVar9 = (**(code **)(**(int **)(iVar9 + 0x22) + 4))();
    if (iVar9 < 1) {
      ExceptionList = local_c;
      return 0;
    }
    FUN_004734e0();
    ppuStack_1c4 = &PTR_FUN_007e5258;
    uStack_4 = 0x2e;
    iVar9 = FUN_00465c40();
    if (iVar9 == 0) {
      FUN_00459f50();
    }
    else {
      FUN_00465c40();
      FUN_00485f30();
      FUN_00516230();
      cVar5 = FUN_00516260();
      while (cVar5 != '\0') {
        pppuStack_220 = (undefined ***)0x5b325c;
        FUN_00516240();
        FUN_00516250();
        iVar9 = FUN_00465c30();
        if (iVar9 != 0) {
          FUN_00458280();
          cVar5 = FUN_00584e20();
          if (cVar5 == '\0') {
            FUN_00485f30();
            cVar5 = FUN_004a1d90();
            if (cVar5 == '\0') {
              FUN_00459f50();
            }
          }
        }
        cVar5 = FUN_00516260();
      }
    }
    FUN_00516230();
    cVar5 = FUN_00516260();
    while (cVar5 != '\0') {
      FUN_00516250();
      FUN_00465c30();
      iVar9 = FUN_00465c40();
      if (iVar9 != 0) {
        puStack_1fc = operator_new(0xc);
        uStack_4._0_1_ = 0x2f;
        if (puStack_1fc != (undefined4 *)0x0) {
          FUN_00465c40();
          FUN_00584c90();
          FUN_00465c40();
          FUN_00447250();
          pppuStack_220 = (undefined ***)0x5b333f;
          pppuStack_220 = (undefined ***)FUN_0045fec0();
          pppuStack_228 = (undefined ***)0x5b334c;
          FUN_005b4790();
        }
        uStack_4 = CONCAT31(uStack_4._1_3_,0x2e);
        FUN_00565bc0();
      }
      puStack_1fc = operator_new(0xc);
      uStack_4._0_1_ = 0x30;
      if (puStack_1fc != (void *)0x0) {
        FUN_00516250();
        FUN_00447250();
        pppuStack_220 = (undefined ***)0x5b3396;
        pppuStack_220 = (undefined ***)FUN_00584c90();
        pppuStack_228 = (undefined ***)0x5b33a5;
        pppuStack_220 = (undefined ***)FUN_0047ea00();
        pppuStack_228 = (undefined ***)0x5b33b2;
        FUN_005b4790();
      }
      uStack_4._0_1_ = 0x2e;
      FUN_00565bc0();
      pppuStack_220 = (undefined ***)0x5b33ca;
      puStack_1fc = operator_new(0xc);
      uStack_4._0_1_ = 0x31;
      if (puStack_1fc != (undefined4 *)0x0) {
        FUN_00516250();
        FUN_00447250();
        pppuStack_220 = (undefined ***)0x5b33f9;
        pppuStack_220 = (undefined ***)FUN_00584c90();
        pppuStack_228 = (undefined ***)0x5b3408;
        pppuStack_220 = (undefined ***)FUN_0047ea00();
        pppuStack_228 = (undefined ***)0x5b3415;
        FUN_005b4790();
      }
      uStack_4 = CONCAT31(uStack_4._1_3_,0x2e);
      FUN_00565bc0();
      FUN_00584c90();
      pppuStack_220 = (undefined ***)0x5b343c;
      pppuStack_220 = (undefined ***)FUN_00516250();
      FUN_005b0ad0();
      pppuStack_220 = (undefined ***)0x5b3459;
      FUN_00516240();
      cVar5 = FUN_00516260();
    }
    uStack_4 = 0xffffffff;
    FUN_00430580();
    ExceptionList = local_c;
    return 0;
  case 0xc6:
    iVar9 = param_1[1];
    piStack_1d0 = param_1 + 1;
    uStack_204 = *(undefined2 *)(iVar9 + 0x12);
    iVar14 = *(int *)(iVar9 + 0x18);
    uStack_202 = (undefined2)*(undefined4 *)(iVar9 + 0x14);
    uStack_200 = (undefined2)((uint)*(undefined4 *)(iVar9 + 0x14) >> 0x10);
    iVar9 = FUN_00428ee0();
    if (iVar9 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    if (iVar9 == 8) {
      ExceptionList = local_c;
      return 0;
    }
    iVar9 = (**(code **)(**(int **)(iVar9 + 0x1a) + 4))();
    if (iVar9 < 2) {
      ExceptionList = local_c;
      return 0;
    }
    cVar5 = FUN_004a1c10();
    if (cVar5 == '\0') {
      ExceptionList = local_c;
      return 0;
    }
    puVar8 = operator_new(0xc);
    uStack_4 = 0x24;
    puStack_1fc = puVar8;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      uStack_14c = 3;
      pppuStack_220 = (undefined ***)0x5b2a38;
      iStack_14a = iVar14;
      FUN_00498cd0();
      *puVar8 = &PTR_FUN_007e6364;
      iVar9 = puVar8[1];
      *(uint *)(iVar9 + 0x12) = CONCAT22(uStack_202,uStack_204);
      *(undefined2 *)(iVar9 + 0x16) = uStack_200;
      *(int *)(puVar8[1] + 0x18) = iVar14;
      *(undefined1 *)(puVar8[1] + 0x1c) = 0;
    }
    uStack_4 = 0xffffffff;
    *(undefined1 *)(puVar8[1] + 0x1c) = *(undefined1 *)(*piStack_1d0 + 0x1c);
    iVar9 = *(int *)(&DAT_0089cad8)[iVar14];
    FUN_00584c90();
    pppuStack_220 = (undefined ***)0x5b2a93;
    (**(code **)(iVar9 + 0x488))();
    ExceptionList = local_c;
    return 0;
  case 199:
    iVar9 = param_1[1];
    iVar14 = *(int *)(iVar9 + 0x18);
    iVar15 = *(int *)(iVar9 + 0xe);
    uStack_1f4 = (undefined1)*(undefined2 *)(iVar9 + 0x12);
    uStack_1f3 = (undefined1)((ushort)*(undefined2 *)(iVar9 + 0x12) >> 8);
    uStack_1f2 = (undefined2)*(undefined4 *)(iVar9 + 0x14);
    uStack_1f0 = (undefined2)((uint)*(undefined4 *)(iVar9 + 0x14) >> 0x10);
    iVar9 = FUN_00428ee0();
    if (iVar9 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    if (iVar9 == 8) {
      ExceptionList = local_c;
      return 0;
    }
    if ((&DAT_0089cad8)[iVar15] == 0) {
      ExceptionList = local_c;
      return 0;
    }
    iVar11 = (**(code **)(**(int **)(iVar9 + 0x1a) + 4))();
    cStack_1e1 = iVar11 < 2;
    iVar9 = (**(code **)(**(int **)(iVar9 + 0x1a) + 4))();
    if ((0 < iVar9) && (cVar5 = FUN_004a1fe0(), cVar5 != '\0')) {
      *(undefined1 *)(*(int *)((&DAT_0089cad8)[iVar14] + 0x12da) + 0x30 + iVar15 * 0x2c) = 1;
      puVar8 = operator_new(0xc);
      uStack_4 = 0x2b;
      puStack_1fc = puVar8;
      if (puVar8 != (undefined4 *)0x0) {
        uStack_154 = 3;
        pppuStack_220 = (undefined ***)0x5b2fdf;
        iStack_152 = iVar15;
        FUN_00498cd0();
        *puVar8 = &PTR_FUN_007e6364;
        iVar9 = puVar8[1];
        *(uint *)(iVar9 + 0x12) = CONCAT22(uStack_1f2,CONCAT11(uStack_1f3,uStack_1f4));
        *(undefined2 *)(iVar9 + 0x16) = uStack_1f0;
        *(int *)(puVar8[1] + 0x18) = iVar14;
        *(undefined1 *)(puVar8[1] + 0x1c) = 0;
      }
      uStack_4 = 0xffffffff;
      pppuStack_220 = (undefined ***)0x5b3026;
      (**(code **)(*(int *)(&DAT_0089cad8)[iVar14] + 0x488))();
      puVar8 = operator_new(0xc);
      uStack_4 = 0x2c;
      puStack_1fc = puVar8;
      if (puVar8 != (undefined4 *)0x0) {
        uStack_18c = 3;
        pppuStack_220 = (undefined ***)0x5b306a;
        iStack_18a = iVar15;
        FUN_00498cd0();
        *puVar8 = &PTR_FUN_007e6364;
        iVar9 = puVar8[1];
        *(uint *)(iVar9 + 0x12) = CONCAT22(uStack_1f2,CONCAT11(uStack_1f3,uStack_1f4));
        *(undefined2 *)(iVar9 + 0x16) = uStack_1f0;
        *(int *)(puVar8[1] + 0x18) = iVar14;
        *(undefined1 *)(puVar8[1] + 0x1c) = 0;
      }
      uStack_4 = 0xffffffff;
      FUN_00565bc0();
    }
    if (cStack_1e1 == '\0') {
      ExceptionList = local_c;
      return 0;
    }
    puVar8 = operator_new(0xc);
    uStack_4 = 0x2d;
    puStack_1fc = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      uStack_144 = 3;
      pppuStack_220 = (undefined ***)0x5b30fb;
      iStack_142 = iVar15;
      FUN_00498cd0();
      *puVar8 = &PTR_FUN_007e6364;
      puVar12 = (undefined4 *)(puVar8[1] + 0x12);
      *puVar12 = CONCAT22(uStack_1f2,CONCAT11(uStack_1f3,uStack_1f4));
      uVar16 = uStack_1f0;
LAB_005b3112:
      *(undefined2 *)(puVar12 + 1) = uVar16;
      *(int *)(puVar8[1] + 0x18) = iVar14;
      *(undefined1 *)(puVar8[1] + 0x1c) = 0;
    }
    break;
  case 200:
    goto switchD_005b1026_caseD_c8;
  case 0xc9:
    iVar9 = param_1[1];
    uStack_204 = *(undefined2 *)(iVar9 + 0x12);
    uVar6 = *(undefined4 *)(iVar9 + 0xe);
    iVar14 = *(int *)(iVar9 + 0x18);
    uStack_202 = (undefined2)*(undefined4 *)(iVar9 + 0x14);
    uStack_200 = (undefined2)((uint)*(undefined4 *)(iVar9 + 0x14) >> 0x10);
    iVar9 = FUN_00428ee0();
    if (((iVar9 != 0) && (iVar9 != 8)) &&
       (iVar9 = (**(code **)(**(int **)(iVar9 + 0x1a) + 4))(), 1 < iVar9)) {
      puVar8 = &DAT_0089cad8 + iVar14;
      uStack_1f4 = SUB41(puVar8,0);
      uStack_1f3 = (undefined1)((uint)puVar8 >> 8);
      uStack_1f2 = (undefined2)((uint)puVar8 >> 0x10);
      pppuStack_220 = (undefined ***)0x5b2af8;
      cVar5 = FUN_004a1cd0();
      if (cVar5 != '\0') {
        puVar8 = operator_new(0xc);
        uStack_4 = 0x25;
        puStack_1fc = puVar8;
        if (puVar8 != (undefined4 *)0x0) {
          uStack_12c = 3;
          pppuStack_220 = (undefined ***)0x5b2b44;
          uStack_12a = uVar6;
          FUN_00498cd0();
          *puVar8 = &PTR_FUN_007e6364;
          iVar9 = puVar8[1];
          *(uint *)(iVar9 + 0x12) = CONCAT22(uStack_202,uStack_204);
          *(undefined2 *)(iVar9 + 0x16) = uStack_200;
          *(int *)(puVar8[1] + 0x18) = iVar14;
          *(undefined1 *)(puVar8[1] + 0x1c) = 0;
        }
        uStack_4 = 0xffffffff;
        pppuStack_220 = (undefined ***)0x5b2b8b;
        (**(code **)(**(int **)CONCAT22(uStack_1f2,CONCAT11(uStack_1f3,uStack_1f4)) + 0x488))();
      }
    }
    goto switchD_005b1026_caseD_c8;
  case 0xca:
    FUN_00521210();
    iVar9 = FUN_00521210();
    pppuVar18 = *(undefined ****)(iVar9 + 0xe);
    FUN_00521210();
    FUN_00449290();
    iVar9 = FUN_005b4ce0();
    if (iVar9 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    iVar9 = FUN_005b4d00();
    if (iVar9 < 1) {
      ExceptionList = local_c;
      return 0;
    }
    pppuStack_220 = (undefined ***)0x5b34d8;
    FUN_00465c30();
    cVar5 = FUN_004a1fe0();
    if (cVar5 == '\0') {
      ExceptionList = local_c;
      return 0;
    }
    puStack_1fc = operator_new(0xc);
    uStack_4 = 0x32;
    if (puStack_1fc != (void *)0x0) {
      pppuStack_228 = (undefined ***)0x5b351e;
      pppuStack_220 = pppuVar18;
      pppuStack_220 = (undefined ***)FUN_0047ea00();
      pppuStack_228 = (undefined ***)0x5b352b;
      FUN_005b4790();
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    pppuStack_220 = (undefined ***)0x5b3546;
    puStack_1fc = operator_new(0xc);
    uStack_4 = 0x33;
    if (puStack_1fc != (undefined4 *)0x0) {
      pppuStack_228 = (undefined ***)0x5b3573;
      pppuStack_220 = pppuVar18;
      pppuStack_220 = (undefined ***)FUN_0047ea00();
      pppuStack_228 = (undefined ***)0x5b3580;
      FUN_005b4790();
    }
    break;
  case 0xcb:
    iVar9 = param_1[1];
    uStack_204 = *(undefined2 *)(iVar9 + 0x12);
    iVar14 = *(int *)(iVar9 + 0xe);
    uStack_202 = (undefined2)*(undefined4 *)(iVar9 + 0x14);
    uStack_200 = (undefined2)((uint)*(undefined4 *)(iVar9 + 0x14) >> 0x10);
    iVar9 = FUN_00428ee0();
    if (iVar9 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    if (iVar9 == 8) {
      ExceptionList = local_c;
      return 0;
    }
    iVar9 = (**(code **)(**(int **)(iVar9 + 0x1a) + 4))();
    if (iVar9 < 1) {
      ExceptionList = local_c;
      return 0;
    }
    puVar8 = operator_new(0xc);
    uStack_4 = 0x29;
    puStack_1fc = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      uStack_184 = 3;
      iStack_182 = iVar14;
      uVar6 = FUN_00584c90();
      pppuStack_220 = (undefined ***)0x5b2e64;
      FUN_00498cd0();
      *puVar8 = &PTR_FUN_007e6364;
      iVar9 = puVar8[1];
      *(uint *)(iVar9 + 0x12) = CONCAT22(uStack_202,uStack_204);
      *(undefined2 *)(iVar9 + 0x16) = uStack_200;
      *(undefined4 *)(puVar8[1] + 0x18) = uVar6;
      *(undefined1 *)(puVar8[1] + 0x1c) = 0;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    pppuStack_220 = (undefined ***)0x5b2ea7;
    puVar8 = operator_new(0xc);
    uStack_4 = 0x2a;
    puStack_1fc = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      uStack_164 = 3;
      pppuStack_220 = (undefined ***)0x5b2ee8;
      iStack_162 = iVar14;
      FUN_00498cd0();
      *puVar8 = &PTR_FUN_007e6364;
      puVar12 = (undefined4 *)(puVar8[1] + 0x12);
      *puVar12 = CONCAT22(uStack_202,uStack_204);
      uVar16 = uStack_200;
      goto LAB_005b3112;
    }
    break;
  case 0xcc:
    FUN_00521210();
    FUN_00521210();
    FUN_00521210();
    FUN_00446d10();
    iVar9 = FUN_00465c30();
    if (iVar9 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    pppuStack_220 = (undefined ***)0x5b35da;
    FUN_00465c30();
    FUN_00490f60();
    cVar5 = FUN_005b4d20();
    if (cVar5 == '\0') {
      ExceptionList = local_c;
      return 0;
    }
    puStack_1fc = operator_new(0xc);
    uStack_4 = 0x34;
    if (puStack_1fc != (undefined4 *)0x0) {
      uStack_1f4 = SUB41(&pppuStack_220,0);
      uStack_1f3 = (undefined1)((uint)&pppuStack_220 >> 8);
      uStack_1f2 = (undefined2)((uint)&pppuStack_220 >> 0x10);
      pppuStack_228 = (undefined ***)0x5b362a;
      FUN_0045f730();
      pppuStack_228 = (undefined ***)0x3;
      pppuStack_22c = (undefined ***)0x5b3639;
      pppuStack_22c = (undefined ***)FUN_0047ea00();
      uStack_1f4 = SUB41(&pppuStack_228,0);
      uStack_1f3 = (undefined1)((uint)&pppuStack_228 >> 8);
      uStack_1f2 = (undefined2)((uint)&pppuStack_228 >> 0x10);
      FUN_00446d10();
      pppuStack_22c = (undefined ***)0xde;
      FUN_004646f0();
    }
    break;
  case 0xcd:
    FUN_00521210();
    FUN_00521210();
    FUN_00521210();
    FUN_00446d10();
    iVar9 = FUN_00465c30();
    if (iVar9 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    pppuStack_220 = (undefined ***)0x5b3699;
    FUN_00465c30();
    FUN_00490f60();
    cVar5 = FUN_005b4d20();
    if (cVar5 == '\0') {
      ExceptionList = local_c;
      return 0;
    }
    puStack_1fc = operator_new(0xc);
    uStack_4 = 0x35;
    if (puStack_1fc != (undefined4 *)0x0) {
      uStack_1f4 = SUB41(&pppuStack_220,0);
      uStack_1f3 = (undefined1)((uint)&pppuStack_220 >> 8);
      uStack_1f2 = (undefined2)((uint)&pppuStack_220 >> 0x10);
      pppuStack_228 = (undefined ***)0x5b36e9;
      FUN_0045f730();
      pppuStack_228 = (undefined ***)0x3;
      pppuStack_22c = (undefined ***)0x5b36f8;
      pppuStack_22c = (undefined ***)FUN_0047ea00();
      uStack_1f4 = SUB41(&pppuStack_228,0);
      uStack_1f3 = (undefined1)((uint)&pppuStack_228 >> 8);
      uStack_1f2 = (undefined2)((uint)&pppuStack_228 >> 0x10);
      FUN_00446d10();
      pppuStack_22c = (undefined ***)0xdf;
      FUN_004646f0();
    }
    break;
  case 0xce:
    iVar9 = FUN_00521210();
    local_1d8 = *(int **)(iVar9 + 0xe);
    iVar9 = FUN_00521210();
    pppuStack_1d4 = *(undefined ****)(iVar9 + 0x22);
    FUN_00521210();
    FUN_00446d10();
    iVar9 = FUN_00521210();
    FUN_005b4c60();
    uStack_4 = 0x36;
    FUN_00526a00();
    iVar14 = 0;
    uStack_4._0_1_ = 0x37;
    if (*(short *)(iVar9 + 0x42) != 0) {
      do {
        FUN_0049a100();
        FUN_00459f50();
        iVar14 = iVar14 + 1;
      } while (iVar14 < (int)(uint)*(ushort *)(iVar9 + 0x42));
    }
    puStack_1fc = operator_new(0xc);
    uStack_4._0_1_ = 0x38;
    if (puStack_1fc != (void *)0x0) {
      pppuStack_220 = *(undefined ****)(iVar9 + 0x22);
      pppuStack_228 = (undefined ***)(iVar9 + 0x18);
      pppuStack_22c = (undefined ***)(iVar9 + 0x12);
      puStack_234 = (undefined1 *)0x3;
      ppuStack_238 = (undefined1 **)0x5b37f6;
      FUN_0047ea00();
      puStack_234 = (undefined1 *)0xe0;
      ppuStack_238 = (undefined1 **)0x5b3803;
      FUN_00566290();
    }
    uStack_4._0_1_ = 0x37;
    FUN_005b4d40();
    FUN_005b4d60();
    puVar12 = (undefined4 *)FUN_005b4d00();
    FUN_005b4d70();
    puStack_1dc = (undefined4 *)FUN_005b4d00();
    FUN_005b4d60();
    cVar5 = FUN_00584e20();
    puVar8 = puStack_1dc;
    if (cVar5 == '\0') {
      puVar8 = puVar12;
      puVar12 = puStack_1dc;
    }
    if ((int)puVar12 < 2) {
      *(undefined1 *)(iVar9 + 0x2e) = 0;
    }
    if ((int)puVar8 < 2) {
      *(undefined1 *)(iVar9 + 0x2f) = 0;
    }
    iVar14 = FUN_005b4b90();
    *(undefined4 *)(iVar14 + 0x2a) = *(undefined4 *)(iVar9 + 0x2a);
    iVar14 = FUN_005b4b90();
    *(undefined4 *)(iVar14 + 0x26) = *(undefined4 *)(iVar9 + 0x26);
    iVar14 = FUN_005b4b90();
    *(undefined1 *)(iVar14 + 0x2e) = *(undefined1 *)(iVar9 + 0x2e);
    iVar14 = FUN_005b4b90();
    *(undefined1 *)(iVar14 + 0x2f) = *(undefined1 *)(iVar9 + 0x2f);
    iVar14 = FUN_005b4b90();
    *(undefined1 *)(iVar14 + 0x30) = *(undefined1 *)(iVar9 + 0x30);
    iVar14 = FUN_005b4b90();
    *(undefined1 *)(iVar14 + 0x3e) = *(undefined1 *)(iVar9 + 0x3e);
    iVar14 = FUN_005b4b90();
    *(undefined1 *)(iVar14 + 0x3f) = *(undefined1 *)(iVar9 + 0x3f);
    iVar14 = FUN_005b4b90();
    *(undefined1 *)(iVar14 + 0x40) = *(undefined1 *)(iVar9 + 0x40);
    iVar14 = FUN_005b4b90();
    *(undefined1 *)(iVar14 + 0x41) = *(undefined1 *)(iVar9 + 0x41);
    iVar14 = FUN_005b4b90();
    *(undefined4 *)(iVar14 + 0x32) = *(undefined4 *)(iVar9 + 0x32);
    iVar14 = FUN_005b4b90();
    *(undefined4 *)(iVar14 + 0x36) = *(undefined4 *)(iVar9 + 0x36);
    iVar14 = FUN_005b4b90();
    *(undefined4 *)(iVar14 + 0x3a) = *(undefined4 *)(iVar9 + 0x3a);
    FUN_00565bc0();
    puVar8 = (undefined4 *)FUN_00462830();
    uStack_204 = (undefined2)*puVar8;
    uStack_202 = (undefined2)((uint)*puVar8 >> 0x10);
    uStack_200 = *(undefined2 *)(puVar8 + 1);
    FUN_0042dc20();
    puStack_1fc = operator_new(0xc);
    uStack_4._0_1_ = 0x39;
    if (puStack_1fc != (void *)0x0) {
      uStack_1f4 = SUB41(&pppuStack_220,0);
      uStack_1f3 = (undefined1)((uint)&pppuStack_220 >> 8);
      uStack_1f2 = (undefined2)((uint)&pppuStack_220 >> 0x10);
      pppuStack_228 = (undefined ***)0x5b3978;
      FUN_0045f730();
      pppuStack_228 = (undefined ***)0x3;
      pppuStack_22c = (undefined ***)0x5b398b;
      pppuStack_22c = (undefined ***)FUN_0047ea00();
      uStack_1f4 = SUB41(&pppuStack_228,0);
      uStack_1f3 = (undefined1)((uint)&pppuStack_228 >> 8);
      uStack_1f2 = (undefined2)((uint)&pppuStack_228 >> 0x10);
      FUN_00446d10();
      pppuStack_22c = (undefined ***)0xc0;
      FUN_004646f0();
    }
    uStack_4._0_1_ = 0x37;
    FUN_00565ca0();
    pppuStack_220 = (undefined ***)0x5b39bf;
    puStack_1fc = operator_new(0xc);
    uStack_4._0_1_ = 0x3a;
    if (puStack_1fc != (void *)0x0) {
      pppuStack_220 = pppuStack_1d4;
      pppuStack_228 = (undefined ***)0x3;
      pppuStack_22c = (undefined ***)0x5b3a00;
      pppuStack_22c = (undefined ***)FUN_0047ea00();
      uStack_1f4 = SUB41(&pppuStack_228,0);
      uStack_1f3 = (undefined1)((uint)&pppuStack_228 >> 8);
      uStack_1f2 = (undefined2)((uint)&pppuStack_228 >> 0x10);
      FUN_00446d10();
      pppuStack_22c = (undefined ***)0xa7;
      FUN_00465280();
    }
    uStack_4._0_1_ = 0x37;
    FUN_00565ca0();
    uStack_4 = CONCAT31(uStack_4._1_3_,0x36);
    FUN_00430580();
    uStack_4 = 0xffffffff;
    FUN_00417370();
    ExceptionList = local_c;
    return 0;
  case 0xcf:
    iVar9 = FUN_00521210();
    pppuStack_1e8 = *(undefined ****)(iVar9 + 0x20);
    iVar9 = FUN_00521210();
    pppuStack_1e0 = *(undefined ****)(iVar9 + 0x24);
    iVar9 = FUN_00465c30();
    if (iVar9 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    piVar13 = (int *)FUN_00465c30();
    uStack_1f4 = SUB41(piVar13,0);
    uStack_1f3 = (undefined1)((uint)piVar13 >> 8);
    uStack_1f2 = (undefined2)((uint)piVar13 >> 0x10);
    iVar14 = *piVar13;
    FUN_00521210();
    pppuStack_220 = (undefined ***)0x5b3ab1;
    cVar5 = (**(code **)(iVar14 + 0x450))();
    if (cVar5 == '\0') {
      ExceptionList = local_c;
      return 0;
    }
    cStack_1f5 = '\0';
    piStack_1d0 = (int *)0x0;
    FUN_00490f60();
    cVar5 = FUN_0054ef60();
    if ((cVar5 != '\0') && (iVar14 = FUN_00465c40(), iVar14 == 0)) {
      FUN_00490f60();
      FUN_004965b0();
      iVar14 = FUN_00465c30();
      if (iVar14 != 0) {
        FUN_00490f60();
        cVar5 = FUN_005b4d20();
        if (cVar5 != '\0') {
          piStack_1d0 = (int *)FUN_00465c40();
          if (piStack_1d0 == (int *)0x0) {
            FUN_00428eb0();
            pppuStack_220 = (undefined ***)0x5b3b4b;
            puStack_1fc = operator_new(0xc);
            uStack_4 = 0x3b;
            if (puStack_1fc != (void *)0x0) {
              pppuStack_220 = (undefined ***)0x5b3b6e;
              pppuStack_220 = (undefined ***)FUN_00458280();
              pppuStack_22c = (undefined ***)&uStack_204;
              uStack_1f4 = SUB41(&pppuStack_228,0);
              uStack_1f3 = (undefined1)((uint)&pppuStack_228 >> 8);
              uStack_1f2 = (undefined2)((uint)&pppuStack_228 >> 0x10);
              FUN_00449290();
              pppuStack_22c = (undefined ***)0x5b3b8d;
              iVar14 = FUN_00462830();
              pppuStack_22c =
                   (undefined ***)CONCAT22(pppuStack_22c._2_2_,*(undefined2 *)(iVar14 + 4));
              puStack_234 = (undefined1 *)0x5b3ba5;
              puStack_234 = (undefined1 *)FUN_0045fec0();
              ppuStack_238 = (undefined1 **)0xb7;
              uStack_23c = 0x5b3bb2;
              FUN_00464a00();
            }
            uStack_4 = 0xffffffff;
            FUN_005b4c40();
            FUN_00565bc0();
            pppuStack_220 = (undefined ***)0x5b3bd7;
            puStack_1fc = operator_new(0xc);
            uStack_4 = 0x3c;
            if (puStack_1fc != (undefined4 *)0x0) {
              FUN_00458280();
              pppuStack_220 = (undefined ***)0x5b3c03;
              pppuStack_220 = (undefined ***)FUN_0045fec0();
              pppuStack_228 = (undefined ***)0x5b3c10;
              FUN_005b4790();
            }
          }
          else {
            puStack_1fc = operator_new(0xc);
            uStack_4 = 0x3d;
            if (puStack_1fc != (undefined4 *)0x0) {
              FUN_00458280();
              FUN_00447250();
              pppuStack_220 = (undefined ***)0x5b3c4d;
              pppuStack_220 = (undefined ***)FUN_0045fec0();
              pppuStack_228 = (undefined ***)0x5b3c5a;
              FUN_005b4790();
            }
          }
          uStack_4 = 0xffffffff;
          FUN_00565bc0();
          FUN_00458280();
          pppuStack_220 = (undefined ***)0x5b3c83;
          pppuStack_220 = (undefined ***)FUN_00458280();
          FUN_005b0ad0();
          cStack_1f5 = '\x01';
        }
      }
    }
    iVar14 = FUN_00465c30();
    if (cStack_1f5 == '\0') {
      if ((iVar14 != 0) && (iVar15 = FUN_00465c40(), iVar15 != 0)) {
        FUN_00465c40();
        iVar15 = FUN_005b4d00();
        if (0 < iVar15) {
          FUN_00465c40();
          FUN_00485f30();
          FUN_00516230();
          cVar5 = FUN_00516260();
          while (cVar5 != '\0') {
            pppuStack_220 = (undefined ***)0x5b3d12;
            FUN_00516240();
            FUN_00516250();
            iVar15 = FUN_00465c30();
            if ((iVar15 != 0) && (iVar15 != iVar14)) {
              FUN_00490f60();
              cVar5 = FUN_005b4d20();
              if (cVar5 != '\0') {
                FUN_00490f60();
                pppuStack_1d4 = (undefined ***)FUN_005862f0();
                if (pppuStack_1d4 != (undefined ***)0x0) {
                  FUN_00458280();
                  pppuStack_220 = (undefined ***)0x5b3e2e;
                  pppuStack_220 = (undefined ***)FUN_00458280();
                  FUN_005b0ad0();
                  cStack_1f5 = '\x01';
                  puStack_1fc = operator_new(0xc);
                  pppuVar18 = pppuStack_1e0;
                  uStack_4 = 0x3e;
                  if (puStack_1fc == (undefined4 *)0x0) goto LAB_005b3f85;
                  pppuStack_220 = pppuStack_1e0;
                  uStack_1f4 = SUB41(&pppuStack_22c,0);
                  uStack_1f3 = (undefined1)((uint)&pppuStack_22c >> 8);
                  uStack_1f2 = (undefined2)((uint)&pppuStack_22c >> 0x10);
                  puStack_234 = (undefined1 *)0x5b3e81;
                  FUN_0045f730();
                  uStack_1f4 = SUB41(&puStack_234,0);
                  uStack_1f3 = (undefined1)((uint)&puStack_234 >> 8);
                  uStack_1f2 = (undefined2)((uint)&puStack_234 >> 0x10);
                  ppuStack_238 = (undefined1 **)&DAT_0088f28c;
                  uStack_23c = 0x5b3e94;
                  FUN_0045f730();
                  ppuStack_238 = (undefined1 **)0x5b3ea0;
                  uVar6 = FUN_00447250();
                  uStack_1f4 = SUB41(&uStack_23c,0);
                  uStack_1f3 = (undefined1)((uint)&uStack_23c >> 8);
                  uStack_1f2 = (undefined2)((uint)&uStack_23c >> 0x10);
                  FUN_00449290(uVar6);
                  goto LAB_005b3f6f;
                }
                break;
              }
            }
            cVar5 = FUN_00516260();
          }
        }
      }
      iVar14 = FUN_00465c40();
      if (iVar14 != 0) {
        FUN_00465c40();
        iVar14 = FUN_005b4d00();
        if (0 < iVar14) {
          FUN_00465c40();
          FUN_00485f30();
          FUN_00516230();
          cVar5 = FUN_00516260();
          while (cVar5 != '\0') {
            pppuStack_220 = (undefined ***)0x5b3dbb;
            FUN_00516240();
            FUN_00516250();
            iVar14 = FUN_00465c30();
            if ((iVar14 != 0) && (iVar14 != iVar9)) {
              FUN_00490f60();
              cVar5 = FUN_005b4d20();
              if (cVar5 != '\0') {
                FUN_00490f60();
                iVar9 = FUN_005862f0();
                if (iVar9 != 0) {
                  FUN_00458280();
                  pppuStack_220 = (undefined ***)0x5b3ee8;
                  pppuStack_220 = (undefined ***)FUN_00458280();
                  FUN_005b0ad0();
                  cStack_1f5 = '\x01';
                  puStack_1fc = operator_new(0xc);
                  uStack_4 = 0x3f;
                  if (puStack_1fc != (undefined4 *)0x0) {
                    pppuStack_220 = pppuStack_1e0;
                    uStack_1f4 = SUB41(&pppuStack_22c,0);
                    uStack_1f3 = (undefined1)((uint)&pppuStack_22c >> 8);
                    uStack_1f2 = (undefined2)((uint)&pppuStack_22c >> 0x10);
                    puStack_234 = (undefined1 *)0x5b3f37;
                    FUN_0045f730();
                    uStack_1f4 = SUB41(&puStack_234,0);
                    uStack_1f3 = (undefined1)((uint)&puStack_234 >> 8);
                    uStack_1f2 = (undefined2)((uint)&puStack_234 >> 0x10);
                    ppuStack_238 = (undefined1 **)&DAT_0088f28c;
                    uStack_23c = 0x5b3f4a;
                    FUN_0045f730();
                    ppuStack_238 = (undefined1 **)0x5b3f52;
                    uVar6 = FUN_00447250();
                    uStack_1f4 = SUB41(&uStack_23c,0);
                    uStack_1f3 = (undefined1)((uint)&uStack_23c >> 8);
                    uStack_1f2 = (undefined2)((uint)&uStack_23c >> 0x10);
                    FUN_00449290(uVar6);
                    pppuVar18 = pppuStack_1e0;
LAB_005b3f6f:
                    uVar6 = FUN_0047ea00(3,pppuVar18);
                    FUN_00464b70(0xbe,uVar6);
                  }
LAB_005b3f85:
                  uStack_4 = 0xffffffff;
                  FUN_00565bc0();
                }
                break;
              }
            }
            cVar5 = FUN_00516260();
          }
        }
      }
    }
    if (((cStack_1f5 == '\0') &&
        (fVar21 = (float10)FUN_005b4c80(), fVar21 == (float10)_DAT_007e3374)) &&
       (iVar9 = FUN_00458280(), iVar9 != 0xa3)) {
      iVar9 = FUN_00465c40();
      bVar20 = true;
      if (iVar9 != 0) {
        FUN_00465c40();
        cVar5 = FUN_004a7a50();
        bVar20 = cVar5 == '\0';
      }
      if ((bVar20) && (cVar5 = FUN_00789ee0(), cVar5 != '\0')) {
        cVar5 = FUN_00584e20();
        if (cVar5 == '\0') {
          cVar5 = FUN_00584e20();
          if (cVar5 != '\0') {
            piStack_1d0 = (int *)DAT_00d615c2;
          }
        }
        else {
          piStack_1d0 = (int *)DAT_00d615c6;
        }
        if (piStack_1d0 != (int *)0x0) {
          iVar9 = FUN_00789f60();
          pppuStack_1d4 = (undefined ***)iVar9;
          FUN_00485f30();
          FUN_00516230();
          cVar5 = FUN_00516260();
          pppuVar18 = pppuStack_1d4;
          while (cVar5 != '\0') {
            pppuStack_220 = (undefined ***)0x5b40a1;
            FUN_00516240();
            FUN_00516250();
            FUN_00490f60();
            cVar5 = FUN_005b4d20();
            if (cVar5 != '\0') {
              iVar9 = 0;
            }
            cVar5 = FUN_00516260();
            pppuVar18 = (undefined ***)iVar9;
          }
          pppuStack_1d4 = pppuVar18;
          if (iVar9 != 0) {
            FUN_00526a00();
            uStack_4 = 0x40;
            iVar9 = FUN_00465c40();
            if (iVar9 == 0) {
              FUN_00459f50();
            }
            else {
              FUN_00465c40();
              FUN_00485f30();
              FUN_00516230();
              cVar5 = FUN_00516260();
              while (cVar5 != '\0') {
                pppuStack_220 = (undefined ***)0x5b4133;
                FUN_00516240();
                FUN_00516250();
                FUN_00459f50();
                cVar5 = FUN_00516260();
              }
              FUN_00465c40();
              iVar9 = FUN_005b4d00();
              if (0 < iVar9) {
                puStack_1fc = operator_new(0xc);
                uStack_4._0_1_ = 0x41;
                if (puStack_1fc != (undefined4 *)0x0) {
                  FUN_00465c40();
                  FUN_00584c90();
                  FUN_00465c40();
                  FUN_00447250();
                  pppuStack_220 = (undefined ***)0x5b41ab;
                  FUN_00465c40();
                  pppuStack_220 = (undefined ***)0x5b41b2;
                  pppuStack_220 = (undefined ***)FUN_00584c90();
                  pppuStack_228 = (undefined ***)0x5b41c1;
                  pppuStack_220 = (undefined ***)FUN_0047ea00();
                  pppuStack_228 = (undefined ***)0x5b41ce;
                  FUN_005b4790();
                }
                uStack_4 = CONCAT31(uStack_4._1_3_,0x40);
                FUN_00465c40();
                FUN_00584c90();
                puVar8 = (undefined4 *)FUN_00465c30();
                uVar6 = *puVar8;
                uStack_1f4 = (undefined1)uVar6;
                uStack_1f3 = (undefined1)((uint)uVar6 >> 8);
                uStack_1f2 = (undefined2)((uint)uVar6 >> 0x10);
                FUN_00465c40();
                FUN_00584c90();
                pppuStack_220 = (undefined ***)0x5b4217;
                (**(code **)(CONCAT22(uStack_1f2,CONCAT11(uStack_1f3,uStack_1f4)) + 0x488))();
              }
            }
            iVar9 = FUN_00521210();
            pppuStack_1e0 =
                 (undefined ***)CONCAT31(pppuStack_1e0._1_3_,*(undefined1 *)(iVar9 + 0x28));
            FUN_00516230();
            cVar5 = FUN_00516260();
            while (cVar5 != '\0') {
              puStack_1fc = operator_new(0xc);
              uStack_4._0_1_ = 0x42;
              if (puStack_1fc != (void *)0x0) {
                FUN_00516250();
                FUN_00447250();
                pppuStack_220 = (undefined ***)0x5b4296;
                pppuStack_220 = (undefined ***)FUN_00516250();
                pppuStack_228 = (undefined ***)0x5b42a5;
                pppuStack_220 = (undefined ***)FUN_0047ea00();
                pppuStack_228 = (undefined ***)0x5b42b2;
                FUN_005b4790();
              }
              uStack_4._0_1_ = 0x40;
              iVar9 = FUN_00498d60();
              *(undefined1 *)(iVar9 + 0x1c) = 1;
              FUN_00565bc0();
              FUN_00584c90();
              pppuStack_220 = (undefined ***)0x5b42e9;
              pppuStack_220 = (undefined ***)FUN_00516250();
              FUN_005b0ad0();
              puStack_1fc = operator_new(0xc);
              uStack_4._0_1_ = 0x43;
              if (puStack_1fc != (undefined4 *)0x0) {
                pppuStack_220 = (undefined ***)0x5b431e;
                pppuStack_220 = (undefined ***)FUN_00516250();
                uStack_1f4 = SUB41(&pppuStack_22c,0);
                uStack_1f3 = (undefined1)((uint)&pppuStack_22c >> 8);
                uStack_1f2 = (undefined2)((uint)&pppuStack_22c >> 0x10);
                puStack_234 = (undefined1 *)0x5b4337;
                FUN_0045f730();
                uStack_1f4 = SUB41(&puStack_234,0);
                uStack_1f3 = (undefined1)((uint)&puStack_234 >> 8);
                uStack_1f2 = (undefined2)((uint)&puStack_234 >> 0x10);
                ppuStack_238 = (undefined1 **)&DAT_0088f28c;
                uStack_23c = 0x5b434a;
                FUN_0045f730();
                ppuStack_238 = (undefined1 **)0x5b4352;
                uVar6 = FUN_00447250();
                uStack_1f4 = SUB41(&uStack_23c,0);
                uStack_1f3 = (undefined1)((uint)&uStack_23c >> 8);
                uStack_1f2 = (undefined2)((uint)&uStack_23c >> 0x10);
                FUN_00449290(uVar6);
                uVar6 = FUN_00516250();
                uVar6 = FUN_0047ea00(3,uVar6);
                FUN_00464b70(0xbe,uVar6);
              }
              uStack_4 = CONCAT31(uStack_4._1_3_,0x40);
              FUN_00565bc0();
              pppuStack_1e0 = (undefined ***)CONCAT31(pppuStack_1e0._1_3_,1);
              pppuStack_220 = (undefined ***)0x5b43b3;
              FUN_00516240();
              cVar5 = FUN_00516260();
            }
            uStack_4 = 0xffffffff;
            FUN_00430580();
            ExceptionList = local_c;
            return 0;
          }
        }
      }
    }
    pppuVar3 = pppuStack_1e0;
    pppuVar18 = pppuStack_1e8;
    if (cStack_1f5 != '\0') {
      ExceptionList = local_c;
      return 0;
    }
    pppuStack_220 = pppuStack_1e8;
    FUN_00465c30();
    pppuStack_220 = (undefined ***)0x5b4404;
    FUN_00490f60();
    pppuStack_220 = (undefined ***)0x5b440b;
    FUN_004965c0();
    FUN_005b4d10();
    FUN_00428eb0();
    pppuStack_220 = (undefined ***)0x5b4426;
    FUN_00428eb0();
    pppuStack_220 = &ppuStack_1b0;
    FUN_00428eb0();
    pppuStack_228 = (undefined ***)0x5b4437;
    puStack_1fc = operator_new(0xc);
    uStack_4 = 0x44;
    if (puStack_1fc != (void *)0x0) {
      FUN_00521210();
      pppuStack_220 = pppuVar3;
      uStack_1f4 = SUB41(&pppuStack_22c,0);
      uStack_1f3 = (undefined1)((uint)&pppuStack_22c >> 8);
      uStack_1f2 = (undefined2)((uint)&pppuStack_22c >> 0x10);
      puStack_234 = (undefined1 *)0x5b4471;
      FUN_00449290();
      ppuStack_238 = &puStack_1cc;
      uStack_1f4 = SUB41(&puStack_234,0);
      uStack_1f3 = (undefined1)((uint)&puStack_234 >> 8);
      uStack_1f2 = (undefined2)((uint)&puStack_234 >> 0x10);
      uStack_23c = 0x5b4484;
      FUN_00449290();
      uStack_1f4 = SUB41(&uStack_23c,0);
      uStack_1f3 = (undefined1)((uint)&uStack_23c >> 8);
      uStack_1f2 = (undefined2)((uint)&uStack_23c >> 0x10);
      FUN_00449290(&ppuStack_1b0);
      uVar6 = FUN_0047ea00(3,pppuVar18);
      FUN_00464b70(0xe1,uVar6);
    }
    uStack_4 = 0xffffffff;
    piVar13 = (int *)FUN_00465c30();
    pppuStack_220 = (undefined ***)0x5b44dc;
    (**(code **)(*piVar13 + 0x488))();
    ExceptionList = local_c;
    return 0;
  case 0xd0:
    iVar9 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar9 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar8 = operator_new(0xc);
    uStack_4 = 0x1e;
    puStack_1fc = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      uVar6 = *(undefined4 *)(iVar9 + 6);
      uVar19 = *(undefined4 *)(param_1[1] + 0x12);
      uStack_1f4 = (undefined1)uVar19;
      uStack_1f3 = (undefined1)((uint)uVar19 >> 8);
      uStack_1f2 = (undefined2)((uint)uVar19 >> 0x10);
      pppuStack_220 = (undefined ***)0x5b25f0;
      FUN_00465510();
      *puVar8 = &PTR_FUN_007e6020;
      *(undefined4 *)(puVar8[1] + 0xe) = uVar6;
      *(uint *)(puVar8[1] + 0x12) = CONCAT22(uStack_1f2,CONCAT11(uStack_1f3,uStack_1f4));
      *(undefined1 *)(puVar8[1] + 0x16) = 1;
      *(undefined1 *)(puVar8[1] + 0x17) = 0;
      *(undefined1 *)(puVar8[1] + 0x18) = 0;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    uStack_204 = (undefined2)*(undefined4 *)(DAT_00893530 + 0x14);
    uStack_202 = (undefined2)((uint)*(undefined4 *)(DAT_00893530 + 0x14) >> 0x10);
    uStack_200 = *(undefined2 *)(DAT_00893530 + 0x18);
    FUN_0042dc20();
    puStack_1fc = operator_new(0xc);
    uStack_4 = 0x1f;
    if (puStack_1fc != (void *)0x0) {
      pppuStack_220 = *(undefined ****)(iVar9 + 6);
      FUN_005b4af0();
      pppuStack_228 = (undefined ***)0x3;
      pppuStack_22c = (undefined ***)0x5b26ae;
      pppuStack_22c = (undefined ***)FUN_0047ea00();
      uStack_1f4 = SUB41(&pppuStack_228,0);
      uStack_1f3 = (undefined1)((uint)&pppuStack_228 >> 8);
      uStack_1f2 = (undefined2)((uint)&pppuStack_228 >> 0x10);
      goto LAB_005b1eef;
    }
    goto LAB_005b2dbd;
  case 0xf9:
    iVar9 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar9 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar8 = operator_new(0xc);
    uStack_4 = 0x10;
    puStack_1fc = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      uVar6 = *(undefined4 *)(iVar9 + 6);
      uVar19 = *(undefined4 *)(param_1[1] + 0x12);
      uStack_1f4 = (undefined1)uVar19;
      uStack_1f3 = (undefined1)((uint)uVar19 >> 8);
      uStack_1f2 = (undefined2)((uint)uVar19 >> 0x10);
      pppuStack_220 = (undefined ***)0x5b1e28;
      FUN_00465510();
      *puVar8 = &PTR_FUN_007e6020;
      *(undefined4 *)(puVar8[1] + 0xe) = uVar6;
      *(uint *)(puVar8[1] + 0x12) = CONCAT22(uStack_1f2,CONCAT11(uStack_1f3,uStack_1f4));
      *(undefined1 *)(puVar8[1] + 0x16) = 1;
      *(undefined1 *)(puVar8[1] + 0x17) = 0;
      *(undefined1 *)(puVar8[1] + 0x18) = 0;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    uStack_204 = (undefined2)*(undefined4 *)(DAT_00893530 + 0x14);
    uStack_202 = (undefined2)((uint)*(undefined4 *)(DAT_00893530 + 0x14) >> 0x10);
    uStack_200 = *(undefined2 *)(DAT_00893530 + 0x18);
    FUN_0042dc20();
    puStack_1fc = operator_new(0xc);
    uStack_4 = 0x11;
    if (puStack_1fc == (void *)0x0) goto LAB_005b2dbd;
    pppuStack_220 = *(undefined ****)(iVar9 + 6);
    FUN_005b4af0();
    pppuStack_228 = (undefined ***)0x3;
    pppuStack_22c = (undefined ***)0x5b1ee6;
    pppuStack_22c = (undefined ***)FUN_0047ea00();
    uStack_1f4 = SUB41(&pppuStack_228,0);
    uStack_1f3 = (undefined1)((uint)&pppuStack_228 >> 8);
    uStack_1f2 = (undefined2)((uint)&pppuStack_228 >> 0x10);
    goto LAB_005b1eef;
  case 0xfa:
    iVar9 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar9 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar8 = operator_new(0xc);
    uStack_4 = 0x12;
    puStack_1fc = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      uVar6 = *(undefined4 *)(iVar9 + 6);
      uVar19 = *(undefined4 *)(param_1[1] + 0x12);
      uStack_1f4 = (undefined1)uVar19;
      uStack_1f3 = (undefined1)((uint)uVar19 >> 8);
      uStack_1f2 = (undefined2)((uint)uVar19 >> 0x10);
      pppuStack_220 = (undefined ***)0x5b1f64;
      FUN_00465510();
      *puVar8 = &PTR_FUN_007e6020;
      *(undefined4 *)(puVar8[1] + 0xe) = uVar6;
      *(uint *)(puVar8[1] + 0x12) = CONCAT22(uStack_1f2,CONCAT11(uStack_1f3,uStack_1f4));
      *(undefined1 *)(puVar8[1] + 0x16) = 1;
      *(undefined1 *)(puVar8[1] + 0x17) = 0;
      *(undefined1 *)(puVar8[1] + 0x18) = 0;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    uStack_204 = (undefined2)*(undefined4 *)(DAT_00893530 + 0x14);
    uStack_202 = (undefined2)((uint)*(undefined4 *)(DAT_00893530 + 0x14) >> 0x10);
    uStack_200 = *(undefined2 *)(DAT_00893530 + 0x18);
    FUN_0042dc20();
    puStack_1fc = operator_new(0xc);
    uStack_4 = 0x13;
    if (puStack_1fc == (void *)0x0) goto LAB_005b2dbd;
    pppuStack_220 = *(undefined ****)(iVar9 + 6);
    FUN_005b4af0();
    pppuStack_228 = (undefined ***)0x3;
    pppuStack_22c = (undefined ***)0x5b2022;
    pppuStack_22c = (undefined ***)FUN_0047ea00();
    uStack_1f4 = SUB41(&pppuStack_228,0);
    uStack_1f3 = (undefined1)((uint)&pppuStack_228 >> 8);
    uStack_1f2 = (undefined2)((uint)&pppuStack_228 >> 0x10);
    goto LAB_005b1eef;
  case 0xfb:
    iVar9 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar9 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar8 = operator_new(0xc);
    uStack_4 = 0x14;
    puStack_1fc = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      uVar6 = *(undefined4 *)(iVar9 + 6);
      uVar19 = *(undefined4 *)(param_1[1] + 0x12);
      uStack_1f4 = (undefined1)uVar19;
      uStack_1f3 = (undefined1)((uint)uVar19 >> 8);
      uStack_1f2 = (undefined2)((uint)uVar19 >> 0x10);
      pppuStack_220 = (undefined ***)0x5b2081;
      FUN_00465510();
      *puVar8 = &PTR_FUN_007e6020;
      *(undefined4 *)(puVar8[1] + 0xe) = uVar6;
      *(uint *)(puVar8[1] + 0x12) = CONCAT22(uStack_1f2,CONCAT11(uStack_1f3,uStack_1f4));
      *(undefined1 *)(puVar8[1] + 0x16) = 1;
      *(undefined1 *)(puVar8[1] + 0x17) = 0;
      *(undefined1 *)(puVar8[1] + 0x18) = 0;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    uStack_204 = (undefined2)*(undefined4 *)(DAT_00893530 + 0x14);
    uStack_202 = (undefined2)((uint)*(undefined4 *)(DAT_00893530 + 0x14) >> 0x10);
    uStack_200 = *(undefined2 *)(DAT_00893530 + 0x18);
    FUN_0042dc20();
    puStack_1fc = operator_new(0xc);
    uStack_4 = 0x15;
    if (puStack_1fc == (void *)0x0) goto LAB_005b2dbd;
    pppuStack_220 = *(undefined ****)(iVar9 + 6);
    FUN_005b4af0();
    pppuStack_228 = (undefined ***)0x3;
    pppuStack_22c = (undefined ***)0x5b213f;
    pppuStack_22c = (undefined ***)FUN_0047ea00();
    uStack_1f4 = SUB41(&pppuStack_228,0);
    uStack_1f3 = (undefined1)((uint)&pppuStack_228 >> 8);
    uStack_1f2 = (undefined2)((uint)&pppuStack_228 >> 0x10);
    goto LAB_005b1eef;
  case 0xfc:
    iVar9 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar9 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar8 = operator_new(0xc);
    uStack_4 = 0x16;
    puStack_1fc = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      uVar6 = *(undefined4 *)(iVar9 + 6);
      uVar19 = *(undefined4 *)(param_1[1] + 0x12);
LAB_005b2197:
      pppuStack_220 = (undefined ***)0x5b219e;
      puStack_1fc = puVar8;
      FUN_00465510();
      *puVar8 = &PTR_FUN_007e6020;
      *(undefined4 *)(puVar8[1] + 0xe) = uVar6;
      *(undefined4 *)(puVar8[1] + 0x12) = uVar19;
      *(undefined1 *)(puVar8[1] + 0x16) = 1;
      *(undefined1 *)(puVar8[1] + 0x17) = 0;
      *(undefined1 *)(puVar8[1] + 0x18) = 0;
    }
    break;
  case 0xfd:
    iVar9 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar9 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar8 = operator_new(0xc);
    uStack_4 = 0x17;
    puStack_1fc = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      uVar6 = *(undefined4 *)(iVar9 + 6);
      uVar19 = *(undefined4 *)(param_1[1] + 0x12);
      goto LAB_005b2197;
    }
    break;
  case 0xfe:
    iVar9 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar9 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar8 = operator_new(0xc);
    uStack_4 = 0x18;
    puStack_1fc = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      uVar6 = *(undefined4 *)(iVar9 + 6);
      uVar19 = *(undefined4 *)(param_1[1] + 0x12);
      uStack_1f4 = (undefined1)uVar19;
      uStack_1f3 = (undefined1)((uint)uVar19 >> 8);
      uStack_1f2 = (undefined2)((uint)uVar19 >> 0x10);
      pppuStack_220 = (undefined ***)0x5b2276;
      FUN_00465510();
      *puVar8 = &PTR_FUN_007e6020;
      *(undefined4 *)(puVar8[1] + 0xe) = uVar6;
      *(uint *)(puVar8[1] + 0x12) = CONCAT22(uStack_1f2,CONCAT11(uStack_1f3,uStack_1f4));
      *(undefined1 *)(puVar8[1] + 0x16) = 1;
      *(undefined1 *)(puVar8[1] + 0x17) = 0;
      *(undefined1 *)(puVar8[1] + 0x18) = 0;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    uStack_204 = (undefined2)*(undefined4 *)(DAT_00893530 + 0x14);
    uStack_202 = (undefined2)((uint)*(undefined4 *)(DAT_00893530 + 0x14) >> 0x10);
    uStack_200 = *(undefined2 *)(DAT_00893530 + 0x18);
    FUN_0042dc20();
    puStack_1fc = operator_new(0xc);
    uStack_4 = 0x19;
    if (puStack_1fc == (void *)0x0) goto LAB_005b2dbd;
    pppuStack_220 = *(undefined ****)(iVar9 + 6);
    FUN_005b4af0();
    pppuStack_228 = (undefined ***)0x3;
    pppuStack_22c = (undefined ***)0x5b2334;
    pppuStack_22c = (undefined ***)FUN_0047ea00();
    uStack_1f4 = SUB41(&pppuStack_228,0);
    uStack_1f3 = (undefined1)((uint)&pppuStack_228 >> 8);
    uStack_1f2 = (undefined2)((uint)&pppuStack_228 >> 0x10);
    goto LAB_005b1eef;
  case 0xff:
    iVar9 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar9 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar8 = operator_new(0xc);
    uStack_4 = 0x1a;
    puStack_1fc = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      uVar6 = *(undefined4 *)(iVar9 + 6);
      uVar19 = *(undefined4 *)(param_1[1] + 0x12);
      uStack_1f4 = (undefined1)uVar19;
      uStack_1f3 = (undefined1)((uint)uVar19 >> 8);
      uStack_1f2 = (undefined2)((uint)uVar19 >> 0x10);
      pppuStack_220 = (undefined ***)0x5b2393;
      FUN_00465510();
      *puVar8 = &PTR_FUN_007e6020;
      *(undefined4 *)(puVar8[1] + 0xe) = uVar6;
      *(uint *)(puVar8[1] + 0x12) = CONCAT22(uStack_1f2,CONCAT11(uStack_1f3,uStack_1f4));
      *(undefined1 *)(puVar8[1] + 0x16) = 1;
      *(undefined1 *)(puVar8[1] + 0x17) = 0;
      *(undefined1 *)(puVar8[1] + 0x18) = 0;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    uStack_204 = (undefined2)*(undefined4 *)(DAT_00893530 + 0x14);
    uStack_202 = (undefined2)((uint)*(undefined4 *)(DAT_00893530 + 0x14) >> 0x10);
    uStack_200 = *(undefined2 *)(DAT_00893530 + 0x18);
    FUN_0042dc20();
    puStack_1fc = operator_new(0xc);
    uStack_4 = 0x1b;
    if (puStack_1fc == (void *)0x0) goto LAB_005b2dbd;
    pppuStack_220 = *(undefined ****)(iVar9 + 6);
    FUN_005b4af0();
    pppuStack_228 = (undefined ***)0x3;
    pppuStack_22c = (undefined ***)0x5b2451;
    pppuStack_22c = (undefined ***)FUN_0047ea00();
    uStack_1f4 = SUB41(&pppuStack_228,0);
    uStack_1f3 = (undefined1)((uint)&pppuStack_228 >> 8);
    uStack_1f2 = (undefined2)((uint)&pppuStack_228 >> 0x10);
LAB_005b1eef:
    FUN_00446d10();
    pppuStack_22c = (undefined ***)0xa7;
    FUN_00465280();
    uStack_4 = 0xffffffff;
    FUN_00565ca0();
    ExceptionList = local_c;
    return 0;
  case 0x100:
    iVar9 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar9 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar8 = operator_new(0xc);
    uStack_4 = 0x1c;
    puStack_1fc = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      uVar6 = *(undefined4 *)(iVar9 + 6);
      uVar19 = *(undefined4 *)(param_1[1] + 0x12);
      uStack_1f4 = (undefined1)uVar19;
      uStack_1f3 = (undefined1)((uint)uVar19 >> 8);
      uStack_1f2 = (undefined2)((uint)uVar19 >> 0x10);
      pppuStack_220 = (undefined ***)0x5b24b0;
      FUN_00465510();
      *puVar8 = &PTR_FUN_007e6020;
      *(undefined4 *)(puVar8[1] + 0xe) = uVar6;
      *(uint *)(puVar8[1] + 0x12) = CONCAT22(uStack_1f2,CONCAT11(uStack_1f3,uStack_1f4));
      *(undefined1 *)(puVar8[1] + 0x16) = 1;
      *(undefined1 *)(puVar8[1] + 0x17) = 0;
      *(undefined1 *)(puVar8[1] + 0x18) = 0;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    uStack_204 = (undefined2)*(undefined4 *)(DAT_00893530 + 0x14);
    uStack_202 = (undefined2)((uint)*(undefined4 *)(DAT_00893530 + 0x14) >> 0x10);
    uStack_200 = *(undefined2 *)(DAT_00893530 + 0x18);
    FUN_0042dc20();
    puStack_1fc = operator_new(0xc);
    uStack_4 = 0x1d;
    if (puStack_1fc != (undefined4 *)0x0) {
      pppuStack_220 = *(undefined ****)(iVar9 + 6);
      FUN_005b4af0();
      pppuStack_228 = (undefined ***)0x3;
      pppuStack_22c = (undefined ***)0x5b256a;
      pppuStack_22c = (undefined ***)FUN_0047ea00();
      uStack_1f4 = SUB41(&pppuStack_228,0);
      uStack_1f3 = (undefined1)((uint)&pppuStack_228 >> 8);
      uStack_1f2 = (undefined2)((uint)&pppuStack_228 >> 0x10);
      FUN_00446d10();
      pppuStack_22c = (undefined ***)0xa7;
      FUN_00465280();
    }
    break;
  case 0x109:
    iVar9 = param_1[1];
    param_1 = param_1 + 1;
    piStack_1ec = (int *)(&DAT_0089cad8)[*(int *)(iVar9 + 0x12)];
    cStack_1e1 = *(char *)(iVar9 + 0x16);
    uStack_1f4 = *(undefined1 *)(iVar9 + 0x18);
    pppuStack_1e0 = (undefined ***)CONCAT31(pppuStack_1e0._1_3_,*(char *)(iVar9 + 0x17));
    if (piStack_1ec == (int *)0x0) {
      ExceptionList = local_c;
      return 0;
    }
    if ((&DAT_0089cad8)[*(int *)(iVar9 + 0xe)] != 0) {
      ExceptionList = local_c;
      return 0;
    }
    puStack_1cc = *(undefined1 **)(DAT_00893530 + 0x14);
    uStack_1c8 = *(undefined2 *)(DAT_00893530 + 0x18);
    piStack_1d0 = param_1;
    if (*(char *)(iVar9 + 0x17) == '\0') {
      (**(code **)(*piStack_1ec + 0x1c))();
      FUN_0042dc20();
    }
    piStack_1c0 = (int *)0x0;
    piStack_1bc = (int *)0x0;
    iStack_1b8 = 0;
    uStack_1b4 = 0;
    ppuStack_1c4 = &PTR_LAB_007e378c;
    puStack_1dc = (undefined4 *)(&DAT_00d685aa + *(int *)(*param_1 + 0xe) * 0xa8);
    uStack_4._0_1_ = 6;
    uStack_4._1_3_ = 0;
    piVar13 = (int *)(&DAT_00d685be)[*(int *)(*param_1 + 0xe) * 0x2a];
    piVar2 = piStack_1c0;
    while (piStack_1c0 = piVar2, piVar13 != (int *)0x0) {
      piVar2 = (int *)piVar13[2];
      iVar9 = DAT_00ab27b4 + *piVar13 * 0x4b2;
      piVar10 = *(int **)(DAT_00ab27b4 + 0x3d8 + *piVar13 * 0x4b2);
      piVar13 = piVar2;
      piVar2 = piStack_1c0;
      if ((piVar10 != (int *)0x0) && (piVar10 == piStack_1ec)) {
        iVar14 = *(int *)(iVar9 + 0x12);
        piVar10 = (int *)(iVar9 + 0x12);
        iVar9 = FUN_0044e1b0();
        piVar2 = piStack_1c0;
        if ((((iVar9 != iVar14) && (*(int *)((int)piStack_1ec + 0x117de) != *piVar10)) &&
            (((char)pppuStack_1e0 != '\0' ||
             ((cVar5 = FUN_004e8ab0(), piVar2 = piStack_1c0, cVar5 == '\0' &&
              (cVar5 = FUN_004e8ad0(), piVar2 = piStack_1c0, cVar5 == '\0')))))) &&
           (cVar5 = FUN_0042dd70(), piVar4 = piStack_1bc, piVar2 = piStack_1c0, cVar5 == '\0')) {
          pppuVar18 = (undefined ***)*piVar10;
          puStack_1fc = operator_new(0xe);
          uStack_4._0_1_ = 7;
          if (puStack_1fc == (undefined4 *)0x0) {
            piStack_1bc = (int *)0x0;
          }
          else {
            pppuStack_220 = pppuVar18;
            piStack_1bc = (int *)FUN_0049a7a0();
          }
          uStack_4._0_1_ = 6;
          iVar9 = iStack_1b8 + 1;
          bVar20 = iStack_1b8 != 0;
          piVar2 = piStack_1bc;
          iStack_1b8 = iVar9;
          if (bVar20) {
            piVar4[2] = (int)piStack_1bc;
            piVar2 = piStack_1c0;
          }
        }
      }
    }
    piVar13 = *(int **)((int)puStack_1dc + 0x26);
    piVar2 = piStack_1c0;
    while (piStack_1c0 = piVar2, piVar13 != (int *)0x0) {
      piVar2 = (int *)piVar13[2];
      iVar9 = DAT_00ab27b4 + *piVar13 * 0x4b2;
      piVar10 = *(int **)(DAT_00ab27b4 + 0x3d8 + *piVar13 * 0x4b2);
      piVar13 = piVar2;
      piVar2 = piStack_1c0;
      if ((((piVar10 != (int *)0x0) && (piVar10 == piStack_1ec)) &&
          (cVar5 = FUN_004e8ab0(), piVar2 = piStack_1c0, cVar5 == '\0')) &&
         (((char)pppuStack_1e0 != '\0' ||
          (cVar5 = FUN_004e8ad0(), piVar2 = piStack_1c0, cVar5 == '\0')))) {
        iVar14 = *(int *)(iVar9 + 0x12);
        piVar10 = (int *)(iVar9 + 0x12);
        iVar9 = FUN_0044e1b0();
        piVar2 = piStack_1c0;
        if ((iVar9 != iVar14) &&
           ((*(int *)((int)piStack_1ec + 0x117de) != *piVar10 &&
            (cVar5 = FUN_0042dd70(), piVar4 = piStack_1bc, piVar2 = piStack_1c0, cVar5 == '\0')))) {
          pppuVar18 = (undefined ***)*piVar10;
          puStack_1fc = operator_new(0xe);
          uStack_4._0_1_ = 8;
          if (puStack_1fc == (undefined4 *)0x0) {
            piStack_1bc = (int *)0x0;
          }
          else {
            pppuStack_220 = pppuVar18;
            piStack_1bc = (int *)FUN_0049a7a0();
          }
          uStack_4._0_1_ = 6;
          iVar9 = iStack_1b8 + 1;
          bVar20 = iStack_1b8 != 0;
          piVar2 = piStack_1bc;
          iStack_1b8 = iVar9;
          if (bVar20) {
            piVar4[2] = (int)piStack_1bc;
            piVar2 = piStack_1c0;
          }
        }
      }
    }
    piVar13 = *(int **)((int)puStack_1dc + 0x38);
    piVar2 = piStack_1c0;
    while (piStack_1c0 = piVar2, piVar13 != (int *)0x0) {
      piVar2 = (int *)piVar13[2];
      iVar9 = DAT_00ab27b4 + *piVar13 * 0x4b2;
      piVar10 = *(int **)(DAT_00ab27b4 + 0x3d4 + *piVar13 * 0x4b2);
      piVar13 = piVar2;
      piVar2 = piStack_1c0;
      if ((((piVar10 != (int *)0x0) && (piVar10 == piStack_1ec)) &&
          (cVar5 = FUN_004e8ab0(), piVar2 = piStack_1c0, cVar5 == '\0')) &&
         (cVar5 = FUN_004e8ad0(), piVar2 = piStack_1c0, cVar5 == '\0')) {
        iVar14 = *(int *)(iVar9 + 0x12);
        piVar10 = (int *)(iVar9 + 0x12);
        iVar9 = FUN_0044e1b0();
        piVar2 = piStack_1c0;
        if (((iVar9 != iVar14) && (*(int *)((int)piStack_1ec + 0x117de) != *piVar10)) &&
           (cVar5 = FUN_0042dd70(), piVar4 = piStack_1bc, piVar2 = piStack_1c0, cVar5 == '\0')) {
          pppuVar18 = (undefined ***)*piVar10;
          puStack_1fc = operator_new(0xe);
          uStack_4._0_1_ = 9;
          if (puStack_1fc == (undefined4 *)0x0) {
            piStack_1bc = (int *)0x0;
          }
          else {
            pppuStack_220 = pppuVar18;
            piStack_1bc = (int *)FUN_0049a7a0();
          }
          uStack_4._0_1_ = 6;
          iVar9 = iStack_1b8 + 1;
          bVar20 = iStack_1b8 != 0;
          piVar2 = piStack_1bc;
          iStack_1b8 = iVar9;
          if (bVar20) {
            piVar4[2] = (int)piStack_1bc;
            piVar2 = piStack_1c0;
          }
        }
      }
    }
    if (iStack_1b8 != 0) {
      puStack_1fc = operator_new(0xc);
      uStack_4._0_1_ = 10;
      if (puStack_1fc != (undefined4 *)0x0) {
        pppuStack_22c = *(undefined ****)((int)piStack_1ec + 6);
        pppuStack_220 = (undefined ***)0x0;
        pppuStack_228 = &ppuStack_1c4;
        puStack_234 = (undefined1 *)0x5b1ad1;
        uStack_23c = FUN_0045fec0();
        uStack_1f4 = SUB41(&ppuStack_238,0);
        uStack_1f3 = (undefined1)((uint)&ppuStack_238 >> 8);
        uStack_1f2 = (undefined2)((uint)&ppuStack_238 >> 0x10);
        FUN_00446d10();
        uStack_23c = 0xa1;
        FUN_0048f270();
      }
      uStack_4._0_1_ = 6;
      FUN_00565bc0();
      piVar13 = piStack_1c0;
      while (piVar13 != (int *)0x0) {
        local_1d8 = (int *)piVar13[2];
        iVar9 = DAT_00ab27b4 + *piVar13 * 0x4b2;
        puVar8 = operator_new(0xc);
        uStack_4._0_1_ = 0xb;
        puStack_1fc = puVar8;
        if (puVar8 != (undefined4 *)0x0) {
          uVar6 = *(undefined4 *)(iVar9 + 0x12);
          pppuStack_220 = (undefined ***)0x5b1b6f;
          FUN_00498e40();
          *puVar8 = &PTR_FUN_007e6b4c;
          *(undefined4 *)(puVar8[1] + 0xe) = uVar6;
          *(undefined1 *)(puVar8[1] + 0x12) = 0;
        }
        uStack_4._0_1_ = 6;
        FUN_00565bc0();
        piVar13 = local_1d8;
        if (cStack_1e1 != '\0') {
          FUN_00457e10();
          ppuStack_1a8 = &PTR_FUN_007e4c84;
          puVar8 = *(undefined4 **)(*(int *)(iVar9 + 0x1c2) + 4);
          piVar13 = piStack_1a4;
          while (piVar2 = piStack_1a0, piStack_1a4 = piVar13, piStack_1a0 = piVar2,
                puVar8 != (undefined4 *)0x0) {
            uStack_4._0_1_ = 0xc;
            puVar12 = (undefined4 *)puVar8[2];
            pppuVar18 = (undefined ***)*puVar8;
            puStack_1fc = operator_new(0xe);
            uStack_4._0_1_ = 0xd;
            if (puStack_1fc == (undefined4 *)0x0) {
              piStack_1a0 = (int *)0x0;
            }
            else {
              pppuStack_220 = pppuVar18;
              piStack_1a0 = (int *)FUN_0045bab0();
            }
            iVar9 = iStack_19c + 1;
            bVar20 = iStack_19c != 0;
            puVar8 = puVar12;
            piVar13 = piStack_1a0;
            iStack_19c = iVar9;
            if (bVar20) {
              piVar2[2] = (int)piStack_1a0;
              piVar13 = piStack_1a4;
            }
          }
          uStack_4._0_1_ = 0xc;
          piVar13 = piStack_1a4;
          while (piVar13 != (int *)0x0) {
            piVar2 = (int *)piVar13[2];
            iVar9 = *piVar13;
            piVar10 = (int *)FUN_00522770();
            piVar13 = piVar2;
            if (piVar10 == piStack_1ec) {
              puVar8 = operator_new(0xc);
              uStack_4._0_1_ = 0xe;
              puStack_1fc = puVar8;
              if (puVar8 != (undefined4 *)0x0) {
                uStack_202 = (undefined2)DAT_0088f28e;
                uStack_200 = (undefined2)((uint)DAT_0088f28e >> 0x10);
                uStack_204 = DAT_0088f28c;
                pppuStack_220 = (undefined ***)0x5b1c8e;
                FUN_00458490();
                *puVar8 = &PTR_FUN_007e5370;
                iVar14 = puVar8[1];
                *(undefined4 *)(iVar14 + 0xe) = *(undefined4 *)(iVar9 + 0x18);
                *(undefined2 *)(iVar14 + 0x12) = *(undefined2 *)(iVar9 + 0x1c);
                *(undefined1 *)(puVar8[1] + 0x14) = 0;
                *(undefined1 *)(puVar8[1] + 0x15) = 1;
                *(undefined4 *)(puVar8[1] + 0x16) = 0;
                iVar9 = puVar8[1];
                *(uint *)(iVar9 + 0x1a) = CONCAT22(uStack_202,uStack_204);
                *(undefined2 *)(iVar9 + 0x1e) = uStack_200;
              }
              uStack_4._0_1_ = 0xc;
              cVar5 = (**(code **)(*piStack_1ec + 0x1c))();
              if (cVar5 == '\0') {
                (**(code **)(*piStack_1ec + 0x48c))();
              }
              FUN_00565bc0();
            }
          }
          (*(code *)ppuStack_1a8[4])();
          uStack_4._0_1_ = 6;
          FUN_00527230();
          piVar13 = local_1d8;
        }
      }
      local_1d8 = piVar13;
      if ((char)pppuStack_1e0 == '\0') {
        puStack_1fc = operator_new(0xc);
        uStack_4._0_1_ = 0xf;
        if (puStack_1fc != (undefined4 *)0x0) {
          uStack_1f4 = SUB41(&stack0xfffffde4,0);
          uStack_1f3 = (undefined1)((uint)&stack0xfffffde4 >> 8);
          uStack_1f2 = (undefined2)((uint)&stack0xfffffde4 >> 0x10);
          pppuStack_220 = (undefined ***)0x1;
          FUN_00458280();
          pppuStack_228 = (undefined ***)0x5b1d88;
          pppuStack_228 = (undefined ***)FUN_00458280();
          pppuStack_22c = (undefined ***)0x2;
          puStack_234 = (undefined1 *)0x5b1d94;
          puStack_234 = (undefined1 *)FUN_0045fec0();
          ppuStack_238 = (undefined1 **)0x89;
          uStack_23c = 0x5b1da1;
          FUN_00464820();
        }
        uStack_4 = CONCAT31(uStack_4._1_3_,6);
        FUN_00565ca0();
      }
    }
    uStack_4 = 0xffffffff;
    ppuStack_1c4 = &PTR_LAB_007e378c;
    FUN_004174b0();
    ExceptionList = local_c;
    return 0;
  case 0x148:
    puStack_1dc = (undefined4 *)(&DAT_0089cad8)[*(int *)(param_1[1] + 0x14)];
    iVar9 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0x18)];
    puVar8 = operator_new(0xc);
    uStack_4 = 4;
    puStack_1fc = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      uVar6 = *(undefined4 *)(iVar9 + 6);
      iVar14 = param_1[1];
      uVar19 = *(undefined4 *)((int)puStack_1dc + 6);
      uStack_1f4 = (undefined1)uVar19;
      uStack_1f3 = (undefined1)((uint)uVar19 >> 8);
      uStack_1f2 = (undefined2)((uint)uVar19 >> 0x10);
      pppuStack_220 = (undefined ***)0x5b15de;
      FUN_005b4a60();
      iVar15 = puVar8[1];
      *puVar8 = &PTR_FUN_007e979c;
      *(undefined4 *)(iVar15 + 0xe) = *(undefined4 *)(iVar14 + 0xe);
      *(undefined2 *)(iVar15 + 0x12) = *(undefined2 *)(iVar14 + 0x12);
      *(uint *)(puVar8[1] + 0x14) = CONCAT22(uStack_1f2,CONCAT11(uStack_1f3,uStack_1f4));
      *(undefined4 *)(puVar8[1] + 0x18) = uVar6;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    uStack_204 = (undefined2)*(undefined4 *)(DAT_00893530 + 0x14);
    uStack_202 = (undefined2)((uint)*(undefined4 *)(DAT_00893530 + 0x14) >> 0x10);
    uStack_200 = *(undefined2 *)(DAT_00893530 + 0x18);
    FUN_0042dc20();
    puStack_1fc = operator_new(0xc);
    uStack_4 = 5;
    if (puStack_1fc != (void *)0x0) {
      pppuStack_220 = *(undefined ****)(iVar9 + 6);
      pppuStack_22c = (undefined ***)FUN_0045fec0();
      uStack_1f4 = SUB41(&pppuStack_228,0);
      uStack_1f3 = (undefined1)((uint)&pppuStack_228 >> 8);
      uStack_1f2 = (undefined2)((uint)&pppuStack_228 >> 0x10);
      FUN_00446d10();
      pppuStack_22c = (undefined ***)0xa7;
      FUN_00465280();
      uStack_4 = 0xffffffff;
      FUN_00565ca0();
      ExceptionList = local_c;
      return 0;
    }
    uStack_4 = 0xffffffff;
    FUN_00565ca0();
    ExceptionList = local_c;
    return 0;
  }
  uStack_4 = 0xffffffff;
  FUN_00565bc0();
switchD_005b1026_caseD_8a:
  ExceptionList = local_c;
  return 0;
switchD_005b1026_caseD_c8:
  iVar9 = param_1[1];
  iVar14 = *(int *)(iVar9 + 0xe);
  iVar15 = (&DAT_0089cad8)[iVar14];
  uStack_1f4 = (undefined1)iVar15;
  uStack_1f3 = (undefined1)((uint)iVar15 >> 8);
  uStack_1f2 = (undefined2)((uint)iVar15 >> 0x10);
  uStack_204 = *(undefined2 *)(iVar9 + 0x12);
  uStack_202 = (undefined2)*(undefined4 *)(iVar9 + 0x14);
  uStack_200 = (undefined2)((uint)*(undefined4 *)(iVar9 + 0x14) >> 0x10);
  iVar9 = FUN_00428ee0();
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = iVar9 + -8;
  }
  if (iVar15 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  if (iVar9 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  iVar9 = (**(code **)(**(int **)(iVar9 + 0x22) + 4))();
  if (iVar9 < 1) {
    ExceptionList = local_c;
    return 0;
  }
  cVar5 = FUN_004a1fe0();
  if (cVar5 == '\0') {
    ExceptionList = local_c;
    return 0;
  }
  iVar9 = *(int *)((&DAT_0089cad8)[iVar14] + 0x12da);
  iVar15 = FUN_00584c90();
  *(undefined1 *)(iVar9 + iVar15 * 0x2c + 0x30) = 1;
  puVar8 = operator_new(0xc);
  uStack_4 = 0x26;
  if (puVar8 == (undefined4 *)0x0) {
    puStack_1dc = (undefined4 *)0x0;
    puStack_1fc = puVar8;
  }
  else {
    puStack_1fc = puVar8;
    uStack_17a = FUN_00584c90();
    uStack_17c = 3;
    pppuStack_220 = (undefined ***)0x5b2c61;
    FUN_00498cd0();
    *puVar8 = &PTR_FUN_007e6364;
    iVar9 = puVar8[1];
    *(uint *)(iVar9 + 0x12) = CONCAT22(uStack_202,uStack_204);
    *(undefined2 *)(iVar9 + 0x16) = uStack_200;
    *(int *)(puVar8[1] + 0x18) = iVar14;
    *(undefined1 *)(puVar8[1] + 0x1c) = 0;
    puStack_1dc = puVar8;
  }
  uStack_4 = 0xffffffff;
  iVar9 = *(int *)(&DAT_0089cad8)[iVar14];
  FUN_00584c90();
  pppuStack_220 = (undefined ***)0x5b2cc0;
  (**(code **)(iVar9 + 0x488))();
  puVar8 = operator_new(0xc);
  uStack_4 = 0x27;
  puStack_1fc = puVar8;
  if (puVar8 != (undefined4 *)0x0) {
    uStack_174 = 3;
    pppuStack_220 = (undefined ***)0x5b2d04;
    iStack_172 = iVar14;
    FUN_00498cd0();
    *puVar8 = &PTR_FUN_007e6364;
    iVar9 = puVar8[1];
    *(uint *)(iVar9 + 0x12) = CONCAT22(uStack_202,uStack_204);
    *(undefined2 *)(iVar9 + 0x16) = uStack_200;
    *(int *)(puVar8[1] + 0x18) = iVar14;
    *(undefined1 *)(puVar8[1] + 0x1c) = 0;
  }
  uStack_4 = 0xffffffff;
  FUN_00565bc0();
  ppuStack_1b0 = *(undefined ***)(DAT_00893530 + 0x14);
  uStack_1ac = *(undefined2 *)(DAT_00893530 + 0x18);
  FUN_0042dc20();
  puStack_1fc = operator_new(0xc);
  uStack_4 = 0x28;
  if (puStack_1fc == (void *)0x0) {
LAB_005b2dbd:
    uStack_4 = 0xffffffff;
    FUN_00565ca0();
    ExceptionList = local_c;
    return 0;
  }
  pppuStack_220 = (undefined ***)0x5b2da5;
  pppuStack_220 = (undefined ***)FUN_00584c90();
  pppuStack_22c = (undefined ***)FUN_0045fec0();
  uStack_1f4 = SUB41(&pppuStack_228,0);
  uStack_1f3 = (undefined1)((uint)&pppuStack_228 >> 8);
  uStack_1f2 = (undefined2)((uint)&pppuStack_228 >> 0x10);
  goto LAB_005b1eef;
}


