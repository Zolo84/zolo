// FUN_0065f000 @ 65f000 size=214

undefined4 * __thiscall FUN_0065f000(undefined4 *param_1,int param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint in_stack_ffffffd4;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d37d8;
  local_c = ExceptionList;
  local_14 = local_14 & 0xff000000;
  ExceptionList = &local_c;
  FUN_0065cdb0(local_14,in_stack_ffffffd4 & 0xffff0000);
  local_4 = 0;
  *param_1 = &PTR_FUN_007f0b90;
  param_1[2] = &PTR_LAB_007f0b8c;
  if (param_3 == (char *)0x0) {
    param_1[8] = 0;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar2 = param_3;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = operator_new(~uVar3);
    uVar3 = 0xffffffff;
    param_1[8] = pcVar2;
    do {
      pcVar5 = param_3;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = param_3 + 1;
      cVar1 = *param_3;
      param_3 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar5 + -uVar3;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar2 = pcVar2 + 1;
    }
  }
  param_1[9] = *(int *)(DAT_00893530 + 0x20) + param_2 * 0x46;
  ExceptionList = local_c;
  return param_1;
}


