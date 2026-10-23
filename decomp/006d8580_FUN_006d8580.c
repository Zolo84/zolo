// FUN_006d8580 @ 6d8580 size=75

undefined4 __fastcall FUN_006d8580(int param_1)

{
  int iVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x2220e) + 0x16) != '\0') {
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x2220e) + 4) + 4))();
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x2220e);
      if (iVar1 != 0) {
        FUN_006d65d0();
        FUN_00796cd8(iVar1);
      }
      *(undefined4 *)(param_1 + 0x2220e) = 0;
      return 1;
    }
  }
  return 1;
}


