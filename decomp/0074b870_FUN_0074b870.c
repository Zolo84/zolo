// FUN_0074b870 @ 74b870 size=190

undefined4 __thiscall FUN_0074b870(int *param_1,int param_2,uint param_3)

{
  DWORD DVar1;
  BOOL BVar2;
  
  if ((param_1[2] != DAT_00d4c214) || (param_1[1] != DAT_00d4c210)) {
    (**(code **)(*param_1 + 0x10))();
  }
  param_1[1] = param_2;
  param_1[2] = param_3;
  DVar1 = WaitForSingleObject(DAT_00d4c23c,0xffffffff);
  if (DVar1 != 0) {
    GetLastError();
    FUN_0074bc80(s_WaitForSingleObject__mutex__INFI_0087460c,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x80);
  }
  FUN_0074bad0(param_1);
  BVar2 = ReleaseMutex(DAT_00d4c23c);
  if (BVar2 == 0) {
    FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
  }
  if ((DAT_00d4c224 < param_3) && (DAT_00d4c220 == param_2)) {
    DAT_00d4c224 = param_3;
  }
  return 1;
}


