// FUN_004d8400 @ 4d8400 size=93

undefined4 FUN_004d8400(void)

{
  if (DAT_00a98464 < 3) {
    if (DAT_00a98438 - DAT_00a98430 <
        DAT_00a98428 - DAT_00a98420 >> ((byte)(DAT_00a98464 + 1) & 0x1f)) {
      FUN_004d8ea0(DAT_00a98464 + 1);
      DAT_00a98418 = DAT_00a98418 + 1;
      DAT_008477b0 = 1;
      FUN_004d8e20(0,0);
      return 1;
    }
  }
  return 0;
}


