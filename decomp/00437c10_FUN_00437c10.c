// FUN_00437c10 @ 437c10 size=311

undefined4 * __thiscall
FUN_00437c10(undefined4 *param_1,undefined4 param_2,char *param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ba9e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00434260(param_2,param_3,param_5,0);
  param_1[0x94] = param_4;
  uVar4 = 0xffffffff;
  *param_1 = &PTR_FUN_007e42d0;
  param_1[2] = &PTR_LAB_007e42cc;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined4 *)((int)param_1 + 0x256) = param_2;
  local_4 = 0;
  pcVar2 = param_3;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = operator_new(~uVar4);
  uVar4 = 0xffffffff;
  param_1[0x93] = pcVar2;
  pcVar8 = param_3;
  do {
    pcVar10 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar8 = pcVar10 + -uVar4;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar2 = pcVar2 + 4;
  }
  iVar3 = 0;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar2 = pcVar2 + 1;
  }
  iVar9 = 0;
  iVar6 = param_5 + -0x10;
  while( true ) {
    *(char *)(iVar3 + 0x34 + (int)param_1) = param_3[iVar3];
    param_5 = (uint)(byte)param_3[iVar3];
    iVar7 = *(int *)(*(int *)(*(int *)((int)param_1 + 0x256) + 8) + param_5 * 4);
    if (iVar7 == 0) {
      iVar7 = *(int *)(*(int *)((int)param_1 + 0x256) + 4);
    }
    else {
      iVar7 = (int)*(short *)(iVar7 + 6);
    }
    iVar9 = iVar9 + iVar7;
    if (iVar6 <= iVar9) break;
    iVar3 = iVar3 + 1;
  }
  *(undefined1 *)(iVar3 + 0x34 + (int)param_1) = 0x2e;
  *(undefined1 *)(iVar3 + 0x35 + (int)param_1) = 0x2e;
  *(undefined1 *)(iVar3 + 0x36 + (int)param_1) = 0x2e;
  *(undefined1 *)(iVar3 + 0x37 + (int)param_1) = 0;
  ExceptionList = local_c;
  return param_1;
}


