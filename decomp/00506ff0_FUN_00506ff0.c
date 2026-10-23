// FUN_00506ff0 @ 506ff0 size=361

undefined4 FUN_00506ff0(undefined4 param_1)

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
    uVar1 = FUN_0042b6c9(s_BINFO_AA_00849f80);
    return uVar1;
  case 3:
    uVar1 = FUN_0042b6c9(s_BINFO_SA_00849f8c);
    return uVar1;
  case 4:
    uVar1 = FUN_0042b6c9(s_BINFO_HA_00849f98);
    return uVar1;
  case 5:
    uVar1 = FUN_0042b6c9(s_BINFO_NAV_0084a034);
    return uVar1;
  case 6:
    uVar1 = FUN_0042b6c9(s_BINFO_STR_0084a028);
    return uVar1;
  case 7:
    break;
  case 8:
    if (DAT_00dc1749 == '\0') {
      uVar1 = FUN_0042b6c9(s_BINFO_SUD_0084a004);
      return uVar1;
    }
    uVar1 = FUN_0042b6c9(s_UIW_2_SURFACEDEFENCE_0084a010);
    return uVar1;
  case 9:
    uVar1 = FUN_0042b6c9(s_BINFO_ADC_00849ff8);
    return uVar1;
  case 10:
    uVar1 = FUN_0042b6c9(s_BINFO_SDC_00849fec);
    return uVar1;
  case 0xb:
    uVar1 = FUN_0042b6c9(s_EE_SPEED_00849f10);
    return uVar1;
  case 0xc:
    uVar1 = FUN_0042b6c9(s_BINFO_RANGE_00849fe0);
    return uVar1;
  case 0xd:
    uVar1 = FUN_0042b6c9(s_EE_TRANSPORT_CAPACITY_00849fc8);
    return uVar1;
  case 0xe:
    uVar1 = FUN_0042b6c9(s_BINFO_SU_00849e8c);
    return uVar1;
  case 0xf:
    uVar1 = FUN_0042b6c9(s_BINFO_FU_00849e80);
    return uVar1;
  case 0x10:
    uVar1 = FUN_0042b6c9(s_EE_OUT_OF_FUEL_COMBAT_MOD_00849e64);
    return uVar1;
  case 0x11:
    uVar1 = FUN_0042b6c9(s_EE_OUT_OF_SUPPLY_COMBAT_MOD_00849e48);
    return uVar1;
  default:
    return 0;
  }
  if (DAT_00dc1749 == '\0') {
    uVar1 = FUN_0042b6c9(s_BINFO_AD_00849f28);
    return uVar1;
  }
  uVar1 = FUN_0042b6c9(s_UIW_2_AIRDEFENCE_00849f34);
  return uVar1;
}


