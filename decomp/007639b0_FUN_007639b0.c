// FUN_007639b0 @ 7639b0 size=311

undefined4 FUN_007639b0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_007a8730(&DAT_00875f30,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_007a8730(&DAT_00875f2c,param_1);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_007a8730(&DAT_00875f28,param_1);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = FUN_007a8730(&DAT_00875f24,param_1);
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = FUN_007a8730(&DAT_00875f20,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_007a8730(&DAT_00875f1c,param_1);
    if (iVar1 == 0) {
      return 5;
    }
    iVar1 = FUN_007a8730(&DAT_00875f18,param_1);
    if (iVar1 == 0) {
      return 6;
    }
    iVar1 = FUN_007a8730(&PTR_LAB_00875f14,param_1);
    if (iVar1 == 0) {
      return 7;
    }
    iVar1 = FUN_007a8730(&DAT_00875f10,param_1);
    if (iVar1 == 0) {
      return 8;
    }
    iVar1 = FUN_007a8730(&DAT_00875f0c,param_1);
    if (iVar1 == 0) {
      return 9;
    }
    if (DAT_00dc4b5f != '\0') {
      FUN_00429a50(s_Minister_file_error__Unknown_Min_00875ec4,param_1);
    }
    if (DAT_00dc4b5e != '\0') {
      FUN_00429a00(s_ERROR___Unknown_Minister_Ideolog_00875e88,param_1);
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
    }
  }
  return 4;
}


