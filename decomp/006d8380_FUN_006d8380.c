// FUN_006d8380 @ 6d8380 size=66

undefined4 __fastcall FUN_006d8380(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2220e);
  if (*(int *)(iVar1 + 0x18) <= *(int *)(param_1 + 0x221fe)) {
    if (iVar1 != 0) {
      FUN_006d65d0();
      FUN_00796cd8(iVar1);
    }
    *(undefined4 *)(param_1 + 0x2220e) = 0;
    *(undefined4 *)(param_1 + 0x221fe) = 0;
  }
  return 1;
}


