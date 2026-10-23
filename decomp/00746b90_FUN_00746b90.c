// FUN_00746b90 @ 746b90 size=174

void __fastcall FUN_00746b90(int param_1)

{
  DWORD DVar1;
  BOOL BVar2;
  
  DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x1be),0xffffffff);
  if (DVar1 != 0x102) {
    if (DVar1 != 0) {
      FUN_0074bc80(s_WaitForSingleObject__semaphore__t_00874770,s_Unknown_method_00874398,
                   s_C__Dev_HoI2_Projects_Darkest_Hou_00874508,0x93);
    }
    DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x1ba),0xffffffff);
    if (DVar1 != 0) {
      GetLastError();
      FUN_0074bc80(s_WaitForSingleObject__mutex__INFI_0087460c,s_Unknown_method_00874398,
                   s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x80);
    }
    *(int *)(param_1 + 0x192) = *(int *)(param_1 + 0x192) + -1;
    BVar2 = ReleaseMutex(*(HANDLE *)(param_1 + 0x1ba));
    if (BVar2 == 0) {
      FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                   s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
    }
  }
  return;
}


