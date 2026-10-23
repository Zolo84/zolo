// FUN_007432e0 @ 7432e0 size=447

void __fastcall FUN_007432e0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  BOOL BVar5;
  undefined4 *puVar6;
  undefined4 *local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007df255;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = param_1 + 9;
  }
  ExceptionList = &local_c;
  *puVar6 = &PTR_FUN_007fa1d4;
  BVar5 = CloseHandle((HANDLE)puVar6[0xc]);
  if (BVar5 == 0) {
    FUN_0074bc80(s_CloseHandle___semaphore___008745bc,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874508,0x72);
  }
  local_14 = puVar6 + 6;
  *local_14 = &PTR_FUN_007fa1d8;
  local_4 = CONCAT31(local_4._1_3_,1);
  BVar5 = CloseHandle((HANDLE)puVar6[0xb]);
  if (BVar5 == 0) {
    FUN_0074bc80(s_CloseHandle__mutex__failed__0087459c,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x50);
  }
  iVar2 = puVar6[8];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  iVar2 = puVar6[3];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *param_1 = &PTR_FUN_007fa1d8;
  local_4 = 3;
  BVar5 = CloseHandle((HANDLE)param_1[5]);
  if (BVar5 == 0) {
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
  local_4 = 0xffffffff;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    param_1 = param_1 + 6;
  }
  piVar3 = (int *)param_1[1];
  piVar4 = (int *)*piVar3;
  while (piVar4 != piVar3) {
    puVar6 = (undefined4 *)FUN_007443e0(&local_14,0);
    FUN_007443a0(local_10,*puVar6);
  }
  FUN_00796cd8(param_1[1]);
  param_1[1] = 0;
  param_1[2] = 0;
  ExceptionList = local_c;
  return;
}


