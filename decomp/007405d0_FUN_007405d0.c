// FUN_007405d0 @ 7405d0 size=423

undefined4 __thiscall FUN_007405d0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = param_2 + 0x103;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (*piVar1 == 0x524) {
    uVar2 = FUN_007a7b3c(param_2 + 0x104);
    *(undefined4 *)(param_1 + 0x12) = uVar2;
    return 0;
  }
LAB_00740617:
  while (iVar3 = FUN_00535490(), iVar3 != 1) {
    if (iVar3 == 2) {
      return 2;
    }
    piVar4 = (int *)FUN_00534391();
    if (*piVar4 == 4) {
      FUN_005343dc();
      return 0;
    }
  }
  switch(param_2[1]) {
  case 0xec:
    piVar4 = param_2 + 0x104;
    uVar2 = FUN_004af6b0(piVar4);
    *(undefined4 *)(param_1 + 0x16) = uVar2;
    if (((DAT_00dc4b5e == '\0') || (iVar3 = FUN_004af6b0(piVar4), iVar3 != 0)) || (*piVar1 == 0x524)
       ) goto LAB_00740617;
    FUN_00429a00(s_ERROR___Invalid_country_TAG___s__00872ad8,piVar4,param_2 + 2,*param_2 + 0x216,
                 *(int *)(*param_2 + 0x212) + 1);
    break;
  default:
    FUN_00429a00(s_ERROR___Invalid_trigger_entry____00872b28,param_2 + 2,*param_2 + 0x216,
                 *(int *)(*param_2 + 0x212) + 1);
    break;
  case 0xf8:
    if (*piVar1 != 0x524) goto LAB_007406f2;
    uVar2 = FUN_007a7b3c(param_2 + 0x104);
    *(undefined4 *)(param_1 + 0x1e) = uVar2;
    goto LAB_00740617;
  case 0x141:
    iVar3 = FUN_005058b0(piVar1);
    *(int *)(param_1 + 0x1a) = iVar3;
    if (iVar3 != 0x25) goto LAB_00740617;
LAB_007406f2:
    FUN_00429a00(s_ERROR___Invalid_value___s__for_t_008730f0,param_2 + 0x104,param_2 + 2,
                 *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
    break;
  case 0x14e:
    if (*piVar1 != 0x524) goto LAB_007406f2;
    uVar2 = FUN_007a7b3c(param_2 + 0x104);
    *(undefined4 *)(param_1 + 0x12) = uVar2;
    goto LAB_00740617;
  }
  DAT_00dc4b60 = DAT_00dc4b60 + 1;
  goto LAB_00740617;
}


