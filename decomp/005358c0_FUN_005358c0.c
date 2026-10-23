// FUN_005358c0 @ 5358c0 size=235

undefined4 __thiscall FUN_005358c0(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  
  while( true ) {
    piVar3 = (int *)FUN_00534391();
    if (*piVar3 == 4) break;
    piVar3 = (int *)FUN_00534391();
    if (*piVar3 == 0x527) {
      FUN_005343dc();
      iVar4 = FUN_004af6b0(*param_1 + 0x10);
      if (iVar4 == 0) {
        iVar4 = *param_1;
        FUN_00429a00(s_ERROR___Invalid_country_TAG___s__00850d34,iVar4 + 0x10,param_1 + 2,
                     iVar4 + 0x216,*(int *)(iVar4 + 0x212) + 1);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      else {
        if (DAT_00dc4b5e != '\0') {
          cVar2 = (**(code **)(*param_2 + 0x24))(iVar4);
          if (cVar2 != '\0') {
            iVar1 = *param_1;
            FUN_00429a00(s_ERROR___Duplicated_country_TAG___00850d74,iVar1 + 0x10,param_1 + 2,
                         iVar1 + 0x216,*(int *)(iVar1 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
        }
        FUN_00459f50(iVar4);
      }
    }
    else {
      FUN_005343dc();
    }
  }
  FUN_005343dc();
  return 0;
}


