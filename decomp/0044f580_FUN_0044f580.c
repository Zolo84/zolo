// FUN_0044f580 @ 44f580 size=37

void FUN_0044f580(void)

{
  int *piVar1;
  
  piVar1 = &DAT_0089cad8;
  do {
    if (*piVar1 != 0) {
      FUN_0044f5b0(*piVar1);
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x89d038);
  return;
}


