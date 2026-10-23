// FUN_00429a50 @ 429a50 size=175

void FUN_00429a50(undefined4 param_1)

{
  HWND pHVar1;
  int iVar2;
  LPCSTR lpText;
  char *pcVar3;
  char *lpCaption;
  UINT UVar4;
  
  FUN_007a863f(&DAT_0088f2e8,param_1,&stack0x00000008);
  FUN_007a630a(&DAT_0088f6e8,s______s_____Do_you_still_want_to_c_0083a6ac,&DAT_0088f2e8);
  FUN_00405ad0(&DAT_0088f6e8);
  if (DAT_0088faf5 == '\0') {
    UVar4 = 0x202;
    pcVar3 = s_Critical_error__0083a69c;
    lpText = &DAT_0088f6e8;
    pHVar1 = GetActiveWindow();
    iVar2 = MessageBoxA(pHVar1,lpText,pcVar3,UVar4);
    if (iVar2 == 3) {
      FUN_007a8628();
      return;
    }
    if (iVar2 == 4) {
      DebugBreak();
      return;
    }
    if ((iVar2 == 5) && (DAT_0088faf4 == '\0')) {
      UVar4 = 0x24;
      lpCaption = s_Ignore_all_errors__0083a688;
      pcVar3 = s_Do_you_want_to_suppress_error_re_0083a608;
      DAT_0088faf4 = '\x01';
      pHVar1 = GetActiveWindow();
      iVar2 = MessageBoxA(pHVar1,pcVar3,lpCaption,UVar4);
      if (iVar2 == 6) {
        DAT_0088faf5 = '\x01';
      }
    }
  }
  return;
}


