// FUN_006d6a20 @ 6d6a20 size=163

void FUN_006d6a20(void)

{
  int iVar1;
  int local_8;
  int local_4;
  
  FUN_005841a0();
  FUN_005841b0();
  iVar1 = 0;
  local_4 = 1;
  local_8 = 1;
  do {
    if ((local_4 == 0) || (local_8 == 0)) break;
    FUN_00426380(&local_4);
    FUN_00426380(&local_8);
    if ((local_4 != 0) && (local_8 != 0)) {
      FUN_0049a100(local_4);
      FUN_0049a100(local_8);
    }
    iVar1 = iVar1 + 2;
  } while (iVar1 < 0x13);
  FUN_004262f0(0x13 - iVar1);
  return;
}


