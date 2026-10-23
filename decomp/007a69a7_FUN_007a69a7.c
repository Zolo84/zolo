// FUN_007a69a7 @ 7a69a7 size=42

undefined4 FUN_007a69a7(LPCSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
  }
  else {
    DVar2 = 0;
  }
  if (DVar2 != 0) {
    FUN_007aad57(DVar2);
    return 0xffffffff;
  }
  return 0;
}


