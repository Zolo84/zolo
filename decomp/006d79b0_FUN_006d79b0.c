// FUN_006d79b0 @ 6d79b0 size=90

undefined4 __thiscall FUN_006d79b0(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x2220e) != 0) && (param_2 == 0xe)) {
    *(undefined4 *)(DAT_00893750 + 0xc) = *(undefined4 *)(DAT_00d0ca90 + 6);
    iVar1 = *(int *)(param_1 + 0x2220e);
    if (iVar1 != 0) {
      FUN_006d65d0();
      FUN_00796cd8(iVar1);
    }
    *(undefined4 *)(param_1 + 0x2220e) = 0;
    return 3;
  }
  return 0;
}


