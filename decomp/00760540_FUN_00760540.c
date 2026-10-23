// FUN_00760540 @ 760540 size=131

undefined4 FUN_00760540(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    uVar1 = FUN_0042b6c9(s_DOMNAME_DEM_R_008759c0);
    return uVar1;
  case 1:
    uVar1 = FUN_0042b6c9(s_DOMNAME_POL_R_008759b0);
    return uVar1;
  case 2:
    uVar1 = FUN_0042b6c9(s_DOMNAME_FRE_R_008759a0);
    return uVar1;
  case 3:
    uVar1 = FUN_0042b6c9(s_DOMNAME_FRM_R_00875990);
    return uVar1;
  case 4:
    uVar1 = FUN_0042b6c9(s_DOMNAME_PRO_R_00875980);
    return uVar1;
  case 5:
    uVar1 = FUN_0042b6c9(s_DOMNAME_DEF_R_00875970);
    return uVar1;
  case 6:
    uVar1 = FUN_0042b6c9(s_DOMNAME_INT_R_00875960);
    return uVar1;
  default:
    return 0;
  }
}


