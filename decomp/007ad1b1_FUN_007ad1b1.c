// FUN_007ad1b1 @ 7ad1b1 size=103

DWORD * FUN_007ad1b1(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_0087d510);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_007ae32a(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_0087d510,lpTlsValue);
      if (BVar1 != 0) {
        FUN_007ad19e(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_007ad20c;
      }
    }
    __amsg_exit(0x10);
  }
LAB_007ad20c:
  SetLastError(dwErrCode);
  return lpTlsValue;
}


