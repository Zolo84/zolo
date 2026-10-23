// FUN_004261d0 @ 4261d0 size=120

undefined4 * __thiscall FUN_004261d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_007e3b68;
  param_1[1] = 0;
  if (DAT_00dc3a00 != '\0') {
    FUN_007a630a(&DAT_0088ee08,s__s__s_0083a350,&DAT_00dc3a00,param_2);
    uVar1 = FUN_007a6615(&DAT_0088ee08,&DAT_008390e0);
    param_1[1] = uVar1;
  }
  if (param_1[1] == 0) {
    iVar2 = FUN_007a6615(param_2,param_3);
    param_1[1] = iVar2;
    if (iVar2 == 0) {
      FUN_00429a50(s_excel_file_not_found_0083a338);
    }
  }
  return param_1;
}


