// FUN_00733e90 @ 733e90 size=119

undefined4 __fastcall FUN_00733e90(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x16) == -1) {
    cVar1 = FUN_00700fe0(*(undefined4 *)(param_1 + 0x12));
    if (cVar1 == '\0') {
      FUN_006d0d70(DAT_00d13348,s_Event__d_has_not_occurred__00872d84,
                   *(undefined4 *)(param_1 + 0x12));
      return 0;
    }
  }
  else {
    cVar1 = FUN_00700fa0(*(undefined4 *)(param_1 + 0x12),*(int *)(param_1 + 0x16));
    if (cVar1 == '\0') {
      FUN_006d0d70(DAT_00d13348,s_Event__d_has_not_occurred_or_it_i_00872d48,
                   *(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 0x16));
      return 0;
    }
  }
  return 1;
}


