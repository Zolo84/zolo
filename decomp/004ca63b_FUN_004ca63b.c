// FUN_004ca63b @ 4ca63b size=95

undefined4 __fastcall FUN_004ca63b(int param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x2c);
  do {
    if (local_8 == 0) {
      return 0;
    }
    local_8 = *(int *)(local_8 + 8);
    iVar1 = FUN_004ec4c0();
  } while (iVar1 < 1);
  return 1;
}


