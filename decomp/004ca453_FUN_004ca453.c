// FUN_004ca453 @ 4ca453 size=101

uint __fastcall FUN_004ca453(int param_1)

{
  uint uVar1;
  uint *local_8;
  
  local_8 = *(uint **)(param_1 + 0x2c);
  do {
    if (local_8 == (uint *)0x0) {
      return 1;
    }
    uVar1 = *local_8;
    local_8 = (uint *)local_8[2];
  } while (*(int *)(uVar1 + 0x3dc) < 1);
  return uVar1 & 0xffffff00;
}


