// FUN_007915fb @ 7915fb size=75

void FUN_007915fb(void)

{
  DAT_00dc34fc = '\x01';
  DAT_00dc4220 = 0;
  while (DAT_00dc34fc != '\0') {
    FUN_00584220();
    FUN_00584230(0,0,0);
    Sleep(0x1e);
  }
  DAT_00dc4220 = 1;
  return;
}


