// FUN_004388d0 @ 4388d0 size=41

void __fastcall FUN_004388d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      iVar2 = iVar1 + 1;
      *(undefined1 *)(iVar1 + *(int *)(param_1 + 0x18)) = 0;
      iVar1 = iVar2;
    } while (iVar2 < *(int *)(param_1 + 0x30));
  }
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}


