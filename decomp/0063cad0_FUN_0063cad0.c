// FUN_0063cad0 @ 63cad0 size=8685

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0063cad0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  float10 fVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uVar19;
  double dVar18;
  int iStack_b4;
  int *piStack_a8;
  int iStack_a0;
  int iStack_9c;
  int local_90;
  char acStack_8c [32];
  undefined1 uStack_6c;
  
  (**(code **)(*param_1 + 0x28))(&local_90);
  FUN_00640df0();
  FUN_004136a0();
  FUN_004136a0();
  FUN_00584270();
  FUN_00584270();
  FUN_00584270();
  iVar10 = local_90;
  uVar3 = DAT_00bd1bac;
  iVar6 = (-(uint)(DAT_00dc1780 != '\0') & 0x2f) + 0x99;
  uVar5 = 0;
  iVar9 = (DAT_00dc1780 != '\0') + 0xb;
  iVar11 = 0x188 - ((-(uint)(DAT_00dc1780 != '\0') & 0x38) + 0x18);
  iVar12 = local_90 + 2;
  uVar2 = FUN_00584270(0xff,0xbd,0);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iVar12);
  iVar12 = iVar11;
  uVar3 = FUN_0042b6c9(s_TOVV_MISSIONS_00861884);
  FUN_004133fd(uVar3,iVar12,uVar16,uVar17);
  iVar10 = iVar10 + 0xf;
  iStack_b4 = 1;
  iVar12 = iVar11 + iVar6;
  piStack_a8 = (int *)0xe364;
  do {
    uVar3 = FUN_00514070();
    if (*(char *)(DAT_00d0ca90 + 0x37a0 + iStack_b4) == '\0') {
      pcVar4 = (char *)FUN_0042b6c9();
      uVar7 = 0xffffffff;
      do {
        pcVar13 = pcVar4;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar4 = pcVar13 + -uVar7;
      pcVar13 = acStack_8c;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else {
      FUN_007a630a(acStack_8c,&DAT_00861878,
                   (double)(*(float *)((int)piStack_a8 + DAT_00d0ca90) * _DAT_007e4088));
    }
    uVar2 = DAT_00bd1bac;
    uVar19 = 0;
    uVar5 = FUN_00584270(0xff,0xff,0xff);
    FUN_004133fd(uVar3,iVar11,iVar10,uVar2,uVar5,uVar19);
    uVar3 = DAT_00bd1bac;
    uVar5 = 0;
    uVar2 = FUN_00584270(0xff,0xff,0xff);
    FUN_00413369(acStack_8c,iVar12,iVar10,uVar3,uVar2,uVar5);
    uVar3 = DAT_00bd1bac;
    iVar10 = iVar10 + iVar9;
    piStack_a8 = (int *)((int)piStack_a8 + 4);
    iStack_b4 = iStack_b4 + 1;
  } while ((int)piStack_a8 < 0xe3e8);
  uVar5 = 0;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iVar10);
  iVar15 = iVar11;
  uVar3 = FUN_0042b6c9(s_TOVV_MAX_AMPHIB_SIZE_00861858);
  FUN_004133fd(uVar3,iVar15,uVar16,uVar17);
  FUN_007a630a();
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  FUN_00413369(acStack_8c,iVar12,iVar10,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xff,0xbd,0);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iVar10 + iVar9 + 4);
  iVar12 = iVar11;
  uVar3 = FUN_0042b6c9(s_TOVV_PROD_00861844);
  FUN_004133fd(uVar3,iVar12,uVar16,uVar17);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iVar10 = iVar10 + iVar9 + 0x11;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iVar10);
  iVar12 = iVar11;
  uVar3 = FUN_0042b6c9(s_TOVV_TCMOD_00861838);
  FUN_004133fd(uVar3,iVar12,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0xe848) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  iVar6 = iVar6 + iVar11;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar6,iVar10,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  iVar10 = iVar10 + iVar9;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iVar10);
  iVar12 = iVar11;
  uVar3 = FUN_0042b6c9(s_TOVV_TCOMOD_0086182c);
  FUN_004133fd(uVar3,iVar12,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0xe84c) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar6,iVar10,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iVar10 = iVar10 + iVar9;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iVar10);
  iVar12 = iVar11;
  uVar3 = FUN_0042b6c9(s_TOVV_TSE_00861820);
  FUN_004133fd(uVar3,iVar12,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0xe858) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar6,iVar10,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iVar10 = iVar10 + iVar9;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iVar10);
  iVar12 = iVar11;
  uVar3 = FUN_0042b6c9(s_TOVV_REPAIR_00861814);
  FUN_004133fd(uVar3,iVar12,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0xe85c) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar6,iVar10,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  iVar10 = iVar10 + iVar9;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iVar10);
  iVar12 = iVar11;
  uVar3 = FUN_0042b6c9(s_TOVV_ETOCOAL_00861804);
  FUN_004133fd(uVar3,iVar12,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0x37e2) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar6,iVar10,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iVar10 = iVar10 + iVar9;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iVar10);
  iVar12 = iVar11;
  uVar3 = FUN_0042b6c9(s_TOVV_PROD_EFF_ENERGY_008617ec);
  FUN_004133fd(uVar3,iVar12,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0x37fa) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar6,iVar10,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iVar10 = iVar10 + iVar9;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iVar10);
  iVar12 = iVar11;
  uVar3 = FUN_0042b6c9(s_TOVV_PROD_EFF_METAL_008617d8);
  FUN_004133fd(uVar3,iVar12,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0x37f6) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar6,iVar10,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  iVar10 = iVar10 + iVar9;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iVar10);
  iVar12 = iVar11;
  uVar3 = FUN_0042b6c9(s_TOVV_PROD_EFF_RARE_MATERIALS_008617b8);
  FUN_004133fd(uVar3,iVar12,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0x37fe) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar6,iVar10,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iVar10 = iVar10 + iVar9;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iVar10);
  iVar12 = iVar11;
  uVar3 = FUN_0042b6c9(s_TOVV_PROD_EFF_OIL_008617a4);
  FUN_004133fd(uVar3,iVar12,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0x37f2) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar6,iVar10,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iVar10 = iVar10 + iVar9;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iVar10);
  iVar12 = iVar11;
  uVar3 = FUN_0042b6c9(s_TOVV_PROD_EFF_IC_00861790);
  FUN_004133fd(uVar3,iVar12,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0x37ea) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar6,iVar10,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  iVar10 = iVar10 + iVar9;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iVar10);
  iVar12 = iVar11;
  uVar3 = FUN_0042b6c9(s_TOVV_PROD_EFF_SUPPLIES_00861778);
  FUN_004133fd(uVar3,iVar12,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0x37ee) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar6,iVar10,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iVar10 = iVar10 + iVar9;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iVar10);
  iVar12 = iVar11;
  uVar3 = FUN_0042b6c9(s_TOVV_PROD_EFF_MONEY_00861764);
  FUN_004133fd(uVar3,iVar12,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0x3802) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar6,iVar10,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iVar10 = iVar10 + iVar9;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iVar10);
  iVar12 = iVar11;
  uVar3 = FUN_0042b6c9(s_TOVV_MANPOWER_00861754);
  FUN_004133fd(uVar3,iVar12,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0x3806) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar6,iVar10,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iVar10 + iVar9);
  uVar3 = FUN_0042b6c9(s_TOVV_TRICKLEBACK_00861740);
  FUN_004133fd(uVar3,iVar11,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0xe854) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar6,iVar10 + iVar9,uVar3,uVar2,uVar5);
  iVar12 = local_90;
  uVar3 = DAT_00bd1bac;
  iVar6 = (-(uint)(DAT_00dc1780 != '\0') & 0x14) + 0xb4;
  iVar10 = (DAT_00dc1780 != '\0') + 0xb;
  if (DAT_00dc1781 == '\0') {
    uVar5 = 0;
    iVar9 = local_90 + 2;
    iVar11 = (-(uint)(DAT_00dc1780 != '\0') & 0x10) + 0x21c;
    uVar2 = FUN_00584270(0xff,0xbd,0);
    uVar17 = CONCAT44(uVar5,uVar2);
    uVar16 = CONCAT44(uVar3,iVar9);
    iVar9 = iVar11;
    uVar3 = FUN_0042b6c9(s_TOVV_UNITSB_008615fc);
    FUN_004133fd(uVar3,iVar9,uVar16,uVar17);
    iVar12 = iVar12 + 0xf;
    iStack_b4 = 0;
    if (0 < DAT_008776b4) {
      piStack_a8 = &DAT_00dc0b1a;
      do {
        iVar9 = *piStack_a8;
        uVar3 = FUN_004ff3a0();
        if (*(char *)(iVar9 + 0x4b5c + DAT_00d0ca90) == '\0') {
          uVar7 = 0xffffffff;
          pcVar4 = &DAT_008615e0;
          do {
            pcVar13 = pcVar4;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar13 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar13;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          pcVar4 = pcVar13 + -uVar7;
          pcVar13 = acStack_8c;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
            pcVar4 = pcVar4 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar13 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            pcVar13 = pcVar13 + 1;
          }
        }
        else {
          uVar2 = FUN_0044c4a0();
          FUN_0044e100(iVar9,uVar2);
          FUN_007a630a();
        }
        uVar2 = DAT_00bd1bac;
        uVar19 = 0;
        uStack_6c = 0;
        uVar5 = FUN_00584270(0xff,0xff,0xff);
        FUN_004133fd(uVar3,iVar11,iVar12,uVar2,uVar5,uVar19);
        uVar3 = DAT_00bd1bac;
        uVar5 = 0;
        uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
        FUN_00413369(acStack_8c,iVar6 + iVar11,iVar12,uVar3,uVar2,uVar5);
        iVar12 = iVar12 + iVar10;
        iStack_b4 = iStack_b4 + 1;
        piStack_a8 = piStack_a8 + 1;
      } while (iStack_b4 < DAT_008776b4);
    }
    uVar3 = DAT_00bd1bac;
    uVar5 = 0;
    uVar2 = FUN_00584270(0xff,0xbd,0);
    uVar17 = CONCAT44(uVar5,uVar2);
    uVar16 = CONCAT44(uVar3,iVar12 + 4);
    iVar9 = iVar11;
    uVar3 = FUN_0042b6c9(s_TOVV_COMEVE_00861710);
    FUN_004133fd(uVar3,iVar9,uVar16,uVar17);
    iVar12 = iVar12 + 0x11;
    iVar6 = iVar6 + iVar11;
    iStack_b4 = 0;
    do {
      uVar2 = FUN_004c1670();
      FUN_007a630a(acStack_8c,s___0f____00858100,
                   (double)(*(float *)(DAT_00d0ca90 + 0xe2da + iStack_b4 * 4) * _DAT_007e4088));
      uVar3 = DAT_00bd1bac;
      uVar19 = 0;
      uVar5 = FUN_00584270(0xff,0xff,0xff);
      FUN_004133fd(uVar2,iVar11,iVar12,uVar3,uVar5,uVar19);
      uVar3 = DAT_00bd1bac;
      uVar5 = 0;
      uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
      FUN_00413369(acStack_8c,iVar6,iVar12,uVar3,uVar2,uVar5);
      uVar3 = DAT_00bd1bac;
      iVar12 = iVar12 + iVar10;
      iStack_b4 = iStack_b4 + 1;
    } while (iStack_b4 < 7);
    uVar5 = 0;
    uVar2 = FUN_00584270(0xff,0xff,0xff);
    uVar17 = CONCAT44(uVar5,uVar2);
    uVar16 = CONCAT44(uVar3,iVar12);
    iVar9 = iVar11;
    uVar3 = FUN_0042b6c9(s_TOVV_HQCOMCHA_00861700);
    FUN_004133fd(uVar3,iVar9,uVar16,uVar17);
    FUN_007a630a(acStack_8c,s___0f____00858100,
                 (double)(*(float *)(DAT_00d0ca90 + 0xe2fa) * _DAT_007e4088));
    uVar3 = DAT_00bd1bac;
    uVar5 = 0;
    uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
    FUN_00413369(acStack_8c,iVar6,iVar12,uVar3,uVar2,uVar5);
    uVar3 = DAT_00bd1bac;
    uVar5 = 0;
    uVar2 = FUN_00584270(0xff,0xbd,0);
    uVar17 = CONCAT44(uVar5,uVar2);
    uVar16 = CONCAT44(uVar3,iVar12 + iVar10 + 4);
    iVar9 = iVar11;
    uVar3 = FUN_0042b6c9(s_TOVV_POSITIONING_0086172c);
    FUN_004133fd(uVar3,iVar9,uVar16,uVar17);
    iVar12 = iVar12 + iVar10 + 0x11;
    iStack_b4 = 0;
    if (0 < DAT_008776ac) {
      do {
        uVar2 = FUN_004ff300();
        fVar14 = (float10)FUN_00451370();
        dVar18 = (double)(fVar14 * (float10)_DAT_007e4088);
        fVar14 = (float10)FUN_00451380();
        FUN_007a630a(acStack_8c,s___0f_<>___0f_0086171c,(double)(fVar14 * (float10)_DAT_007e4088),
                     dVar18);
        uVar3 = DAT_00bd1bac;
        uVar19 = 0;
        uVar5 = FUN_00584270(0xff,0xff,0xff);
        FUN_004133fd(uVar2,iVar11,iVar12,uVar3,uVar5,uVar19);
        uVar3 = DAT_00bd1bac;
        uVar5 = 0;
        uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
        FUN_00413369(acStack_8c,iVar6,iVar12,uVar3,uVar2,uVar5);
        iVar12 = iVar12 + iVar10;
        iStack_b4 = iStack_b4 + 1;
      } while (iStack_b4 < DAT_008776ac);
    }
  }
  else {
    uVar5 = 0;
    iVar11 = (-(uint)(DAT_00dc1780 != '\0') & 0x10) + 0x21c;
    iVar9 = local_90 + 2;
    uVar2 = FUN_00584270(0xff,0xbd,0);
    uVar17 = CONCAT44(uVar5,uVar2);
    uVar16 = CONCAT44(uVar3,iVar9);
    iVar9 = iVar11;
    uVar3 = FUN_0042b6c9(s_TOVV_POSITIONING_0086172c);
    FUN_004133fd(uVar3,iVar9,uVar16,uVar17);
    iVar12 = iVar12 + 0xf;
    iStack_b4 = 0;
    if (0 < DAT_008776ac) {
      do {
        uVar2 = FUN_004ff300();
        fVar14 = (float10)FUN_00451370();
        dVar18 = (double)(fVar14 * (float10)_DAT_007e4088);
        fVar14 = (float10)FUN_00451380();
        FUN_007a630a(acStack_8c,s___0f_<>___0f_0086171c,(double)(fVar14 * (float10)_DAT_007e4088),
                     dVar18);
        uVar3 = DAT_00bd1bac;
        uVar19 = 0;
        uVar5 = FUN_00584270(0xff,0xff,0xff);
        FUN_004133fd(uVar2,iVar11,iVar12,uVar3,uVar5,uVar19);
        uVar3 = DAT_00bd1bac;
        uVar5 = 0;
        uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
        FUN_00413369(acStack_8c,iVar11 + iVar6,iVar12,uVar3,uVar2,uVar5);
        iVar12 = iVar12 + iVar10;
        iStack_b4 = iStack_b4 + 1;
      } while (iStack_b4 < DAT_008776ac);
    }
  }
  uVar3 = DAT_00bd1bac;
  iVar12 = (-(uint)(DAT_00dc1780 != '\0') & 0x14) + 0xb4;
  iVar6 = (DAT_00dc1780 != '\0') + 0xb;
  if (DAT_00dc1781 == '\0') {
    uVar5 = 0;
    iStack_a0 = (-(uint)(DAT_00dc1780 != '\0') & 0x3c) + 0x2e3;
    uVar2 = FUN_00584270(0xff,0xbd,0);
    uVar17 = CONCAT44(uVar5,uVar2);
    uVar16 = CONCAT44(uVar3,local_90 + 2);
    iVar10 = iStack_a0;
    uVar3 = FUN_0042b6c9(s_TOVV_UNITS_008615f0);
    FUN_004133fd(uVar3,iVar10,uVar16,uVar17);
    iStack_9c = local_90 + 0xf;
    iStack_b4 = 0;
    if (0 < DAT_008776a0) {
      piStack_a8 = &DAT_00dbf53a;
      do {
        iVar10 = *piStack_a8;
        uVar3 = FUN_004ff320();
        if (*(char *)(iVar10 + 0x4ad0 + DAT_00d0ca90) == '\0') {
          uVar7 = 0xffffffff;
          pcVar4 = &DAT_008615e0;
          do {
            pcVar13 = pcVar4;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar13 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar13;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          pcVar4 = pcVar13 + -uVar7;
          pcVar13 = acStack_8c;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
            pcVar4 = pcVar4 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar13 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            pcVar13 = pcVar13 + 1;
          }
        }
        else {
          uVar2 = FUN_0044c450();
          FUN_0044e050(iVar10,uVar2);
          FUN_007a630a();
        }
        uVar2 = DAT_00bd1bac;
        uVar19 = 0;
        uStack_6c = 0;
        uVar5 = FUN_00584270(0xff,0xff,0xff);
        FUN_004133fd(uVar3,iStack_a0,iStack_9c,uVar2,uVar5,uVar19);
        uVar3 = DAT_00bd1bac;
        uVar5 = 0;
        uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
        FUN_00413369(acStack_8c,iVar12 + iStack_a0,iStack_9c,uVar3,uVar2,uVar5);
        iStack_9c = iStack_9c + iVar6;
        iStack_b4 = iStack_b4 + 1;
        piStack_a8 = piStack_a8 + 1;
      } while (iStack_b4 < DAT_008776a0);
    }
  }
  else {
    uVar5 = 0;
    iStack_a0 = (-(uint)(DAT_00dc1780 != '\0') & 0x3c) + 0x2e3;
    uVar2 = FUN_00584270(0xff,0xbd,0);
    uVar17 = CONCAT44(uVar5,uVar2);
    uVar16 = CONCAT44(uVar3,local_90 + 2);
    iVar10 = iStack_a0;
    uVar3 = FUN_0042b6c9(s_TOVV_COMEVE_00861710);
    FUN_004133fd(uVar3,iVar10,uVar16,uVar17);
    iStack_9c = local_90 + 0xf;
    iVar10 = 0;
    do {
      uVar2 = FUN_004c1670();
      FUN_007a630a(acStack_8c,s___0f____00858100,
                   (double)(*(float *)(DAT_00d0ca90 + 0xe2da + iVar10 * 4) * _DAT_007e4088));
      uVar3 = DAT_00bd1bac;
      uVar19 = 0;
      uVar5 = FUN_00584270(0xff,0xff,0xff);
      FUN_004133fd(uVar2,iStack_a0,iStack_9c,uVar3,uVar5,uVar19);
      uVar3 = DAT_00bd1bac;
      uVar5 = 0;
      uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
      FUN_00413369(acStack_8c,iStack_a0 + iVar12,iStack_9c,uVar3,uVar2,uVar5);
      uVar3 = DAT_00bd1bac;
      iStack_9c = iStack_9c + iVar6;
      iVar10 = iVar10 + 1;
    } while (iVar10 < 7);
    uVar5 = 0;
    uVar2 = FUN_00584270(0xff,0xff,0xff);
    uVar17 = CONCAT44(uVar5,uVar2);
    uVar16 = CONCAT44(uVar3,iStack_9c);
    iVar10 = iStack_a0;
    uVar3 = FUN_0042b6c9(s_TOVV_HQCOMCHA_00861700);
    FUN_004133fd(uVar3,iVar10,uVar16,uVar17);
    FUN_007a630a(acStack_8c,s___0f____00858100,
                 (double)(*(float *)(DAT_00d0ca90 + 0xe2fa) * _DAT_007e4088));
    uVar3 = DAT_00bd1bac;
    uVar5 = 0;
    uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
    FUN_00413369(acStack_8c,iStack_a0 + iVar12,iStack_9c,uVar3,uVar2,uVar5);
    iStack_9c = iStack_9c + iVar6;
  }
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xff,0xbd,0);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iStack_9c + 4);
  iVar10 = iStack_a0;
  uVar3 = FUN_0042b6c9(s_TOVV_MISCMIL_008616f0);
  FUN_004133fd(uVar3,iVar10,uVar16,uVar17);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iStack_9c = iStack_9c + 0x11;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iStack_9c);
  iVar10 = iStack_a0;
  uVar3 = FUN_0042b6c9(s_TOVV_DIGIN_008616e4);
  FUN_004133fd(uVar3,iVar10,uVar16,uVar17);
  uVar2 = FUN_0042b6c9();
  uVar3 = DAT_00bd1bac;
  uVar19 = 0;
  uVar5 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(uVar2,iVar12 + iStack_a0,iStack_9c,uVar3,uVar5,uVar19);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iStack_9c = iStack_9c + iVar6;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iStack_9c);
  iVar10 = iStack_a0;
  uVar3 = FUN_0042b6c9(s_TOVV_DIG_IN_MAX_LEVEL_008616c4);
  FUN_004133fd(uVar3,iVar10,uVar16,uVar17);
  FUN_007a630a(acStack_8c,&DAT_00858140,(double)*(float *)(DAT_00d0ca90 + 0x3822));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar12 + iStack_a0,iStack_9c,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iStack_9c = iStack_9c + iVar6;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iStack_9c);
  iVar10 = iStack_a0;
  uVar3 = FUN_0042b6c9(s_TOVV_DIG_IN_DAILY_INCREASE_008616a8);
  FUN_004133fd(uVar3,iVar10,uVar16,uVar17);
  FUN_007a630a(acStack_8c,&DAT_00858140,(double)*(float *)(DAT_00d0ca90 + 0x3826));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar12 + iStack_a0,iStack_9c,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iStack_9c = iStack_9c + iVar6;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iStack_9c);
  iVar10 = iStack_a0;
  uVar3 = FUN_0042b6c9(s_TOVV_MISNUKE_00861698);
  FUN_004133fd(uVar3,iVar10,uVar16,uVar17);
  uVar2 = FUN_0042b6c9();
  uVar3 = DAT_00bd1bac;
  uVar19 = 0;
  uVar5 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(uVar2,iVar12 + iStack_a0,iStack_9c,uVar3,uVar5,uVar19);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iStack_9c = iStack_9c + iVar6;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iStack_9c);
  iVar10 = iStack_a0;
  uVar3 = FUN_0042b6c9(s_TOVV_AAEFF_0086168c);
  FUN_004133fd(uVar3,iVar10,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0x380a) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar12 + iStack_a0,iStack_9c,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iStack_9c = iStack_9c + iVar6;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iStack_9c);
  iVar10 = iStack_a0;
  uVar3 = FUN_0042b6c9(s_TOVV_RADAR_00861680);
  FUN_004133fd(uVar3,iVar10,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0xe864) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar12 + iStack_a0,iStack_9c,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iStack_9c = iStack_9c + iVar6;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iStack_9c);
  iVar10 = iStack_a0;
  uVar3 = FUN_0042b6c9(s_TOVV_ATTR_00861674);
  FUN_004133fd(uVar3,iVar10,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0xe850) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar12 + iStack_a0,iStack_9c,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iStack_9c = iStack_9c + iVar6;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iStack_9c);
  iVar10 = iStack_a0;
  uVar3 = FUN_0042b6c9(s_TOVV_HQESE_00861668);
  FUN_004133fd(uVar3,iVar10,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0xe2f6) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar12 + iStack_a0,iStack_9c,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iStack_9c = iStack_9c + iVar6;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iStack_9c);
  iVar10 = iStack_a0;
  uVar3 = FUN_0042b6c9(s_TOVV_GDEF_0086165c);
  FUN_004133fd(uVar3,iVar10,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0xe30a) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar12 + iStack_a0,iStack_9c,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iStack_9c = iStack_9c + iVar6;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iStack_9c);
  iVar10 = iStack_a0;
  uVar3 = FUN_0042b6c9(s_TOVV_CDEF_00861650);
  FUN_004133fd(uVar3,iVar10,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0xe306) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar12 + iStack_a0,iStack_9c,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  iStack_9c = iStack_9c + iVar6;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iStack_9c);
  iVar10 = iStack_a0;
  uVar3 = FUN_0042b6c9(s_TOVV_LFEF_00861644);
  FUN_004133fd(uVar3,iVar10,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0xe2fe) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar12 + iStack_a0,iStack_9c,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iStack_9c = iStack_9c + iVar6;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iStack_9c);
  iVar10 = iStack_a0;
  uVar3 = FUN_0042b6c9(s_TOVV_CFEF_00861638);
  FUN_004133fd(uVar3,iVar10,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,
               (double)(*(float *)(DAT_00d0ca90 + 0xe302) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar12 + iStack_a0,iStack_9c,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xff,0xbd,0);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iStack_9c + iVar6 + 4);
  iVar10 = iStack_a0;
  uVar3 = FUN_0042b6c9(s_TOVV_INTEL_0086162c);
  FUN_004133fd(uVar3,iVar10,uVar16,uVar17);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iVar9 = iStack_9c + iVar6 + 0x11;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iVar9);
  iVar10 = iStack_a0;
  uVar3 = FUN_0042b6c9(s_TOVV_FRINT_00861620);
  FUN_004133fd(uVar3,iVar10,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,(double)*(float *)(DAT_00d0ca90 + 0x37d6));
  uVar3 = DAT_00bd1bac;
  iVar12 = iVar12 + iStack_a0;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar12,iVar9,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  iVar9 = iVar9 + iVar6;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iVar9);
  iVar10 = iStack_a0;
  uVar3 = FUN_0042b6c9(s_TOVV_ENINT_00861614);
  FUN_004133fd(uVar3,iVar10,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___0f____00858100,(double)*(float *)(DAT_00d0ca90 + 0x37da));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar12,iVar9,uVar3,uVar2,uVar5);
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  uVar17 = CONCAT44(uVar5,uVar2);
  uVar16 = CONCAT44(uVar3,iVar9 + iVar6);
  uVar3 = FUN_0042b6c9(s_TOVV_RESMOD_00861608);
  FUN_004133fd(uVar3,iStack_a0,uVar16,uVar17);
  FUN_007a630a(acStack_8c,s___1f____00858320,
               (double)(*(float *)(DAT_00d0ca90 + 0xe860) * _DAT_007e4088));
  uVar3 = DAT_00bd1bac;
  uVar5 = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413369(acStack_8c,iVar12,iVar9 + iVar6,uVar3,uVar2,uVar5);
  return 0;
}


