// FUN_007a2aab @ 7a2aab size=113

undefined1 * __thiscall
FUN_007a2aab(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined1 *param_6)

{
  size_t sVar1;
  char *_Str;
  
  if (param_5 == 0) {
    _Str = *(char **)(param_1 + 8);
  }
  else {
    if (param_5 != 1) {
      *param_2 = *param_6;
      FUN_00674910(0);
      FUN_00674710(param_6,0,DAT_007f33d8);
      return param_2;
    }
    _Str = *(char **)(param_1 + 0xc);
  }
  *param_2 = param_2._3_1_;
  FUN_00674910(0);
  sVar1 = _strlen(_Str);
  FUN_00674d80(_Str,sVar1);
  return param_2;
}


