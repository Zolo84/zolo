// FUN_00592b10 @ 592b10 size=104

undefined4 FUN_00592b10(int param_1)

{
  int iVar1;
  int *piVar2;
  
  while( true ) {
    while (iVar1 = FUN_00535490(), iVar1 == 1) {
      if (*(int *)(param_1 + 4) != 0xe9) {
        FUN_005349b0(s_unknown_lhs_in_eyr_history_00858348);
        return 0xfffffffe;
      }
      FUN_004361a0(param_1 + 0x410);
    }
    if (iVar1 == 2) break;
    piVar2 = (int *)FUN_00534391();
    if (*piVar2 == 4) {
      FUN_005343dc();
      return 0;
    }
  }
  return 0;
}


