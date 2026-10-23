// FUN_00583250 @ 583250 size=923

void __thiscall FUN_00583250(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void **ppvVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 *puStack_314;
  undefined4 local_310;
  char acStack_30c [256];
  char acStack_20c [256];
  char acStack_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c8f2e;
  ppvVar4 = &pvStack_c;
  puVar9 = *(undefined4 **)(param_1 + (param_2 * 9 + 0x12) * 2);
  local_310 = param_1;
  pvStack_c = ExceptionList;
  while (ExceptionList = ppvVar4, puVar9 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar9[2];
    FUN_007a77fa(*puVar9);
    ppvVar4 = ExceptionList;
    puVar9 = puVar2;
  }
  iVar1 = param_1 + 0x20 + param_2 * 0x12;
  (**(code **)(*(int *)(param_1 + 0x20 + param_2 * 0x12) + 0x14))();
  FUN_007a630a(acStack_30c,s__s__s_0083a350,&DAT_00dc1a70,param_3);
  if (DAT_00dc3a00 != '\0') {
    FUN_007a630a(acStack_20c,s__s__s_0083a350,&DAT_00dc3a00,acStack_30c);
    iVar6 = FUN_007a6615(acStack_20c,&DAT_0082eeb4);
    if (iVar6 != 0) {
      FUN_007a6429(iVar6);
      uVar10 = 0xffffffff;
      pcVar12 = acStack_20c;
      do {
        pcVar13 = pcVar12;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar13 = pcVar12 + 1;
        cVar5 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar5 != '\0');
      uVar10 = ~uVar10;
      pcVar12 = pcVar13 + -uVar10;
      pcVar13 = acStack_30c;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
  }
  pvVar7 = operator_new(0x13e);
  uStack_4 = 0;
  if (pvVar7 == (void *)0x0) {
    puStack_314 = (undefined4 *)0x0;
  }
  else {
    puStack_314 = (undefined4 *)FUN_00426f50(acStack_30c);
  }
  uStack_4 = 0xffffffff;
  cVar5 = FUN_00427570();
joined_r0x0058338d:
  if (cVar5 != '\0') {
    if (puStack_314 != (undefined4 *)0x0) {
      (**(code **)*puStack_314)(1);
    }
    iVar1 = local_310;
    if (param_2 == 4) {
      uVar8 = (**(code **)(*(int *)(local_310 + 0x68) + 4))();
      *(undefined4 *)(iVar1 + 0x7a) = uVar8;
    }
    ExceptionList = pvStack_c;
    return;
  }
  FUN_004276c0(acStack_30c);
  uVar10 = 0xffffffff;
  pcVar12 = acStack_30c;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar5 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar5 != '\0');
  if (2 < ~uVar10 - 1) {
    do {
      uVar10 = 0xffffffff;
      pcVar12 = acStack_30c;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar5 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar5 != '\0');
      if (acStack_30c[~uVar10 - 2] != '\n') {
        uVar10 = 0xffffffff;
        pcVar12 = acStack_30c;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar5 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar5 != '\0');
        if (acStack_30c[~uVar10 - 2] != '\r') goto LAB_005833f4;
      }
      uVar10 = 0xffffffff;
      pcVar12 = acStack_30c;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar5 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar5 != '\0');
      acStack_30c[~uVar10 - 2] = '\0';
    } while( true );
  }
  goto LAB_00583595;
LAB_005833f4:
  if (DAT_00dc3a00 == '\0') {
    FUN_007a630a(acStack_10c,s__s__s_mp3_00857728,&DAT_00dc1a70,acStack_30c);
    iVar6 = FUN_007a6615(acStack_10c,&DAT_0082eeb4);
    if (iVar6 == 0) {
LAB_00583583:
      FUN_00429a00(s_MUSIC___s__s_mp3_cannot_be_found_00857700,&DAT_00dc1a70,acStack_30c,param_3);
      goto LAB_00583595;
    }
    FUN_007a6429(iVar6);
    uVar10 = 0xffffffff;
    pcVar12 = acStack_10c;
    do {
      pcVar13 = pcVar12;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar13 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar13;
    } while (cVar5 != '\0');
    uVar10 = ~uVar10;
    pcVar12 = pcVar13 + -uVar10;
    pcVar13 = acStack_30c;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar13 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
    }
    uVar8 = FUN_007a8d6d(acStack_30c);
    iVar6 = *(int *)(iVar1 + 8);
    puVar9 = operator_new(0xe);
  }
  else {
    FUN_007a630a(acStack_20c,s__s__s__s_mp3_00857734,&DAT_00dc3a00);
    iVar6 = FUN_007a6615(acStack_20c,&DAT_0082eeb4);
    if (iVar6 == 0) {
      FUN_007a630a(acStack_20c,s__s__s_mp3_00857728,&DAT_00dc1a70,acStack_30c);
      iVar6 = FUN_007a6615(acStack_20c,&DAT_0082eeb4);
      if (iVar6 == 0) goto LAB_00583583;
    }
    FUN_007a6429(iVar6);
    uVar10 = 0xffffffff;
    pcVar12 = acStack_20c;
    do {
      pcVar13 = pcVar12;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar13 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar13;
    } while (cVar5 != '\0');
    uVar10 = ~uVar10;
    pcVar12 = pcVar13 + -uVar10;
    pcVar13 = acStack_30c;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar13 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
    }
    uVar8 = FUN_007a8d6d(acStack_30c);
    iVar6 = *(int *)(iVar1 + 8);
    puVar9 = operator_new(0xe);
  }
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    *puVar9 = uVar8;
    puVar9[1] = iVar6;
    puVar9[2] = 0;
    *(undefined1 *)(puVar9 + 3) = 0;
  }
  *(undefined4 **)(iVar1 + 8) = puVar9;
  iVar3 = *(int *)(iVar1 + 0xc);
  *(int *)(iVar1 + 0xc) = iVar3 + 1;
  if (iVar3 == 0) {
    *(undefined4 **)(iVar1 + 4) = puVar9;
  }
  else {
    *(undefined4 **)(iVar6 + 8) = puVar9;
  }
LAB_00583595:
  cVar5 = FUN_00427570();
  goto joined_r0x0058338d;
}


