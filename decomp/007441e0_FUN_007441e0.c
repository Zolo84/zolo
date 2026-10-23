// FUN_007441e0 @ 7441e0 size=230

void __fastcall FUN_007441e0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  BOOL BVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007df352;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007fa1d8;
  local_4 = 1;
  BVar6 = CloseHandle((HANDLE)param_1[5]);
  if (BVar6 == 0) {
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
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    param_1 = param_1 + 6;
  }
  piVar3 = (int *)param_1[1];
  piVar5 = (int *)*piVar3;
  while (piVar5 != piVar3) {
    piVar4 = (int *)*piVar5;
    *(int *)piVar5[1] = *piVar5;
    *(int *)(*piVar5 + 4) = piVar5[1];
    FUN_00796cd8(piVar5);
    param_1[2] = param_1[2] + -1;
    piVar5 = piVar4;
  }
  FUN_00796cd8(param_1[1]);
  param_1[1] = 0;
  param_1[2] = 0;
  ExceptionList = local_c;
  return;
}


