// FUN_004af6b0 @ 4af6b0 size=68

undefined4 FUN_004af6b0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = &DAT_008ca110;
  do {
    iVar1 = FUN_007a8730(param_1,puVar2);
    if (iVar1 == 0) {
      return (&DAT_008ca210)[iVar3 * 0x47];
    }
    puVar2 = puVar2 + 0x47;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x8e1eb0);
  return 0;
}


