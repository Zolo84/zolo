// FUN_005356d0 @ 5356d0 size=186

undefined4 __thiscall FUN_005356d0(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  
  while( true ) {
    piVar3 = (int *)FUN_00534391();
    if (*piVar3 == 4) break;
    piVar3 = (int *)FUN_00534391();
    if (*piVar3 == 0x524) {
      FUN_005343dc();
      uVar4 = FUN_007a7b3c(*param_1 + 0x10);
      cVar2 = (**(code **)(*param_2 + 0x24))(uVar4);
      if (cVar2 == '\0') {
        FUN_0045af10(uVar4);
      }
      else if (DAT_00dc4b5e != '\0') {
        iVar1 = *param_1;
        FUN_00429a00(s_ERROR___Duplicated_value___s___s_00850cec,iVar1 + 0x10,param_1 + 2,
                     iVar1 + 0x216,*(int *)(iVar1 + 0x212) + 1);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
    }
    piVar3 = (int *)FUN_00534391();
    if (*piVar3 == 8) {
      FUN_005343dc();
    }
  }
  FUN_005343dc();
  return 0;
}


