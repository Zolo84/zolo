// FUN_0053a978 @ 53a978 size=117

int __fastcall FUN_0053a978(int param_1)

{
  char *_Str2;
  int iVar1;
  
  if (*(char *)(param_1 + 0x149be) == '\0') {
    param_1 = FUN_004af740(*(undefined4 *)(param_1 + 6));
  }
  else {
    _Str2 = (char *)FUN_0042b6c9(param_1 + 0x149be);
    iVar1 = _strcmp(s_UNKNOWN_STRING_WANTED_008510c8,_Str2);
    if (iVar1 == 0) {
      param_1 = param_1 + 0x149be;
    }
    else {
      param_1 = FUN_0042b6c9(param_1 + 0x149be);
    }
  }
  return param_1;
}


