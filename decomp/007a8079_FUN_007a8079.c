// FUN_007a8079 @ 7a8079 size=164

int FUN_007a8079(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  FUN_007aae71(2);
  iVar3 = 0;
  if (0 < DAT_00dc6c80) {
    do {
      iVar1 = *(int *)(DAT_00dc5c78 + iVar3 * 4);
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc) & 0x83) != 0)) {
        FUN_007a674f(iVar3,iVar1);
        iVar1 = *(int *)(DAT_00dc5c78 + iVar3 * 4);
        if ((*(uint *)(iVar1 + 0xc) & 0x83) != 0) {
          if (param_1 == 1) {
            iVar1 = FUN_007a7fe6(iVar1);
            if (iVar1 != -1) {
              iVar2 = iVar2 + 1;
            }
          }
          else if ((param_1 == 0) && ((*(uint *)(iVar1 + 0xc) & 2) != 0)) {
            iVar1 = FUN_007a7fe6(iVar1);
            if (iVar1 == -1) {
              iVar4 = -1;
            }
          }
        }
        FUN_007a67a1(iVar3,*(undefined4 *)(DAT_00dc5c78 + iVar3 * 4));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00dc6c80);
  }
  FUN_007aaed2(2);
  if (param_1 != 1) {
    iVar2 = iVar4;
  }
  return iVar2;
}


