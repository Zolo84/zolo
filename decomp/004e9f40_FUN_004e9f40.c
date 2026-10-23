// FUN_004e9f40 @ 4e9f40 size=49

int __fastcall FUN_004e9f40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18a);
  if (*(int *)(DAT_00ab27b4 + 0x482 + iVar1 * 0x4b2) != *(int *)(param_1 + 0x482)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x482) + 0x52);
  }
  return iVar1;
}


