// FUN_006f8f00 @ 6f8f00 size=721

undefined4 * __thiscall
FUN_006f8f00(undefined4 *param_1,char *param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  uint local_11c;
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007daf98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_0040f510();
  local_4 = 0;
  *(char *)(param_1 + 0x87) = param_4;
  *param_1 = &PTR_FUN_007f8320;
  *(undefined4 *)((int)param_1 + 0x226) = 0;
  if (param_4 == '\x01') {
    if (DAT_00dc3a00 == '\0') {
      uVar7 = 0xffffffff;
      pcVar10 = param_2;
      do {
        pcVar11 = pcVar10;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar10 = pcVar11 + -uVar7;
      pcVar11 = local_10c;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
    }
    else {
      FUN_007a630a(local_10c,s__s__s_0083a350,&DAT_00dc3a00,param_2);
    }
    cVar1 = FUN_006f9b00(local_10c);
    if (cVar1 != '\0') goto LAB_006f9073;
    uVar7 = 0xffffffff;
    *(undefined1 *)(param_1 + 0x87) = 0;
    do {
      pcVar10 = param_2;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar10 = pcVar10 + -uVar7;
    pcVar11 = (char *)(param_1 + 7);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_0082ef90;
    do {
      pcVar11 = pcVar10;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar11 = pcVar11 + -uVar7;
    iVar9 = -1;
    pcVar12 = (char *)(param_1 + 7);
    do {
      pcVar10 = pcVar12;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar10 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar10;
    } while (cVar1 != '\0');
  }
  else {
    uVar7 = 0xffffffff;
    do {
      pcVar10 = param_2;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar10 = pcVar10 + -uVar7;
    pcVar11 = (char *)(param_1 + 7);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_0082ef90;
    do {
      pcVar11 = pcVar10;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar11 = pcVar11 + -uVar7;
    iVar9 = -1;
    pcVar10 = (char *)(param_1 + 7);
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
  }
  pcVar10 = pcVar10 + -1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar10 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar10 = pcVar10 + 1;
  }
LAB_006f9073:
  *(undefined4 *)((int)param_1 + 0x21e) = param_3;
  pvVar2 = operator_new(0x13e);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00426f50(param_1 + 7);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x222) = uVar3;
  FUN_00427480(0);
  uVar3 = FUN_004274e0();
  param_1[1] = uVar3;
  FUN_004273c0(0);
  puVar4 = operator_new(0xc);
  local_4._0_1_ = 2;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar3 = param_1[1];
    puVar5 = operator_new(0x16);
    local_4._0_1_ = 3;
    if (puVar5 == (undefined2 *)0x0) {
      puVar6 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d2d0();
      puVar5[4] = 0;
      *(undefined4 *)(puVar5 + 5) = 0;
      puVar6 = puVar5;
    }
    puVar4[1] = puVar6;
    *(undefined1 *)(puVar4 + 2) = 0;
    *(undefined1 *)((int)puVar4 + 9) = 1;
    *puVar4 = &PTR_FUN_007e9abc;
    *(undefined1 *)((int)puVar4 + 10) = 0;
    *puVar6 = 0x134;
    iVar9 = puVar4[1];
    local_11c = (uint)puVar5 & 0xff000000;
    *(undefined4 *)(iVar9 + 8) = DAT_0088f29c;
    *(undefined2 *)(iVar9 + 0xc) = DAT_0088f2a0;
    iVar9 = puVar4[1];
    *(uint *)(iVar9 + 2) = local_11c;
    *(undefined2 *)(iVar9 + 6) = 0;
    *puVar4 = &PTR_FUN_007e9a9c;
    *(undefined4 *)(puVar4[1] + 0xe) = param_3;
    *(undefined4 *)(puVar4[1] + 0x12) = uVar3;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00565c70(puVar4);
  ExceptionList = local_c;
  return param_1;
}


