// FUN_00735070 @ 735070 size=468

undefined4 __thiscall FUN_00735070(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
  *(undefined4 *)(param_1 + 0x16) = 0;
  iVar2 = param_2[0x103];
  if (iVar2 != 3) {
    if (iVar2 == 0x409) {
      *(undefined4 *)(param_1 + 0x12) = 1;
      return 0;
    }
    if (iVar2 == 0x40a) {
      *(undefined4 *)(param_1 + 0x12) = 0;
      return 0;
    }
    if (iVar2 == 0x40b) {
      *(undefined4 *)(param_1 + 0x12) = 2;
      return 0;
    }
    FUN_00429a00(s_ERROR___Invalid_government_type___00872f00,param_2 + 0x104,param_2 + 2,
                 *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
    return 0xfffffffe;
  }
LAB_00735102:
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar2 = FUN_00535490(), iVar2 != 1) {
            if (iVar2 == 2) {
              return 2;
            }
            piVar3 = (int *)FUN_00534391();
            if (*piVar3 == 4) {
              FUN_005343dc();
              return 0;
            }
          }
          if (param_2[1] == 0xec) goto LAB_007351a8;
          if (param_2[1] == 0x141) break;
          FUN_00429a00(s_ERROR___Invalid_trigger_entry____00872b28,param_2 + 2,*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        iVar2 = param_2[0x103];
        if (iVar2 != 0x409) break;
        *(undefined4 *)(param_1 + 0x12) = 1;
      }
      if (iVar2 != 0x40a) break;
      *(undefined4 *)(param_1 + 0x12) = 0;
    }
    if (iVar2 != 0x40b) break;
    *(undefined4 *)(param_1 + 0x12) = 2;
  }
  iVar2 = *param_2;
  iVar1 = *(int *)(iVar2 + 0x212);
  pcVar4 = s_ERROR___Invalid_government_type___00872f00;
  goto LAB_007351fa;
LAB_007351a8:
  iVar2 = FUN_004af6b0(param_2 + 0x104);
  *(int *)(param_1 + 0x16) = iVar2;
  if (((DAT_00dc4b5e != '\0') && (iVar2 == 0)) && (param_2[0x103] != 0x524)) {
    iVar2 = *param_2;
    iVar1 = *(int *)(iVar2 + 0x212);
    pcVar4 = s_ERROR___Invalid_country_TAG___s__00872ad8;
LAB_007351fa:
    FUN_00429a00(pcVar4,param_2 + 0x104,param_2 + 2,iVar2 + 0x216,iVar1 + 1);
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
  goto LAB_00735102;
}


