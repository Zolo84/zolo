// FUN_00426250 @ 426250 size=125

void __thiscall FUN_00426250(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_007a6429(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  if (DAT_00dc3a00 != '\0') {
    FUN_007a630a(&DAT_0088ee08,s__s__s_0083a350,&DAT_00dc3a00,param_2);
    uVar1 = FUN_007a6615(&DAT_0088ee08,&DAT_008390e0);
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = FUN_007a6615(param_2,&DAT_008390e0);
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00429a50(s_excel_file_not_found_0083a338);
  }
  return;
}


