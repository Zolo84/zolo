// FUN_00433f90 @ 433f90 size=406

undefined4 * __thiscall
FUN_00433f90(undefined4 *param_1,undefined4 param_2,char *param_3,int param_4,undefined2 param_5,
            undefined1 param_6,undefined1 param_7)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ba6c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *param_1 = &PTR_FUN_007e4138;
  param_1[2] = &PTR_LAB_007e4134;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = DAT_00bd1bac;
  *(undefined1 *)((int)param_1 + 0x2e) = param_7;
  *(undefined1 *)(param_1 + 0x8f) = param_6;
  *(undefined2 *)(param_1 + 3) = param_5;
  uVar5 = 0xffffffff;
  *param_1 = &PTR_FUN_007e4188;
  param_1[2] = &PTR_LAB_007e4184;
  param_1[0xc] = param_2;
  param_1[0x8e] = param_4;
  pcVar7 = param_3;
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  local_4 = 1;
  pcVar7 = pcVar8 + -uVar5;
  pcVar8 = (char *)(param_1 + 0x4e);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  iVar3 = FUN_004129c4(param_3);
  if (param_4 < iVar3) {
    iVar3 = *(int *)(*(int *)(param_1[0xc] + 8) + 0xb8);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1[0xc] + 4);
    }
    else {
      iVar3 = (int)*(short *)(iVar3 + 6);
    }
    iVar4 = 0;
    for (param_4 = param_4 + iVar3 * -3; 0 < param_4; param_4 = param_4 - iVar3) {
      bVar2 = param_3[iVar4];
      *(byte *)(iVar4 + 0x34 + (int)param_1) = bVar2;
      _param_6 = (uint)bVar2;
      iVar3 = *(int *)(*(int *)(param_1[0xc] + 8) + _param_6 * 4);
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1[0xc] + 4);
      }
      else {
        iVar3 = (int)*(short *)(iVar3 + 6);
      }
      iVar4 = iVar4 + 1;
    }
    *(undefined1 *)(iVar4 + 0x34 + (int)param_1) = 0x2e;
    *(undefined1 *)(iVar4 + 0x35 + (int)param_1) = 0x2e;
    *(undefined1 *)(iVar4 + 0x36 + (int)param_1) = 0x2e;
    *(undefined1 *)(iVar4 + 0x37 + (int)param_1) = 0;
  }
  else {
    uVar5 = 0xffffffff;
    do {
      pcVar7 = param_3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar7 = param_3 + 1;
      cVar1 = *param_3;
      param_3 = pcVar7;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar7 + -uVar5;
    pcVar8 = (char *)(param_1 + 0xd);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
  }
  param_1[0x4d] = *(undefined4 *)(param_1[0xc] + 0x10);
  ExceptionList = local_c;
  return param_1;
}


