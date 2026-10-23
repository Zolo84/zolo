// FUN_007aad57 @ 7aad57 size=115

void FUN_007aad57(uint param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (uint *)FUN_007aadd3();
  iVar3 = 0;
  *puVar1 = param_1;
  puVar1 = &DAT_0087d1d8;
  do {
    if (param_1 == *puVar1) {
      puVar2 = (undefined4 *)FUN_007aadca();
      *puVar2 = *(undefined4 *)(iVar3 * 8 + 0x87d1dc);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + 1;
  } while (puVar1 < &DAT_0087d340);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    puVar2 = (undefined4 *)FUN_007aadca();
    *puVar2 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    puVar2 = (undefined4 *)FUN_007aadca();
    *puVar2 = 8;
    return;
  }
  puVar2 = (undefined4 *)FUN_007aadca();
  *puVar2 = 0x16;
  return;
}


