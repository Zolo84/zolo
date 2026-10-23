// FUN_00566410 @ 566410 size=207

undefined4 * __thiscall
FUN_00566410(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  char *pcVar5;
  uint local_8;
  
  uVar4 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  puVar3 = operator_new(~uVar4 + 0x22);
  param_1[1] = puVar3;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_FUN_007e94bc;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *puVar3 = 0;
  iVar2 = param_1[1];
  local_8 = local_8 & 0xff000000;
  *(undefined4 *)(iVar2 + 8) = DAT_0088f29c;
  *(undefined2 *)(iVar2 + 0xc) = DAT_0088f2a0;
  iVar2 = param_1[1];
  *(uint *)(iVar2 + 2) = local_8;
  *(undefined2 *)(iVar2 + 6) = 0;
  *(undefined1 *)((int)param_1 + 10) = 1;
  *param_1 = &PTR_FUN_007e949c;
  *(undefined4 *)(param_1[1] + 0xe) = param_3;
  *(undefined4 *)(param_1[1] + 0x12) = param_4;
  *(undefined4 *)(param_1[1] + 0x16) = param_5;
  uVar4 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar2 = param_1[1];
  uVar4 = ~uVar4;
  *(short *)(iVar2 + 0x1a) = (short)uVar4;
  while (uVar4 != 0) {
    uVar4 = uVar4 - 1;
    *(char *)(iVar2 + 0x1c + uVar4) = param_2[uVar4];
  }
  return param_1;
}


