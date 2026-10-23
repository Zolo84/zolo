// FUN_00758090 @ 758090 size=540

void __fastcall FUN_00758090(int param_1)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  BOOL BVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 local_24 [4];
  char local_20 [32];
  
  cVar1 = *(char *)(param_1 + 0x114);
  while( true ) {
    if (cVar1 != '\x01') {
      return;
    }
    DVar3 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x110),0xffffffff);
    if (DVar3 != 0x102) {
      if (DVar3 != 0) {
        FUN_0074bc80(s_WaitForSingleObject__semaphore__t_00874770,s_Unknown_method_00874398,
                     s_C__Dev_HoI2_Projects_Darkest_Hou_00874508,0x93);
      }
      DVar3 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x10c),0xffffffff);
      if (DVar3 != 0) {
        GetLastError();
        FUN_0074bc80(s_WaitForSingleObject__mutex__INFI_0087460c,s_Unknown_method_00874398,
                     s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x80);
      }
      *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + -1;
      FUN_00755170();
    }
    DVar3 = WaitForSingleObject(*(HANDLE *)(param_1 + 0xd0),0xffffffff);
    if (DVar3 != 0) {
      GetLastError();
      FUN_0074bc80(s_WaitForSingleObject__mutex__INFI_0087460c,s_Unknown_method_00874398,
                   s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x80);
    }
    if (*(int *)(param_1 + 0xdc) != 0) break;
LAB_00758204:
    BVar5 = ReleaseMutex(*(HANDLE *)(param_1 + 0xd0));
    if (BVar5 == 0) {
      FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                   s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
    }
    cVar1 = *(char *)(param_1 + 0x114);
  }
  iVar6 = *(int *)(**(int **)(param_1 + 0xd8) + 8);
  iVar2 = *(int *)(**(int **)(param_1 + 0xd8) + 0xc);
  FUN_007443a0(local_24,**(undefined4 **)(param_1 + 0xd8));
  if (iVar6 == 0) {
    iVar6 = ReleaseMutex(*(HANDLE *)(param_1 + 0xd0));
    goto joined_r0x007582a8;
  }
  iVar4 = FUN_007a630a(local_20,&DAT_008390a0,iVar2);
  if (iVar4 < 1) {
    FUN_0074bc80(s_sprintf_error_008746c8,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_008746d8,0x1e7);
  }
  else {
    uVar7 = 0xffffffff;
    pcVar9 = local_20;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar7 = FUN_00741dd0(local_20,~uVar7);
    uVar8 = 0xffffffff;
    pcVar9 = local_20;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    if (((uVar7 == ~uVar8) && (iVar4 = FUN_00741dd0(iVar6,iVar2), iVar4 == iVar2)) && (iVar4 != -1))
    {
      FUN_00796cd8(iVar6);
      goto LAB_00758204;
    }
  }
  FUN_00796cd8(iVar6);
  iVar6 = ReleaseMutex(*(HANDLE *)(param_1 + 0xd0));
joined_r0x007582a8:
  if (iVar6 != 0) {
    return;
  }
  FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
               s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
  return;
}


