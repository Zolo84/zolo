// FUN_00588070 @ 588070 size=146

undefined4 __thiscall FUN_00588070(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  piVar4 = (int *)(param_1 + 0x34);
  do {
    piVar1 = (int *)FUN_00534391();
    if (*piVar1 == 4) {
      FUN_005343dc();
      *(int *)(param_1 + 0x2c) = iVar3;
      return 0;
    }
    piVar1 = (int *)FUN_00534391();
    if (*piVar1 == 0x527) {
      FUN_005343dc();
      iVar2 = FUN_007a7b3c(*param_2 + 0x10);
      if ((iVar2 < 1) || (DAT_00877690 <= iVar2)) {
        FUN_005349b0(s_Illegal_province_id_00857e14);
        return 0xfffffffe;
      }
      *piVar4 = iVar2;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    piVar1 = (int *)FUN_00534391();
    if (*piVar1 == 8) {
      FUN_005343dc();
    }
  } while( true );
}


