// FUN_004a0d10 @ 4a0d10 size=27

uint __fastcall FUN_004a0d10(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(char *)(param_1 + 0x34ac + uVar1) != '\0') {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0x158);
  return uVar1 & 0xffffff00;
}


