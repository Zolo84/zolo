// FUN_006ed240 @ 6ed240 size=447

undefined4 * __thiscall
FUN_006ed240(undefined4 *param_1,undefined4 param_2,char *param_3,char *param_4,undefined4 param_5)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007da3a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_LAB_007e3b70;
  local_4 = 0;
  FUN_00433f00();
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007f800c;
  param_1[0x13] = param_2;
  uVar6 = 0xffffffff;
  *param_1 = &PTR_FUN_007f7fdc;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007f7fd8;
  local_4 = CONCAT31(local_4._1_3_,1);
  pcVar2 = param_4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = operator_new(~uVar6);
  uVar6 = 0xffffffff;
  *(char **)((int)param_1 + 0x5a) = pcVar2;
  do {
    pcVar10 = param_4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = param_4 + 1;
    cVar1 = *param_4;
    param_4 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar10 = pcVar10 + -uVar6;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar2 = pcVar2 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar2 = param_3;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pvVar3 = operator_new(~uVar6 + 10);
  *(void **)((int)param_1 + 0x5e) = pvVar3;
  pcVar2 = operator_new(~uVar6 + 1);
  uVar6 = 0xffffffff;
  *(char **)((int)param_1 + 0x52) = pcVar2;
  do {
    pcVar10 = param_3;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar10 = pcVar10 + -uVar6;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar2 = pcVar2 + 1;
  }
  pbVar4 = *(byte **)((int)param_1 + 0x52);
  bVar5 = *pbVar4;
  iVar11 = 0;
  param_3 = (char *)0x0;
  if (bVar5 != 0) {
    iVar9 = (int)&DAT_00d4141c - (int)pbVar4;
    do {
      pbVar4[iVar9] = bVar5;
      param_4 = (char *)(uint)*pbVar4;
      iVar8 = *(int *)(*(int *)(param_1[0x13] + 8) + (int)param_4 * 4);
      if (iVar8 == 0) {
        iVar8 = *(int *)(param_1[0x13] + 4);
      }
      else {
        iVar8 = (int)*(short *)(iVar8 + 6);
      }
      param_3 = (char *)((int)param_3 + iVar8);
      if (0x81 < (int)param_3) {
        (&DAT_00d4141c)[iVar11] = 0x2e;
        (&DAT_00d4141d)[iVar11] = 0x2e;
        (&DAT_00d4141e)[iVar11] = 0x2e;
        iVar11 = iVar11 + 3;
        break;
      }
      bVar5 = pbVar4[1];
      iVar11 = iVar11 + 1;
      pbVar4 = pbVar4 + 1;
    } while (bVar5 != 0);
  }
  uVar6 = 0xffffffff;
  (&DAT_00d4141c)[iVar11] = 0;
  pcVar2 = &DAT_00d4141c;
  do {
    pcVar10 = pcVar2;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar2 = pcVar10 + -uVar6;
  pcVar10 = *(char **)((int)param_1 + 0x5e);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar10 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar10 = pcVar10 + 1;
  }
  param_1[0x10] = param_5;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0x56) = 0;
  *(undefined4 *)((int)param_1 + 0x66) = 0;
  *(undefined4 *)((int)param_1 + 0x62) = 0;
  *(undefined1 *)((int)param_1 + 0x6b) = 0;
  *(undefined1 *)((int)param_1 + 0x6a) = 0;
  ExceptionList = local_c;
  return param_1;
}


