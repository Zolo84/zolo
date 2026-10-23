// FUN_004dc920 @ 4dc920 size=170

void FUN_004dc920(int param_1)

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
LAB_004dc9ab:
      DAT_00aa732c = DAT_00aa732c + 1;
      DAT_00aa7330 = DAT_00aa7330 + 1;
      return;
    }
    if (param_1 < 2) {
      if (uVar1 != 0) {
        DAT_00aa732c = DAT_00aa732c + 4;
        DAT_00aa7330 = DAT_00aa7330 + 4;
        return;
      }
      goto LAB_004dc9ab;
    }
    FUN_004dc920(iVar2);
    FUN_004dc920(iVar2);
    FUN_004dc920(iVar2);
    param_1 = param_1 + -1;
  } while( true );
}


