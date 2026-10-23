// FUN_007431d0 @ 7431d0 size=201

void __fastcall FUN_007431d0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  
  *param_1 = &PTR_FUN_007fa1d4;
  BVar3 = CloseHandle((HANDLE)param_1[0xc]);
  if (BVar3 == 0) {
    FUN_0074bc80(s_CloseHandle___semaphore___008745bc,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874508,0x72);
  }
  param_1[6] = &PTR_FUN_007fa1d8;
  BVar3 = CloseHandle((HANDLE)param_1[0xb]);
  if (BVar3 == 0) {
    FUN_0074bc80(s_CloseHandle__mutex__failed__0087459c,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x50);
  }
  iVar2 = param_1[8];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar2 = param_1[3];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      return;
    }
    FUN_00796cd8((char *)(iVar2 + -1));
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


