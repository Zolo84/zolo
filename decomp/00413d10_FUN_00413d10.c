// FUN_00413d10 @ 413d10 size=78

uint __thiscall FUN_00413d10(int param_1,undefined4 param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar2 = s_transparent_0082f0a8;
  do {
    uVar1 = FUN_007a8730(param_2,pcVar2);
    if (uVar1 == 0) {
      return CONCAT31((int3)((uint)(iVar3 * 0x30) >> 8),
                      *(undefined1 *)((&DAT_0082f098)[iVar3 * 0xc] + 0x1104 + param_1));
    }
    pcVar2 = pcVar2 + 0x30;
    iVar3 = iVar3 + 1;
  } while ((int)pcVar2 < 0x82f1c8);
  return uVar1 & 0xffffff00;
}


