// FUN_0076b480 @ 76b480 size=261

undefined4 FUN_0076b480(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x15a) {
    if (param_1 == 0x159) {
      uVar1 = FUN_0042b6c9(s_MIN_SPY_SABOTAGE_INDUSTRY_US_008770b0);
      return uVar1;
    }
    if (param_1 < 0x157) {
      if (param_1 == 0x156) {
        uVar1 = FUN_0042b6c9(s_MIN_SPY_MINISTER_ASSASSINATION_U_008770fc);
        return uVar1;
      }
      if (param_1 == 0) {
        uVar1 = FUN_0042b6c9(s_MIN_SPY_ALL_AGAINST_US_00877120);
        return uVar1;
      }
      if (param_1 == 0x155) {
        uVar1 = FUN_0042b6c9(s_MIN_SPY_STEAL_BLUEPRINT_US_00877138);
        return uVar1;
      }
    }
    else {
      if (param_1 == 0x157) {
        uVar1 = FUN_0042b6c9(s_MIN_SPY_SMEAR_CAMPAIGN_US_008770d0);
        return uVar1;
      }
      if (param_1 == 0x158) {
        uVar1 = FUN_0042b6c9(s_MIN_SPY_COUP_US_008770ec);
        return uVar1;
      }
    }
  }
  else {
    switch(param_1) {
    case 0x15a:
      uVar1 = FUN_0042b6c9(s_MIN_SPY_NUCLEAR_SABOTAGE_US_00877094);
      return uVar1;
    case 0x15b:
      uVar1 = FUN_0042b6c9(s_MIN_SPY_FUND_PARTISANS_US_00877078);
      return uVar1;
    case 0x15c:
      uVar1 = FUN_0042b6c9(s_MIN_SPY_MASSMEDIA_US_00877060);
      return uVar1;
    case 0x15d:
      uVar1 = FUN_0042b6c9(s_MIN_SPY_DISRUPT_TECHTEAM_US_00877044);
      return uVar1;
    }
  }
  return 0;
}


