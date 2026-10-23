// FUN_005a6460 @ 5a6460 size=1702

void FUN_005a6460(void)

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
  int iVar13;
  float *pfVar14;
  char *pcVar15;
  float10 fVar16;
  undefined1 *puStack_dc8;
  undefined2 local_db4 [4];
  undefined2 local_dac;
  undefined2 local_daa;
  undefined2 local_da8;
  undefined2 local_da6;
  undefined2 local_da4;
  undefined2 local_da2;
  undefined2 local_da0;
  undefined2 local_d9e;
  int local_d9c;
  int local_d98 [9];
  float local_d74 [9];
  float local_d50 [9];
  float local_d2c [9];
  undefined1 local_d08 [256];
  char local_c08 [256];
  char local_b08 [256];
  char local_a08 [256];
  char local_908 [256];
  char local_808 [256];
  char local_708 [256];
  char local_608 [256];
  char local_508 [256];
  char local_408 [1028];
  
  iVar12 = DAT_00bda0f8;
  puStack_dc8 = &stack0xfffffffc;
  pfVar14 = local_d2c;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar14 = 0.0;
    pfVar14 = pfVar14 + 1;
  }
  pfVar14 = local_d50;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar14 = 0.0;
    pfVar14 = pfVar14 + 1;
  }
  pfVar14 = local_d74;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar14 = 0.0;
    pfVar14 = pfVar14 + 1;
  }
  piVar10 = local_d98;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
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
      if (((*(char *)(iVar7 + 0x160) != '\0') && (iVar7 = *(int *)(iVar7 + 0x134), 0xb < iVar7)) &&
         (iVar7 < 0x15)) {
        iVar13 = iVar7 + -0xc;
        local_d98[iVar13] = (int)((&puStack_dc8)[iVar7] + 1);
        fVar16 = (float10)FUN_004fd7c0();
        local_d74[iVar13] = (float)(fVar16 + (float10)local_d74[iVar13]);
        fVar16 = (float10)FUN_004fd5d0();
        local_d50[iVar13] = (float)(fVar16 + (float10)local_d50[iVar13]);
        fVar16 = (float10)FUN_004fcd20();
        local_d2c[iVar13] = (float)(fVar16 + (float10)local_d2c[iVar13]);
      }
    }
  }
  piVar10 = *(int **)(iVar12 + 0x451c);
  while (piVar10 != (int *)0x0) {
    piVar3 = (int *)piVar10[2];
    iVar12 = *piVar10;
    piVar10 = piVar3;
    if (((*(char *)(iVar12 + 0x154) == '\0') && (*(char *)(iVar12 + 0x162) == '\0')) &&
       ((*(char *)(iVar12 + 0x160) != '\0' &&
        ((iVar12 = *(int *)(iVar12 + 0x134), 0xb < iVar12 && (iVar12 < 0x15)))))) {
      iVar7 = iVar12 + -0xc;
      local_d98[iVar7] = (int)((&puStack_dc8)[iVar12] + 1);
      fVar16 = (float10)FUN_004fd7c0();
      local_d74[iVar7] = (float)(fVar16 + (float10)local_d74[iVar7]);
      fVar16 = (float10)FUN_004fd5d0();
      local_d50[iVar7] = (float)(fVar16 + (float10)local_d50[iVar7]);
      fVar16 = (float10)FUN_004fcd20();
      local_d2c[iVar7] = (float)(fVar16 + (float10)local_d2c[iVar7]);
    }
  }
  pcVar5 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  do {
    pcVar15 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar15 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar15;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar15 + -uVar8;
  pcVar15 = local_c08;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar15 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar15 = pcVar15 + 1;
  }
  pcVar5 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  do {
    pcVar15 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar15 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar15;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar15 + -uVar8;
  pcVar15 = local_b08;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar15 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar15 = pcVar15 + 1;
  }
  pcVar5 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  do {
    pcVar15 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar15 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar15;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar15 + -uVar8;
  pcVar15 = local_a08;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar15 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar15 = pcVar15 + 1;
  }
  pcVar5 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  do {
    pcVar15 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar15 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar15;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar15 + -uVar8;
  pcVar15 = local_908;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar15 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar15 = pcVar15 + 1;
  }
  pcVar5 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  do {
    pcVar15 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar15 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar15;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar15 + -uVar8;
  pcVar15 = local_808;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar15 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar15 = pcVar15 + 1;
  }
  pcVar5 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  do {
    pcVar15 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar15 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar15;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar15 + -uVar8;
  pcVar15 = local_708;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar15 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar15 = pcVar15 + 1;
  }
  pcVar5 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  do {
    pcVar15 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar15 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar15;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar15 + -uVar8;
  pcVar15 = local_608;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar15 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar15 = pcVar15 + 1;
  }
  pcVar5 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  do {
    pcVar15 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar15 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar15;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar15 + -uVar8;
  pcVar15 = local_508;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar15 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar15 = pcVar15 + 1;
  }
  pcVar5 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  do {
    pcVar15 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar15 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar15;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar15 + -uVar8;
  pcVar15 = local_408;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar15 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar15 = pcVar15 + 1;
  }
  local_db4[0] = FUN_00584270(100,100,200);
  local_db4[1] = FUN_00584270(100,200,100);
  local_db4[2] = FUN_00584270(200,100,100);
  local_db4[3] = FUN_00584270(100,200,200);
  local_dac = FUN_00584270(200,100,200);
  local_daa = FUN_00584270(200,200,100);
  local_da8 = FUN_00584270(0x96,100,0x32);
  local_da6 = FUN_00584270(100,0x32,0x96);
  local_da4 = FUN_00584270(0x32,0x96,100);
  local_da2 = FUN_00584270(0x96,0x96,100);
  local_da0 = FUN_00584270(0x96,100,0x96);
  local_d9e = FUN_00584270(100,0x96,0x96);
  FUN_0042b6c9();
  uVar6 = FUN_004106d0();
  piVar10 = local_d98;
  puVar11 = local_db4;
  pcVar5 = local_c08;
  iVar12 = 9;
  do {
    local_d9c = *piVar10;
    if (0 < local_d9c) {
      FUN_007a630a(local_d08,s__s__i_00858ae8,pcVar5,local_d9c);
      FUN_004107f0(uVar6,local_d08,(float)local_d9c,CONCAT22(extraout_var_01,*puVar11));
    }
    pcVar5 = pcVar5 + 0x100;
    puVar11 = puVar11 + 1;
    piVar10 = piVar10 + 1;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  FUN_0042b6c9();
  uVar6 = FUN_004106d0();
  puVar11 = local_db4;
  pcVar5 = local_c08;
  iVar12 = 0;
  do {
    if (0 < *(int *)((int)local_d98 + iVar12)) {
      fVar1 = *(float *)((int)local_d74 + iVar12);
      FUN_007a630a(local_d08,s__s___0f_00858ab4,pcVar5,(double)fVar1);
      FUN_004107f0(uVar6,local_d08,fVar1,CONCAT22(extraout_var,*puVar11));
    }
    iVar12 = iVar12 + 4;
    pcVar5 = pcVar5 + 0x100;
    puVar11 = puVar11 + 1;
  } while (iVar12 < 0x21);
  FUN_0042b6c9();
  uVar6 = FUN_004106d0();
  puVar11 = local_db4;
  pcVar5 = local_c08;
  iVar12 = 0;
  do {
    if (0 < *(int *)((int)local_d98 + iVar12)) {
      fVar1 = *(float *)((int)local_d50 + iVar12);
      FUN_007a630a(local_d08,s__s___0f_00858ab4,pcVar5,(double)fVar1);
      FUN_004107f0(uVar6,local_d08,fVar1,CONCAT22(extraout_var_02,*puVar11));
    }
    iVar12 = iVar12 + 4;
    pcVar5 = pcVar5 + 0x100;
    puVar11 = puVar11 + 1;
  } while (iVar12 < 0x21);
  FUN_0042b6c9();
  uVar6 = FUN_004106d0();
  puVar11 = local_db4;
  pcVar5 = local_c08;
  iVar12 = 0;
  do {
    if (0 < *(int *)((int)local_d98 + iVar12)) {
      fVar1 = *(float *)((int)local_d2c + iVar12);
      FUN_007a630a(local_d08,s__s___0f_00858ab4,pcVar5,(double)fVar1);
      FUN_004107f0(uVar6,local_d08,fVar1,CONCAT22(extraout_var_00,*puVar11));
    }
    iVar12 = iVar12 + 4;
    pcVar5 = pcVar5 + 0x100;
    puVar11 = puVar11 + 1;
  } while (iVar12 < 0x21);
  FUN_00410600();
  return;
}


