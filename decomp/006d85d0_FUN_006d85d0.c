// FUN_006d85d0 @ 6d85d0 size=64

undefined1 __fastcall FUN_006d85d0(int param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = FUN_0044beb0();
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x2220e);
    if (iVar1 != 0) {
      FUN_006d65d0();
      FUN_00796cd8(iVar1);
    }
    *(undefined4 *)(param_1 + 0x2220e) = 0;
    return 1;
  }
  return 1;
}


