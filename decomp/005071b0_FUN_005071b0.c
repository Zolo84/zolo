// FUN_005071b0 @ 5071b0 size=409

undefined4 FUN_005071b0(undefined4 param_1)

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
    uVar1 = FUN_0042b6c9(s_BINFO_FD_0084a0a8);
    return uVar1;
  case 3:
    uVar1 = FUN_0042b6c9(s_BINFO_SEA_0084a09c);
    return uVar1;
  case 4:
    uVar1 = FUN_0042b6c9(s_BINFO_SUA_0084a090);
    return uVar1;
  case 5:
    uVar1 = FUN_0042b6c9(s_BINFO_SCA_0084a084);
    return uVar1;
  case 6:
    uVar1 = FUN_0042b6c9(s_BINFO_AA_00849f80);
    return uVar1;
  case 7:
    uVar1 = FUN_0042b6c9(s_BINFO_SHOR_0084a078);
    return uVar1;
  case 8:
    break;
  case 9:
    if (DAT_00dc1749 == '\0') {
      uVar1 = FUN_0042b6c9(s_BINFO_AD_00849f28);
      return uVar1;
    }
    uVar1 = FUN_0042b6c9(s_UIW_2_AIRDEFENCE_00849f34);
    return uVar1;
  case 10:
    uVar1 = FUN_0042b6c9(s_BINFO_SDC_00849fec);
    return uVar1;
  case 0xb:
    uVar1 = FUN_0042b6c9(s_BINFO_SUC_0084a04c);
    return uVar1;
  case 0xc:
    uVar1 = FUN_0042b6c9(s_BINFO_ADC_00849ff8);
    return uVar1;
  case 0xd:
    uVar1 = FUN_0042b6c9(s_BINFO_VIS_0084a040);
    return uVar1;
  case 0xe:
    uVar1 = FUN_0042b6c9(s_EE_SPEED_00849f10);
    return uVar1;
  case 0xf:
    uVar1 = FUN_0042b6c9(s_BINFO_RANGE_00849fe0);
    return uVar1;
  case 0x10:
    uVar1 = FUN_0042b6c9(s_EE_TRANSPORT_CAPACITY_00849fc8);
    return uVar1;
  case 0x11:
    uVar1 = FUN_0042b6c9(s_BINFO_SU_00849e8c);
    return uVar1;
  case 0x12:
    uVar1 = FUN_0042b6c9(s_BINFO_FU_00849e80);
    return uVar1;
  case 0x13:
    uVar1 = FUN_0042b6c9(s_EE_OUT_OF_FUEL_COMBAT_MOD_00849e64);
    return uVar1;
  case 0x14:
    uVar1 = FUN_0042b6c9(s_EE_OUT_OF_SUPPLY_COMBAT_MOD_00849e48);
    return uVar1;
  default:
    return 0;
  }
  if (DAT_00dc1749 == '\0') {
    uVar1 = FUN_0042b6c9(s_BINFO_SD_0084a058);
    return uVar1;
  }
  uVar1 = FUN_0042b6c9(s_UIW_2_SEADEFENCE_0084a064);
  return uVar1;
}


