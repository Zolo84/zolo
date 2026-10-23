// FUN_00537860 @ 537860 size=433

undefined4 __fastcall FUN_00537860(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  while( true ) {
    while (iVar3 = FUN_00535490(), iVar3 != 1) {
      if (iVar3 == 2) {
        return 0xfffffffe;
      }
      piVar4 = (int *)FUN_00534391();
      if (*piVar4 == 4) {
        FUN_005343dc();
        return 0;
      }
    }
    if (param_1[1] != 0x10a) break;
    if (param_1[0x103] == 0x527) {
LAB_0053792c:
      iVar3 = FUN_004af6b0(param_1 + 0x104);
      if (iVar3 == 0) {
        FUN_007a630a(&DAT_00bce1e8,s_ERROR_____s____s__s__s__Line_____00850bdc,
                     s_unknown_tag_00850e88,param_1 + 2,param_1 + 0x83,param_1 + 0x104,
                     *(int *)(*param_1 + 0x212) + 1,*param_1 + 0x216);
        if (DAT_00dc4b5f != '\0') {
          FUN_00429a50(&DAT_00bce1e8);
        }
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
        FUN_00429a00(&DAT_00850bd4,&DAT_00bce1e8);
        if (DAT_00dc4b5e == '\0') {
          FUN_007a64d3(0);
        }
      }
      if ((&DAT_0089cad8)[iVar3] == 0) {
        FUN_0044b6f0(iVar3);
      }
      iVar2 = (&DAT_0089cad8)[iVar3];
      param_1[0x184] = iVar2;
      (**(code **)(*(int *)(iVar2 + 0xe) + 8))(param_1);
      FUN_005870d0(iVar3);
      return 0;
    }
  }
  iVar3 = *param_1;
  piVar4 = param_1 + 0x104;
  piVar1 = param_1 + 0x83;
  param_1 = param_1 + 2;
  FUN_007a630a(&DAT_00bce1e8,s_ERROR_____s____s__s__s__Line_____00850bdc,
               s_tag_HAS_to_be_first_in_country_00850e94,param_1,piVar1,piVar4,
               *(int *)(iVar3 + 0x212) + 1,iVar3 + 0x216);
  if (DAT_00dc4b5f != '\0') {
    FUN_00429a50(&DAT_00bce1e8);
  }
  DAT_00dc4b60 = DAT_00dc4b60 + 1;
  FUN_00429a00(&DAT_00850bd4,&DAT_00bce1e8);
  if (DAT_00dc4b5e != '\0') {
    return 0xfffffffe;
  }
  FUN_007a64d3(0);
  goto LAB_0053792c;
}


