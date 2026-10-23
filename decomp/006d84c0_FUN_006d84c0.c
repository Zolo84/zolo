// FUN_006d84c0 @ 6d84c0 size=84

undefined4 __fastcall FUN_006d84c0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(param_1 + 0x2220e) + 8);
  if (piVar3 == (int *)0x0) {
    return 1;
  }
  do {
    piVar1 = (int *)piVar3[2];
    if (*(int *)(param_1 + 0x221fa) == *piVar3) {
      iVar2 = *(int *)(param_1 + 0x2220e);
      if (iVar2 != 0) {
        FUN_006d65d0();
        FUN_00796cd8(iVar2);
      }
      *(undefined4 *)(param_1 + 0x2220e) = 0;
    }
    piVar3 = piVar1;
  } while (piVar1 != (int *)0x0);
  return 1;
}


