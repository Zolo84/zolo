// FUN_004e7cb0 @ 4e7cb0 size=121

int __thiscall FUN_004e7cb0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4;
  
  iVar2 = 0;
  local_4 = *(int *)(param_1 + 0x290);
  if (0 < local_4) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(DAT_00ab27b4 + 0x254 + *(int *)(iVar3 + *(int *)(param_1 + 0x298)) * 0x4b2);
      if ((iVar1 != 8) && (iVar1 != 9)) {
        iVar1 = FUN_00527cb0(param_2);
        iVar2 = iVar2 + iVar1;
      }
      iVar3 = iVar3 + 0xc;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    return iVar2;
  }
  return 0;
}


