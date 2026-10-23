// FUN_007ae467 @ 7ae467 size=129

int FUN_007ae467(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  FUN_007aae71(2);
  iVar4 = 3;
  if (3 < DAT_00dc6c80) {
    do {
      iVar3 = iVar4 * 4;
      iVar1 = *(int *)(iVar3 + DAT_00dc5c78);
      if (iVar1 != 0) {
        if (((*(byte *)(iVar1 + 0xc) & 0x83) != 0) && (iVar1 = FUN_007a6429(iVar1), iVar1 != -1)) {
          iVar2 = iVar2 + 1;
        }
        if (0x13 < iVar4) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_00dc5c78) + 0x20));
          FUN_007a77fa(*(undefined4 *)(iVar3 + DAT_00dc5c78));
          *(undefined4 *)(iVar3 + DAT_00dc5c78) = 0;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_00dc6c80);
  }
  FUN_007aaed2(2);
  return iVar2;
}


