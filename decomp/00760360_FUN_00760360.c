// FUN_00760360 @ 760360 size=223

undefined4 FUN_00760360(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    break;
  case 1:
    if (param_2 == '\0') {
      uVar1 = FUN_0042b6c9(s_DOMESTIC_CANNOT_ADD_CLAIMS_00875880);
      return uVar1;
    }
    uVar1 = FUN_0042b6c9(s_DOMESTIC_CAN_ADD_CLAIMS_0087589c);
    return uVar1;
  case 2:
    if (param_2 == '\0') {
      uVar1 = FUN_0042b6c9(s_DOMESTIC_CANNOT_DEMAND_CLAIMS_00875844);
      return uVar1;
    }
    uVar1 = FUN_0042b6c9(s_DOMESTIC_CAN_DEMAND_CLAIMS_00875864);
    return uVar1;
  case 3:
    if (param_2 == '\0') {
      uVar1 = FUN_0042b6c9(s_DOMESTIC_CANNOT_BREAK_NAP_00875810);
      return uVar1;
    }
    uVar1 = FUN_0042b6c9(s_DOMESTIC_CAN_BREAK_NAP_0087582c);
    return uVar1;
  case 4:
    if (param_2 == '\0') {
      uVar1 = FUN_0042b6c9(s_DOMESTIC_CANNOT_GUARANTEE_008757dc);
      return uVar1;
    }
    uVar1 = FUN_0042b6c9(s_DOMESTIC_CAN_GUARANTEE_008757f8);
    return uVar1;
  default:
    return 0;
  }
  if (param_2 == '\0') {
    uVar1 = FUN_0042b6c9(s_DOMESTIC_CANNOT_ALLY_008758b4);
    return uVar1;
  }
  uVar1 = FUN_0042b6c9(s_DOMESTIC_CAN_ALLY_008758cc);
  return uVar1;
}


