// FUN_007af426 @ 7af426 size=43

uint FUN_007af426(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_00dc5b40;
  while( true ) {
    if (DAT_00dc5b40 + DAT_00dc5b3c * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}


