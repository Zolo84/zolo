// FUN_00535600 @ 535600 size=195

undefined4 __thiscall FUN_00535600(int *param_1,int *param_2)

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
        FUN_0049a100(uVar4);
      }
      else if ((DAT_00dc4b5e != '\0') && (param_1[1] != 0x1a0)) {
        iVar1 = *param_1;
        FUN_00429a00(s_ERROR___Duplicated_value___s___i_00850ca8,iVar1 + 0x10,param_1 + 2,
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


