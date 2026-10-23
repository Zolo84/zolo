// FUN_00506dd0 @ 506dd0 size=450

undefined4 FUN_00506dd0(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    uVar1 = FUN_0042b6c9(s_BINFO_ORG_00849fbc);
    return uVar1;
  case 1:
    uVar1 = FUN_0042b6c9(s_BINFO_MOR_00849fb0);
    return uVar1;
  case 2:
    uVar1 = FUN_0042b6c9(s_BINFO_SO_00849fa4);
    return uVar1;
  case 3:
    uVar1 = FUN_0042b6c9(s_BINFO_HA_00849f98);
    return uVar1;
  case 4:
    uVar1 = FUN_0042b6c9(s_BINFO_SA_00849f8c);
    return uVar1;
  case 5:
    uVar1 = FUN_0042b6c9(s_BINFO_AA_00849f80);
    return uVar1;
  case 6:
    break;
  case 7:
    if (DAT_00dc1749 == '\0') {
      uVar1 = FUN_0042b6c9(s_BINFO_TD_00849f48);
      return uVar1;
    }
    uVar1 = FUN_0042b6c9(s_UIW_2_TOUGHNESS_00849f54);
    return uVar1;
  case 8:
    if (DAT_00dc1749 == '\0') {
      uVar1 = FUN_0042b6c9(s_BINFO_AD_00849f28);
      return uVar1;
    }
    uVar1 = FUN_0042b6c9(s_UIW_2_AIRDEFENCE_00849f34);
    return uVar1;
  case 9:
    uVar1 = FUN_0042b6c9(s_BINFO_SP_00849f1c);
    return uVar1;
  case 10:
    uVar1 = FUN_0042b6c9(s_EE_SPEED_00849f10);
    return uVar1;
  case 0xb:
    uVar1 = FUN_0042b6c9(s_EE_OUT_OF_FUEL_SPEED_00849ef8);
    return uVar1;
  case 0xc:
    uVar1 = FUN_0042b6c9(s_BINFO_MS_00849eec);
    return uVar1;
  case 0xd:
    uVar1 = FUN_0042b6c9(s_EE_SPEED_CAP_ART_00849ed8);
    return uVar1;
  case 0xe:
    uVar1 = FUN_0042b6c9(s_EE_SPEED_CAP_AT_00849ec8);
    return uVar1;
  case 0xf:
    uVar1 = FUN_0042b6c9(s_EE_SPEED_CAP_AA_00849eb8);
    return uVar1;
  case 0x10:
    uVar1 = FUN_0042b6c9(s_EE_SPEED_CAP_ENG_00849ea4);
    return uVar1;
  case 0x11:
    uVar1 = FUN_0042b6c9(s_EE_WEIGHT_00849e98);
    return uVar1;
  case 0x12:
    uVar1 = FUN_0042b6c9(s_BINFO_SU_00849e8c);
    return uVar1;
  case 0x13:
    uVar1 = FUN_0042b6c9(s_BINFO_FU_00849e80);
    return uVar1;
  case 0x14:
    uVar1 = FUN_0042b6c9(s_EE_OUT_OF_FUEL_COMBAT_MOD_00849e64);
    return uVar1;
  case 0x15:
    uVar1 = FUN_0042b6c9(s_EE_OUT_OF_SUPPLY_COMBAT_MOD_00849e48);
    return uVar1;
  default:
    return 0;
  }
  if (DAT_00dc1749 == '\0') {
    uVar1 = FUN_0042b6c9(s_BINFO_DD_00849f64);
    return uVar1;
  }
  uVar1 = FUN_0042b6c9(s_UIW_2_DEFENCE_00849f70);
  return uVar1;
}


