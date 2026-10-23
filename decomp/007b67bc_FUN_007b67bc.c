// FUN_007b67bc @ 7b67bc size=137

int FUN_007b67bc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_00dc54a0 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_00dc54a0 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_00dc54a0 != (FARPROC)0x0) {
        DAT_00dc54a4 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_00dc54a8 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_007b680b;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_007b680b:
    if (DAT_00dc54a4 != (FARPROC)0x0) {
      iVar1 = (*DAT_00dc54a4)();
      if ((iVar1 != 0) && (DAT_00dc54a8 != (FARPROC)0x0)) {
        iVar1 = (*DAT_00dc54a8)(iVar1);
      }
    }
    iVar1 = (*DAT_00dc54a0)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}


