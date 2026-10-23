// FUN_007aea20 @ 7aea20 size=66

undefined4 FUN_007aea20(uint param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 < DAT_00dc5c60) &&
     ((*(byte *)((&DAT_00dc5b60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_00dc5b60)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  puVar1 = (undefined4 *)FUN_007aadca();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_007aadd3();
  *puVar1 = 0;
  return 0xffffffff;
}


