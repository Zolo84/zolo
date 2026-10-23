// FUN_00437e60 @ 437e60 size=292

undefined4 * __thiscall
FUN_00437e60(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,char *param_8)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007baa30;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  param_1[3] = &PTR_LAB_007e4130;
  param_1[2] = &PTR_LAB_007e4334;
  *param_1 = &PTR_FUN_007e4320;
  param_1[3] = &PTR_LAB_007e431c;
  param_1[8] = param_3;
  param_1[7] = param_2;
  iVar3 = *(int *)(param_6 + 0x10);
  param_1[0x12] = param_4;
  param_1[9] = param_2 + param_4;
  param_1[4] = param_7;
  param_1[10] = iVar3 + param_3;
  local_4 = 1;
  param_1[0xc] = param_5 + 2;
  *(undefined1 *)((int)param_1 + 0x39) = 1;
  *(undefined1 *)((int)param_1 + 0x3a) = 1;
  param_1[0xd] = 0;
  param_1[5] = param_6;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)((int)param_1 + 0x51) = 0;
  pvVar2 = operator_new(param_5 + 4);
  param_1[6] = pvVar2;
  iVar3 = 0;
  if (param_1[0xc] != -2 && -1 < param_1[0xc] + 2) {
    do {
      iVar3 = iVar3 + 1;
      *(undefined1 *)(param_1[6] + -1 + iVar3) = 0;
    } while (iVar3 < param_1[0xc] + 2);
  }
  if (param_8 != (char *)0x0) {
    uVar4 = 0xffffffff;
    do {
      pcVar6 = param_8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = param_8 + 1;
      cVar1 = *param_8;
      param_8 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar6 + -uVar4;
    pcVar7 = (char *)param_1[6];
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  *(undefined1 *)((int)param_1 + 0x3b) = 0;
  param_1[0x11] = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x52) = 0;
  *(undefined1 *)((int)param_1 + 0x53) = 0;
  ExceptionList = local_c;
  return param_1;
}


