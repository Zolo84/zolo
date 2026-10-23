// FUN_00535850 @ 535850 size=98

undefined4 __fastcall FUN_00535850(int *param_1)

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
      FUN_00538890((float)fVar2);
    }
    piVar1 = (int *)FUN_00534391();
    if (*piVar1 == 8) {
      FUN_005343dc();
    }
  }
  FUN_005343dc();
  return 0;
}


