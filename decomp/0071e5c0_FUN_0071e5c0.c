// FUN_0071e5c0 @ 71e5c0 size=184

undefined4 * __thiscall
FUN_0071e5c0(undefined4 *param_1,undefined2 param_2,undefined4 *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint local_8;
  
  puVar3 = operator_new(0x4e);
  if (puVar3 == (undefined2 *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    puVar3[3] = 0;
    *(undefined1 *)(puVar3 + 2) = 0;
    *(undefined1 *)((int)puVar3 + 3) = 0;
    *(undefined1 *)(puVar3 + 1) = 0;
    puVar3[4] = 0;
    *(undefined4 *)(puVar3 + 5) = 0;
  }
  param_1[1] = puVar3;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_FUN_007e9414;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *puVar3 = param_2;
  iVar2 = param_1[1];
  local_8 = local_8 & 0xff000000;
  *(undefined4 *)(iVar2 + 8) = *param_3;
  *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(param_3 + 1);
  iVar2 = param_1[1];
  *(uint *)(iVar2 + 2) = local_8;
  *(undefined2 *)(iVar2 + 6) = 0;
  uVar4 = 0xffffffff;
  *param_1 = &PTR_FUN_007e93f4;
  do {
    pcVar6 = param_4;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_4 + 1;
    cVar1 = *param_4;
    param_4 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  pcVar7 = (char *)(param_1[1] + 0xe);
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
  return param_1;
}


