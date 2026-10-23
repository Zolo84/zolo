// FUN_00754640 @ 754640 size=531

void __fastcall FUN_00754640(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  int iVar5;
  undefined4 *puVar6;
  BOOL BVar7;
  code *pcVar8;
  int local_8;
  undefined4 local_4;
  
  *param_1 = &PTR_FUN_007fa2b0;
  DVar4 = WaitForSingleObject(*(HANDLE *)(param_1[7] + 0x34),0xffffffff);
  if (DVar4 != 0) {
    GetLastError();
    FUN_0074bc80(s_WaitForSingleObject__mutex__INFI_0087460c,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x80);
  }
  iVar5 = param_1[0xb];
  pcVar8 = ReleaseMutex_exref;
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x24) != 0)) &&
     (iVar5 = FUN_00753f80(iVar5), pcVar8 = ReleaseMutex_exref, iVar5 == 0)) {
    iVar5 = param_1[0xb];
    FUN_00750450();
    FUN_00756dd0(&local_8);
    if (local_8 != *(int *)(param_1[9] + 4)) {
      do {
        iVar2 = *(int *)(local_8 + 0x10);
        uVar3 = param_1[8];
        puVar6 = (undefined4 *)FUN_007545d0(*(undefined4 *)(iVar5 + 0x28));
        FUN_00756e30(iVar2 + 0x52,uVar3,uVar3,0x10,*puVar6);
        FUN_00756de0();
      } while (local_8 != *(int *)(param_1[9] + 4));
    }
    pcVar8 = ReleaseMutex_exref;
    BVar7 = ReleaseMutex(*(HANDLE *)(param_1[9] + 0x24));
    if (BVar7 == 0) {
      FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                   s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
    }
  }
  if (param_1[0xb] != 0) {
    FUN_00750450();
    FUN_00756dd0(&local_8);
    if (local_8 != *(int *)(param_1[9] + 4)) {
      do {
        iVar5 = *(int *)(local_8 + 0x10);
        FUN_00745a60(*(undefined4 *)(param_1[0xb] + 0x28));
        FUN_00756e30(iVar5 + 0x52,param_1[8],param_1[8],0x13,local_4);
        FUN_00756de0();
      } while (local_8 != *(int *)(param_1[9] + 4));
    }
    iVar5 = (*pcVar8)(*(undefined4 *)(param_1[9] + 0x24));
    if (iVar5 == 0) {
      FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                   s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
    }
    FUN_00753860(param_1[0xb]);
  }
  iVar5 = (*pcVar8)(*(undefined4 *)(param_1[7] + 0x34));
  if (iVar5 == 0) {
    FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
  }
  iVar5 = param_1[4];
  if (iVar5 != 0) {
    cVar1 = *(char *)(iVar5 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8((char *)(iVar5 + -1));
    }
    else {
      *(char *)(iVar5 + -1) = cVar1 + -1;
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_007fa210;
  FUN_0074b930();
  return;
}


