// FUN_00743140 @ 743140 size=143

void __fastcall FUN_00743140(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007df1fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007fa1d8;
  local_4 = 0;
  BVar3 = CloseHandle((HANDLE)param_1[5]);
  if (BVar3 == 0) {
    FUN_0074bc80(s_CloseHandle__mutex__failed__0087459c,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x50);
  }
  iVar2 = param_1[2];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = local_c;
  return;
}


