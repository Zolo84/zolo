// FUN_0069d120 @ 69d120 size=35

void FUN_0069d120(void)

{
  uint uVar1;
  
  uVar1 = _rand();
  uVar1 = uVar1 & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  FUN_006adfb0(uVar1 + 2,0);
  return;
}


