// FUN_007883a0 @ 7883a0 size=37

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007883a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00dc0fd4;
  for (iVar1 = 0x158; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_00dc1530 = 4;
  _DAT_00dc1260 = 5;
  return;
}


