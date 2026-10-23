// FUN_00431800 @ 431800 size=126

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00431800(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x290);
  *(undefined4 *)(param_1 + 0x474) = 0;
  *(undefined4 *)(param_1 + 0x478) = 0;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined1 *)(param_1 + 0x480) = 0;
  *(undefined1 *)(param_1 + 0x181) = 0;
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x298) + iVar3);
      if (_DAT_007e408c < *(float *)(DAT_00ab27b4 + 0x47c + iVar1 * 0x4b2)) {
        FUN_00431800(DAT_00ab27b4 + iVar1 * 0x4b2);
      }
      iVar3 = iVar3 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


