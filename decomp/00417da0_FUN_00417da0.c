// FUN_00417da0 @ 417da0 size=70

undefined4 FUN_00417da0(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar2 = s_infantry_0082f438;
  do {
    iVar1 = FUN_007a8730(param_1,pcVar2);
    if (iVar1 == 0) {
      return (&DAT_0082f538)[iVar3 * 0x41];
    }
    pcVar2 = pcVar2 + 0x104;
    iVar3 = iVar3 + 1;
  } while ((int)pcVar2 < 0x838268);
  return 0x8c;
}


