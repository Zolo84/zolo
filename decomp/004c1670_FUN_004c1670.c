// FUN_004c1670 @ 4c1670 size=134

undefined1 * FUN_004c1670(undefined4 param_1)

{
  undefined1 *puVar1;
  
  switch(param_1) {
  case 0:
    puVar1 = (undefined1 *)FUN_0042b6c9(s_CE_COUNTERATTACK_0083f65c);
    return puVar1;
  case 1:
    puVar1 = (undefined1 *)FUN_0042b6c9(s_CE_ASSAULT_0083f650);
    return puVar1;
  case 2:
    puVar1 = (undefined1 *)FUN_0042b6c9(s_CE_ENCIRCLEMENT_0083f640);
    return puVar1;
  case 3:
    puVar1 = (undefined1 *)FUN_0042b6c9(s_CE_AMBUSH_0083f634);
    return puVar1;
  case 4:
    puVar1 = (undefined1 *)FUN_0042b6c9(s_CE_DELAY_0083f628);
    return puVar1;
  case 5:
    puVar1 = (undefined1 *)FUN_0042b6c9(s_CE_TACTICAL_WITHDRAWAL_0083f610);
    return puVar1;
  case 6:
    puVar1 = (undefined1 *)FUN_0042b6c9(s_CE_BREAKTHROUGH_0083f600);
    return puVar1;
  default:
    return &DAT_0088ebf8;
  }
}


