// FUN_007ad12c @ 7ad12c size=84

undefined4 FUN_007ad12c(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_007aaddc();
  DAT_0087d510 = TlsAlloc();
  if (DAT_0087d510 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_007ae32a(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_0087d510,lpTlsValue);
      if (BVar1 != 0) {
        FUN_007ad19e(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}


