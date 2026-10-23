// FUN_0079b565 @ 79b565 size=35

uint __fastcall FUN_0079b565(basic_streambuf<char,std::char_traits<char>_> *param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = **(uint **)(param_1 + 0x1c);
  if ((uVar2 != 0) && (uVar2 < **(int **)(param_1 + 0x2c) + uVar2)) {
    pbVar1 = (byte *)std::basic_streambuf<char,std::char_traits<char>_>::_Gninc(param_1);
    return (uint)*pbVar1;
  }
  uVar2 = (**(code **)(*(int *)param_1 + 0x14))();
  return uVar2;
}


