// FUN_004ed600 @ 4ed600 size=104

bool __thiscall FUN_004ed600(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  
  if (((*(int *)(param_1 + 0x254) == 8) || (*(int *)(param_1 + 0x254) == 9)) &&
     ((iVar1 = *(int *)(DAT_00ab27b4 + param_3 * 0x4b2 + 0x254), iVar1 == 8 || (iVar1 == 9)))) {
    cVar2 = FUN_004ed4e0(param_2,*(undefined4 *)(param_1 + 0x12));
    if (cVar2 != '\0') {
      cVar2 = FUN_004ed4e0(param_2,param_3);
      return cVar2 != '\0';
    }
  }
  return false;
}


