// FUN_007aa4dd @ 7aa4dd size=185

undefined1 * FUN_007aa4dd(void)

{
  bool bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  bVar1 = true;
  if (DAT_0087d194 == (undefined1 *)0x0) {
    DAT_0087d194 = _malloc(0x351);
  }
  *DAT_0087d194 = 0;
  FUN_007aa6b1(DAT_0087d194,3,PTR_s_LC_COLLATE_0087d19c,&DAT_008580fc,PTR_DAT_0087d1a0);
  ppuVar3 = &PTR_DAT_0087d1a0;
  do {
    FUN_007a7500(DAT_0087d194,&DAT_0086d430);
    ppuVar4 = ppuVar3 + 3;
    iVar2 = _strcmp(*ppuVar3,ppuVar3[3]);
    if (iVar2 != 0) {
      bVar1 = false;
    }
    FUN_007aa6b1(DAT_0087d194,3,ppuVar3[2],&DAT_008580fc,*ppuVar4);
    ppuVar3 = ppuVar4;
  } while ((int)ppuVar4 < 0x87d1d0);
  if (!bVar1) {
    return DAT_0087d194;
  }
  FUN_007a77fa(DAT_0087d194);
  DAT_0087d194 = (undefined1 *)0x0;
  return PTR_DAT_0087d1ac;
}


