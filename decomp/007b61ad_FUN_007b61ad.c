// FUN_007b61ad @ 7b61ad size=41

byte FUN_007b61ad(uint param_1)

{
  if (DAT_00dc5c60 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_00dc5b60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}


