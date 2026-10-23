// FUN_007638d0 @ 7638d0 size=222

undefined4 FUN_007638d0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_007a8730(s_Very_Low_00875e7c,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_007a8730(&DAT_00875e78,param_1);
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = FUN_007a8730(s_Medium_00875e70,param_1);
    if (iVar1 == 0) {
      return 2;
    }
    iVar1 = FUN_007a8730(&DAT_00875e68,param_1);
    if (iVar1 == 0) {
      return 3;
    }
    iVar1 = FUN_007a8730(s_Very_High_00875e5c,param_1);
    if (iVar1 == 0) {
      return 4;
    }
    iVar1 = FUN_007a8730(s_Undying_00875e54,param_1);
    if (iVar1 == 0) {
      return 5;
    }
    iVar1 = FUN_007a8730(&DAT_0083f6e8,param_1);
    if (iVar1 != 0) {
      if (DAT_00dc4b5f != '\0') {
        FUN_00429a50(s_Unknown_minister_loyalty___s_00875e34,param_1);
      }
      FUN_00429a00(s_ERROR___Unknown_minister_loyalty_00875e0c,param_1);
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
    }
  }
  return 0;
}


