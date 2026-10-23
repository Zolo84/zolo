// FUN_0079a4ef @ 79a4ef size=111

undefined4 __thiscall FUN_0079a4ef(undefined4 param_1,uint param_2,undefined4 param_3)

{
  char *_Str;
  size_t sVar1;
  int iVar2;
  
  _Str = (char *)0x0;
  if (param_2 == 0) {
    param_3 = 0;
  }
  else if (param_2 != 0x3f) {
    iVar2 = 0;
    do {
      if ((param_2 & (1 << ((byte)iVar2 & 0x1f)) >> 1) != 0) {
        _Str = (char *)FUN_007aa17c(iVar2,param_3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
    goto LAB_0079a537;
  }
  _Str = (char *)FUN_007aa17c(0,param_3);
LAB_0079a537:
  if (_Str == (char *)0x0) {
    _Str = &DAT_0085b098;
  }
  sVar1 = _strlen(_Str);
  FUN_00674d80(_Str,sVar1);
  return param_1;
}


