// FUN_004dc870 @ 4dc870 size=170

void FUN_004dc870(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = param_1;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = (uint)*(byte *)(DAT_00aa0cd0 + DAT_00aa0cc4) & DAT_00aa0cd4 & 0xff;
    bVar3 = (char)(byte)DAT_00aa0cd4 < '\0';
    DAT_00aa0cd4._0_1_ = (byte)DAT_00aa0cd4 << 1 | bVar3;
    DAT_00aa0cd0 = DAT_00aa0cd0 + (uint)bVar3;
    if (uVar1 == 0) {
LAB_004dc8fb:
      DAT_00aa7334 = DAT_00aa7334 + 1;
      DAT_00aa7338 = DAT_00aa7338 + 1;
      return;
    }
    if (param_1 < 2) {
      if (uVar1 != 0) {
        DAT_00aa7334 = DAT_00aa7334 + 4;
        DAT_00aa7338 = DAT_00aa7338 + 4;
        return;
      }
      goto LAB_004dc8fb;
    }
    FUN_004dc870(iVar2);
    FUN_004dc870(iVar2);
    FUN_004dc870(iVar2);
    param_1 = param_1 + -1;
  } while( true );
}


