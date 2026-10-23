// FUN_005357f0 @ 5357f0 size=96

undefined4 __thiscall FUN_005357f0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  while( true ) {
    piVar1 = (int *)FUN_00534391();
    if (*piVar1 == 4) break;
    piVar1 = (int *)FUN_00534391();
    if (*piVar1 == 0x524) {
      FUN_005343dc();
      uVar2 = FUN_007a7b3c(*param_1 + 0x10);
      *param_2 = uVar2;
      param_2 = param_2 + 1;
    }
    piVar1 = (int *)FUN_00534391();
    if (*piVar1 == 8) {
      FUN_005343dc();
    }
  }
  FUN_005343dc();
  return 0;
}


