// FUN_00525660 @ 525660 size=83

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_00525660(int param_1)

{
  uint *puVar1;
  float fVar2;
  undefined4 in_EAX;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),DAT_00dc195e);
  puVar4 = *(uint **)(param_1 + 0x26);
  if (DAT_00dc195e == '\0') {
    if (puVar4 == (uint *)0x0) {
LAB_0052568e:
      return uVar3 & 0xffffff00;
    }
    while( true ) {
      puVar1 = puVar4 + 2;
      uVar3 = *puVar4;
      if (*(int *)(uVar3 + 0x134) == 9) break;
      puVar4 = (uint *)*puVar1;
      if ((uint *)*puVar1 == (uint *)0x0) {
        return uVar3 & 0xffffff00;
      }
    }
  }
  else {
    do {
      if (puVar4 == (uint *)0x0) goto LAB_0052568e;
      fVar2 = *(float *)(*puVar4 + 0x110);
      uVar3 = CONCAT22((short)(*puVar4 >> 0x10),
                       (ushort)(fVar2 < _DAT_007e3380) << 8 |
                       (ushort)(NAN(fVar2) || NAN(_DAT_007e3380)) << 10 |
                       (ushort)(fVar2 == _DAT_007e3380) << 0xe);
      puVar4 = (uint *)puVar4[2];
    } while ((fVar2 == _DAT_007e3380) == 0);
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}


