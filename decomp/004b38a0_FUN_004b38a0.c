// FUN_004b38a0 @ 4b38a0 size=1251

undefined4 * FUN_004b38a0(undefined4 param_1,int *param_2,char param_3)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int *unaff_EBX;
  char *pcVar10;
  char *pcVar11;
  char unaff_retaddr;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  int *piVar15;
  undefined2 uVar16;
  int local_51c;
  int local_518;
  int *local_514;
  undefined1 local_510 [20];
  undefined1 auStack_4fc [12];
  undefined1 local_4f0 [20];
  undefined1 auStack_4dc [32];
  undefined1 auStack_4bc [32];
  char acStack_49c [100];
  char acStack_438 [100];
  undefined1 auStack_3d4 [200];
  char acStack_30c [256];
  undefined1 auStack_20c [12];
  undefined1 local_200 [244];
  undefined1 auStack_10c [12];
  undefined1 local_100 [252];
  int *piStack_4;
  
  piVar15 = *(int **)((int)param_2 + 0x2e);
  FUN_00791b3b((short)local_200,(short)(piVar15 + 0x22));
  FUN_00791b3b(local_100,(int)piVar15 + 0x8e);
  if ((char)param_2[1] == '\0') {
    if (param_3 == '\0') {
      uVar2 = FUN_0042b6c9(0xeca0);
      goto LAB_004b3955;
    }
    uVar2 = FUN_0042b6c9(0xeca0);
    FUN_007a630a(local_4f0,0xec98,uVar2);
  }
  else if (param_3 == '\0') {
    uVar2 = FUN_0042b6c9(0xecb4);
LAB_004b3955:
    FUN_007a630a((short)local_4f0,uVar2);
  }
  else {
    uVar2 = FUN_0042b6c9(0xecb4);
    FUN_007a630a(local_4f0,0xecac,uVar2);
  }
  local_51c = *piVar15;
  local_514 = piVar15 + 0x11;
  local_518 = *local_514;
  iVar3 = __ftol();
  if (*(char *)((int)piVar15 + 0xa6) == '\0') {
    if (iVar3 < 3) {
      uVar2 = 0xec58;
    }
    else {
      if (iVar3 < 6) {
        uVar2 = 0xec4c;
        goto LAB_004b39e1;
      }
      if (iVar3 < 0xf) {
        uVar2 = 0xec40;
        goto LAB_004b39fd;
      }
      uVar2 = 0xec34;
    }
  }
  else {
    if (4 < iVar3) {
      if (0xd < iVar3) {
        uVar2 = 0xec68;
LAB_004b39fd:
        uVar2 = FUN_0042b6c9(uVar2);
        uVar16 = SUB42(local_510,0);
        goto LAB_004b3a24;
      }
      uVar2 = 0xec78;
LAB_004b39e1:
      uVar2 = FUN_0042b6c9(uVar2);
      uVar16 = SUB42(local_510,0);
      goto LAB_004b3a24;
    }
    uVar2 = 0xec88;
  }
  uVar2 = FUN_0042b6c9(uVar2);
  uVar16 = SUB42(local_510,0);
LAB_004b3a24:
  FUN_007a630a(uVar16,uVar2);
  puVar4 = (undefined2 *)FUN_0044df10();
  piVar5 = (int *)(**(code **)(*(int *)((int)param_2 + 6) + 0x28))
                            (&local_51c,*puVar4,(short)((uint)*(undefined4 *)(puVar4 + 1) >> 0x10));
  if (*piVar5 == 0) {
    uVar6 = FUN_0042b6c9(s_HIST_PART_0083ec1c);
  }
  else {
    uVar6 = FUN_0042b6c9(s_HIST_LEAD_0083ec28);
  }
  FUN_007a630a(auStack_4dc,uVar6);
  if (param_2 == piVar15) {
    uVar6 = FUN_004af740(*(undefined4 *)((int)piVar15 + 0x6e));
  }
  else {
    uVar6 = FUN_004af740(*(undefined4 *)((int)piVar15 + 0x2a));
  }
  FUN_007a630a(acStack_49c,uVar6);
  if (unaff_retaddr != '\0') {
    uVar8 = 0xffffffff;
    pcVar7 = acStack_49c;
    do {
      pcVar11 = pcVar7;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar11 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar7 = pcVar11 + -uVar8;
    pcVar11 = acStack_30c;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_007a630a(acStack_49c,&DAT_0083ec14,acStack_30c);
    param_2 = piStack_4;
  }
  if ((int)*(char *)((int)piVar15 + 0x89) +
      ((int)*(char *)((int)piVar15 + 0x8a) + (short)piVar15[0x23] * 0xc) * 0x1e ==
      (int)*(char *)((int)piVar15 + 0x8f) +
      ((int)(char)piVar15[0x24] + *(short *)((int)piVar15 + 0x92) * 0xc) * 0x1e) {
    puVar14 = auStack_20c;
    uVar6 = FUN_0042b6c9(s_HIST_DATE_0083ec08);
    FUN_007a630a(auStack_3d4,uVar6,puVar14);
  }
  else {
    puVar14 = auStack_10c;
    puVar12 = auStack_20c;
    uVar6 = FUN_0042b6c9(s_HIST_DATE2_0083ebfc);
    FUN_007a630a(auStack_3d4,uVar6,puVar12,puVar14);
  }
  if (param_2 == piVar15) {
    uVar6 = FUN_0042b6c9(s_HIST_ATTACK_0083ebf0);
  }
  else {
    uVar6 = FUN_0042b6c9(s_HIST_DEFENSE_0083ebe0);
  }
  FUN_007a630a(auStack_4bc,uVar6);
  iVar3 = FUN_00428460(piVar15 + 0x26);
  if (iVar3 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)(iVar3 + -0xc);
  }
  pcVar7 = (char *)(**(code **)(*piVar5 + 0xc))();
  uVar8 = 0xffffffff;
  do {
    pcVar11 = pcVar7;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar11 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar11;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar7 = pcVar11 + -uVar8;
  pcVar11 = acStack_438;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar11 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar11 = pcVar11 + 1;
  }
  if (unaff_retaddr != '\0') {
    uVar8 = 0xffffffff;
    pcVar7 = acStack_438;
    do {
      pcVar11 = pcVar7;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar11 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar7 = pcVar11 + -uVar8;
    pcVar11 = acStack_30c;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_007a630a(acStack_438,&DAT_0083ec14,acStack_30c);
  }
  puVar14 = auStack_3d4;
  pcVar7 = acStack_49c;
  piVar5 = &local_51c;
  pcVar11 = acStack_438;
  if (*(char *)((int)piVar15 + 0xa6) == '\0') {
    puVar13 = auStack_4bc;
    puVar14 = auStack_4fc;
    puVar12 = auStack_4dc;
    uVar6 = FUN_0042b6c9(s_HIST_LEADERLAND_0083ebbc);
    FUN_007a630a(&DAT_008e2320,uVar6,puVar12,puVar14,puVar13);
  }
  else {
    puVar12 = auStack_4fc;
    puVar13 = auStack_4dc;
    uVar6 = FUN_0042b6c9(s_HIST_LEADERNAVAL_0083ebcc);
    FUN_007a630a(&DAT_008e2320,uVar6,puVar13,puVar12,pcVar11,piVar5,puVar14,pcVar7);
  }
  FUN_004b3d90(&DAT_008e2320,piStack_4,1);
  if (piStack_4 == piVar15) {
    piVar15 = unaff_EBX;
  }
  FUN_004b3d90(&DAT_008e2320,piVar15,0);
  uVar8 = 0xffffffff;
  pcVar7 = &DAT_00839650;
  do {
    pcVar11 = pcVar7;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar11 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar11;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar3 = -1;
  pcVar7 = (char *)&DAT_008e2320;
  do {
    pcVar10 = pcVar7;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  pcVar7 = pcVar11 + -uVar8;
  pcVar11 = pcVar10 + -1;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar11 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar11 = pcVar11 + 1;
  }
  return &DAT_008e2320;
}


