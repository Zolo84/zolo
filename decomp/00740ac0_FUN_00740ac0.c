// FUN_00740ac0 @ 740ac0 size=330

undefined4 __thiscall FUN_00740ac0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_2[0x103] == 0x524) {
    uVar1 = FUN_007a7b3c(param_2 + 0x104);
    *(undefined4 *)(param_1 + 0x12) = uVar1;
    return 0;
  }
LAB_00740b00:
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
    if (param_2[1] == 0xec) goto LAB_00740b8b;
    if (param_2[1] != 0x14e) break;
    if (param_2[0x103] != 0x524) {
      FUN_00429a00(s_ERROR___Invalid_value___s__for_t_008730f0,param_2 + 0x104,param_2 + 2,
                   *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
      goto LAB_00740afa;
    }
    uVar1 = FUN_007a7b3c(param_2 + 0x104);
    *(undefined4 *)(param_1 + 0x12) = uVar1;
  }
  FUN_00429a00(s_ERROR___Invalid_trigger_entry____00872b28,param_2 + 2,*param_2 + 0x216,
               *(int *)(*param_2 + 0x212) + 1);
LAB_00740afa:
  DAT_00dc4b60 = DAT_00dc4b60 + 1;
  goto LAB_00740b00;
LAB_00740b8b:
  iVar2 = FUN_004af6b0(param_2 + 0x104);
  *(int *)(param_1 + 0x16) = iVar2;
  if ((iVar2 != 0) || (param_2[0x103] == 0x524)) goto LAB_00740b00;
  FUN_00429a00(s_ERROR___Invalid_country_TAG___s__00872ad8,param_2 + 0x104,param_2 + 2,
               *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
  goto LAB_00740afa;
}


