// FUN_005a5560 @ 5a5560 size=1849

void FUN_005a5560(void)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined2 extraout_var;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  int *piVar10;
  undefined2 *puVar11;
  int iVar12;
  float *pfVar13;
  char *pcVar14;
  float10 fVar15;
  undefined2 local_de4 [4];
  undefined2 local_ddc;
  undefined2 local_dda;
  undefined2 local_dd8;
  undefined2 local_dd6;
  undefined2 local_dd4;
  undefined2 local_dd2;
  undefined2 local_dd0;
  undefined2 local_dce;
  int local_dcc;
  int local_dc8 [12];
  float local_d98 [12];
  float local_d68 [12];
  float local_d38 [12];
  undefined1 local_d08 [256];
  char local_c08 [256];
  char local_b08 [256];
  char local_a08 [256];
  char local_908 [256];
  char local_808 [256];
  char local_708 [256];
  char local_608 [256];
  char local_508 [256];
  char local_408 [256];
  char local_308 [256];
  char local_208 [256];
  char local_108 [260];
  
  iVar12 = DAT_00bda0f8;
  pfVar13 = local_d38;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar13 = 0.0;
    pfVar13 = pfVar13 + 1;
  }
  pfVar13 = local_d68;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar13 = 0.0;
    pfVar13 = pfVar13 + 1;
  }
  pfVar13 = local_d98;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar13 = 0.0;
    pfVar13 = pfVar13 + 1;
  }
  piVar10 = local_dc8;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  piVar10 = *(int **)(DAT_00bda0f8 + 0x4508);
  while (piVar10 != (int *)0x0) {
    piVar3 = (int *)piVar10[2];
    piVar4 = *(int **)(*piVar10 + 0x26);
    while (piVar10 = piVar3, piVar4 != (int *)0x0) {
      piVar10 = (int *)piVar4[2];
      iVar7 = *piVar4;
      piVar4 = piVar10;
      if (((*(char *)(iVar7 + 0x15f) != '\0') && (iVar7 = *(int *)(iVar7 + 0x134), -1 < iVar7)) &&
         (iVar7 < 0xc)) {
        local_dc8[iVar7] = local_dc8[iVar7] + 1;
        fVar15 = (float10)FUN_004fd7c0();
        local_d98[iVar7] = (float)(fVar15 + (float10)local_d98[iVar7]);
        fVar15 = (float10)FUN_004fd5d0();
        local_d68[iVar7] = (float)(fVar15 + (float10)local_d68[iVar7]);
        fVar15 = (float10)FUN_004fcd20();
        local_d38[iVar7] = (float)(fVar15 + (float10)local_d38[iVar7]);
      }
    }
  }
  piVar10 = *(int **)(iVar12 + 0x451c);
  while (piVar10 != (int *)0x0) {
    piVar3 = (int *)piVar10[2];
    iVar12 = *piVar10;
    piVar10 = piVar3;
    if (((*(char *)(iVar12 + 0x154) == '\0') && (*(char *)(iVar12 + 0x162) == '\0')) &&
       ((*(char *)(iVar12 + 0x15f) != '\0' &&
        ((iVar12 = *(int *)(iVar12 + 0x134), -1 < iVar12 && (iVar12 < 0xc)))))) {
      local_dc8[iVar12] = local_dc8[iVar12] + 1;
      fVar15 = (float10)FUN_004fd7c0();
      local_d98[iVar12] = (float)(fVar15 + (float10)local_d98[iVar12]);
      fVar15 = (float10)FUN_004fd5d0();
      local_d68[iVar12] = (float)(fVar15 + (float10)local_d68[iVar12]);
      fVar15 = (float10)FUN_004fcd20();
      local_d38[iVar12] = (float)(fVar15 + (float10)local_d38[iVar12]);
    }
  }
  pcVar5 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  do {
    pcVar14 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar14 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar14 + -uVar8;
  pcVar14 = local_c08;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar14 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar14 = pcVar14 + 1;
  }
  pcVar5 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  do {
    pcVar14 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar14 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar14 + -uVar8;
  pcVar14 = local_b08;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar14 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar14 = pcVar14 + 1;
  }
  pcVar5 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  do {
    pcVar14 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar14 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar14 + -uVar8;
  pcVar14 = local_a08;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar14 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar14 = pcVar14 + 1;
  }
  pcVar5 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  do {
    pcVar14 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar14 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar14 + -uVar8;
  pcVar14 = local_908;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar14 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar14 = pcVar14 + 1;
  }
  pcVar5 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  do {
    pcVar14 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar14 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar14 + -uVar8;
  pcVar14 = local_808;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar14 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar14 = pcVar14 + 1;
  }
  pcVar5 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  do {
    pcVar14 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar14 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar14 + -uVar8;
  pcVar14 = local_708;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar14 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar14 = pcVar14 + 1;
  }
  pcVar5 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  do {
    pcVar14 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar14 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar14 + -uVar8;
  pcVar14 = local_608;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar14 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar14 = pcVar14 + 1;
  }
  pcVar5 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  do {
    pcVar14 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar14 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar14 + -uVar8;
  pcVar14 = local_508;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar14 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar14 = pcVar14 + 1;
  }
  pcVar5 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  do {
    pcVar14 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar14 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar14 + -uVar8;
  pcVar14 = local_408;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar14 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar14 = pcVar14 + 1;
  }
  pcVar5 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  do {
    pcVar14 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar14 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar14 + -uVar8;
  pcVar14 = local_308;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar14 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar14 = pcVar14 + 1;
  }
  pcVar5 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  do {
    pcVar14 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar14 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar14 + -uVar8;
  pcVar14 = local_208;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar14 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar14 = pcVar14 + 1;
  }
  pcVar5 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  do {
    pcVar14 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar14 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar14 + -uVar8;
  pcVar14 = local_108;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar14 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar14 = pcVar14 + 1;
  }
  local_de4[0] = FUN_00584270(100,0xc800000064);
  local_de4[1] = FUN_00584270(100,200,100);
  local_de4[2] = FUN_00584270(200,100,100);
  local_de4[3] = FUN_00584270(100,200,200);
  local_ddc = FUN_00584270(200,100,200);
  local_dda = FUN_00584270(200,200,100);
  local_dd8 = FUN_00584270(0x96,100,0x32);
  local_dd6 = FUN_00584270(100,0x32,0x96);
  local_dd4 = FUN_00584270(0x32,0x96,100);
  local_dd2 = FUN_00584270(0x96,0x96,100);
  local_dd0 = FUN_00584270(0x96,100,0x96);
  local_dce = FUN_00584270(100,0x96,0x96);
  FUN_0042b6c9();
  uVar6 = FUN_004106d0();
  piVar10 = local_dc8;
  puVar11 = local_de4;
  pcVar5 = local_c08;
  iVar12 = 0xc;
  do {
    local_dcc = *piVar10;
    if (0 < local_dcc) {
      FUN_007a630a(local_d08,s__s__i_00858ae8,pcVar5,local_dcc);
      FUN_004107f0(uVar6,local_d08,(float)local_dcc,CONCAT22(extraout_var_01,*puVar11));
    }
    pcVar5 = pcVar5 + 0x100;
    puVar11 = puVar11 + 1;
    piVar10 = piVar10 + 1;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  FUN_0042b6c9();
  uVar6 = FUN_004106d0();
  puVar11 = local_de4;
  pcVar5 = local_c08;
  iVar12 = 0;
  do {
    if (0 < *(int *)((int)local_dc8 + iVar12)) {
      fVar1 = *(float *)((int)local_d98 + iVar12);
      FUN_007a630a(local_d08,s__s___0f_00858ab4,pcVar5,(double)fVar1);
      FUN_004107f0(uVar6,local_d08,fVar1,CONCAT22(extraout_var,*puVar11));
    }
    iVar12 = iVar12 + 4;
    pcVar5 = pcVar5 + 0x100;
    puVar11 = puVar11 + 1;
  } while (iVar12 < 0x2d);
  FUN_0042b6c9();
  uVar6 = FUN_004106d0();
  puVar11 = local_de4;
  pcVar5 = local_c08;
  iVar12 = 0;
  do {
    if (0 < *(int *)((int)local_dc8 + iVar12)) {
      fVar1 = *(float *)((int)local_d68 + iVar12);
      FUN_007a630a(local_d08,s__s___0f_00858ab4,pcVar5,(double)fVar1);
      FUN_004107f0(uVar6,local_d08,fVar1,CONCAT22(extraout_var_02,*puVar11));
    }
    iVar12 = iVar12 + 4;
    pcVar5 = pcVar5 + 0x100;
    puVar11 = puVar11 + 1;
  } while (iVar12 < 0x2d);
  FUN_0042b6c9();
  uVar6 = FUN_004106d0();
  puVar11 = local_de4;
  pcVar5 = local_c08;
  iVar12 = 0;
  do {
    if (0 < *(int *)((int)local_dc8 + iVar12)) {
      fVar1 = *(float *)((int)local_d38 + iVar12);
      FUN_007a630a(local_d08,s__s___0f_00858ab4,pcVar5,(double)fVar1);
      FUN_004107f0(uVar6,local_d08,fVar1,CONCAT22(extraout_var_00,*puVar11));
    }
    iVar12 = iVar12 + 4;
    pcVar5 = pcVar5 + 0x100;
    puVar11 = puVar11 + 1;
  } while (iVar12 < 0x2d);
  FUN_00410600();
  return;
}


