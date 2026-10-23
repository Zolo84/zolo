// FUN_006d68a0 @ 6d68a0 size=72

undefined4 FUN_006d68a0(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar2 = s_BUTTON_LOCATE_ARMIES_00861f2c;
  do {
    iVar1 = FUN_007a8730(pcVar2,param_1);
    if (iVar1 == 0) {
      return (&DAT_00861f28)[iVar3 * 0x41];
    }
    pcVar2 = pcVar2 + 0x104;
    iVar3 = iVar3 + 1;
  } while ((int)pcVar2 < 0x866234);
  return 0xffffffff;
}


