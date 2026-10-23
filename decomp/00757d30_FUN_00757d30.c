// FUN_00757d30 @ 757d30 size=724

void __fastcall FUN_00757d30(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  BOOL BVar7;
  DWORD DVar8;
  uint uVar9;
  code *pcVar10;
  undefined4 *puVar11;
  code *pcVar12;
  undefined4 *puVar13;
  undefined4 *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  cVar1 = *(char *)(param_1 + 0x114);
  pcVar12 = WaitForSingleObject_exref;
  pcVar10 = GetLastError_exref;
  do {
    GetLastError_exref = pcVar10;
    WaitForSingleObject_exref = pcVar12;
    if (cVar1 != '\x01') {
LAB_00757ec8:
      iVar5 = (*pcVar12)(*(undefined4 *)(param_1 + 0xd0),0xffffffff);
      if (iVar5 != 0) {
        (*pcVar10)();
        FUN_0074bc80(s_WaitForSingleObject__mutex__INFI_0087460c,s_Unknown_method_00874398,
                     s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x80);
      }
      local_c = (undefined4 *)0x0;
      iVar5 = *(int *)(param_1 + 0xd8);
      iVar6 = FUN_00748f30(iVar5,*(undefined4 *)(iVar5 + 4));
      *(int *)(iVar5 + 4) = iVar6;
      **(int **)(iVar6 + 4) = iVar6;
      FUN_007585b0(iVar6 + 8,&stack0xfffffff0);
      *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
      BVar7 = ReleaseMutex(*(HANDLE *)(param_1 + 0xd0));
      if (BVar7 == 0) {
        FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                     s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
      }
      DVar8 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x10c),0xffffffff);
      if (DVar8 != 0) {
        (*pcVar10)();
        FUN_0074bc80(s_WaitForSingleObject__mutex__INFI_0087460c,s_Unknown_method_00874398,
                     s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x80);
      }
      BVar7 = ReleaseSemaphore(*(HANDLE *)(param_1 + 0x110),1,(LPLONG)&stack0xffffffec);
      if (BVar7 == 0) {
        FUN_0074bc80(s_ReleaseSemaphore_008745d8,s_Unknown_method_00874398,
                     s_C__Dev_HoI2_Projects_Darkest_Hou_00874508,0xbb);
      }
      *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
      BVar7 = ReleaseMutex(*(HANDLE *)(param_1 + 0x10c));
      if (BVar7 == 0) {
        FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                     s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
      }
      return;
    }
    local_c = (undefined4 *)0x0;
    uVar3 = FUN_00758010(&local_c,*(undefined4 *)(param_1 + 0x1e));
    pcVar12 = WaitForSingleObject_exref;
    if (uVar3 == 0xffffffff) {
      *(undefined1 *)(param_1 + 0x114) = 0;
      DVar8 = WaitForSingleObject(*(HANDLE *)(param_1 + 0xd0),0xffffffff);
      pcVar10 = GetLastError_exref;
      if (DVar8 != 0) {
        GetLastError();
        FUN_0074bc80(s_WaitForSingleObject__mutex__INFI_0087460c,s_Unknown_method_00874398,
                     s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x80);
      }
      local_8 = 0;
      local_4 = 0;
      FUN_007582b0(&local_c,*(undefined4 *)(param_1 + 0xd8),&local_8);
      BVar7 = ReleaseMutex(*(HANDLE *)(param_1 + 0xd0));
      if (BVar7 == 0) {
        FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                     s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
      }
      DVar8 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x10c),0xffffffff);
      if (DVar8 != 0) {
        GetLastError();
        FUN_0074bc80(s_WaitForSingleObject__mutex__INFI_0087460c,s_Unknown_method_00874398,
                     s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x80);
      }
      BVar7 = ReleaseSemaphore(*(HANDLE *)(param_1 + 0x110),1,(LPLONG)&local_c);
      if (BVar7 == 0) {
        FUN_0074bc80(s_ReleaseSemaphore_008745d8,s_Unknown_method_00874398,
                     s_C__Dev_HoI2_Projects_Darkest_Hou_00874508,0xbb);
      }
      *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
      FUN_00755170();
      goto LAB_00757ec8;
    }
    puVar4 = _malloc(uVar3);
    puVar2 = local_c;
    puVar11 = local_c;
    puVar13 = puVar4;
    for (uVar9 = uVar3 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    FUN_00758320(puVar4);
    FUN_00757b50();
    FUN_00796cd8(puVar2);
    cVar1 = *(char *)(param_1 + 0x114);
    pcVar12 = WaitForSingleObject_exref;
    pcVar10 = GetLastError_exref;
  } while( true );
}


