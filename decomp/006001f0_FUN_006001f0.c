// FUN_006001f0 @ 6001f0 size=162

void __fastcall FUN_006001f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xa4) + 0x24) = *(undefined4 *)(param_1 + 0x8e);
  *(undefined1 *)(*(int *)(param_1 + 0xa4) + 0x138b5) = *(undefined1 *)(param_1 + 0x9cfa);
  *(undefined4 *)(*(int *)(param_1 + 0xa4) + 0x20) = *(undefined4 *)(DAT_00d0ca90 + 6);
  *(undefined1 *)(*(int *)(param_1 + 0xa4) + 0x138b4) = *(undefined1 *)(param_1 + 0x9cf9);
  *(undefined1 *)(*(int *)(param_1 + 0xa4) + 0x138c3) = *(undefined1 *)(param_1 + 0x9cf8);
  iVar1 = *(int *)(param_1 + 0xa4);
  if (0 < *(int *)(iVar1 + 0x2c)) {
    iVar2 = 0x9c74;
    do {
      if (*(int *)(iVar2 + iVar1) == 0) {
        if (*(char *)(param_1 + 0x9cf8) == '\0') {
          uVar4 = *(undefined4 *)(iVar1 + 0x24);
        }
        else {
          uVar4 = *(undefined4 *)(DAT_00d0ca90 + 6);
        }
        *(undefined4 *)(iVar2 + iVar1) = uVar4;
      }
      iVar1 = *(int *)(param_1 + 0xa4);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(iVar1 + 0x2c));
  }
  return;
}


