// FUN_0074ba10 @ 74ba10 size=134

undefined4 FUN_0074ba10(undefined4 *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  BOOL BVar3;
  
  DVar1 = WaitForSingleObject(DAT_00d4c23c,0xffffffff);
  if (DVar1 != 0) {
    GetLastError();
    FUN_0074bc80(s_WaitForSingleObject__mutex__INFI_0087460c,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x80);
  }
  uVar2 = FUN_0074bbb0(*param_1,param_1[1]);
  BVar3 = ReleaseMutex(DAT_00d4c23c);
  if (BVar3 == 0) {
    FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
  }
  return uVar2;
}


