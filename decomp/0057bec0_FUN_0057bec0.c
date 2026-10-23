// FUN_0057bec0 @ 57bec0 size=98

void __fastcall FUN_0057bec0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0x20;
  piVar1 = (int *)(param_1 + 0x3c0);
  do {
    if (*piVar1 != 0) {
      FUN_00796cd8(*piVar1);
      *piVar1 = 0;
    }
    piVar1[3] = -1;
    *(undefined1 *)(piVar1 + 4) = 0;
    *(undefined1 *)((int)piVar1 + 0x11) = 0;
    *(undefined4 *)((int)piVar1 + 0x12) = 0;
    *(undefined1 *)((int)piVar1 + 0x16) = 0;
    piVar1 = (int *)((int)piVar1 + 0x3e);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(char *)(param_1 + 0x37b) == '\x01') {
    *(undefined4 *)(param_1 + 0xb70) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xb70) = 1;
  return;
}


