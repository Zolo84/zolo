// FUN_004c1720 @ 4c1720 size=134

undefined1 * FUN_004c1720(undefined4 param_1)

{
  undefined1 *puVar1;
  
  switch(param_1) {
  case 0:
    puVar1 = (undefined1 *)FUN_0042b6c9(s_CED_COUNTERATTACK_0083f6d4);
    return puVar1;
  case 1:
    puVar1 = (undefined1 *)FUN_0042b6c9(s_CED_ASSAULT_0083f6c8);
    return puVar1;
  case 2:
    puVar1 = (undefined1 *)FUN_0042b6c9(s_CED_ENCIRCLEMENT_0083f6b4);
    return puVar1;
  case 3:
    puVar1 = (undefined1 *)FUN_0042b6c9(s_CED_AMBUSH_0083f6a8);
    return puVar1;
  case 4:
    puVar1 = (undefined1 *)FUN_0042b6c9(s_CED_DELAY_0083f69c);
    return puVar1;
  case 5:
    puVar1 = (undefined1 *)FUN_0042b6c9(s_CED_TACTICAL_WITHDRAWAL_0083f684);
    return puVar1;
  case 6:
    puVar1 = (undefined1 *)FUN_0042b6c9(s_CED_BREAKTHROUGH_0083f670);
    return puVar1;
  default:
    return &DAT_0088ebf8;
  }
}


