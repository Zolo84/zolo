// FUN_007468b0 @ 7468b0 size=508

void __fastcall FUN_007468b0(undefined4 *param_1)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_007fa1f8;
  FUN_007415c0();
  FUN_00757bc0();
  FUN_00757bf0();
  FUN_00674910(1);
  FUN_00674910(1);
  FUN_00674910(1);
  iVar1 = *(int *)((int)param_1 + 0x226);
  for (iVar3 = *(int *)((int)param_1 + 0x222); iVar3 != iVar1; iVar3 = iVar3 + 0x10) {
    FUN_0074ace0(0);
  }
  FUN_00796cd8(*(undefined4 *)((int)param_1 + 0x222));
  *(undefined4 *)((int)param_1 + 0x222) = 0;
  *(undefined4 *)((int)param_1 + 0x226) = 0;
  *(undefined4 *)((int)param_1 + 0x22a) = 0;
  FUN_00674910(1);
  *(undefined ***)((int)param_1 + 0x1c2) = &PTR_FUN_007fa224;
  *(undefined ***)((int)param_1 + 0x1fa) = &PTR_FUN_007fa228;
  FUN_00748530();
  *(undefined ***)((int)param_1 + 0x1e2) = &PTR_FUN_007fa1d8;
  BVar2 = CloseHandle(*(HANDLE *)((int)param_1 + 0x1f6));
  if (BVar2 == 0) {
    FUN_0074bc80(s_CloseHandle__mutex__failed__0087459c,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x50);
  }
  FUN_00674910(1);
  FUN_00748a20();
  *(undefined ***)((int)param_1 + 0x18e) = &PTR_FUN_007fa1d4;
  BVar2 = CloseHandle(*(HANDLE *)((int)param_1 + 0x1be));
  if (BVar2 == 0) {
    FUN_0074bc80(s_CloseHandle___semaphore___008745bc,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874508,0x72);
  }
  *(undefined ***)((int)param_1 + 0x1a6) = &PTR_FUN_007fa1d8;
  BVar2 = CloseHandle(*(HANDLE *)((int)param_1 + 0x1ba));
  if (BVar2 == 0) {
    FUN_0074bc80(s_CloseHandle__mutex__failed__0087459c,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x50);
  }
  FUN_00674910(1);
  FUN_00674910(1);
  FUN_00757780();
  param_1[0x15] = &PTR_FUN_007fa1d8;
  BVar2 = CloseHandle((HANDLE)param_1[0x1a]);
  if (BVar2 == 0) {
    FUN_0074bc80(s_CloseHandle__mutex__failed__0087459c,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x50);
  }
  FUN_00674910(1);
  FUN_00748b10();
  FUN_00741520();
  *(undefined ***)((int)param_1 + 0xe) = &PTR_FUN_007fa210;
  FUN_0074b930();
  *param_1 = &PTR_FUN_007fa210;
  FUN_0074b930();
  return;
}


