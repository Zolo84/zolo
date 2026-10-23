// FUN_0074b690 @ 74b690 size=258

void FUN_0074b690(undefined4 param_1,undefined4 param_2)

{
  DWORD DVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  BOOL BVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007df75b;
  local_c = ExceptionList;
  DAT_00d4c220 = param_1;
  DAT_00d4c224 = param_2;
  ExceptionList = &local_c;
  DVar1 = WaitForSingleObject(DAT_00d4c23c,0xffffffff);
  if (DVar1 != 0) {
    GetLastError();
    FUN_0074bc80(s_WaitForSingleObject__mutex__INFI_0087460c,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x80);
  }
  puVar2 = operator_new(0xc);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0x1fff;
    pvVar3 = operator_new(0x7ffc);
    puVar2[2] = pvVar3;
    uVar4 = 0;
    if (puVar2[1] != 0) {
      do {
        uVar4 = uVar4 + 1;
        *(undefined4 *)(puVar2[2] + -4 + uVar4 * 4) = 0;
      } while (uVar4 < (uint)puVar2[1]);
    }
  }
  local_4 = 0xffffffff;
  DAT_00d4c244 = puVar2;
  BVar5 = ReleaseMutex(DAT_00d4c23c);
  if (BVar5 == 0) {
    FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
  }
  ExceptionList = local_c;
  return;
}


