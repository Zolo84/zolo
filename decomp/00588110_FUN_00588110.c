// FUN_00588110 @ 588110 size=126

undefined4 __thiscall FUN_00588110(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x9c74);
  do {
    piVar1 = (int *)FUN_00534391();
    if (*piVar1 == 4) {
      FUN_005343dc();
      return 0;
    }
    piVar1 = (int *)FUN_00534391();
    if (*piVar1 == 0x527) {
      FUN_005343dc();
      iVar2 = FUN_004af6b0(*param_2 + 0x10);
      if (iVar2 == 0) {
        FUN_005349b0(s_Illegal_tag_00857e28);
        return 0xfffffffe;
      }
      *piVar3 = iVar2;
      piVar3 = piVar3 + 1;
    }
    piVar1 = (int *)FUN_00534391();
    if (*piVar1 == 8) {
      FUN_005343dc();
    }
  } while( true );
}


