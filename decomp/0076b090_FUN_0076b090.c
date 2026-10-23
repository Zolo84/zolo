// FUN_0076b090 @ 76b090 size=620

undefined4 FUN_0076b090(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x148) {
    if (param_1 == 0x147) {
      uVar1 = FUN_0042b6c9(s_DIP_SEND_EXPEDITIONARY_FORCE_00857b3c);
      return uVar1;
    }
    if (param_1 < 0x141) {
      if (param_1 == 0x140) {
        uVar1 = FUN_0042b6c9(s_DIP_BAN_FROM_ALLIANCE_00857c10);
        return uVar1;
      }
      if (param_1 < 0x13d) {
        if (param_1 == 0x13c) {
          uVar1 = FUN_0042b6c9(s_DIP_OFFER_ALLIANCE_00857c50);
          return uVar1;
        }
        if (param_1 != 0) {
          if (param_1 == 0x13a) {
            uVar1 = FUN_0042b6c9(s_MIN_ALLIANCE_STRING_008712ec);
            return uVar1;
          }
          if (param_1 == 0x13b) {
            uVar1 = FUN_0042b6c9(s_DIP_DECLARE_WAR_00857c7c);
            return uVar1;
          }
        }
      }
      else {
        if (param_1 == 0x13d) {
          uVar1 = FUN_0042b6c9(s_DIP_BRING_TO_ALLIANCE_00857c64);
          return uVar1;
        }
        if (param_1 == 0x13e) {
          uVar1 = FUN_0042b6c9(s_DIP_JOIN_ALLIANCE_00857c3c);
          return uVar1;
        }
        if (param_1 == 0x13f) {
          uVar1 = FUN_0042b6c9(s_DIP_LEAVE_ALLIANCE_00857c28);
          return uVar1;
        }
      }
    }
    else {
      switch(param_1) {
      case 0x141:
        uVar1 = FUN_0042b6c9(s_DIP_INFLUENCE_NATION_00857bf8);
        return uVar1;
      case 0x142:
        uVar1 = FUN_0042b6c9(s_DIP_ASK_FOR_MILITARY_ACCESS_00857bcc);
        return uVar1;
      case 0x143:
        uVar1 = FUN_0042b6c9(s_DIP_CANCEL_MILITARY_ACCESS_00857bb0);
        return uVar1;
      case 0x144:
        uVar1 = FUN_0042b6c9(s_DIP_REVOKE_MILITARY_ACCESS_00857b94);
        return uVar1;
      case 0x145:
        uVar1 = FUN_0042b6c9(s_DIP_ASSUME_MILITARY_CONTROL_00857b78);
        return uVar1;
      case 0x146:
        uVar1 = FUN_0042b6c9(s_DIP_CANCEL_MILITARY_CONTROL_00857b5c);
        return uVar1;
      }
    }
  }
  else {
    switch(param_1) {
    case 0x148:
      uVar1 = FUN_0042b6c9(s_DIP_GUARANTEE_INDEPENDENCE_00857b20);
      return uVar1;
    case 0x149:
      uVar1 = FUN_0042b6c9(s_DIP_ANNEX_NATION_00857b0c);
      return uVar1;
    case 0x14a:
      uVar1 = FUN_0042b6c9(s_DIP_DEMAND_TERRITORY_00857acc);
      return uVar1;
    case 0x14b:
      uVar1 = FUN_0042b6c9(s_DIP_TRADE_00857ac0);
      return uVar1;
    case 0x14c:
      uVar1 = FUN_0042b6c9(s_DIP_OFFER_NON_AGGRESSION_00857aa4);
      return uVar1;
    case 0x14d:
      uVar1 = FUN_0042b6c9(s_DIP_CANCEL_NA_00857a80);
      return uVar1;
    case 0x14e:
      uVar1 = FUN_0042b6c9(s_DIP_OFFER_TA_00857a70);
      return uVar1;
    case 0x14f:
      uVar1 = FUN_0042b6c9(s_DIP_CANCEL_TA_00857a60);
      return uVar1;
    case 0x150:
      uVar1 = FUN_0042b6c9(s_DIP_CANCEL_PT_00857a50);
      return uVar1;
    case 0x151:
      uVar1 = FUN_0042b6c9(s_DIP_SUE_FOR_PEACE_00857a90);
      return uVar1;
    case 0x152:
      uVar1 = FUN_0042b6c9(s_DIP_RELEASE_PUPPET_00857ae4);
      return uVar1;
    case 0x153:
      uVar1 = FUN_0042b6c9(s_LIBERATE_NATION_00857a40);
      return uVar1;
    case 0x154:
      uVar1 = FUN_0042b6c9(s_DONTSENDFORCES_00857a30);
      return uVar1;
    }
  }
  return 0;
}


