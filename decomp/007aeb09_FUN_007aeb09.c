// FUN_007aeb09 @ 7aeb09 size=95

void FUN_007aeb09(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_00dc5b60)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_007aae71(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_007aaed2(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_00dc5b60)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}


