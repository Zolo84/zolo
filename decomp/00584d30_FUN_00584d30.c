// FUN_00584d30 @ 584d30 size=150

undefined4 __thiscall FUN_00584d30(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = param_2;
  do {
    piVar2 = (int *)FUN_00534391();
    if (*piVar2 == 4) {
      FUN_005343dc();
      return 0;
    }
    piVar2 = (int *)FUN_00534391();
    if (*piVar2 == 0x527) {
      FUN_005343dc();
      iVar3 = FUN_004af6b0(*piVar1 + 0x10);
      if (iVar3 == 0) {
        FUN_005349b0(s_Illegal_Tag_008579b4);
        return 0xfffffffe;
      }
      piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x22) + 0x28))(&param_2,iVar3);
      if (*piVar2 == 0) {
        FUN_00459f50(iVar3);
      }
    }
    piVar2 = (int *)FUN_00534391();
    if (*piVar2 == 8) {
      FUN_005343dc();
    }
  } while( true );
}


