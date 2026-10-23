// FUN_005a5d10 @ 5a5d10 size=1755

void FUN_005a5d10(void)

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
  int aiStack_dfc [2];
  undefined1 *puStack_df4;
  char *pcStack_df0;
  char *pcStack_dec;
  undefined8 local_de8;
  undefined2 local_dc4 [4];
  undefined2 local_dbc;
  undefined2 local_dba;
  undefined2 local_db8;
  undefined2 local_db6;
  undefined2 local_db4;
  undefined2 local_db2;
  undefined2 local_db0;
  undefined2 local_dae;
  int local_dac;
  int local_da8 [10];
  float local_d80 [10];
  float local_d58 [10];
  float local_d30 [10];
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
  char local_308 [772];
  
  iVar12 = DAT_00bda0f8;
  pfVar14 = local_d30;
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar14 = 0.0;
    pfVar14 = pfVar14 + 1;
  }
  pfVar14 = local_d58;
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar14 = 0.0;
    pfVar14 = pfVar14 + 1;
  }
  pfVar14 = local_d80;
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar14 = 0.0;
    pfVar14 = pfVar14 + 1;
  }
  piVar10 = local_da8;
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
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
      if (((*(char *)(iVar7 + 0x161) != '\0') && (iVar7 = *(int *)(iVar7 + 0x134), 0x14 < iVar7)) &&
         (iVar7 < 0x1f)) {
        iVar13 = iVar7 + -0x15;
        local_da8[iVar13] = aiStack_dfc[iVar7] + 1;
        local_de8 = 2.12492175987285e-314;
        fVar16 = (float10)FUN_004fd7c0();
        local_d80[iVar13] = (float)(fVar16 + (float10)local_d80[iVar13]);
        local_de8 = 2.12492176827196e-314;
        fVar16 = (float10)FUN_004fd5d0();
        local_d58[iVar13] = (float)(fVar16 + (float10)local_d58[iVar13]);
        local_de8 = (double)CONCAT44(0x5a5de0,(undefined4)local_de8);
        fVar16 = (float10)FUN_004fcd20();
        local_d30[iVar13] = (float)(fVar16 + (float10)local_d30[iVar13]);
      }
    }
  }
  piVar10 = *(int **)(iVar12 + 0x451c);
  while (piVar10 != (int *)0x0) {
    piVar3 = (int *)piVar10[2];
    iVar12 = *piVar10;
    piVar10 = piVar3;
    if (((*(char *)(iVar12 + 0x154) == '\0') && (*(char *)(iVar12 + 0x162) == '\0')) &&
       ((*(char *)(iVar12 + 0x161) != '\0' &&
        ((iVar12 = *(int *)(iVar12 + 0x134), 0x14 < iVar12 && (iVar12 < 0x1f)))))) {
      iVar7 = iVar12 + -0x15;
      local_da8[iVar7] = aiStack_dfc[iVar12] + 1;
      local_de8 = 2.12492183151236e-314;
      fVar16 = (float10)FUN_004fd7c0();
      local_d80[iVar7] = (float)(fVar16 + (float10)local_d80[iVar7]);
      local_de8 = 2.12492183991148e-314;
      fVar16 = (float10)FUN_004fd5d0();
      local_d58[iVar7] = (float)(fVar16 + (float10)local_d58[iVar7]);
      local_de8 = (double)CONCAT44(0x5a5e71,(undefined4)local_de8);
      fVar16 = (float10)FUN_004fcd20();
      local_d30[iVar7] = (float)(fVar16 + (float10)local_d30[iVar7]);
    }
  }
  local_de8 = 3.8354276088733643e-306;
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
  local_de8 = 3.8353950150180486e-306;
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
  local_de8 = 3.835362421162733e-306;
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
  local_de8 = 3.835329827307417e-306;
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
  local_de8 = 3.835308098070551e-306;
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
  local_de8 = 3.835286368833685e-306;
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
  local_de8 = 3.8352537749783695e-306;
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
  local_de8 = 3.8352320457415036e-306;
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
  local_de8 = 3.835199451886188e-306;
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
  local_de8 = 3.835177722649322e-306;
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
  local_de8 = 4.24399158242461e-312;
  pcVar5 = pcVar15 + -uVar8;
  pcVar15 = local_308;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar15 = pcVar15 + 4;
  }
  pcStack_dec = (char *)0x64;
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar15 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar15 = pcVar15 + 1;
  }
  pcStack_df0 = (char *)0x5a609f;
  local_dc4[0] = FUN_00584270();
  local_de8 = 2.1219957919534e-312;
  pcStack_dec = (char *)0x64;
  pcStack_df0 = (char *)0x5a60b8;
  local_dc4[1] = FUN_00584270();
  local_de8 = 2.12199579145934e-312;
  pcStack_dec = (char *)0xc8;
  pcStack_df0 = (char *)0x5a60d1;
  local_dc4[2] = FUN_00584270();
  local_de8 = 4.24399158291868e-312;
  pcStack_dec = (char *)0x64;
  pcStack_df0 = (char *)0x5a60ed;
  local_dc4[3] = FUN_00584270();
  local_de8 = 4.24399158242461e-312;
  pcStack_dec = (char *)0xc8;
  pcStack_df0 = (char *)0x5a6109;
  local_dbc = FUN_00584270();
  local_de8 = 2.1219957919534e-312;
  pcStack_dec = (char *)0xc8;
  pcStack_df0 = (char *)0x5a6125;
  local_dba = FUN_00584270();
  local_de8 = 1.0609978959767e-312;
  pcStack_dec = (char *)0x96;
  pcStack_df0 = (char *)0x5a613e;
  local_db8 = FUN_00584270();
  local_de8 = 3.18299368669494e-312;
  pcStack_dec = (char *)0x64;
  pcStack_df0 = (char *)0x5a6157;
  local_db6 = FUN_00584270();
  local_de8 = 2.12199579170637e-312;
  pcStack_dec = (char *)0x32;
  pcStack_df0 = (char *)0x5a6170;
  local_db4 = FUN_00584270();
  local_de8 = 2.12199579170637e-312;
  pcStack_dec = (char *)0x96;
  pcStack_df0 = (char *)0x5a618c;
  local_db2 = FUN_00584270();
  local_de8 = 3.18299368694197e-312;
  pcStack_dec = (char *)0x96;
  pcStack_df0 = (char *)0x5a61a8;
  local_db0 = FUN_00584270();
  local_de8 = 3.18299368718901e-312;
  pcStack_dec = (undefined1 *)0x64;
  pcStack_df0 = (char *)0x5a61c4;
  local_dae = FUN_00584270();
  local_de8 = 3.8347648671484663e-306;
  uVar6 = FUN_0042b6c9();
  local_de8 = (double)CONCAT44(uVar6,0x5a61e2);
  uVar6 = FUN_004106d0();
  piVar10 = local_da8;
  puVar11 = local_dc4;
  pcVar5 = local_c08;
  iVar12 = 10;
  do {
    local_dac = *piVar10;
    if (0 < local_dac) {
      local_de8 = (double)CONCAT44(local_dac,pcVar5);
      pcStack_df0 = local_d08;
      pcStack_dec = s__s__i_00858ae8;
      puStack_df4 = (undefined1 *)0x5a6218;
      FUN_007a630a();
      pcStack_dec = local_d08;
      local_de8 = (double)CONCAT44(CONCAT22(extraout_var_01,*puVar11),(float)local_dac);
      puStack_df4 = (undefined1 *)0x5a623d;
      pcStack_df0 = (char *)uVar6;
      FUN_004107f0();
    }
    pcVar5 = pcVar5 + 0x100;
    puVar11 = puVar11 + 1;
    piVar10 = piVar10 + 1;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  local_de8 = 3.834591033253353e-306;
  uVar6 = FUN_0042b6c9();
  local_de8 = (double)CONCAT44(uVar6,0x5a6267);
  uVar6 = FUN_004106d0();
  puVar11 = local_dc4;
  pcVar5 = local_c08;
  iVar12 = 0;
  do {
    if (0 < *(int *)((int)local_da8 + iVar12)) {
      fVar1 = *(float *)((int)local_d80 + iVar12);
      puStack_df4 = local_d08;
      local_de8 = (double)fVar1;
      pcStack_df0 = s__s___0f_00858ab4;
      aiStack_dfc[1] = 0x5a62a1;
      pcStack_dec = pcVar5;
      FUN_007a630a();
      pcStack_dec = local_d08;
      local_de8 = (double)CONCAT44(CONCAT22(extraout_var,*puVar11),fVar1);
      puStack_df4 = (undefined1 *)0x5a62c1;
      pcStack_df0 = (char *)uVar6;
      FUN_004107f0();
    }
    iVar12 = iVar12 + 4;
    pcVar5 = pcVar5 + 0x100;
    puVar11 = puVar11 + 1;
  } while (iVar12 < 0x25);
  local_de8 = 3.8345367101611893e-306;
  uVar6 = FUN_0042b6c9();
  local_de8 = (double)CONCAT44(uVar6,0x5a62e9);
  uVar6 = FUN_004106d0();
  puVar11 = local_dc4;
  pcVar5 = local_c08;
  iVar12 = 0;
  do {
    if (0 < *(int *)((int)local_da8 + iVar12)) {
      fVar1 = *(float *)((int)local_d58 + iVar12);
      puStack_df4 = local_d08;
      local_de8 = (double)fVar1;
      pcStack_df0 = s__s___0f_00858ab4;
      aiStack_dfc[1] = 0x5a6326;
      pcStack_dec = pcVar5;
      FUN_007a630a();
      pcStack_dec = local_d08;
      local_de8 = (double)CONCAT44(CONCAT22(extraout_var_02,*puVar11),fVar1);
      puStack_df4 = (undefined1 *)0x5a6346;
      pcStack_df0 = (char *)uVar6;
      FUN_004107f0();
    }
    iVar12 = iVar12 + 4;
    pcVar5 = pcVar5 + 0x100;
    puVar11 = puVar11 + 1;
  } while (iVar12 < 0x25);
  local_de8 = 3.8344932516874745e-306;
  uVar6 = FUN_0042b6c9();
  local_de8 = (double)CONCAT44(uVar6,0x5a636e);
  uVar6 = FUN_004106d0();
  puVar11 = local_dc4;
  pcVar5 = local_c08;
  iVar12 = 0;
  do {
    if (0 < *(int *)((int)local_da8 + iVar12)) {
      fVar1 = *(float *)((int)local_d30 + iVar12);
      puStack_df4 = local_d08;
      local_de8 = (double)fVar1;
      pcStack_df0 = s__s___0f_00858ab4;
      aiStack_dfc[1] = 0x5a63ab;
      pcStack_dec = pcVar5;
      FUN_007a630a();
      pcStack_dec = local_d08;
      local_de8 = (double)CONCAT44(CONCAT22(extraout_var_00,*puVar11),fVar1);
      puStack_df4 = (undefined1 *)0x5a63cb;
      pcStack_df0 = (char *)uVar6;
      FUN_004107f0();
    }
    iVar12 = iVar12 + 4;
    pcVar5 = pcVar5 + 0x100;
    puVar11 = puVar11 + 1;
  } while (iVar12 < 0x25);
  local_de8 = (double)CONCAT44(0x5a63e3,(undefined4)local_de8);
  FUN_00410600();
  return;
}


