// FUN_007adf9b @ 7adf9b size=200

undefined4 * FUN_007adf9b(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_007aae71(2);
  iVar3 = 0;
  if (0 < DAT_00dc6c80) {
    do {
      iVar1 = *(int *)(DAT_00dc5c78 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = _malloc(0x38);
        *(void **)(iVar3 + DAT_00dc5c78) = pvVar2;
        if (*(int *)(iVar3 + DAT_00dc5c78) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_00dc5c78) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_00dc5c78) + 0x20));
          puVar4 = *(undefined4 **)(iVar3 + DAT_00dc5c78);
LAB_007ae03f:
          if (puVar4 != (undefined4 *)0x0) {
            puVar4[4] = 0xffffffff;
            puVar4[1] = 0;
            puVar4[3] = 0;
            puVar4[2] = 0;
            *puVar4 = 0;
            puVar4[7] = 0;
          }
        }
        break;
      }
      if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
        FUN_007a674f(iVar3,iVar1);
        iVar1 = *(int *)(DAT_00dc5c78 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_00dc5c78 + iVar3 * 4);
          goto LAB_007ae03f;
        }
        FUN_007a67a1(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00dc6c80);
  }
  FUN_007aaed2(2);
  return puVar4;
}


