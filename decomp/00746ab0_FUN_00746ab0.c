// FUN_00746ab0 @ 746ab0 size=223

void __fastcall FUN_00746ab0(int param_1)

{
  char cVar1;
  uint uVar2;
  DWORD DVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar5 = 0;
  uVar2 = 0;
  do {
    cVar1 = (char)uVar2;
    uVar2 = uVar2 + 8;
    iVar6 = iVar6 + ((uint)(byte)(&stack0x00000004)[iVar5] << (0x18U - cVar1 & 0x1f));
    iVar5 = iVar5 + 1;
  } while (uVar2 < 0x20);
  (**(code **)(*(int *)(param_1 + 0xe) + 8))(0xd06,iVar6);
  DVar3 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x1ba),0xffffffff);
  if (DVar3 != 0) {
    GetLastError();
    FUN_0074bc80(s_WaitForSingleObject__mutex__INFI_0087460c,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x80);
  }
  BVar4 = ReleaseSemaphore(*(HANDLE *)(param_1 + 0x1be),1,(LPLONG)&stack0xfffffffc);
  if (BVar4 == 0) {
    FUN_0074bc80(s_ReleaseSemaphore_008745d8,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874508,0xbb);
  }
  *(int *)(param_1 + 0x192) = *(int *)(param_1 + 0x192) + 1;
  BVar4 = ReleaseMutex(*(HANDLE *)(param_1 + 0x1ba));
  if (BVar4 == 0) {
    FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
  }
  return;
}


