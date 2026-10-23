// FUN_007aee95 @ 7aee95 size=293

int FUN_007aee95(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  HANDLE hFile;
  BOOL BVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  int iVar7;
  undefined1 local_1008 [4064];
  undefined4 uStackY_28;
  undefined4 uStackY_24;
  undefined4 uStackY_20;
  
  FUN_007a69e0();
  iVar7 = 0;
  iVar1 = FUN_007af01f();
  if ((iVar1 == -1) || (iVar1 = FUN_007af01f(), iVar1 == -1)) {
    iVar7 = -1;
  }
  else {
    param_2 = param_2 - iVar1;
    if (param_2 < 1) {
      if (param_2 < 0) {
        uStackY_20 = 0x7aef66;
        FUN_007af01f();
        uStackY_20 = param_1;
        uStackY_24 = 0x7aef6e;
        hFile = (HANDLE)FUN_007aea20();
        BVar4 = SetEndOfFile(hFile);
        iVar7 = (BVar4 != 0) - 1;
        if (iVar7 == -1) {
          puVar3 = (undefined4 *)FUN_007aadca();
          *puVar3 = 0xd;
          DVar5 = GetLastError();
          pDVar6 = (DWORD *)FUN_007aadd3();
          *pDVar6 = DVar5;
        }
      }
    }
    else {
      uStackY_20 = 0x7aeef5;
      _memset(local_1008,0,0x1000);
      uStackY_20 = 0x8000;
      uStackY_24 = param_1;
      uStackY_28 = 0x7aef02;
      FUN_007b622f();
      do {
        uStackY_20 = 0x7aef20;
        iVar1 = FUN_007aebef();
        if (iVar1 == -1) {
          piVar2 = (int *)FUN_007aadd3();
          if (*piVar2 == 5) {
            puVar3 = (undefined4 *)FUN_007aadca();
            *puVar3 = 0xd;
          }
          iVar7 = -1;
          break;
        }
        param_2 = param_2 - iVar1;
      } while (0 < param_2);
      FUN_007b622f();
    }
    uStackY_20 = 0x7aefac;
    FUN_007af01f();
  }
  return iVar7;
}


