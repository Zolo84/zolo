// FUN_004af5c0 @ 4af5c0 size=65

undefined4 * FUN_004af5c0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_008ca210;
  do {
    if (*piVar1 == (&DAT_008ca220)[param_1 * 0x47]) {
      return &DAT_008ca110 + iVar2 * 0x47;
    }
    piVar1 = piVar1 + 0x47;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x8e1fb0);
  return (undefined4 *)&DAT_0083e638;
}


