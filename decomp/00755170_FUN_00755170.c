// FUN_00755170 @ 755170 size=43

void __fastcall FUN_00755170(int param_1)

{
  BOOL BVar1;
  
  BVar1 = ReleaseMutex(*(HANDLE *)(param_1 + 0x14));
  if (BVar1 == 0) {
    FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
  }
  return;
}


