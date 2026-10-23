// FUN_007b4e2a @ 7b4e2a size=86

void FUN_007b4e2a(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_00dc53c8);
  DAT_00dc53c4 = (uint)(sVar1 == 3);
  if (sVar1 == 3) {
    DAT_00dc53c0 = 2;
  }
  else {
    DAT_00dc53c0 = FUN_007b5250(DAT_00dc53c8);
  }
  EnumSystemLocalesA(FUN_007b4e80,1);
  if ((DAT_00dc53d0 & 4) == 0) {
    DAT_00dc53d0 = 0;
  }
  return;
}


