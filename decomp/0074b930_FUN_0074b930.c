// FUN_0074b930 @ 74b930 size=158

undefined4 __fastcall FUN_0074b930(int param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  DWORD DVar3;
  undefined4 *puVar4;
  BOOL BVar5;
  
  DVar3 = WaitForSingleObject(DAT_00d4c23c,0xffffffff);
  if (DVar3 != 0) {
    GetLastError();
    FUN_0074bc80(s_WaitForSingleObject__mutex__INFI_0087460c,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x80);
  }
  puVar4 = (undefined4 *)FUN_0074b9d0();
  uVar2 = FUN_0074bb30(*puVar4,puVar4[1]);
  BVar5 = ReleaseMutex(DAT_00d4c23c);
  if (BVar5 == 0) {
    FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
  }
  *(undefined4 *)(param_1 + 4) = DAT_00d4c210;
  uVar1 = DAT_00d4c214;
  *(undefined4 *)(param_1 + 8) = DAT_00d4c214;
  return CONCAT31((int3)((uint)uVar1 >> 8),uVar2);
}


