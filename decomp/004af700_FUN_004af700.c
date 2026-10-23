// FUN_004af700 @ 4af700 size=50

undefined4 * FUN_004af700(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_008ca210;
  do {
    if (*piVar1 == param_1) {
      return &DAT_008ca110 + iVar2 * 0x47;
    }
    piVar1 = piVar1 + 0x47;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x8e1fb0);
  return (undefined4 *)&DAT_0083e638;
}


