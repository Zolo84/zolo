// FUN_00537a20 @ 537a20 size=404

undefined4 __fastcall FUN_00537a20(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  while (iVar2 = FUN_00535490(), iVar2 != 1) {
    if (iVar2 == 2) {
      return 0xfffffffe;
    }
    piVar3 = (int *)FUN_00534391();
    if (*piVar3 == 4) {
      FUN_005343dc();
      return 0;
    }
  }
  if (param_1[1] != 0x523) {
    iVar2 = *param_1;
    piVar3 = param_1 + 0x104;
    piVar1 = param_1 + 0x83;
    param_1 = param_1 + 2;
    FUN_007a630a(&DAT_00bce1e8,s_ERROR_____s____s__s__s__Line_____00850bdc,
                 s_id_HAS_to_be_first_in_province_00850ec8,param_1,piVar1,piVar3,
                 *(int *)(iVar2 + 0x212) + 1,iVar2 + 0x216);
    if (DAT_00dc4b5f != '\0') {
      FUN_00429a50(&DAT_00bce1e8);
    }
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
    FUN_00429a00(&DAT_00850bd4,&DAT_00bce1e8);
    if (DAT_00dc4b5e != '\0') {
      return 0xfffffffe;
    }
    FUN_007a64d3(0);
  }
  if (param_1[0x103] != 0x524) {
    return 0;
  }
  iVar2 = FUN_007a7b3c(param_1 + 0x104);
  if ((-1 < iVar2) && (iVar2 < DAT_00877690)) {
    (**(code **)(*(int *)(DAT_00ab27b4 + iVar2 * 0x4b2) + 8))(param_1);
    return 0;
  }
  FUN_007a630a(&DAT_00bce1e8,s_ERROR_____s____s__s__s__Line_____00850bdc,
               s_illegal_province_id_00850eb4,param_1 + 2,param_1 + 0x83,param_1 + 0x104,
               *(int *)(*param_1 + 0x212) + 1,*param_1 + 0x216);
  if (DAT_00dc4b5f != '\0') {
    FUN_00429a50(&DAT_00bce1e8);
  }
  DAT_00dc4b60 = DAT_00dc4b60 + 1;
  FUN_00429a00(&DAT_00850bd4,&DAT_00bce1e8);
  if (DAT_00dc4b5e != '\0') {
    return 0;
  }
  FUN_007a64d3(0);
  return 0xfffffffe;
}


