// FUN_0041bdb0 @ 41bdb0 size=259

void FUN_0041bdb0(uint param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1;
  iVar3 = *(int *)(param_1 + 0x38);
  bVar1 = *(byte *)(param_1 + 0x34);
  param_1 = (uint)bVar1;
  if (0 < iVar3) {
    do {
      iVar3 = iVar3 + -1;
      *(uint *)(iVar2 + 0x260) =
           *(uint *)(&DAT_00839700 + (*(uint *)(iVar2 + 0x260) >> 0x18 ^ param_1) * 4) ^
           *(uint *)(iVar2 + 0x260) << 8;
    } while (iVar3 != 0);
  }
  *(undefined1 *)(iVar2 + 0x58 + *(int *)(iVar2 + 0x34)) = 1;
  iVar3 = *(int *)(iVar2 + 0x38);
  if (iVar3 == 1) {
    *(byte *)(*(int *)(iVar2 + 0x24) + *(int *)(iVar2 + 0x44)) = bVar1;
    *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + 1;
    return;
  }
  if (iVar3 == 2) {
    *(byte *)(*(int *)(iVar2 + 0x24) + *(int *)(iVar2 + 0x44)) = bVar1;
  }
  else {
    if (iVar3 != 3) {
      *(undefined1 *)(iVar3 + 0x54 + iVar2) = 1;
      *(byte *)(*(int *)(iVar2 + 0x24) + *(int *)(iVar2 + 0x44)) = bVar1;
      iVar3 = *(int *)(iVar2 + 0x44) + 1;
      *(int *)(iVar2 + 0x44) = iVar3;
      *(byte *)(*(int *)(iVar2 + 0x24) + iVar3) = bVar1;
      iVar3 = *(int *)(iVar2 + 0x44) + 1;
      *(int *)(iVar2 + 0x44) = iVar3;
      *(byte *)(*(int *)(iVar2 + 0x24) + iVar3) = bVar1;
      iVar3 = *(int *)(iVar2 + 0x44) + 1;
      *(int *)(iVar2 + 0x44) = iVar3;
      *(byte *)(*(int *)(iVar2 + 0x24) + iVar3) = bVar1;
      iVar3 = *(int *)(iVar2 + 0x44) + 1;
      *(int *)(iVar2 + 0x44) = iVar3;
      *(char *)(*(int *)(iVar2 + 0x24) + iVar3) = *(char *)(iVar2 + 0x38) + -4;
      *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + 1;
      return;
    }
    *(byte *)(*(int *)(iVar2 + 0x24) + *(int *)(iVar2 + 0x44)) = bVar1;
    iVar3 = *(int *)(iVar2 + 0x44) + 1;
    *(int *)(iVar2 + 0x44) = iVar3;
    *(byte *)(*(int *)(iVar2 + 0x24) + iVar3) = bVar1;
  }
  iVar3 = *(int *)(iVar2 + 0x44) + 1;
  *(int *)(iVar2 + 0x44) = iVar3;
  *(byte *)(*(int *)(iVar2 + 0x24) + iVar3) = bVar1;
  *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + 1;
  return;
}


