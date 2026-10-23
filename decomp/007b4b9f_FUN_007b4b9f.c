// FUN_007b4b9f @ 7b4b9f size=135

void FUN_007b4b9f(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_00dc53c8);
  DAT_00dc53c4 = (uint)(sVar1 == 3);
  sVar1 = _strlen(DAT_00dc53cc);
  DAT_00dc53bc = (uint)(sVar1 == 3);
  DAT_00dc53b8 = 0;
  if (DAT_00dc53c4 == 0) {
    DAT_00dc53c0 = FUN_007b5250(DAT_00dc53c8);
  }
  else {
    DAT_00dc53c0 = 2;
  }
  EnumSystemLocalesA(FUN_007b4c26,1);
  if ((((DAT_00dc53d0 & 0x100) == 0) || ((DAT_00dc53d0 & 0x200) == 0)) || ((DAT_00dc53d0 & 7) == 0))
  {
    DAT_00dc53d0 = 0;
  }
  return;
}


