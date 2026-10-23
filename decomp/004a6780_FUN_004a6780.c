// FUN_004a6780 @ 4a6780 size=3410

void __fastcall FUN_004a6780(int param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  undefined **ppuVar5;
  undefined4 uVar6;
  undefined **ppuVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined **ppuVar11;
  int *piVar12;
  undefined **ppuVar13;
  int iVar14;
  char *pcVar15;
  int iVar16;
  char *pcVar17;
  char *pcVar18;
  float10 fVar19;
  float10 fVar20;
  int local_80;
  int local_7c;
  int local_78;
  undefined **local_74;
  undefined **local_70;
  undefined **local_6c;
  undefined **local_68;
  undefined **local_64;
  undefined **local_60;
  undefined **local_5c;
  undefined **local_58;
  undefined **local_54;
  undefined **local_50;
  undefined **local_4c;
  undefined **local_48;
  undefined **local_44;
  undefined **local_40;
  undefined **local_3c;
  undefined **local_38;
  undefined **local_34;
  undefined **local_30;
  undefined **local_2c;
  undefined **local_28;
  undefined **local_24;
  undefined **local_20;
  undefined **local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  iVar10 = 0;
  iVar16 = 0;
  iVar14 = 0;
  local_78 = 0;
  local_7c = 0;
  local_10 = 0;
  local_80 = 0;
  local_14 = 0;
  local_18 = 0;
  if (0 < DAT_0087769c) {
    piVar4 = (int *)(param_1 + 0x3e52);
    piVar12 = &DAT_00dbd1a2;
    local_74 = (undefined **)DAT_0087769c;
    do {
      iVar2 = *piVar12;
      if (iVar2 < 0xc) {
        local_78 = local_78 + piVar4[-0x8c];
        local_7c = local_7c + *piVar4;
      }
      else if ((iVar2 < 0x15) || (iVar2 == 0x8c)) {
        iVar16 = iVar16 + piVar4[-0x8c];
        local_80 = local_80 + *piVar4;
      }
      else {
        iVar10 = iVar10 + piVar4[-0x8c];
        iVar14 = iVar14 + *piVar4;
      }
      piVar12 = piVar12 + 1;
      piVar4 = piVar4 + 1;
      local_74 = (undefined **)((int)local_74 + -1);
      local_18 = iVar14;
      local_14 = iVar10;
      local_10 = iVar16;
    } while (local_74 != (undefined **)0x0);
  }
  ppuVar13 = &PTR_LAB_0083de30;
  ppuVar11 = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3bf0) == '\0') {
    ppuVar11 = (undefined **)&DAT_0083de2c;
  }
  local_74 = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3bf1) == '\0') {
    local_74 = (undefined **)&DAT_0083de2c;
  }
  local_70 = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3bec) == '\0') {
    local_70 = (undefined **)&DAT_0083de2c;
  }
  local_6c = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3bef) == '\0') {
    local_6c = (undefined **)&DAT_0083de2c;
  }
  ppuVar7 = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3bee) == '\0') {
    ppuVar7 = (undefined **)&DAT_0083de2c;
  }
  ppuVar5 = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3bed) == '\0') {
    ppuVar5 = (undefined **)&DAT_0083de2c;
  }
  local_68 = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3c03) == '\0') {
    local_68 = (undefined **)&DAT_0083de2c;
  }
  local_64 = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3c04) == '\0') {
    local_64 = (undefined **)&DAT_0083de2c;
  }
  local_60 = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3bff) == '\0') {
    local_60 = (undefined **)&DAT_0083de2c;
  }
  local_5c = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3c02) == '\0') {
    local_5c = (undefined **)&DAT_0083de2c;
  }
  local_58 = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3c01) == '\0') {
    local_58 = (undefined **)&DAT_0083de2c;
  }
  local_54 = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3c00) == '\0') {
    local_54 = (undefined **)&DAT_0083de2c;
  }
  local_50 = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3bf7) == '\0') {
    local_50 = (undefined **)&DAT_0083de2c;
  }
  local_4c = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3bf8) == '\0') {
    local_4c = (undefined **)&DAT_0083de2c;
  }
  local_48 = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3bf3) == '\0') {
    local_48 = (undefined **)&DAT_0083de2c;
  }
  local_44 = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3bf6) == '\0') {
    local_44 = (undefined **)&DAT_0083de2c;
  }
  local_40 = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3bf5) == '\0') {
    local_40 = (undefined **)&DAT_0083de2c;
  }
  local_3c = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3bf4) == '\0') {
    local_3c = (undefined **)&DAT_0083de2c;
  }
  local_38 = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3bfd) == '\0') {
    local_38 = (undefined **)&DAT_0083de2c;
  }
  local_34 = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3bfe) == '\0') {
    local_34 = (undefined **)&DAT_0083de2c;
  }
  local_30 = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3bf9) == '\0') {
    local_30 = (undefined **)&DAT_0083de2c;
  }
  local_2c = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3bfc) == '\0') {
    local_2c = (undefined **)&DAT_0083de2c;
  }
  local_28 = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3bfb) == '\0') {
    local_28 = (undefined **)&DAT_0083de2c;
  }
  local_24 = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3bfa) == '\0') {
    local_24 = (undefined **)&DAT_0083de2c;
  }
  local_20 = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3bf2) == '\0') {
    local_20 = (undefined **)&DAT_0083de2c;
  }
  local_1c = &PTR_LAB_0083de30;
  if (*(char *)(param_1 + 0x3c0f) == '\0') {
    local_1c = (undefined **)&DAT_0083de2c;
  }
  if (*(char *)(param_1 + 0x3c0e) == '\0') {
    ppuVar13 = (undefined **)&DAT_0083de2c;
  }
  fVar3 = *(float *)(param_1 + 0x234);
  fVar19 = (float10)FUN_0049c570((double)*(float *)(param_1 + 0x4082),
                                 (double)*(float *)(param_1 + 0x4086),
                                 (double)*(float *)(param_1 + 0x408a),
                                 (double)*(float *)(param_1 + 0x408e),
                                 (double)*(float *)(param_1 + 0x4096),
                                 (double)*(float *)(param_1 + 0x4092),
                                 (double)*(float *)(param_1 + 0x409e),
                                 (double)*(float *)(param_1 + 0x409a),
                                 (double)(*(float *)(param_1 + 0x4082) +
                                         *(float *)(param_1 + 0x408a)),
                                 (double)(*(float *)(param_1 + 0x4086) +
                                         *(float *)(param_1 + 0x408e)),
                                 (double)(*(float *)(param_1 + 0x4096) +
                                         *(float *)(param_1 + 0x409e)),
                                 (double)(*(float *)(param_1 + 0x4092) +
                                         *(float *)(param_1 + 0x409a)),ppuVar5,ppuVar7,local_6c,
                                 local_70,local_74,ppuVar11);
  FUN_0049c570((double)*(float *)(param_1 + 0x3af4),(double)*(float *)(param_1 + 0x3af8),
               (double)*(float *)(param_1 + 0x3afc),(double)*(float *)(param_1 + 0x3c06),
               (double)*(float *)(param_1 + 0x3c0a),(double)*(float *)(param_1 + 0x39a4),
               (double)*(float *)(param_1 + 0x39a0),(double)*(float *)(param_1 + 0x39a8),
               (double)*(float *)(param_1 + 0x39ac),(double)*(float *)(param_1 + 0x3950),
               (double)fVar19);
  FUN_00442c00();
  FUN_00442c00();
  FUN_00442c00();
  FUN_00442c00();
  FUN_00442c00();
  FUN_00442c00();
  FUN_0049b4b0();
  FUN_0049b530();
  FUN_0049b4b0();
  FUN_0049b530();
  FUN_0049b4b0();
  FUN_0049b530();
  FUN_0049b4b0();
  FUN_0049b530();
  FUN_0049b4b0();
  FUN_0049b530();
  fVar19 = (float10)FUN_0049b4b0();
  fVar20 = (float10)FUN_0049b530();
  uVar6 = FUN_0044ab40(ppuVar13,local_1c,local_20,(double)fVar3,(double)*(float *)(param_1 + 0x3906)
                       ,(double)*(float *)(param_1 + 0x390a),(double)*(float *)(param_1 + 0x390e),
                       (double)*(float *)(param_1 + 0x3912),(double)*(float *)(param_1 + 0x3916),
                       local_24,local_28,local_2c,local_30,local_34,local_38,local_3c,local_40,
                       local_44,local_48,local_4c,local_50,local_54,local_58,local_5c,local_60,
                       local_64,local_68,(double)*(float *)(param_1 + 0x3bd8),
                       (double)*(float *)(param_1 + 0x3bdc),(double)*(float *)(param_1 + 0x3be0),
                       (double)*(float *)(param_1 + 0x3bd4),(double)*(float *)(param_1 + 0x3be8),
                       (double)*(float *)(param_1 + 0x3be4),(double)*(float *)(param_1 + 0x39bc),
                       (double)*(float *)(param_1 + 0x39b8),(double)*(float *)(param_1 + 0x39c0),
                       (double)*(float *)(param_1 + 0x39b4),(double)*(float *)(param_1 + 0x39c4),
                       (double)*(float *)(param_1 + 0x39c8),(double)*(float *)(param_1 + 0x3ba8),
                       (double)*(float *)(param_1 + 0x3bac),(double)*(float *)(param_1 + 0x3bb0),
                       (double)*(float *)(param_1 + 0x3ba4),(double)*(float *)(param_1 + 0x3bb8),
                       (double)*(float *)(param_1 + 0x3bb4),(double)*(float *)(param_1 + 0x3bc0),
                       (double)*(float *)(param_1 + 0x3bc4),(double)*(float *)(param_1 + 0x3bc8),
                       (double)*(float *)(param_1 + 0x3bbc),(double)*(float *)(param_1 + 0x3bd0),
                       (double)*(float *)(param_1 + 0x3bcc),(double)*(float *)(param_1 + 0x3b0c),
                       (double)*(float *)(param_1 + 0x3b10),(double)*(float *)(param_1 + 0x3b14),
                       (double)*(float *)(param_1 + 0x3b08),(double)*(float *)(param_1 + 0x3b1c),
                       (double)(((float10)(float)fVar19 - fVar20) -
                               (float10)*(float *)(param_1 + 0x3b24)));
  uVar6 = (**(code **)(*(int *)(param_1 + 0xe) + 0xc))(uVar6);
  FUN_00429830(s___s_IC___d_Trade___s_Help_Allies_0083d75c,uVar6);
  DAT_008c7bf4._0_1_ = 0;
  FUN_007a630a(&DAT_008c7bf4,s__Units_Type_Ready_In_prod__Tot__L_0083d70c,local_78,local_7c,local_10
               ,local_80,local_14,local_18);
  iVar10 = 0;
  if (0 < DAT_0087769c) {
    piVar4 = (int *)(param_1 + 0x3c22);
    do {
      if ((0 < *piVar4) || (0 < piVar4[0x8c])) {
        FUN_004ff320();
        FUN_007a630a();
        uVar8 = 0xffffffff;
        pcVar15 = &DAT_008c9bf4;
        do {
          pcVar18 = pcVar15;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar18 = pcVar15 + 1;
          cVar1 = *pcVar15;
          pcVar15 = pcVar18;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar14 = -1;
        pcVar15 = (char *)&DAT_008c7bf4;
        do {
          pcVar17 = pcVar15;
          if (iVar14 == 0) break;
          iVar14 = iVar14 + -1;
          pcVar17 = pcVar15 + 1;
          cVar1 = *pcVar15;
          pcVar15 = pcVar17;
        } while (cVar1 != '\0');
        pcVar15 = pcVar18 + -uVar8;
        pcVar18 = pcVar17 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar18 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar18 = pcVar18 + 1;
        }
      }
      iVar10 = iVar10 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar10 < DAT_0087769c);
  }
  iVar10 = (&DAT_0089cad8)[*(int *)(param_1 + 6)];
  if (iVar10 == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = __ftol();
    for (piVar4 = *(int **)(iVar10 + 0x3b6c); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
      iVar14 = iVar14 + *(int *)(*piVar4 + 0x132);
    }
  }
  if (iVar10 == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = __ftol();
    for (piVar4 = *(int **)(iVar10 + 0x3b6c); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
      iVar16 = iVar16 + *(int *)(*piVar4 + 0x12e);
    }
  }
  FUN_007a630a(&DAT_008c9bf4,s_ManPower____02f_ConvoyT____d_Con_0083d64c,
               (double)*(float *)(param_1 + 0x39cc),iVar16,iVar14,*(undefined4 *)(param_1 + 0x3968),
               *(undefined4 *)(param_1 + 0x396c),(double)*(float *)(param_1 + 0x39f4),
               (double)*(float *)(param_1 + 0x39f8),(double)*(float *)(param_1 + 0x39fc),
               (double)*(float *)(param_1 + 0x3a00),*(undefined4 *)(param_1 + 0x3a04),
               *(undefined4 *)(param_1 + 0x3a08));
  uVar8 = 0xffffffff;
  pcVar15 = &DAT_008c9bf4;
  do {
    pcVar18 = pcVar15;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar18 = pcVar15 + 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar18;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar10 = -1;
  pcVar15 = (char *)&DAT_008c7bf4;
  do {
    pcVar17 = pcVar15;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pcVar17 = pcVar15 + 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar17;
  } while (cVar1 != '\0');
  pcVar15 = pcVar18 + -uVar8;
  pcVar18 = pcVar17 + -1;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar18 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar18 = pcVar18 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar18 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar18 = pcVar18 + 1;
  }
  FUN_00429830(&DAT_008c7bf4);
  return;
}


