// FUN_006304d0 @ 6304d0 size=20220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006304d0(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  undefined **ppuVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined2 extraout_var;
  int iVar15;
  undefined2 extraout_var_00;
  int unaff_EDI;
  float10 fVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  double dVar21;
  undefined8 uVar22;
  float fVar23;
  int *piVar24;
  int *piVar25;
  int iVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 *puVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int iStack_358;
  char *pcStack_350;
  float fVar33;
  int iVar34;
  int iVar35;
  float fStack_340;
  float fStack_33c;
  char *pcStack_338;
  float fStack_334;
  uint uStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  char *pcStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  char *pcStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  int iStack_2f8;
  undefined4 uStack_2f4;
  char *pcStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  char *pcStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  undefined4 uStack_2cc;
  int iVar36;
  int *apiStack_2b8 [3];
  undefined4 *puStack_2ac;
  undefined4 uStack_294;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  float fStack_230;
  undefined4 uStack_220;
  undefined1 auStack_208 [80];
  float fStack_1b8;
  
  if (DAT_00dc195f == '\0') {
    uStack_2cc = 0x60;
    fStack_2d0 = 7.84727e-44;
    fStack_2d4 = 9.093513e-39;
    (**(code **)(**(int **)(param_1 + 0xc2) + 0x18))();
  }
  else {
    uStack_2cc = 0x44;
    fStack_2d0 = 0.0;
    fStack_2d4 = 9.093498e-39;
    (**(code **)(**(int **)(param_1 + 0xc2) + 0x18))();
  }
  fStack_2d4 = 0.0;
  pcStack_2d8 = (char *)0x630511;
  (**(code **)(**(int **)(param_1 + 0xc2) + 0x10))();
  pcStack_2d8 = s_eurostilecond20bold_bmp_0082f024;
  fStack_2dc = 9.093554e-39;
  uStack_258 = FUN_004136a0();
  pcStack_2d8 = s_eurostilecond14_bmp_0082f010;
  fStack_2dc = 9.093586e-39;
  FUN_004136a0();
  pcStack_2d8 = s_eurostilecond14bold_bmp_0083bcc0;
  fStack_2dc = 9.093611e-39;
  uStack_220 = FUN_004136a0();
  pcStack_2d8 = (char *)0x0;
  fStack_2dc = 0.0;
  fStack_2e0 = 0.0;
  fStack_2e4 = 9.093645e-39;
  uStack_294 = FUN_00584270();
  pcStack_2d8 = (char *)0xff;
  fStack_2dc = 3.57331e-43;
  fStack_2e0 = 3.57331e-43;
  fStack_2e4 = 9.093687e-39;
  uVar5 = FUN_00584270();
  pcStack_2d8 = (char *)0x0;
  fStack_2dc = 2.64845e-43;
  fStack_2e0 = 3.57331e-43;
  fStack_2e4 = 9.093722e-39;
  uStack_25c = FUN_00584270();
  *(undefined4 *)(param_1 + 0x152) = 0;
  *(undefined4 *)(param_1 + 0x156) = 0;
  fStack_230 = 0.0;
  puVar29 = *(undefined4 **)(DAT_00d0ca90 + 0x3b7e);
  while (puVar29 != (undefined4 *)0x0) {
    puStack_2ac = (undefined4 *)puVar29[2];
    apiStack_2b8[0] = (int *)*puVar29;
    pcStack_2d8 = (char *)0x6305e2;
    cVar4 = FUN_004f2390();
    if ((cVar4 == '\0') && ((char)apiStack_2b8[0][0xf] == '\0')) {
      fStack_230 = (float)apiStack_2b8[0][10] + fStack_230;
    }
    pcStack_2d8 = (char *)0x63060b;
    cVar4 = (**(code **)(*apiStack_2b8[0] + 0x10))();
    puVar29 = puStack_2ac;
    if (cVar4 != '\0') {
      if (*(int *)((int)apiStack_2b8[0] + 0x5a) == 9) {
        *(int *)(param_1 + 0x152) =
             *(int *)(param_1 + 0x152) +
             (apiStack_2b8[0][0xe] - apiStack_2b8[0][0xd]) + apiStack_2b8[0][0xc];
      }
      else if (*(int *)((int)apiStack_2b8[0] + 0x5a) == 10) {
        *(int *)(param_1 + 0x156) =
             *(int *)(param_1 + 0x156) +
             (apiStack_2b8[0][0xe] - apiStack_2b8[0][0xd]) + apiStack_2b8[0][0xc];
      }
    }
  }
  iVar36 = -6;
  if (DAT_00dc195f != '\0') {
    iVar36 = -0x18;
  }
  pcStack_2d8 = (char *)(iVar36 + 0x70);
  fStack_2dc = 9.52883e-44;
  fStack_2e0 = 9.094071e-39;
  puStack_2ac = puVar29;
  (**(code **)(**(int **)(param_1 + 0x17e) + 0x14))();
  fStack_2e0 = (float)(unaff_EDI + 0x70);
  fStack_2e4 = 3.39114e-43;
  fStack_2e8 = 9.094105e-39;
  (**(code **)(**(int **)(param_1 + 0x18e) + 0x14))();
  fStack_2e8 = (float)((int)fStack_2d0 + 0x70);
  fStack_2ec = 5.8294e-43;
  pcStack_2f0 = (char *)0x6306c2;
  (**(code **)(**(int **)(param_1 + 0x186) + 0x14))();
  pcStack_2f0 = pcStack_2d8 + 0xa0;
  uStack_2f4 = 0x44;
  iStack_2f8 = 0x6306da;
  (**(code **)(**(int **)(param_1 + 0x182) + 0x14))();
  iStack_2f8 = (int)fStack_2e0 + 0xa0;
  fStack_2fc = 3.39114e-43;
  fStack_300 = 9.094208e-39;
  (**(code **)(**(int **)(param_1 + 0x192) + 0x14))();
  fStack_300 = (float)((int)fStack_2e8 + 0xa0);
  fStack_304 = 5.8294e-43;
  pcStack_308 = (char *)0x63070e;
  (**(code **)(**(int **)(param_1 + 0x18a) + 0x14))();
  pcStack_308 = pcStack_2f0 + 0xc0;
  fStack_30c = 9.52883e-44;
  fStack_310 = 9.094278e-39;
  (**(code **)(**(int **)(param_1 + 0x196) + 0x14))();
  fStack_310 = (float)(iStack_2f8 + 0xc0);
  fStack_314 = 2.12997e-43;
  fStack_318 = 9.094315e-39;
  (**(code **)(**(int **)(param_1 + 0x19a) + 0x14))();
  fStack_318 = (float)((int)fStack_300 + 0xc0);
  fStack_31c = 3.30706e-43;
  pcStack_320 = (char *)0x63075a;
  (**(code **)(**(int **)(param_1 + 0x19e) + 0x14))();
  pcStack_320 = pcStack_308 + 0xc0;
  fStack_324 = 4.48416e-43;
  fStack_328 = 9.094388e-39;
  (**(code **)(**(int **)(param_1 + 0x1a2) + 0x14))();
  fStack_328 = (float)((int)fStack_310 + 0xc0);
  fStack_32c = 5.66125e-43;
  uStack_330 = 0x63078e;
  (**(code **)(**(int **)(param_1 + 0x1aa) + 0x14))();
  uStack_330 = (int)fStack_318 + 0xc0;
  fStack_334 = 6.83834e-43;
  pcStack_338 = (char *)0x6307a8;
  (**(code **)(**(int **)(param_1 + 0x1a6) + 0x14))();
  pcStack_338 = pcStack_320 + 0x78;
  fStack_33c = 3.47522e-43;
  fStack_340 = 9.094494e-39;
  (**(code **)(**(int **)(param_1 + 0x1b2) + 0x14))();
  fStack_340 = (float)((int)fStack_328 + 0x78);
  iVar34 = 0x4c;
  (**(code **)(**(int **)(param_1 + 0x1b6) + 0x14))(0x4c);
  iVar6 = uStack_330 + 0x78;
  (**(code **)(**(int **)(param_1 + 0x1ba) + 0x14))(0x1a8,iVar6);
  pcVar10 = pcStack_338;
  pcStack_350 = pcStack_338 + 0xa4;
  (**(code **)(**(int **)(param_1 + 0x1be) + 0x14))(0xf8);
  fVar23 = fStack_340;
  piVar7 = (int *)((int)fStack_340 + 0xa4);
  (**(code **)(**(int **)(param_1 + 0x1c2) + 0x14))(0x4c);
  iVar36 = 0x1a8;
  (**(code **)(**(int **)(param_1 + 0x1c6) + 0x14))(0x1a8,iVar6 + 0xa4);
  uVar28 = 0;
  uVar19 = CONCAT44(pcVar10 + 0x11c,0x74);
  uVar13 = DAT_00bd1bac;
  fVar27 = fStack_324;
  uVar8 = FUN_0042b6c9(s_PRODIW_DIV_00860f78);
  FUN_004133fd(uVar8,uVar19,uVar13,fVar27,uVar28);
  uVar28 = 0;
  uVar19 = CONCAT44(pcVar10 + 0x11c,0x120);
  uVar13 = DAT_00bd1bac;
  fVar27 = fStack_324;
  uVar8 = FUN_0042b6c9(s_PRODIW_AIR_00860f6c);
  FUN_004133fd(uVar8,uVar19,uVar13,fVar27,uVar28);
  uVar28 = 0;
  uVar19 = CONCAT44(pcVar10 + 0x11c,0x1d0);
  uVar13 = DAT_00bd1bac;
  fVar27 = fStack_324;
  uVar8 = FUN_0042b6c9(s_PRODIW_NAV_00860f60);
  FUN_004133fd(uVar8,uVar19,uVar13,fVar27,uVar28);
  uVar28 = 0;
  uVar19 = CONCAT44(pcVar10 + 0x148,0x74);
  uVar13 = DAT_00bd1bac;
  fVar27 = fStack_324;
  uVar8 = FUN_0042b6c9(s_PRODIW_BRI_00860f54);
  FUN_004133fd(uVar8,uVar19,uVar13,fVar27,uVar28);
  uVar28 = 0;
  uVar19 = CONCAT44(pcVar10 + 0x148,0x120);
  uVar13 = DAT_00bd1bac;
  fVar27 = fStack_324;
  uVar8 = FUN_0042b6c9(s_PRODIW_AIB_00860f48);
  FUN_004133fd(uVar8,uVar19,uVar13,fVar27,uVar28);
  uVar28 = 0;
  uVar19 = CONCAT44(pcVar10 + 0x148,0x1d0);
  uVar13 = DAT_00bd1bac;
  fVar27 = fStack_324;
  uVar8 = FUN_0042b6c9(s_PRODIW_NAB_00860f3c);
  FUN_004133fd(uVar8,uVar19,uVar13,fVar27,uVar28);
  uVar28 = 0;
  pcVar10 = pcVar10 + 0x168;
  uVar19 = CONCAT44(pcVar10,0x5c);
  uVar13 = DAT_00bd1bac;
  fVar27 = fStack_324;
  uVar8 = FUN_0042b6c9(s_PRODIW_AA_00858414);
  FUN_004132d0(uVar8,uVar19,uVar13,fVar27,uVar28);
  uVar28 = 0;
  uVar19 = CONCAT44(pcVar10,0xb0);
  uVar13 = DAT_00bd1bac;
  fVar27 = fStack_324;
  uVar8 = FUN_0042b6c9(s_PRODIW_RA_008583e4);
  FUN_004132d0(uVar8,uVar19,uVar13,fVar27,uVar28);
  uVar28 = 0;
  uVar19 = CONCAT44(pcVar10,0x104);
  uVar13 = DAT_00bd1bac;
  fVar27 = fStack_324;
  uVar8 = FUN_0042b6c9(s_PRODIW_NU_008583cc);
  FUN_004132d0(uVar8,uVar19,uVar13,fVar27,uVar28);
  uVar28 = 0;
  uVar19 = CONCAT44(pcVar10,0x158);
  uVar13 = DAT_00bd1bac;
  fVar27 = fStack_324;
  uVar8 = FUN_0042b6c9(s_PRODIW_RO_008583d8);
  FUN_004132d0(uVar8,uVar19,uVar13,fVar27,uVar28);
  uVar28 = 0;
  uVar19 = CONCAT44(pcVar10,0x1ac);
  uVar13 = DAT_00bd1bac;
  fVar27 = fStack_324;
  uVar8 = FUN_0042b6c9(s_PRODIW_CO_00860f30);
  FUN_004132d0(uVar8,uVar19,uVar13,fVar27,uVar28);
  uVar28 = 0;
  uVar19 = CONCAT44(pcVar10,0x200);
  uVar13 = DAT_00bd1bac;
  fVar27 = fStack_324;
  uVar8 = FUN_0042b6c9(s_PRODIW_ES_00860f24);
  FUN_004132d0(uVar8,uVar19,uVar13,fVar27,uVar28);
  if (*(char *)(param_1 + 0x123) != '\0') {
    if (DAT_00dc1884 == '\0') {
      puVar29 = (undefined4 *)0xdc;
      fVar27 = 1.00893e-43;
      (**(code **)(**(int **)(param_1 + 0x11e) + 0x34))(0x48);
    }
    else {
      puVar29 = (undefined4 *)0xdc;
      fVar27 = 9.24857e-44;
      (**(code **)(**(int **)(param_1 + 0x11e) + 0x34))(0x42);
    }
    iVar6 = 0;
    (**(code **)(*(int *)(*(int *)(param_1 + 0x11e) + 0x12) + 0x10))();
    goto LAB_00634779;
  }
  if (*(char *)(param_1 + 0x170) == '\0') {
    if (DAT_00dc1960 == '\0') {
      puVar29 = (undefined4 *)0xe0;
      fVar27 = 8.96831e-44;
      (**(code **)(**(int **)(param_1 + 0x12a) + 0x14))(0x40);
      iVar6 = 0x110;
      (**(code **)(**(int **)(param_1 + 0x12e) + 0x14))();
      fVar30 = 3.82554e-43;
      (**(code **)(**(int **)(param_1 + 0x10e) + 0x34))(0x53,0x111);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x10e) + 0x12) + 0x10))(0);
      (**(code **)(**(int **)(param_1 + 0x136) + 0x14))(0x1b8,0x270);
      (**(code **)(**(int **)(param_1 + 0x13a) + 0x14))(0x50,0x270);
      FUN_0042b6c9();
      FUN_007a630a(&pcStack_2d8);
      FUN_004133fd(&pcStack_2d8,0x54,0x1ed,DAT_00bd1bac,uVar5,0);
      (**(code **)(**(int **)(param_1 + 0x1ca) + 0x14))();
      (**(code **)(**(int **)(param_1 + 0x1ce) + 0x14))();
      FUN_007a630a();
      FUN_004132d0(&fStack_2e8,0x105,0x1ea,DAT_00bd1bac,uVar5,0);
      FUN_0042b6c9();
      FUN_007a630a(&fStack_2e8);
      FUN_004133fd(&fStack_2e8,0x54,0x201,DAT_00bd1bac,uVar5,0);
      uVar19 = 0x1fc00000121;
      (**(code **)(**(int **)(param_1 + 0x1d2) + 0x14))();
      (**(code **)(**(int **)(param_1 + 0x1d6) + 0x14))(0xd1,0x1fc);
      FUN_007a630a();
      FUN_004132d0(&iStack_2f8,0x105,0x1fe,DAT_00bd1bac,uVar5,0);
      if ((float)*(int *)(param_1 + 0x14a) * (float)*(int *)(param_1 + 0x14e) *
          *(float *)(param_1 + 0x164) <= *(float *)(*(int *)(param_1 + 0x90) + 0x39cc)) {
        fVar33 = *(float *)(*(int *)(param_1 + 0xce) + 0xa0);
        fVar16 = (float10)FUN_0044ab50();
        fVar30 = (float)((float10)*(int *)(param_1 + 0x14e) * (float10)*(float *)(param_1 + 0x160) +
                        fVar16);
        iVar15 = FUN_0044ab40();
        if (fVar30 <= (float)iVar15 * fVar33 * _DAT_007e68d0) {
          piVar9 = *(int **)(param_1 + 0x9a6);
          goto LAB_00631607;
        }
        (**(code **)(**(int **)(param_1 + 0x9aa) + 0x14))(0x50,0x21d);
      }
      else {
        piVar9 = *(int **)(param_1 + 0x9ae);
LAB_00631607:
        (**(code **)(*piVar9 + 0x14))(0x50,0x21d);
      }
      FUN_0042b6c9(s_PRODIW_DATE_00860efc);
      FUN_007a630a();
      FUN_004133fd(&fStack_300,0x54,0x21f,DAT_00bd1bac,fVar30,0);
      dVar21 = (double)((float)*(int *)(param_1 + 0x14e) * *(float *)(param_1 + 0x160));
      uVar13 = FUN_0042b6c9();
      FUN_007a630a(&fStack_300,uVar13,dVar21);
      FUN_004133fd(&fStack_300,0x54,0x22d,DAT_00bd1bac,fVar30,0);
      dVar21 = (double)((float)*(int *)(param_1 + 0x14a) * (float)*(int *)(param_1 + 0x14e) *
                       *(float *)(param_1 + 0x164));
      uVar13 = FUN_0042b6c9();
      FUN_007a630a(&fStack_300,uVar13,dVar21);
      uVar18 = CONCAT44(DAT_00bd1bac,0x23b);
      uVar13 = 0x54;
    }
    else {
      puVar29 = (undefined4 *)0xcc;
      fVar27 = 2.8026e-44;
      (**(code **)(**(int **)(param_1 + 0x12a) + 0x14))(0x14);
      iVar6 = 0xd4;
      (**(code **)(**(int **)(param_1 + 0x12e) + 0x14))();
      fVar30 = 3.0268e-43;
      (**(code **)(**(int **)(param_1 + 0x10e) + 0x34))(0x22,0xd8);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x10e) + 0x12) + 0x10))(0);
      (**(code **)(**(int **)(param_1 + 0x13a) + 0x14))(0x122,0x2d2);
      (**(code **)(**(int **)(param_1 + 0x136) + 0x14))(0x206,0x2d2);
      FUN_0042b6c9();
      FUN_007a630a(&pcStack_2d8);
      FUN_004133fd(&pcStack_2d8,0x128,0x265,DAT_00bd1bac,uVar5,0);
      (**(code **)(**(int **)(param_1 + 0x1ca) + 0x14))();
      (**(code **)(**(int **)(param_1 + 0x1ce) + 0x14))();
      FUN_007a630a();
      FUN_004132d0(&fStack_2e8,0x1d7,0x262,DAT_00bd1bac,uVar5,0);
      FUN_0042b6c9();
      FUN_007a630a(&fStack_2e8);
      FUN_004133fd(&fStack_2e8,0x128,0x279,DAT_00bd1bac,uVar5,0);
      uVar19 = 0x274000001f3;
      (**(code **)(**(int **)(param_1 + 0x1d2) + 0x14))();
      (**(code **)(**(int **)(param_1 + 0x1d6) + 0x14))(0x1a3,0x274);
      FUN_007a630a();
      FUN_004132d0(&iStack_2f8,0x1d7,0x276,DAT_00bd1bac,uVar5,0);
      if ((float)*(int *)(param_1 + 0x14a) * (float)*(int *)(param_1 + 0x14e) *
          *(float *)(param_1 + 0x164) <= *(float *)(*(int *)(param_1 + 0x90) + 0x39cc)) {
        fVar33 = *(float *)(*(int *)(param_1 + 0xce) + 0xa0);
        fVar16 = (float10)FUN_0044ab50();
        fVar30 = (float)((float10)*(int *)(param_1 + 0x14e) * (float10)*(float *)(param_1 + 0x160) +
                        fVar16);
        iVar15 = FUN_0044ab40();
        if (fVar30 <= (float)iVar15 * fVar33 * _DAT_007e68d0) {
          piVar9 = *(int **)(param_1 + 0x9a6);
          goto LAB_00631285;
        }
        (**(code **)(**(int **)(param_1 + 0x9aa) + 0x14))(0x124,0x28e);
      }
      else {
        piVar9 = *(int **)(param_1 + 0x9ae);
LAB_00631285:
        (**(code **)(*piVar9 + 0x14))(0x124,0x28e);
      }
      FUN_0042b6c9(s_PRODIW_DATE_00860efc);
      FUN_007a630a();
      FUN_004133fd(&fStack_300,0x128,0x290,DAT_00bd1bac,fVar30,0);
      dVar21 = (double)((float)*(int *)(param_1 + 0x14e) * *(float *)(param_1 + 0x160));
      uVar13 = FUN_0042b6c9();
      FUN_007a630a(&fStack_300,uVar13,dVar21);
      FUN_004133fd(&fStack_300,0x128,0x29e,DAT_00bd1bac,fVar30,0);
      dVar21 = (double)((float)*(int *)(param_1 + 0x14a) * (float)*(int *)(param_1 + 0x14e) *
                       *(float *)(param_1 + 0x164));
      uVar13 = FUN_0042b6c9();
      FUN_007a630a(&fStack_300,uVar13,dVar21);
      uVar18 = CONCAT44(DAT_00bd1bac,0x2ac);
      uVar13 = 0x128;
    }
    FUN_004133fd(&fStack_300,uVar13,uVar18,fVar30);
    piVar9 = *(int **)(DAT_00d0ca90 + 0x3b7e);
    while (piVar9 != (int *)0x0) {
      piVar25 = (int *)piVar9[2];
      piVar24 = (int *)*piVar9;
      piVar9 = piVar25;
      if ((piVar24 != (int *)0x0) &&
         ((cVar4 = (**(code **)(*piVar24 + 0x18))(), cVar4 == '\0' ||
          (piVar9 = piVar25, *(int *)(param_1 + 0x126) != 3)))) {
        (**(code **)(*piVar24 + 0x14))();
        piVar9 = piVar25;
      }
    }
    FUN_0042b6c9(s_ALREADY_UNDERDEV_00860ec8);
    FUN_007a630a();
    if (DAT_00dc1960 == '\0') {
      uVar22 = CONCAT44(DAT_00bd1bac,0x24e);
      uVar18 = CONCAT44(0x54,&fStack_300);
    }
    else {
      uVar22 = CONCAT44(DAT_00bd1bac,0x2c0);
      uVar18 = CONCAT44(0x128,&fStack_300);
    }
    FUN_004133fd(uVar18,uVar22,uVar5,0);
    FUN_00638070();
    if (*(int *)(param_1 + 0x126) == 3) {
      piVar9 = (int *)FUN_0044c5b0(*(undefined4 *)(param_1 + 0x142),
                                   CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 0x146)));
      piVar25 = *(int **)(param_1 + 0x1fa);
      *(int **)(param_1 + 0x132) = piVar25;
      if (piVar25 != (int *)0x0) {
        (**(code **)(*piVar25 + 0x38))();
        if (DAT_00dc1960 != '\0') {
          iVar15 = **(int **)(param_1 + 0x132);
          goto LAB_0063197d;
        }
        (**(code **)(**(int **)(param_1 + 0x132) + 0x14))();
      }
    }
    else {
      piVar9 = (int *)FUN_0044c3d0(*(undefined4 *)(param_1 + 0x13e),
                                   CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x146)));
      iVar15 = *(int *)(*(int *)(DAT_00d0ca90 + 0x452e) +
                       ((&DAT_00d7d48c)[*(int *)(param_1 + 0x13e) * 2] + *(int *)(param_1 + 0x146))
                       * 4);
      if ((iVar15 != 0) && (*(int **)(param_1 + 0x1ae) != (int *)0x0)) {
        *(int *)(param_1 + 0x132) = iVar15;
        iVar15 = **(int **)(param_1 + 0x1ae);
        if (DAT_00dc1960 == '\0') {
          (**(code **)(iVar15 + 0x14))(0x15a,0x180);
          iVar15 = *piVar9;
        }
        else {
          (**(code **)(iVar15 + 0x14))(0x226,0x28e);
          iVar15 = *piVar9;
        }
LAB_0063197d:
        (**(code **)(iVar15 + 0x14))();
      }
    }
    iVar15 = *(int *)(param_1 + 0x126);
    if (((iVar15 == 0) || (iVar15 == 1)) || (iVar15 == 2)) {
      iVar15 = 0;
      if (0 < DAT_008776b0) {
        iVar26 = param_1 + 0x1fe;
        do {
          (**(code **)(**(int **)(iVar26 + 0x230) + 0x10))();
          (**(code **)(*(int *)*piVar9 + 0x10))(0);
          (**(code **)(**(int **)((int)((ulonglong)uVar19 >> 0x20) + 0x460) + 0x10))();
          iVar15 = iVar15 + 1;
          iVar26 = iVar26 + 4;
        } while (iVar15 < DAT_008776b0);
      }
      iVar15 = FUN_004a5c30();
      if (0 < iVar15) {
        if (*(int *)(param_1 + 0x126) == 0) {
          FUN_004a5c30();
          FUN_0042b6c9(s_EXTRA_LAND_00860ebc);
LAB_00631a9a:
          FUN_007a630a();
        }
        else if (*(int *)(param_1 + 0x126) == 2) {
          FUN_004a5c30();
          FUN_0042b6c9(s_EXTRA_NAVAL_00860eb0);
          goto LAB_00631a9a;
        }
        if (*(int *)(param_1 + 0x126) == 1) {
          FUN_004a5c30();
          FUN_0042b6c9(s_EXTRA_AIR_00860ea4);
          FUN_007a630a();
        }
        if (DAT_00dc1960 == '\0') {
          uVar19 = CONCAT44(DAT_00bd1bac,0x1ad);
          uVar13 = 0x53;
        }
        else {
          uVar19 = CONCAT44(DAT_00bd1bac,0x2aa);
          uVar13 = 0x22;
        }
        FUN_004133fd(&fStack_300,uVar13,uVar19,fStack_340,0);
      }
    }
    cVar4 = (**(code **)(*piVar9 + 0xc))();
    uVar17 = uVar5;
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(*piVar7 + 0x10))();
      if (cVar4 == '\0') {
        cVar4 = (**(code **)(*piVar7 + 0x14))();
        if (cVar4 == '\0') goto LAB_00634779;
        fStack_304 = 0.0;
        fVar30 = 0.0;
        fVar33 = 0.0;
        pcStack_338 = (char *)0x0;
        fStack_328 = 0.0;
        fStack_32c = 0.0;
        fStack_31c = 0.0;
        fStack_314 = 0.0;
        pcStack_320 = (char *)0x0;
        fStack_324 = 0.0;
        pcStack_308 = (char *)0x0;
        fStack_318 = 0.0;
        fStack_340 = 1e+06;
        fStack_310 = 0.0;
        fStack_30c = 0.0;
        fStack_334 = 0.0;
        if (0 < DAT_008776b0) {
          do {
            if (*(char *)((int)fStack_334 + 0x91a + param_1) != '\0') {
              uVar13 = FUN_0044c4a0();
              pcStack_2f0 = (char *)FUN_0044c5b0(fStack_334,uVar13);
              fVar31 = *(float *)(pcStack_2f0 + 0x24);
              fStack_300 = *(float *)(pcStack_2f0 + 0x28);
              fStack_2fc = *(float *)(pcStack_2f0 + 0xa8);
              fStack_2e0 = *(float *)(pcStack_2f0 + 0x54);
              fStack_2e8 = *(float *)(pcStack_2f0 + 0x58);
              fStack_1b8 = *(float *)(pcStack_2f0 + 0xac);
              fVar32 = *(float *)(pcStack_2f0 + 0x2c);
              fStack_33c = *(float *)(pcStack_2f0 + 0xa4);
              fStack_2d4 = *(float *)(pcStack_2f0 + 0x30);
              fStack_2e4 = *(float *)(pcStack_2f0 + 0x18);
              fStack_2dc = *(float *)(pcStack_2f0 + 0x1c);
              fStack_2ec = *(float *)(pcStack_2f0 + 0x20);
              fStack_2d0 = *(float *)(pcStack_2f0 + 0x74);
              pcStack_2d8 = *(char **)(pcStack_2f0 + 0x78);
              iVar15 = FUN_0044c630();
              fStack_304 = fVar31 + fStack_304 + *(float *)(iVar15 + 0x24);
              fVar30 = fStack_300 + fVar30 + *(float *)(iVar15 + 0x28);
              fVar33 = fStack_2fc + fVar33 + *(float *)(iVar15 + 0xa8);
              pcStack_338 = (char *)(fStack_2e0 + (float)pcStack_338 + *(float *)(iVar15 + 0x54));
              fStack_328 = fStack_2e8 + fStack_328 + *(float *)(iVar15 + 0x58);
              fStack_32c = fStack_1b8 + fStack_32c + *(float *)(iVar15 + 0xac);
              fStack_31c = fVar32 + fStack_31c + *(float *)(iVar15 + 0x2c);
              fStack_314 = fStack_33c + fStack_314 + *(float *)(iVar15 + 0xa4);
              pcStack_320 = (char *)(fStack_2d4 + (float)pcStack_320 + *(float *)(iVar15 + 0x30));
              fStack_324 = fStack_2e4 + fStack_324 + *(float *)(iVar15 + 0x18);
              pcStack_308 = (char *)(fStack_2dc + (float)pcStack_308 + *(float *)(iVar15 + 0x1c));
              fStack_318 = fStack_2ec + fStack_318 + *(float *)(iVar15 + 0x20);
              fStack_310 = fStack_2d0 + fStack_310 + *(float *)(iVar15 + 0x74);
              fStack_30c = (float)pcStack_2d8 + fStack_30c + *(float *)(iVar15 + 0x78);
              fVar31 = *(float *)(iVar15 + 0x9c) + *(float *)(pcStack_2f0 + 0x9c);
              if ((_DAT_007e3380 < fVar31) && (fVar31 < fStack_340)) {
                fStack_340 = fVar31;
              }
            }
            fStack_334 = (float)((int)fStack_334 + 1);
          } while ((int)fStack_334 < DAT_008776b0);
        }
        fStack_334 = *(float *)(*(int *)(DAT_00d0ca90 + 0x244) + 0x3e);
        if (*(int *)(param_1 + 0x126) == 3) {
          uVar13 = FUN_0044c4a0();
          iVar15 = FUN_0044c5b0(*(undefined4 *)(param_1 + 0x142),uVar13);
          iVar26 = FUN_0044c630();
          fVar32 = *(float *)(iVar26 + 0x24) + fStack_304;
          fVar30 = *(float *)(iVar26 + 0x28) + fVar30;
          fVar33 = *(float *)(iVar26 + 0xa8) + fVar33;
          pcStack_338 = (char *)(*(float *)(iVar26 + 0x54) + (float)pcStack_338);
          fStack_328 = *(float *)(iVar26 + 0x58) + fStack_328;
          fStack_32c = *(float *)(iVar26 + 0xac) + fStack_32c;
          fStack_31c = *(float *)(iVar26 + 0x2c) + fStack_31c;
          fStack_314 = *(float *)(iVar26 + 0xa4) + fStack_314;
          pcStack_320 = (char *)(*(float *)(iVar26 + 0x30) + (float)pcStack_320);
          fStack_324 = *(float *)(iVar26 + 0x18) + fStack_324;
          pcStack_308 = (char *)(*(float *)(iVar26 + 0x1c) + (float)pcStack_308);
          fStack_318 = *(float *)(iVar26 + 0x20) + fStack_318;
          fStack_310 = *(float *)(iVar26 + 0x74) + fStack_310;
          fStack_30c = *(float *)(iVar26 + 0x78) + fStack_30c;
          fVar31 = *(float *)(iVar26 + 0x9c) + *(float *)(iVar15 + 0x9c);
          if ((_DAT_007e3380 < fVar31) && (fVar31 < fStack_340)) {
            fStack_340 = fVar31;
          }
          fVar31 = *(float *)(DAT_00d0ca90 + 0x127c0 + *(int *)(param_1 + 0x142) * 0x18);
        }
        else {
          iVar15 = FUN_0044c620();
          fVar32 = *(float *)(iVar15 + 0x24) + fStack_304;
          fVar30 = *(float *)(iVar15 + 0x28) + fVar30;
          fVar33 = *(float *)(iVar15 + 0xa8) + fVar33;
          pcStack_338 = (char *)(*(float *)(iVar15 + 0x54) + (float)pcStack_338);
          fStack_328 = *(float *)(iVar15 + 0x58) + fStack_328;
          fStack_32c = *(float *)(iVar15 + 0xac) + fStack_32c;
          fStack_31c = *(float *)(iVar15 + 0x2c) + fStack_31c;
          fStack_314 = *(float *)(iVar15 + 0xa4) + fStack_314;
          pcStack_320 = (char *)(*(float *)(iVar15 + 0x30) + (float)pcStack_320);
          fStack_324 = *(float *)(iVar15 + 0x18) + fStack_324;
          pcStack_308 = (char *)(*(float *)(iVar15 + 0x1c) + (float)pcStack_308);
          fStack_318 = *(float *)(iVar15 + 0x20) + fStack_318;
          fStack_310 = *(float *)(iVar15 + 0x74) + fStack_310;
          fStack_30c = *(float *)(iVar15 + 0x78) + fStack_30c;
          fVar31 = *(float *)(iVar15 + 0x9c) + *(float *)((int)fVar23 + 0x140);
          if (fVar31 < fStack_340) {
            fStack_340 = fVar31;
          }
          fVar31 = *(float *)(DAT_00d0ca90 + 0x11aa0 + *(int *)((int)fVar23 + 0xa8) * 0x18);
        }
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x180;
        fVar31 = (*(float *)((int)fVar23 + 200) + fVar32) * (fVar31 + _DAT_007e3374) * fStack_334;
        uVar13 = DAT_00bd1bac;
        iVar15 = iVar34;
        uVar8 = FUN_0042b6c9(s_BINFO_ORG_00849fbc);
        FUN_00413369(uVar8,iVar34,uVar28,uVar13,uVar20);
        iVar34 = __ftol();
        pcVar10 = s___f____0085ae34;
        if ((float)iVar34 != fVar31) {
          pcVar10 = s___2f____0085d104;
        }
        FUN_007a630a(apiStack_2b8,pcVar10,(double)fVar31);
        iVar34 = iVar15 + 8;
        FUN_004133fd(apiStack_2b8,iVar34,0x180,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0xcc) + fVar30;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x18e;
        uVar13 = DAT_00bd1bac;
        iVar26 = iVar15;
        uVar8 = FUN_0042b6c9(s_BINFO_MOR_00849fb0);
        FUN_00413369(uVar8,iVar15,uVar28,uVar13,uVar20);
        iVar15 = __ftol();
        pcVar10 = s___f____0085ae34;
        if ((float)iVar15 != fVar30) {
          pcVar10 = s___2f____0085d104;
        }
        FUN_007a630a(apiStack_2b8,pcVar10,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x18e,DAT_00bd1bac,uVar5,0);
        fVar33 = *(float *)((int)fVar23 + 0x14c) + fVar33;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x19c;
        uVar13 = DAT_00bd1bac;
        iVar15 = iVar26;
        uVar8 = FUN_0042b6c9(s_BINFO_STR_0084a028);
        FUN_00413369(uVar8,iVar26,uVar28,uVar13,uVar20);
        iVar26 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar26 != fVar33) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar33);
        FUN_004133fd(apiStack_2b8,iVar34,0x19c,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0xf8) + (float)pcStack_338;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x1aa;
        uVar13 = DAT_00bd1bac;
        iVar26 = iVar15;
        uVar8 = FUN_0042b6c9(s_BINFO_SA_00849f8c);
        FUN_00413369(uVar8,iVar15,uVar28,uVar13,uVar20);
        iVar15 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar15 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x1aa,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0xfc) + fStack_328;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x1b8;
        uVar13 = DAT_00bd1bac;
        iVar15 = iVar26;
        uVar8 = FUN_0042b6c9(s_BINFO_HA_00849f98);
        FUN_00413369(uVar8,iVar26,uVar28,uVar13,uVar20);
        iVar26 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar26 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x1b8,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0x150) + fStack_32c;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x1c6;
        uVar13 = DAT_00bd1bac;
        iVar26 = iVar15;
        uVar8 = FUN_0042b6c9(s_BINFO_NAV_0084a034);
        FUN_00413369(uVar8,iVar15,uVar28,uVar13,uVar20);
        iVar15 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar15 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x1c6,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0xd0) + fStack_31c;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x1d4;
        uVar13 = DAT_00bd1bac;
        iVar15 = iVar26;
        uVar8 = FUN_0042b6c9(s_BINFO_AA_00849f80);
        FUN_00413369(uVar8,iVar26,uVar28,uVar13,uVar20);
        iVar26 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar26 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x1d4,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0x148) + fStack_314;
        uVar13 = FUN_0042b6c9();
        FUN_00413369(uVar13,iVar15,0x1e2,DAT_00bd1bac,uVar5,0);
        iVar26 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar26 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x1e2,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0xd4) + (float)pcStack_320;
        uVar13 = FUN_0042b6c9();
        FUN_00413369(uVar13,iVar15,0x1f0,DAT_00bd1bac,uVar5,0);
        iVar26 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar26 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x1f0,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0xbc) + fStack_324;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x1fe;
        uVar13 = DAT_00bd1bac;
        iVar26 = iVar15;
        uVar8 = FUN_0042b6c9(s_BINFO_MS_00849eec);
        FUN_00413369(uVar8,iVar15,uVar28,uVar13,uVar20);
        iVar15 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar15 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x1fe,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0xc0) + (float)pcStack_308;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x20c;
        uVar13 = DAT_00bd1bac;
        iVar15 = iVar26;
        uVar8 = FUN_0042b6c9(s_BINFO_SU_00849e8c);
        FUN_00413369(uVar8,iVar26,uVar28,uVar13,uVar20);
        iVar26 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar26 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x20c,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0xc4) + fStack_318;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x21a;
        uVar13 = DAT_00bd1bac;
        iVar26 = iVar15;
        uVar8 = FUN_0042b6c9(s_BINFO_FU_00849e80);
        FUN_00413369(uVar8,iVar15,uVar28,uVar13,uVar20);
        iVar15 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar15 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x21a,DAT_00bd1bac,uVar5,0);
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x228;
        uVar13 = DAT_00bd1bac;
        iVar15 = iVar26;
        uVar8 = FUN_0042b6c9(s_BINFO_RANGE_00849fe0);
        FUN_00413369(uVar8,iVar26,uVar28,uVar13,uVar20);
        iVar26 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar26 != fStack_340) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fStack_340);
        FUN_004133fd(apiStack_2b8,iVar34,0x228,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0x118) + fStack_310;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x236;
        uVar13 = DAT_00bd1bac;
        iVar26 = iVar15;
        uVar8 = FUN_0042b6c9(s_BINFO_SDC_00849fec);
        FUN_00413369(uVar8,iVar15,uVar28,uVar13,uVar20);
        iVar15 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar15 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x236,DAT_00bd1bac,uVar5,0);
        fVar23 = *(float *)((int)fVar23 + 0x11c) + fStack_30c;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x244;
        uVar13 = DAT_00bd1bac;
        uVar8 = FUN_0042b6c9(s_BINFO_ADC_00849ff8);
        FUN_00413369(uVar8,iVar26,uVar28,uVar13,uVar20);
        pcStack_350 = (char *)__ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)(int)pcStack_350 != fVar23) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar23);
        uVar13 = 0x244;
      }
      else {
        fVar30 = 0.0;
        fStack_328 = 0.0;
        fStack_32c = 0.0;
        fStack_31c = 0.0;
        fStack_314 = 0.0;
        pcStack_320 = (char *)0x0;
        fStack_324 = 0.0;
        pcStack_308 = (char *)0x0;
        fStack_318 = 0.0;
        fStack_310 = 0.0;
        fStack_30c = 0.0;
        fStack_334 = 0.0;
        fStack_304 = 0.0;
        fStack_340 = 0.0;
        pcStack_338 = (char *)0x0;
        fVar33 = 0.0;
        fVar31 = 0.0;
        iVar15 = 0;
        if (0 < DAT_008776b0) {
          do {
            if (*(char *)(param_1 + 0x91a + iVar15) != '\0') {
              uVar13 = FUN_0044c4a0();
              iVar26 = FUN_0044c5b0(iVar15,uVar13);
              fStack_33c = *(float *)(iVar26 + 0x24);
              fStack_2d4 = *(float *)(iVar26 + 0x28);
              fStack_2e4 = *(float *)(iVar26 + 0x88);
              fStack_2dc = *(float *)(iVar26 + 0x90);
              fStack_2ec = *(float *)(iVar26 + 0x2c);
              fStack_2d0 = *(float *)(iVar26 + 0x94);
              pcStack_2d8 = *(char **)(iVar26 + 0x84);
              pcStack_2f0 = *(char **)(iVar26 + 0x30);
              fVar32 = *(float *)(iVar26 + 0x18);
              fVar1 = *(float *)(iVar26 + 0x1c);
              fVar2 = *(float *)(iVar26 + 0x20);
              fStack_1b8 = *(float *)(iVar26 + 0x9c);
              fStack_2e8 = *(float *)(iVar26 + 0x74);
              fStack_2e0 = *(float *)(iVar26 + 0x78);
              fStack_2fc = *(float *)(iVar26 + 0x7c);
              fStack_300 = *(float *)(iVar26 + 0x8c);
              fVar3 = *(float *)(iVar26 + 0xa0);
              iVar26 = FUN_0044c630();
              fVar30 = fStack_33c + fVar30 + *(float *)(iVar26 + 0x24);
              fStack_328 = fStack_2d4 + fStack_328 + *(float *)(iVar26 + 0x28);
              fStack_32c = fStack_2e4 + fStack_32c + *(float *)(iVar26 + 0x88);
              fStack_31c = fStack_2dc + fStack_31c + *(float *)(iVar26 + 0x90);
              fStack_314 = fStack_2ec + fStack_314 + *(float *)(iVar26 + 0x2c);
              pcStack_320 = (char *)(fStack_2d0 + (float)pcStack_320 + *(float *)(iVar26 + 0x94));
              fStack_324 = (float)pcStack_2d8 + fStack_324 + *(float *)(iVar26 + 0x84);
              pcStack_308 = (char *)((float)pcStack_2f0 + (float)pcStack_308 +
                                    *(float *)(iVar26 + 0x30));
              fStack_318 = fVar32 + fStack_318 + *(float *)(iVar26 + 0x18);
              fStack_310 = fVar1 + fStack_310 + *(float *)(iVar26 + 0x1c);
              fStack_30c = fVar2 + fStack_30c + *(float *)(iVar26 + 0x20);
              fStack_334 = fStack_1b8 + fStack_334 + *(float *)(iVar26 + 0x9c);
              fStack_304 = fStack_2e8 + fStack_304 + *(float *)(iVar26 + 0x74);
              fStack_340 = fStack_2e0 + fStack_340 + *(float *)(iVar26 + 0x78);
              pcStack_338 = (char *)(fStack_2fc + (float)pcStack_338 + *(float *)(iVar26 + 0x7c));
              fVar33 = fStack_300 + fVar33 + *(float *)(iVar26 + 0x8c);
              fVar31 = fVar3 + fVar31 + *(float *)(iVar26 + 0xa0);
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < DAT_008776b0);
        }
        fVar32 = *(float *)(*(int *)(DAT_00d0ca90 + 0x244) + 0x3e);
        if (*(int *)(param_1 + 0x126) == 3) {
          iVar15 = FUN_0044c630();
          fVar30 = *(float *)(iVar15 + 0x24) + fVar30;
          fStack_328 = *(float *)(iVar15 + 0x28) + fStack_328;
          fStack_32c = *(float *)(iVar15 + 0x88) + fStack_32c;
          fStack_31c = *(float *)(iVar15 + 0x90) + fStack_31c;
          fStack_314 = *(float *)(iVar15 + 0x2c) + fStack_314;
          pcStack_320 = (char *)(*(float *)(iVar15 + 0x94) + (float)pcStack_320);
          fStack_324 = *(float *)(iVar15 + 0x84) + fStack_324;
          pcStack_308 = (char *)(*(float *)(iVar15 + 0x30) + (float)pcStack_308);
          fStack_318 = *(float *)(iVar15 + 0x18) + fStack_318;
          fStack_310 = *(float *)(iVar15 + 0x1c) + fStack_310;
          fStack_30c = *(float *)(iVar15 + 0x20) + fStack_30c;
          fStack_334 = *(float *)(iVar15 + 0x9c) + fStack_334;
          fStack_304 = *(float *)(iVar15 + 0x74) + fStack_304;
          fStack_340 = *(float *)(iVar15 + 0x78) + fStack_340;
          pcStack_338 = (char *)(*(float *)(iVar15 + 0x7c) + (float)pcStack_338);
          fVar33 = *(float *)(iVar15 + 0x8c) + fVar33;
          fVar31 = *(float *)(iVar15 + 0xa0) + fVar31;
          fVar1 = *(float *)(DAT_00d0ca90 + 0x127c0 + *(int *)(param_1 + 0x142) * 0x18);
        }
        else {
          iVar15 = FUN_0044c620();
          fVar30 = *(float *)(iVar15 + 0x24) + fVar30;
          fStack_328 = *(float *)(iVar15 + 0x28) + fStack_328;
          fStack_32c = *(float *)(iVar15 + 0x88) + fStack_32c;
          fStack_31c = *(float *)(iVar15 + 0x90) + fStack_31c;
          fStack_314 = *(float *)(iVar15 + 0x2c) + fStack_314;
          pcStack_320 = (char *)(*(float *)(iVar15 + 0x94) + (float)pcStack_320);
          fStack_324 = *(float *)(iVar15 + 0x84) + fStack_324;
          pcStack_308 = (char *)(*(float *)(iVar15 + 0x30) + (float)pcStack_308);
          fStack_318 = *(float *)(iVar15 + 0x18) + fStack_318;
          fStack_310 = *(float *)(iVar15 + 0x1c) + fStack_310;
          fStack_30c = *(float *)(iVar15 + 0x20) + fStack_30c;
          fStack_334 = *(float *)(iVar15 + 0x9c) + fStack_334;
          fStack_304 = *(float *)(iVar15 + 0x74) + fStack_304;
          fStack_340 = *(float *)(iVar15 + 0x78) + fStack_340;
          pcStack_338 = (char *)(*(float *)(iVar15 + 0x7c) + (float)pcStack_338);
          fVar33 = *(float *)(iVar15 + 0x8c) + fVar33;
          fVar31 = *(float *)(iVar15 + 0xa0) + fVar31;
          fVar1 = *(float *)(DAT_00d0ca90 + 0x11aa0 + *(int *)((int)fVar23 + 0xa8) * 0x18);
        }
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x180;
        fVar30 = (*(float *)((int)fVar23 + 200) + fVar30) * (fVar1 + _DAT_007e3374) * fVar32;
        uVar13 = DAT_00bd1bac;
        iVar15 = iVar34;
        uVar8 = FUN_0042b6c9(s_BINFO_ORG_00849fbc);
        FUN_00413369(uVar8,iVar34,uVar28,uVar13,uVar20);
        iVar34 = __ftol();
        pcVar10 = s___f____0085ae34;
        if ((float)iVar34 != fVar30) {
          pcVar10 = s___2f____0085d104;
        }
        FUN_007a630a(apiStack_2b8,pcVar10,(double)fVar30);
        iVar34 = iVar15 + 8;
        FUN_004133fd(apiStack_2b8,iVar34,0x180,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0xcc) + fStack_328;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x18c;
        uVar13 = DAT_00bd1bac;
        iVar26 = iVar15;
        uVar8 = FUN_0042b6c9(s_BINFO_MOR_00849fb0);
        FUN_00413369(uVar8,iVar15,uVar28,uVar13,uVar20);
        iVar15 = __ftol();
        pcVar10 = s___f____0085ae34;
        if ((float)iVar15 != fVar30) {
          pcVar10 = s___2f____0085d104;
        }
        FUN_007a630a(apiStack_2b8,pcVar10,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x18c,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 300) + fStack_32c;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x198;
        uVar13 = DAT_00bd1bac;
        iVar15 = iVar26;
        uVar8 = FUN_0042b6c9(s_BINFO_SEA_0084a09c);
        FUN_00413369(uVar8,iVar26,uVar28,uVar13,uVar20);
        iVar26 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar26 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x198,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0x134) + fStack_31c;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x1a4;
        uVar13 = DAT_00bd1bac;
        iVar26 = iVar15;
        uVar8 = FUN_0042b6c9(s_BINFO_SCA_0084a084);
        FUN_00413369(uVar8,iVar15,uVar28,uVar13,uVar20);
        iVar15 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar15 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x1a4,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0xd0) + fStack_314;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x1b0;
        uVar13 = DAT_00bd1bac;
        iVar15 = iVar26;
        uVar8 = FUN_0042b6c9(s_BINFO_AA_00849f80);
        FUN_00413369(uVar8,iVar26,uVar28,uVar13,uVar20);
        iVar26 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar26 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x1b0,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0x138) + (float)pcStack_320;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x1bc;
        uVar13 = DAT_00bd1bac;
        iVar26 = iVar15;
        uVar8 = FUN_0042b6c9(s_BINFO_SHOR_0084a078);
        FUN_00413369(uVar8,iVar15,uVar28,uVar13,uVar20);
        iVar15 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar15 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x1bc,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0x128) + fStack_324;
        uVar13 = FUN_0042b6c9();
        FUN_00413369(uVar13,iVar26,0x1c8,DAT_00bd1bac,uVar5,0);
        iVar15 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar15 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x1c8,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0xd4) + (float)pcStack_308;
        uVar13 = FUN_0042b6c9();
        FUN_00413369(uVar13,iVar26,0x1d4,DAT_00bd1bac,uVar5,0);
        iVar15 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar15 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x1d4,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0xbc) + fStack_318;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x1e0;
        uVar13 = DAT_00bd1bac;
        iVar15 = iVar26;
        uVar8 = FUN_0042b6c9(s_BINFO_MS_00849eec);
        FUN_00413369(uVar8,iVar26,uVar28,uVar13,uVar20);
        iVar26 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar26 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x1e0,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0xc0) + fStack_310;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x1ec;
        uVar13 = DAT_00bd1bac;
        iVar26 = iVar15;
        uVar8 = FUN_0042b6c9(s_BINFO_SU_00849e8c);
        FUN_00413369(uVar8,iVar15,uVar28,uVar13,uVar20);
        iVar15 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar15 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x1ec,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0xc4) + fStack_30c;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x1f8;
        uVar13 = DAT_00bd1bac;
        iVar15 = iVar26;
        uVar8 = FUN_0042b6c9(s_BINFO_FU_00849e80);
        FUN_00413369(uVar8,iVar26,uVar28,uVar13,uVar20);
        iVar26 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar26 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x1f8,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0x140) + fStack_334;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x204;
        uVar13 = DAT_00bd1bac;
        iVar26 = iVar15;
        uVar8 = FUN_0042b6c9(s_BINFO_RANGE_00849fe0);
        FUN_00413369(uVar8,iVar15,uVar28,uVar13,uVar20);
        iVar15 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar15 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x204,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0x118) + fStack_304;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x210;
        uVar13 = DAT_00bd1bac;
        iVar15 = iVar26;
        uVar8 = FUN_0042b6c9(s_BINFO_SDC_00849fec);
        FUN_00413369(uVar8,iVar26,uVar28,uVar13,uVar20);
        iVar26 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar26 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x210,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0x11c) + fStack_340;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x21c;
        uVar13 = DAT_00bd1bac;
        iVar26 = iVar15;
        uVar8 = FUN_0042b6c9(s_BINFO_ADC_00849ff8);
        FUN_00413369(uVar8,iVar15,uVar28,uVar13,uVar20);
        iVar15 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar15 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x21c,DAT_00bd1bac,uVar5,0);
        fVar30 = *(float *)((int)fVar23 + 0x120) + (float)pcStack_338;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x228;
        uVar13 = DAT_00bd1bac;
        iVar15 = iVar26;
        uVar8 = FUN_0042b6c9(s_BINFO_SUC_0084a04c);
        FUN_00413369(uVar8,iVar26,uVar28,uVar13,uVar20);
        iVar26 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar26 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x228,DAT_00bd1bac,uVar5,0);
        fVar33 = *(float *)((int)fVar23 + 0x130) + fVar33;
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x234;
        uVar13 = DAT_00bd1bac;
        iVar26 = iVar15;
        uVar8 = FUN_0042b6c9(s_BINFO_SUA_0084a090);
        FUN_00413369(uVar8,iVar15,uVar28,uVar13,uVar20);
        iVar15 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar15 != fVar33) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar33);
        FUN_004133fd(apiStack_2b8,iVar34,0x234,DAT_00bd1bac,uVar5,0);
        uVar20 = (ulonglong)uVar5;
        fVar30 = *(float *)((int)fVar23 + 0x124);
        uVar28 = 0x240;
        uVar13 = DAT_00bd1bac;
        iVar15 = iVar26;
        uVar8 = FUN_0042b6c9(s_BINFO_VIS_0084a040);
        FUN_00413369(uVar8,iVar26,uVar28,uVar13,uVar20);
        iVar26 = __ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)iVar26 != fVar30) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
        FUN_004133fd(apiStack_2b8,iVar34,0x240,DAT_00bd1bac,uVar5,0);
        uVar20 = (ulonglong)uVar5;
        uVar28 = 0x24c;
        fVar23 = (*(float *)((int)fVar23 + 0x144) + fVar31) * _DAT_007e4088;
        uVar13 = DAT_00bd1bac;
        uVar8 = FUN_0042b6c9(s_BINFO_FD_0084a0a8);
        FUN_00413369(uVar8,iVar15,uVar28,uVar13,uVar20);
        pcStack_350 = (char *)__ftol();
        ppuVar11 = &PTR_PTR_0083c9e8;
        if ((float)(int)pcStack_350 != fVar23) {
          ppuVar11 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar23);
        uVar13 = 0x24c;
      }
    }
    else {
      fVar30 = 0.0;
      fStack_334 = 0.0;
      fStack_30c = 0.0;
      fStack_310 = 0.0;
      fStack_318 = 0.0;
      pcStack_308 = (char *)0x0;
      fStack_324 = 0.0;
      pcStack_320 = (char *)0x0;
      fStack_314 = 0.0;
      fStack_31c = 0.0;
      fStack_304 = 0.0;
      fStack_32c = 0.0;
      fStack_328 = 0.0;
      fStack_340 = 0.0;
      iVar15 = 0;
      if (0 < DAT_008776b0) {
        do {
          if (*(char *)(iVar15 + 0x91a + param_1) != '\0') {
            uVar13 = FUN_0044c4a0();
            iVar26 = FUN_0044c5b0(iVar15,uVar13);
            fVar33 = *(float *)(iVar26 + 0x24);
            pcStack_338 = *(char **)(iVar26 + 0x28);
            fVar31 = *(float *)(iVar26 + 0x4c);
            fVar32 = *(float *)(iVar26 + 0x58);
            fVar1 = *(float *)(iVar26 + 0x54);
            pcStack_2f0 = *(char **)(iVar26 + 0x2c);
            pcStack_2d8 = *(char **)(iVar26 + 0x44);
            fStack_2d0 = *(float *)(iVar26 + 0x48);
            fStack_2ec = *(float *)(iVar26 + 0x30);
            fStack_2dc = *(float *)(iVar26 + 0x50);
            fStack_2e4 = *(float *)(iVar26 + 0x18);
            fStack_2d4 = *(float *)(iVar26 + 0x1c);
            fStack_33c = *(float *)(iVar26 + 0x20);
            iVar26 = FUN_0044c630();
            fVar30 = fVar33 + fVar30 + *(float *)(iVar26 + 0x24);
            fStack_334 = (float)pcStack_338 + fStack_334 + *(float *)(iVar26 + 0x28);
            fStack_30c = fVar31 + fStack_30c + *(float *)(iVar26 + 0x4c);
            fStack_310 = fVar32 + fStack_310 + *(float *)(iVar26 + 0x58);
            fStack_318 = fVar1 + fStack_318 + *(float *)(iVar26 + 0x54);
            pcStack_308 = (char *)((float)pcStack_2f0 + (float)pcStack_308 +
                                  *(float *)(iVar26 + 0x2c));
            fStack_324 = (float)pcStack_2d8 + fStack_324 + *(float *)(iVar26 + 0x44);
            pcStack_320 = (char *)(fStack_2d0 + (float)pcStack_320 + *(float *)(iVar26 + 0x48));
            fStack_314 = fStack_2ec + fStack_314 + *(float *)(iVar26 + 0x30);
            fStack_31c = fStack_2dc + fStack_31c + *(float *)(iVar26 + 0x50);
            fStack_304 = fStack_2e4 + fStack_304 + *(float *)(iVar26 + 0x18);
            fStack_32c = fStack_2d4 + fStack_32c + *(float *)(iVar26 + 0x1c);
            fStack_328 = fStack_33c + fStack_328 + *(float *)(iVar26 + 0x20);
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < DAT_008776b0);
      }
      fVar33 = *(float *)(*(int *)(DAT_00d0ca90 + 0x244) + 0x3e);
      if (*(int *)(param_1 + 0x126) == 3) {
        iVar15 = FUN_0044c630();
        fVar30 = *(float *)(iVar15 + 0x24) + fVar30;
        fStack_334 = *(float *)(iVar15 + 0x28) + fStack_334;
        fStack_30c = *(float *)(iVar15 + 0x4c) + fStack_30c;
        fStack_310 = *(float *)(iVar15 + 0x58) + fStack_310;
        fStack_318 = *(float *)(iVar15 + 0x54) + fStack_318;
        pcStack_308 = (char *)(*(float *)(iVar15 + 0x2c) + (float)pcStack_308);
        fStack_324 = *(float *)(iVar15 + 0x44) + fStack_324;
        pcStack_320 = (char *)(*(float *)(iVar15 + 0x48) + (float)pcStack_320);
        fStack_314 = *(float *)(iVar15 + 0x30) + fStack_314;
        fStack_31c = *(float *)(iVar15 + 0x50) + fStack_31c;
        fStack_304 = *(float *)(iVar15 + 0x18) + fStack_304;
        fStack_32c = *(float *)(iVar15 + 0x1c) + fStack_32c;
        fStack_328 = *(float *)(iVar15 + 0x20) + fStack_328;
        fVar33 = (*(float *)(DAT_00d0ca90 + 0x127c0 + *(int *)(param_1 + 0x142) * 0x18) +
                 _DAT_007e3374) * fVar33;
      }
      else {
        iVar15 = FUN_0044c620();
        fVar30 = *(float *)(iVar15 + 0x24) + fVar30;
        fStack_334 = *(float *)(iVar15 + 0x28) + fStack_334;
        fStack_30c = *(float *)(iVar15 + 0x4c) + fStack_30c;
        fStack_310 = *(float *)(iVar15 + 0x58) + fStack_310;
        fStack_318 = *(float *)(iVar15 + 0x54) + fStack_318;
        pcStack_308 = (char *)(*(float *)(iVar15 + 0x2c) + (float)pcStack_308);
        fStack_324 = *(float *)(iVar15 + 0x44) + fStack_324;
        pcStack_320 = (char *)(*(float *)(iVar15 + 0x48) + (float)pcStack_320);
        fStack_314 = *(float *)(iVar15 + 0x30) + fStack_314;
        fStack_31c = *(float *)(iVar15 + 0x50) + fStack_31c;
        fStack_304 = *(float *)(iVar15 + 0x18) + fStack_304;
        fStack_32c = *(float *)(iVar15 + 0x1c) + fStack_32c;
        fStack_328 = *(float *)(iVar15 + 0x20) + fStack_328;
        fVar33 = (*(float *)(DAT_00d0ca90 + 0x11aa0 + *(int *)((int)fVar23 + 0xa8) * 0x18) +
                 _DAT_007e3374) * fVar33;
        fStack_340 = *(float *)((int)fVar23 + 0xbc) + fStack_304;
        if (((*(char *)(param_1 + 0x91b) != '\0') &&
            (fVar31 = *(float *)(iVar15 + 0x60) + *(float *)((int)fVar23 + 0x104),
            _DAT_007e3380 < fVar31)) && (fVar31 <= fStack_340)) {
          fStack_340 = fVar31;
        }
        if (((*(char *)(param_1 + 0x927) != '\0') &&
            (fVar31 = *(float *)(iVar15 + 100) + *(float *)((int)fVar23 + 0x108),
            _DAT_007e3380 < fVar31)) && (fVar31 <= fStack_340)) {
          fStack_340 = fVar31;
        }
        if (((*(char *)(param_1 + 0x91f) != '\0') &&
            (fVar31 = *(float *)(iVar15 + 0x6c) + *(float *)((int)fVar23 + 0x110),
            _DAT_007e3380 < fVar31)) && (fVar31 <= fStack_340)) {
          fStack_340 = fVar31;
        }
        if (((*(char *)(param_1 + 0x925) != '\0') &&
            (fVar31 = *(float *)(iVar15 + 0x68) + *(float *)((int)fVar23 + 0x10c),
            _DAT_007e3380 < fVar31)) && (fVar31 <= fStack_340)) {
          fStack_340 = fVar31;
        }
        fVar31 = 0.0;
        iVar15 = 0;
        if (0 < DAT_008776b0) {
          do {
            if (*(char *)(iVar15 + 0x91a + param_1) != '\0') {
              uVar13 = FUN_0044c4a0();
              iVar26 = FUN_0044c5b0(iVar15,uVar13);
              fVar32 = *(float *)(iVar26 + 0x70);
              if ((_DAT_007e3380 < fVar32) && ((fVar31 <= _DAT_007e3380 || (fVar32 <= fVar31)))) {
                fVar31 = fVar32;
              }
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < DAT_008776b0);
          if ((_DAT_007e3380 < fVar31) && (fVar31 <= fStack_340)) {
            fStack_340 = fVar31;
          }
        }
      }
      uVar20 = (ulonglong)uVar5;
      uVar28 = 0x180;
      fVar33 = (*(float *)((int)fVar23 + 200) + fVar30) * fVar33;
      uVar13 = DAT_00bd1bac;
      iVar15 = iVar34;
      uVar8 = FUN_0042b6c9(s_BINFO_ORG_00849fbc);
      FUN_00413369(uVar8,iVar34,uVar28,uVar13,uVar20);
      fStack_33c = (float)__ftol();
      pcVar10 = s___f____0085ae34;
      if ((float)(int)fStack_33c != fVar33) {
        pcVar10 = s___2f____0085d104;
      }
      FUN_007a630a(apiStack_2b8,pcVar10,(double)fVar33);
      iVar34 = iVar15 + 8;
      FUN_004133fd(apiStack_2b8,iVar34,0x180,DAT_00bd1bac,uVar5,0);
      fVar30 = *(float *)((int)fVar23 + 0xcc) + fStack_334;
      uVar20 = (ulonglong)uVar5;
      uVar28 = 0x18e;
      uVar13 = DAT_00bd1bac;
      iVar26 = iVar15;
      uVar8 = FUN_0042b6c9(s_BINFO_MOR_00849fb0);
      FUN_00413369(uVar8,iVar15,uVar28,uVar13,uVar20);
      fStack_33c = (float)__ftol();
      pcVar10 = s___f____0085ae34;
      if ((float)(int)fStack_33c != fVar30) {
        pcVar10 = s___2f____0085d104;
      }
      FUN_007a630a(apiStack_2b8,pcVar10,(double)fVar30);
      FUN_004133fd(apiStack_2b8,iVar34,0x18e,DAT_00bd1bac,uVar5,0);
      fVar30 = *(float *)((int)fVar23 + 0xf0) + fStack_30c;
      if ((*(int *)(param_1 + 0x126) == 0) && (fVar30 < DAT_00dc1744)) {
        fVar30 = DAT_00dc1744;
      }
      uVar20 = (ulonglong)uVar5;
      uVar28 = 0x19c;
      uVar13 = DAT_00bd1bac;
      iVar15 = iVar26;
      uVar8 = FUN_0042b6c9(s_BINFO_SO_00849fa4);
      FUN_00413369(uVar8,iVar26,uVar28,uVar13,uVar20);
      fStack_33c = (float)__ftol();
      pcVar10 = s___f____0085ae34;
      if ((float)(int)fStack_33c != fVar30) {
        pcVar10 = s___2f____0085d104;
      }
      FUN_007a630a(apiStack_2b8,pcVar10,(double)fVar30);
      FUN_004133fd(apiStack_2b8,iVar34,0x19c,DAT_00bd1bac,uVar5,0);
      fVar30 = *(float *)((int)fVar23 + 0xfc) + fStack_310;
      uVar20 = (ulonglong)uVar5;
      uVar28 = 0x1aa;
      uVar13 = DAT_00bd1bac;
      iVar26 = iVar15;
      uVar8 = FUN_0042b6c9(s_BINFO_HA_00849f98);
      FUN_00413369(uVar8,iVar15,uVar28,uVar13,uVar20);
      fStack_33c = (float)__ftol();
      ppuVar11 = &PTR_PTR_0083c9e8;
      if ((float)(int)fStack_33c != fVar30) {
        ppuVar11 = (undefined **)&DAT_0083c9e0;
      }
      FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
      FUN_004133fd(apiStack_2b8,iVar34,0x1aa,DAT_00bd1bac,uVar5,0);
      fVar30 = *(float *)((int)fVar23 + 0xf8) + fStack_318;
      uVar20 = (ulonglong)uVar5;
      uVar28 = 0x1b8;
      uVar13 = DAT_00bd1bac;
      iVar15 = iVar26;
      uVar8 = FUN_0042b6c9(s_BINFO_SA_00849f8c);
      FUN_00413369(uVar8,iVar26,uVar28,uVar13,uVar20);
      fStack_33c = (float)__ftol();
      ppuVar11 = &PTR_PTR_0083c9e8;
      if ((float)(int)fStack_33c != fVar30) {
        ppuVar11 = (undefined **)&DAT_0083c9e0;
      }
      FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
      FUN_004133fd(apiStack_2b8,iVar34,0x1b8,DAT_00bd1bac,uVar5,0);
      fVar30 = *(float *)((int)fVar23 + 0xd0) + (float)pcStack_308;
      uVar20 = (ulonglong)uVar5;
      uVar28 = 0x1c6;
      uVar13 = DAT_00bd1bac;
      iVar26 = iVar15;
      uVar8 = FUN_0042b6c9(s_BINFO_AA_00849f80);
      FUN_00413369(uVar8,iVar15,uVar28,uVar13,uVar20);
      fStack_33c = (float)__ftol();
      ppuVar11 = &PTR_PTR_0083c9e8;
      if ((float)(int)fStack_33c != fVar30) {
        ppuVar11 = (undefined **)&DAT_0083c9e0;
      }
      FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
      FUN_004133fd(apiStack_2b8,iVar34,0x1c6,DAT_00bd1bac,uVar5,0);
      fVar30 = *(float *)((int)fVar23 + 0xe8) + fStack_324;
      uVar13 = FUN_0042b6c9();
      FUN_00413369(uVar13,iVar26,0x1d4,DAT_00bd1bac,uVar5,0);
      fStack_33c = (float)__ftol();
      ppuVar11 = &PTR_PTR_0083c9e8;
      if ((float)(int)fStack_33c != fVar30) {
        ppuVar11 = (undefined **)&DAT_0083c9e0;
      }
      FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
      FUN_004133fd(apiStack_2b8,iVar34,0x1d4,DAT_00bd1bac,uVar5,0);
      fVar30 = *(float *)((int)fVar23 + 0xec) + (float)pcStack_320;
      uVar13 = FUN_0042b6c9();
      FUN_00413369(uVar13,iVar26,0x1e2,DAT_00bd1bac,uVar5,0);
      fStack_33c = (float)__ftol();
      ppuVar11 = &PTR_PTR_0083c9e8;
      if ((float)(int)fStack_33c != fVar30) {
        ppuVar11 = (undefined **)&DAT_0083c9e0;
      }
      FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
      FUN_004133fd(apiStack_2b8,iVar34,0x1e2,DAT_00bd1bac,uVar5,0);
      fVar30 = *(float *)((int)fVar23 + 0xd4) + fStack_314;
      uVar13 = FUN_0042b6c9();
      FUN_00413369(uVar13,iVar26,0x1f0,DAT_00bd1bac,uVar5,0);
      fStack_33c = (float)__ftol();
      ppuVar11 = &PTR_PTR_0083c9e8;
      if ((float)(int)fStack_33c != fVar30) {
        ppuVar11 = (undefined **)&DAT_0083c9e0;
      }
      FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
      FUN_004133fd(apiStack_2b8,iVar34,0x1f0,DAT_00bd1bac,uVar5,0);
      fVar30 = *(float *)((int)fVar23 + 0xf4) + fStack_31c;
      uVar20 = (ulonglong)uVar5;
      uVar28 = 0x1fe;
      uVar13 = DAT_00bd1bac;
      iVar15 = iVar26;
      uVar8 = FUN_0042b6c9(s_BINFO_SP_00849f1c);
      FUN_00413369(uVar8,iVar26,uVar28,uVar13,uVar20);
      fStack_33c = (float)__ftol();
      ppuVar11 = &PTR_PTR_0083c9e8;
      if ((float)(int)fStack_33c != fVar30) {
        ppuVar11 = (undefined **)&DAT_0083c9e0;
      }
      FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
      FUN_004133fd(apiStack_2b8,iVar34,0x1fe,DAT_00bd1bac,uVar5,0);
      if (*(int *)(param_1 + 0x126) == 3) {
        fStack_340 = *(float *)((int)fVar23 + 0xbc) + fStack_304;
      }
      uVar20 = (ulonglong)uVar5;
      uVar28 = 0x20c;
      uVar13 = DAT_00bd1bac;
      iVar26 = iVar15;
      uVar8 = FUN_0042b6c9(s_BINFO_MS_00849eec);
      FUN_00413369(uVar8,iVar15,uVar28,uVar13,uVar20);
      fStack_33c = (float)__ftol();
      ppuVar11 = &PTR_PTR_0083c9e8;
      if ((float)(int)fStack_33c != fStack_340) {
        ppuVar11 = (undefined **)&DAT_0083c9e0;
      }
      FUN_007a630a(apiStack_2b8,ppuVar11,(double)fStack_340);
      FUN_004133fd(apiStack_2b8,iVar34,0x20c,DAT_00bd1bac,uVar5,0);
      fVar30 = *(float *)((int)fVar23 + 0xc0) + fStack_32c;
      uVar20 = (ulonglong)uVar5;
      uVar28 = 0x21a;
      uVar13 = DAT_00bd1bac;
      iVar15 = iVar26;
      uVar8 = FUN_0042b6c9(s_BINFO_SU_00849e8c);
      FUN_00413369(uVar8,iVar26,uVar28,uVar13,uVar20);
      fStack_33c = (float)__ftol();
      ppuVar11 = &PTR_PTR_0083c9e8;
      if ((float)(int)fStack_33c != fVar30) {
        ppuVar11 = (undefined **)&DAT_0083c9e0;
      }
      FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar30);
      FUN_004133fd(apiStack_2b8,iVar34,0x21a,DAT_00bd1bac,uVar5,0);
      fVar23 = *(float *)((int)fVar23 + 0xc4) + fStack_328;
      uVar20 = (ulonglong)uVar5;
      uVar28 = 0x228;
      uVar13 = DAT_00bd1bac;
      uVar8 = FUN_0042b6c9(s_BINFO_FU_00849e80);
      FUN_00413369(uVar8,iVar15,uVar28,uVar13,uVar20);
      fStack_33c = (float)__ftol();
      ppuVar11 = &PTR_PTR_0083c9e8;
      if ((float)(int)fStack_33c != fVar23) {
        ppuVar11 = (undefined **)&DAT_0083c9e0;
      }
      FUN_007a630a(apiStack_2b8,ppuVar11,(double)fVar23);
      uVar13 = 0x228;
    }
  }
  else {
    puVar29 = (undefined4 *)0xf0;
    fVar27 = 8.96831e-44;
    (**(code **)(**(int **)(param_1 + 0x168) + 0x14))(0x40);
    iVar6 = 0x100;
    uVar28 = 0xe0;
    (**(code **)(**(int **)(param_1 + 0x16c) + 0x14))();
    (**(code **)(**(int **)(param_1 + 0x136) + 0x14))(0x1b8,0x1d0);
    uVar17 = 0;
    (**(code **)(**(int **)(param_1 + 0x13a) + 0x14))(0x50,0x1d0);
    uVar13 = FUN_0042b6c9(s_PRODIW_COUNT_00860f14);
    FUN_007a630a(&uStack_2cc,uVar13);
    FUN_004133fd();
    (**(code **)(**(int **)(param_1 + 0x1ca) + 0x14))(0x192,0x186);
    uVar8 = 0x186;
    uVar13 = 0x142;
    (**(code **)(**(int **)(param_1 + 0x1ce) + 0x14))();
    FUN_007a630a(&fStack_2dc,&DAT_008390a0,*(undefined4 *)(param_1 + 0x14a),uVar13,uVar8);
    FUN_004132d0();
    FUN_0042b6c9(s_PRODIW_RUNS_00860f08);
    FUN_007a630a();
    FUN_004133fd();
    uVar18 = CONCAT44(uVar13,0x19a);
    uVar13 = 0x192;
    (**(code **)(**(int **)(param_1 + 0x1d2) + 0x14))();
    uVar19 = CONCAT44(uVar13,0x19a);
    uVar13 = 0x142;
    (**(code **)(**(int **)(param_1 + 0x1d6) + 0x14))();
    FUN_007a630a(&fStack_2ec,&DAT_008390a0,*(undefined4 *)(param_1 + 0x14e),uVar13,uVar19,uVar18);
    FUN_004132d0();
    iVar34 = *(int *)(param_1 + 0x172);
    if (iVar34 == 0xf) {
      uVar13 = FUN_004671c0();
      fVar16 = (float10)FUN_00467370(0);
      *(float *)(param_1 + 0x160) = (float)fVar16;
      fVar16 = (float10)FUN_00467470(0);
      *(float *)(param_1 + 0x164) = (float)fVar16;
      *(uint *)(param_1 + 0x15a) = uVar17 & 0xff000000;
      *(undefined2 *)(param_1 + 0x15e) = 0;
    }
    else if (iVar34 == 0xe) {
      uVar13 = FUN_004671c0();
      fVar16 = (float10)FUN_00467370(1);
      *(float *)(param_1 + 0x160) = (float)fVar16;
      fVar16 = (float10)FUN_00467470(1);
      *(float *)(param_1 + 0x164) = (float)fVar16;
      *(uint *)(param_1 + 0x15a) = uVar17 & 0xff000000;
      *(undefined2 *)(param_1 + 0x15e) = 0;
    }
    else {
      switch(iVar34) {
      case 3:
        uVar28 = 7;
        break;
      case 5:
        uVar28 = 6;
        break;
      case 6:
        uVar28 = 1;
        break;
      case 7:
        uVar28 = 4;
        break;
      case 8:
        uVar28 = 3;
        break;
      case 9:
        uVar28 = 2;
        break;
      case 10:
        uVar28 = 8;
        break;
      case 0xb:
        uVar28 = 9;
        break;
      case 0xc:
        uVar28 = 10;
        break;
      case 0xd:
        uVar28 = 5;
      }
      fVar16 = (float10)FUN_00467460(uVar28);
      *(float *)(param_1 + 0x164) = (float)fVar16;
      uVar13 = FUN_00467100();
      fVar16 = (float10)FUN_00467350(uVar28);
      *(float *)(param_1 + 0x160) = (float)fVar16;
      *(uint *)(param_1 + 0x15a) = uVar17 & 0xff000000;
      *(undefined2 *)(param_1 + 0x15e) = 0;
    }
    FUN_0042dc20(uVar13);
    if ((float)*(int *)(param_1 + 0x14a) * (float)*(int *)(param_1 + 0x14e) *
        *(float *)(param_1 + 0x164) <= *(float *)(*(int *)(param_1 + 0x90) + 0x39cc)) {
      fVar23 = *(float *)(*(int *)(param_1 + 0xce) + 0xa0);
      fVar16 = (float10)FUN_0044ab50();
      fVar27 = (float)((float10)*(int *)(param_1 + 0x14e) * (float10)*(float *)(param_1 + 0x160) +
                      fVar16);
      iVar34 = FUN_0044ab40();
      if (fVar27 <= (float)iVar34 * fVar23 * _DAT_007e68d0) {
        piVar7 = *(int **)(param_1 + 0x9a6);
        goto LAB_00630ee2;
      }
      (**(code **)(**(int **)(param_1 + 0x9aa) + 0x14))();
    }
    else {
      piVar7 = *(int **)(param_1 + 0x9ae);
LAB_00630ee2:
      (**(code **)(*piVar7 + 0x14))();
    }
    uVar13 = FUN_0042b6c9(s_PRODIW_DATE_00860efc);
    FUN_007a630a(apiStack_2b8,uVar13);
    FUN_004133fd(apiStack_2b8,0xd4,0x1c6,DAT_00bd1bac,uStack_330,0);
    dVar21 = (double)((float)*(int *)(param_1 + 0x14e) * *(float *)(param_1 + 0x160));
    uVar13 = FUN_0042b6c9(s_PRODIW_ICCOST_00860eec);
    FUN_007a630a(apiStack_2b8,uVar13,dVar21);
    FUN_004133fd(apiStack_2b8,0xd4,0x1d4,DAT_00bd1bac,uStack_330,0);
    dVar21 = (double)((float)*(int *)(param_1 + 0x14a) * (float)*(int *)(param_1 + 0x14e) *
                     *(float *)(param_1 + 0x164));
    uVar13 = FUN_0042b6c9(s_PRODIW_MPCOST_00860edc);
    FUN_007a630a(apiStack_2b8,uVar13,dVar21);
    uVar13 = 0x1e2;
    iVar34 = 0xd4;
    uVar17 = uStack_330;
  }
  FUN_004133fd(apiStack_2b8,iVar34,uVar13,DAT_00bd1bac,uVar17);
LAB_00634779:
  iStack_358 = 0;
  iVar34 = 0;
  if (DAT_00dc195f != '\0') {
    iVar34 = -0x12;
    iStack_358 = 0x2c;
  }
  uVar19 = CONCAT44(iVar34 + 0x7a,iStack_358 + 0x315);
  (**(code **)(**(int **)(param_1 + 0xde) + 0x18))();
  iVar26 = 0;
  (**(code **)(**(int **)(param_1 + 0xde) + 0x10))(0);
  iVar15 = param_1 + 0xf6;
  iVar12 = (int)puVar29 + 0xa3;
  iVar35 = 5;
  do {
    (**(code **)(**(int **)(iVar15 + -0x14) + 0x18))(iVar36 + 0x314,iVar12 + -0x10);
    (**(code **)(*(int *)*puVar29 + 0x18))((int)fVar27 + 0x304,iVar34);
    (**(code **)(**(int **)(iVar6 + -0x14) + 0x10))(0);
    (**(code **)(*(int *)*(undefined4 *)((ulonglong)uVar19 >> 0x20) + 0x10))();
    (**(code **)(**(int **)((int)uVar19 + -0x2c) + 0x18))();
    iVar12 = iVar12 + 0x2a;
    iVar15 = iVar15 + 4;
    iVar35 = iVar35 + -1;
  } while (iVar35 != 0);
  iVar15 = (int)puVar29 + 0xdb;
  iVar36 = iVar36 + 0x26e;
  (**(code **)(**(int **)(param_1 + 0x10a) + 0x18))(iVar36,iVar15);
  iVar35 = 0;
  (**(code **)(**(int **)(param_1 + 0x10a) + 0x10))(0);
  iVar12 = (int)((ulonglong)uVar19 >> 0x20) + 0x70;
  iVar6 = iVar6 + 0x278;
  (**(code **)(**(int **)(param_1 + 0x1e2) + 0x14))(iVar6);
  iVar14 = (int)uVar19;
  uVar20 = (ulonglong)(uint)fStack_318;
  iVar34 = iVar14 + 0x2a0;
  uVar19 = CONCAT44(DAT_00bd1bac,iVar26 + 0x70);
  uVar13 = FUN_0042b6c9(s_RESOURCE_ENERGY_0083c2a4);
  FUN_004133fd(uVar13,iVar34,uVar19,uVar20);
  pcStack_320 = *(char **)(DAT_00d0ca90 + 0x3b24);
  fStack_31c = *(float *)(DAT_00d0ca90 + 0x39bc);
  fVar16 = (float10)FUN_0049b4b0();
  fVar23 = (float)fVar16;
  fVar16 = (float10)FUN_0049b530();
  FUN_007a630a(&pcStack_2d8,s___0f_____1f__00860e94,(double)fStack_31c,
               (double)(((float10)fVar23 - fVar16) - (float10)(float)pcStack_320));
  FUN_004133fd(&pcStack_2d8,iVar14 + 0x2a0,iVar26 + 0x7c,DAT_00bd1bac,uVar5,0);
  iVar26 = iVar26 + 0x90;
  iVar14 = iVar14 + 0x278;
  (**(code **)(**(int **)(param_1 + 0x1de) + 0x14))(iVar14,iVar26);
  uVar20 = ZEXT48(pcStack_320);
  uVar19 = CONCAT44(DAT_00bd1bac,iVar36 + 0x90);
  iVar34 = iVar15 + 0x2a0;
  uVar13 = FUN_0042b6c9(s_RESOURCE_METAL_0083c2cc);
  FUN_004133fd(uVar13,iVar34,uVar19,uVar20);
  fStack_328 = *(float *)(DAT_00d0ca90 + 0x3b28);
  fStack_324 = *(float *)(DAT_00d0ca90 + 0x39b8);
  fVar16 = (float10)FUN_0049b4b0();
  fVar23 = (float)fVar16;
  fVar16 = (float10)FUN_0049b530();
  FUN_007a630a(&fStack_2e0,s___0f_____1f__00860e94,(double)fStack_324,
               (double)(((float10)fVar23 - fVar16) - (float10)fStack_328));
  FUN_004133fd(&fStack_2e0,iVar15 + 0x2a0,iVar36 + 0x9c,DAT_00bd1bac,uVar5,0);
  iVar36 = iVar36 + 0xb0;
  iVar15 = iVar15 + 0x278;
  (**(code **)(**(int **)(param_1 + 0x1e6) + 0x14))();
  uVar20 = (ulonglong)(uint)fStack_328;
  uVar19 = CONCAT44(DAT_00bd1bac,iVar12 + 0xb0);
  iVar34 = iVar35 + 0x2a0;
  uVar13 = FUN_0042b6c9(s_RESOURCE_RARE_MATERIALS_0083c2b4);
  FUN_004133fd(uVar13,iVar34,uVar19,uVar20);
  uStack_330 = *(uint *)(DAT_00d0ca90 + 0x3b2c);
  fStack_32c = *(float *)(DAT_00d0ca90 + 0x39c0);
  FUN_0049b4b0();
  FUN_0049b530();
  FUN_007a630a();
  FUN_004133fd(&fStack_2e8,iVar35 + 0x2a0,iVar12 + 0xbc,DAT_00bd1bac,uVar5,0);
  iVar12 = iVar12 + 0xd0;
  iVar35 = iVar35 + 0x278;
  (**(code **)(**(int **)(param_1 + 0x1da) + 0x14))();
  uVar20 = (ulonglong)uStack_330;
  uVar19 = CONCAT44(DAT_00bd1bac,iVar26 + 0xd0);
  iVar34 = iVar6 + 0x2a0;
  uVar13 = FUN_0042b6c9(s_RESOURCE_OIL_0083c2dc);
  FUN_004133fd(uVar13,iVar34,uVar19,uVar20);
  pcStack_338 = *(char **)(DAT_00d0ca90 + 0x3b20);
  fStack_334 = *(float *)(DAT_00d0ca90 + 0x39b4);
  FUN_0049b4b0();
  FUN_0049b530();
  FUN_007a630a();
  FUN_004133fd(&pcStack_2f0,iVar6 + 0x2a0,iVar26 + 0xdc,DAT_00bd1bac,uVar5,0);
  iVar26 = iVar26 + 0xf0;
  iVar6 = iVar6 + 0x278;
  (**(code **)(**(int **)(param_1 + 0x1ea) + 0x14))(iVar6,iVar26);
  uVar20 = ZEXT48(pcStack_338);
  uVar19 = CONCAT44(DAT_00bd1bac,iVar36 + 0xf0);
  iVar34 = iVar14 + 0x2a0;
  uVar13 = FUN_0042b6c9(s_RESOURCE_SUPPLY_0083c2f4);
  FUN_004133fd(uVar13,iVar34,uVar19,uVar20);
  fStack_340 = *(float *)(DAT_00d0ca90 + 0x3b34);
  fStack_33c = *(float *)(DAT_00d0ca90 + 0x39c4);
  FUN_0049b4b0();
  FUN_0049b530();
  FUN_007a630a();
  FUN_004133fd(&iStack_2f8,iVar14 + 0x2a0,iVar36 + 0xfc,DAT_00bd1bac,uVar5,0);
  iVar36 = iVar36 + 0x110;
  iVar14 = iVar14 + 0x278;
  (**(code **)(**(int **)(param_1 + 0x1ee) + 0x14))(iVar14,iVar36);
  uVar20 = (ulonglong)(uint)fStack_340;
  uVar19 = CONCAT44(DAT_00bd1bac,iVar12 + 0x110);
  iVar34 = iVar15 + 0x2a0;
  uVar13 = FUN_0042b6c9(s_RESOURCE_MONEY_0083c294);
  FUN_004133fd(uVar13,iVar34,uVar19,uVar20);
  uVar17 = *(uint *)(DAT_00d0ca90 + 0x39c8);
  FUN_0049b4b0();
  FUN_0049b530();
  FUN_007a630a();
  FUN_004133fd(&fStack_300,iVar15 + 0x2a0,iVar12 + 0x11c,DAT_00bd1bac,uVar5,0);
  uVar18 = CONCAT44(iVar12 + 0x130,iVar15 + 0x278);
  (**(code **)(**(int **)(param_1 + 0x1f2) + 0x14))(iVar15 + 0x278,iVar12 + 0x130);
  uVar20 = (ulonglong)uVar17;
  uVar19 = CONCAT44(DAT_00bd1bac,iVar26 + 0x130);
  iVar34 = iVar35 + 0x2a0;
  uVar13 = FUN_0042b6c9(s_RESOURCE_MANPOWER_0085f12c);
  FUN_004133fd(uVar13,iVar34,uVar19,uVar20);
  fVar23 = *(float *)(DAT_00d0ca90 + 0x39cc);
  FUN_0049b260();
  FUN_007a630a(&pcStack_308,s___2f_____2f__00860e84);
  FUN_004133fd(&pcStack_308,iVar35 + 0x2a0,iVar26 + 0x13c,DAT_00bd1bac,uVar5,0);
  uVar19 = CONCAT44(iVar26 + 0x6c,iVar35 + 0x328);
  (**(code **)(**(int **)(param_1 + 0x1f6) + 0x14))(iVar35 + 0x328,iVar26 + 0x6c);
  uVar20 = ZEXT48(pcStack_350);
  iVar15 = iVar6 + 0x350;
  iVar34 = iVar36 + 0x6c;
  uVar13 = DAT_00bd1bac;
  uVar8 = FUN_0042b6c9(s_RESOURCE_IC_00860e78);
  FUN_004133fd(uVar8,iVar15,iVar34,uVar13,uVar20);
  FUN_0044ab40();
  uVar13 = FUN_0044aba0();
  FUN_007a630a(&fStack_310,s__d__d__d_00860e6c,uVar13);
  FUN_004133fd(&fStack_310,iVar6 + 0x350,iVar36 + 0x78,DAT_00bd1bac,uVar5,0);
  iVar34 = 0;
  do {
    iVar6 = (**(code **)(**(int **)(param_1 + 0xca + iVar34 * 4) + 0x28))();
    iVar15 = *(int *)(iVar6 + 4);
    (**(code **)(**(int **)(param_1 + 0xca + (int)fVar23 * 4) + 0x10))(0);
    fVar23 = *(float *)(*(int *)(param_1 + 0xca + iVar34 * 4) + 0xa0);
    iVar6 = FUN_0044ab40();
    fVar23 = (float)iVar6 * fVar23 * _DAT_007e68d0;
    FUN_007a630a(auStack_208,&DAT_0083c9e0,(double)fVar23);
    uVar28 = FUN_00584270(0xff,0xff,0xff);
    uVar20 = ZEXT48(pcStack_350);
    iVar12 = iVar26 + -0x19;
    iVar6 = iVar15 + 0x328;
    uVar13 = DAT_00bd1bac;
    uVar8 = FUN_0042b6c9((&PTR_s_PRODUCTION_CONSUMER_0085ffc8)[iVar34]);
    FUN_004133fd(uVar8,iVar6,iVar12,uVar13,uVar20);
    switch(iVar34) {
    case 0:
      fVar16 = (float10)FUN_004a3450();
      fVar23 = (float)fVar16;
      iVar6 = FUN_0044ab40();
      dVar21 = (double)((float)iVar6 * fVar23);
      uVar13 = FUN_0042b6c9(s_PROD_NEED_00860e60);
      FUN_007a630a(&fStack_310,uVar13,dVar21);
      FUN_004133fd(&fStack_310,iVar15 + 0x328,iVar26 + -0xe,DAT_00bd1bac,uVar28,0);
      if (*(float *)(*(int *)(param_1 + 0xca + iVar34 * 4) + 0xa0) * _DAT_007e68d0 < fVar23) {
LAB_006353f5:
        uVar28 = FUN_00584270(0xc4,0x16,0x1c);
      }
      break;
    case 1:
      dVar21 = (double)fStack_324;
      uVar13 = FUN_0042b6c9(s_PROD_NEED_00860e60);
      FUN_007a630a(&fStack_310,uVar13,dVar21);
      FUN_004133fd(&fStack_310,iVar15 + 0x328,iVar26 + -0xe,DAT_00bd1bac,uVar28,0);
      fVar16 = (float10)FUN_0044ab50();
      if ((float10)fVar23 < fVar16) goto LAB_006353f5;
      break;
    case 2:
      fVar16 = (float10)FUN_0049b210(0x3f800000,0);
      fVar23 = (float)fVar16;
      if (fVar16 < (float10)_DAT_007e3374) {
        fVar23 = 1.0;
      }
      iVar6 = *(int *)(param_1 + 0x90);
      if (DAT_00dc1540 == '\0') {
        fVar27 = *(float *)(iVar6 + 0x39f0);
      }
      else {
        fVar27 = *(float *)(iVar6 + 0x3998);
      }
      fVar27 = fVar27 - *(float *)(iVar6 + 0x3a8c);
      fVar30 = *(float *)(iVar6 + 0x3abc);
      pcStack_338 = *(char **)(iVar6 + 0x3b64);
      fStack_340 = *(float *)(iVar6 + 0x3a74);
      fVar16 = (float10)FUN_00442c00();
      fVar16 = ((((float10)fVar27 - fVar16) - (float10)fVar30) - (float10)(float)pcStack_338) +
               (float10)fStack_340;
      if (fVar16 < (float10)_DAT_007e3380) {
        fVar16 = (float10)_DAT_007e3380;
      }
      fVar23 = (float)(fVar16 / (float10)fVar23);
      iVar6 = FUN_0044ab40();
      dVar21 = (double)((float)iVar6 * fVar23);
      uVar13 = FUN_0042b6c9(s_PROD_NEED_00860e60);
      FUN_007a630a(&fStack_310,uVar13,dVar21);
      FUN_004133fd(&fStack_310,iVar15 + 0x328,iVar26 + -0xe,DAT_00bd1bac,uVar28,0);
      if (*(float *)(*(int *)(param_1 + 0xca + iVar34 * 4) + 0xa0) * _DAT_007e68d0 < fVar23)
      goto LAB_006353f5;
      break;
    case 3:
      dVar21 = (double)*(float *)(*(int *)(param_1 + 0x90) + 0x39f4);
      uVar13 = FUN_0042b6c9(s_PROD_NEED_00860e60);
      FUN_007a630a(&fStack_310,uVar13,dVar21);
      FUN_004133fd(&fStack_310,iVar15 + 0x328,iVar26 + -0xe,DAT_00bd1bac,uVar28,0);
      if (fVar23 < *(float *)(*(int *)(param_1 + 0x90) + 0x39f4)) goto LAB_006353f5;
      break;
    case 4:
      dVar21 = (double)*(float *)(*(int *)(param_1 + 0x90) + 0x3a00);
      uVar13 = FUN_0042b6c9(s_PROD_NEED_00860e60);
      FUN_007a630a(&fStack_310,uVar13,dVar21);
      FUN_004133fd(&fStack_310,iVar15 + 0x328,iVar26 + -0xe,DAT_00bd1bac,uVar28,0);
      if (fVar23 < *(float *)(*(int *)(param_1 + 0x90) + 0x3a00)) goto LAB_006353f5;
    }
    FUN_00413369(auStack_208,iVar15 + 0x3b8,iVar26 + -0xe,DAT_00bd1bac,uVar28,0);
    iVar6 = (int)uVar19;
    iVar34 = iVar34 + 1;
    if (4 < iVar34) {
      iVar36 = iVar36 + 400;
      (**(code **)(**(int **)(param_1 + 0x11a) + 0x34))(iVar15 + 0x270,iVar36);
      iVar26 = 0;
      (**(code **)(*(int *)(*(int *)(param_1 + 0x11a) + 0x12) + 0x10))(0);
      uVar28 = 0;
      iVar34 = (int)uVar18 + 0x178;
      iVar15 = (int)((ulonglong)uVar18 >> 0x20) + 0x270;
      uVar13 = DAT_00bd1bac;
      uVar17 = uVar5;
      uVar8 = FUN_0042b6c9(s_RODIW_TA1_00860e54);
      FUN_004133fd(uVar8,iVar15,iVar34,uVar13,uVar17,uVar28);
      uVar28 = 0;
      iVar34 = (int)uVar18 + 0x178;
      iVar15 = (int)((ulonglong)uVar18 >> 0x20) + 0x304;
      uVar13 = DAT_00bd1bac;
      uVar17 = uVar5;
      uVar8 = FUN_0042b6c9(s_RODIW_TA2_00860e48);
      FUN_004133fd(uVar8,iVar15,iVar34,uVar13,uVar17,uVar28);
      uVar28 = 0;
      iVar34 = (int)uVar18 + 0x178;
      iVar15 = (int)((ulonglong)uVar18 >> 0x20) + 0x34c;
      uVar13 = DAT_00bd1bac;
      uVar17 = uVar5;
      uVar8 = FUN_0042b6c9(s_RODIW_TA3_00860e3c);
      FUN_004133fd(uVar8,iVar15,iVar34,uVar13,uVar17,uVar28);
      iVar34 = 0x15f;
      if (DAT_00dc195f != '\0') {
        iVar34 = 0x160;
      }
      iVar34 = (int)uVar18 + iVar34;
      (**(code **)(**(int **)(param_1 + 0x9b6) + 0x18))
                ((int)((ulonglong)uVar18 >> 0x20) + 0x270,iVar34);
      iVar15 = 0;
      (**(code **)(**(int **)(param_1 + 0x9b6) + 0x10))(0);
      if (DAT_00dc195f != '\0') {
        iVar36 = iVar36 + 0x46;
      }
      iVar36 = iVar36 + 0x218;
      (**(code **)(**(int **)(param_1 + 0x116) + 0x34))(iVar6 + 0x270,iVar36);
      iVar35 = 0;
      (**(code **)(*(int *)(*(int *)(param_1 + 0x116) + 0x12) + 0x10))(0);
      iVar34 = iVar34 + 0x1fb;
      (**(code **)(**(int **)(param_1 + 0x176) + 0x18))(iVar26 + 0x270,iVar34);
      (**(code **)(**(int **)(param_1 + 0x176) + 0x10))(0);
      uVar28 = 0;
      iVar26 = iVar36 + 0x1fd;
      iVar12 = iVar15 + 0x274;
      uVar13 = DAT_00bd1bac;
      iVar6 = iVar14;
      uVar8 = FUN_0042b6c9(s_PRODIW_CONVOY_00860e2c);
      FUN_004133fd(uVar8,iVar12,iVar26,uVar13,iVar14,uVar28);
      uVar13 = __ftol();
      FUN_007a630a(&fStack_340,&DAT_008390a0,uVar13);
      FUN_004133fd(&fStack_340,iVar15 + 0x2c8,iVar36 + 0x1fd,DAT_00bd1bac,iVar6,0);
      uVar13 = __ftol();
      FUN_007a630a(&fStack_340,&DAT_008390a0,uVar13);
      FUN_004133fd(&fStack_340,iVar15 + 0x300,iVar36 + 0x1fd,DAT_00bd1bac,iVar6,0);
      (**(code **)(**(int **)(param_1 + 0x112) + 0x34))(iVar15 + 800,iVar36 + 0x218);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x112) + 0x12) + 0x10))(param_2);
      uVar28 = 0;
      iVar34 = iVar34 + 0x200;
      iVar36 = iVar35 + 800;
      uVar13 = DAT_00bd1bac;
      uVar8 = FUN_0042b6c9(s_PRODIW_SUDEP_00860e1c);
      FUN_004133fd(uVar8,iVar36,iVar34,uVar13,uVar5,uVar28);
      if (DAT_0087b630 == '\0') {
        if (DAT_00dc195f == '\0') {
          (**(code **)(**(int **)(param_1 + 0xc6) + 0x14))(0x38,0x60);
        }
        else {
          (**(code **)(**(int **)(param_1 + 0xc6) + 0x14))(0,0x44);
        }
      }
      if (*(int **)(param_1 + 0x17a) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x17a) + 0x14))(iVar35 + 0x268,0x60);
      }
      if (*(int **)(param_1 + 0x9b2) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x9b2) + 0x14))(iVar35 + 0x268,0x60);
      }
      return 0;
    }
  } while( true );
}


