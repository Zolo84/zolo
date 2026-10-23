// FUN_006d9220 @ 6d9220 size=56

undefined4 __fastcall FUN_006d9220(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2220e);
  if (*(int *)(param_1 + 0x21e62) == *(int *)(iVar1 + 0x18)) {
    if (iVar1 != 0) {
      FUN_006d65d0();
      FUN_00796cd8(iVar1);
    }
    *(undefined4 *)(param_1 + 0x2220e) = 0;
  }
  return 1;
}


