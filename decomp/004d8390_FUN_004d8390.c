// FUN_004d8390 @ 4d8390 size=47

void FUN_004d8390(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_00877690) {
    iVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(undefined1 *)(iVar1 + 0x3b0 + DAT_00ab27b4) = 1;
      iVar1 = iVar1 + 0x4b2;
    } while (iVar2 < DAT_00877690);
  }
  return;
}


