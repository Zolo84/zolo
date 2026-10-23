// FUN_00535790 @ 535790 size=96

undefined4 __thiscall FUN_00535790(int *param_1,float *param_2)

{
  int *piVar1;
  float10 fVar2;
  
  while( true ) {
    piVar1 = (int *)FUN_00534391();
    if (*piVar1 == 4) break;
    piVar1 = (int *)FUN_00534391();
    if (*piVar1 == 0x524) {
      FUN_005343dc();
      fVar2 = (float10)FUN_00429d80(*param_1 + 0x10);
      *param_2 = (float)fVar2;
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


