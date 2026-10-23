// FUN_007a6e38 @ 7a6e38 size=131

undefined4 FUN_007a6e38(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_007aea20(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_007aea20(2);
      iVar2 = FUN_007aea20(1);
      if (iVar2 == iVar1) goto LAB_007a6e86;
    }
    hObject = (HANDLE)FUN_007aea20(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_007a6e88;
    }
  }
LAB_007a6e86:
  DVar4 = 0;
LAB_007a6e88:
  FUN_007ae9a1(param_1);
  *(undefined1 *)((&DAT_00dc5b60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_007aad57(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


