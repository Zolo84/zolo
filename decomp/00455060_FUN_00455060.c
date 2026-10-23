// FUN_00455060 @ 455060 size=106

void __fastcall FUN_00455060(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_0087769c) {
    puVar1 = (undefined4 *)(param_1 + 0x3e52);
    do {
      puVar1[-0x8c] = 0;
      *puVar1 = 0;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < DAT_0087769c);
  }
  *(undefined4 *)(param_1 + 0x3c06) = 0;
  *(undefined4 *)(param_1 + 0x3c0a) = 0;
  *(undefined4 *)(param_1 + 0x4082) = 0;
  *(undefined4 *)(param_1 + 0x4086) = 0;
  *(undefined4 *)(param_1 + 0x408a) = 0;
  *(undefined4 *)(param_1 + 0x408e) = 0;
  *(undefined4 *)(param_1 + 0x4092) = 0;
  *(undefined4 *)(param_1 + 0x4096) = 0;
  *(undefined4 *)(param_1 + 0x409a) = 0;
  *(undefined4 *)(param_1 + 0x409e) = 0;
  return;
}


