// FUN_0057de10 @ 57de10 size=374

void __thiscall FUN_0057de10(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  uint local_6c;
  int local_64 [19];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c8c2b;
  local_c = ExceptionList;
  pcVar9 = *(char **)(param_1 + 0x3c0 + param_2 * 0x3e);
  iVar6 = param_1 + param_2 * 0x3e;
  if (pcVar9 != (char *)0x0) {
    local_64[2] = *(undefined4 *)(iVar6 + 0x3b4);
    local_64[0] = param_2;
    local_64[1] = *(undefined4 *)(iVar6 + 0x3b0);
    uVar4 = 0xffffffff;
    do {
      pcVar10 = pcVar9;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    piVar8 = (int *)(pcVar10 + -uVar4);
    piVar11 = local_64 + 3;
    ExceptionList = &local_c;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *piVar11 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar11 = piVar11 + 1;
    }
    local_10 = *(undefined4 *)(param_1 + 0xb70);
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)piVar11 = (char)*piVar8;
      piVar8 = (int *)((int)piVar8 + 1);
      piVar11 = (int *)((int)piVar11 + 1);
    }
    local_18 = *(undefined4 *)(iVar6 + 0x3c8);
    local_14 = *(undefined4 *)(iVar6 + 0x3cc);
    puVar2 = operator_new(0xc);
    local_4 = 0;
    puVar7 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = operator_new(0x66);
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
      puVar2[1] = puVar3;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined1 *)((int)puVar2 + 9) = 1;
      *puVar2 = &PTR_FUN_007eac3c;
      *(undefined1 *)((int)puVar2 + 10) = 0;
      *puVar3 = 8;
      iVar6 = puVar2[1];
      local_6c = local_6c & 0xff000000;
      *(undefined4 *)(iVar6 + 8) = DAT_0088f29c;
      *(undefined2 *)(iVar6 + 0xc) = DAT_0088f2a0;
      iVar6 = puVar2[1];
      *(uint *)(iVar6 + 2) = local_6c;
      *(undefined2 *)(iVar6 + 6) = 0;
      *puVar2 = &PTR_FUN_007ea29c;
      piVar8 = local_64;
      piVar11 = (int *)(puVar2[1] + 0xe);
      for (iVar6 = 0x16; puVar7 = puVar2, iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar11 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar11 = piVar11 + 1;
      }
    }
    local_4 = 0xffffffff;
    FUN_00565c70(puVar7);
  }
  ExceptionList = local_c;
  return;
}


