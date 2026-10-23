// FUN_007b178a @ 7b178a size=147

undefined4 FUN_007b178a(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (DAT_00dc5c60 <= param_1) {
LAB_007b180b:
    puVar4 = (undefined4 *)FUN_007aadca();
    *puVar4 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_00dc5b60)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) goto LAB_007b180b;
  FUN_007aeb09(param_1);
  if ((*(byte *)((&DAT_00dc5b60)[(int)param_1 >> 5] + 4 + iVar5) & 1) != 0) {
    hFile = (HANDLE)FUN_007aea20(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar6 = 0;
    if (DVar2 == 0) goto LAB_007b1800;
    pDVar3 = (DWORD *)FUN_007aadd3();
    *pDVar3 = DVar2;
  }
  puVar4 = (undefined4 *)FUN_007aadca();
  *puVar4 = 9;
  uVar6 = 0xffffffff;
LAB_007b1800:
  FUN_007aeb68(param_1);
  return uVar6;
}


