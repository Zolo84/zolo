// FUN_004d8eb0 @ 4d8eb0 size=90

undefined4 * __fastcall FUN_004d8eb0(undefined4 *param_1)

{
  int iVar1;
  
  FUN_004e05c0();
  *param_1 = &PTR_FUN_007e7f44;
  DAT_00aa4320 = &DAT_00a98470;
  iVar1 = 0;
  do {
    if (iVar1 < 0x84) {
      (&DAT_00aa411c)[iVar1] = 4;
LAB_004d8ef0:
      if (0xff < iVar1) goto LAB_004d8ef7;
    }
    else {
      if (iVar1 < 0x100) {
        (&DAT_00aa411c)[iVar1] = (char)iVar1 + -0x80;
        goto LAB_004d8ef0;
      }
LAB_004d8ef7:
      (&DAT_00aa411c)[iVar1] = 0x7f;
    }
    iVar1 = iVar1 + 1;
    if (0x1ff < iVar1) {
      return param_1;
    }
  } while( true );
}


