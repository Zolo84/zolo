// FUN_00519360 @ 519360 size=248

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00519360(void)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  _DAT_00adc9bc = FUN_00413c60(0,0xff,0);
  _DAT_00adc9bc = _DAT_00adc9bc & 0xff;
  _DAT_00adc9c0 = FUN_00413c60(0x80,0xff,0);
  _DAT_00adc9c0 = _DAT_00adc9c0 & 0xff;
  _DAT_00adc9c4 = FUN_00413c60(0xff,0xff,0);
  _DAT_00adc9c4 = _DAT_00adc9c4 & 0xff;
  _DAT_00adc9c8 = FUN_00413c60(0xff,0xa0,0);
  _DAT_00adc9c8 = _DAT_00adc9c8 & 0xff;
  _DAT_00adc9cc = FUN_00413c60(0xff,0,0);
  _DAT_00adc9cc = _DAT_00adc9cc & 0xff;
  iVar3 = 0;
  puVar2 = &DAT_00adc9d0;
  do {
    uVar1 = FUN_0044a740(iVar3);
    uVar1 = FUN_00413c60(uVar1 & 0xff,uVar1 >> 8 & 0xff,uVar1 >> 0x10 & 0xff);
    iVar3 = iVar3 + 1;
    *puVar2 = uVar1 & 0xff;
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0xadcf30);
  return;
}


