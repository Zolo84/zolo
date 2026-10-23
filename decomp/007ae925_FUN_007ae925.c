// FUN_007ae925 @ 7ae925 size=124

undefined4 FUN_007ae925(uint param_1,HANDLE param_2)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_00dc5c60) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_00dc5b60)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_0087d074 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_007ae97e;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_007ae97e:
      *(HANDLE *)((&DAT_00dc5b60)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  puVar1 = (undefined4 *)FUN_007aadca();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_007aadd3();
  *puVar1 = 0;
  return 0xffffffff;
}


