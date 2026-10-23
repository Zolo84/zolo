// FUN_00757780 @ 757780 size=506

void __fastcall FUN_00757780(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *local_14;
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007dff67;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007fa194;
  local_4 = 0;
  puVar5 = (undefined4 *)param_1[2];
  while (puVar5 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)puVar5[2];
    FUN_00796cd8(*puVar5);
    FUN_00796cd8(puVar5);
    puVar5 = puVar4;
  }
  local_14 = param_1 + 0x2f;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4 = CONCAT31(local_4._1_3_,5);
  if (local_14 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = param_1 + 0x38;
  }
  *puVar5 = &PTR_FUN_007fa1d4;
  BVar3 = CloseHandle((HANDLE)puVar5[0xc]);
  if (BVar3 == 0) {
    FUN_0074bc80(s_CloseHandle___semaphore___008745bc,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874508,0x72);
  }
  FUN_00743140();
  FUN_00674910(1);
  local_4._0_1_ = 4;
  FUN_007434c0();
  local_14 = param_1 + 0x19;
  local_4 = CONCAT31(local_4._1_3_,6);
  if (local_14 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = param_1 + 0x22;
  }
  *puVar5 = &PTR_FUN_007fa1d4;
  BVar3 = CloseHandle((HANDLE)puVar5[0xc]);
  if (BVar3 == 0) {
    FUN_0074bc80(s_CloseHandle___semaphore___008745bc,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874508,0x72);
  }
  FUN_00743140();
  FUN_00674910(1);
  local_4._0_1_ = 3;
  FUN_007434c0();
  local_4._0_1_ = 2;
  if ((*(char *)(param_1 + 0x17) != '\0') && ((undefined4 *)param_1[0x18] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x18])(1);
  }
  local_4._0_1_ = 1;
  if ((*(char *)(param_1 + 0x15) != '\0') && ((undefined4 *)param_1[0x16] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x16])(1);
  }
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_FUN_007fa1a0;
  iVar1 = param_1[0x12];
  local_4 = (uint)local_4._1_3_ << 8;
  while (iVar1 != 0) {
    puVar5 = *(undefined4 **)(*(int *)param_1[0x11] + 8);
    puVar4 = (undefined4 *)FUN_00758310(&local_14);
    FUN_00744360(auStack_10,*puVar4);
    FUN_00796cd8(*puVar5);
    FUN_00796cd8(puVar5);
    iVar1 = param_1[0x12];
  }
  if ((*(char *)(param_1 + 0x13) != '\0') && ((undefined4 *)param_1[0x14] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x14])(1);
  }
  FUN_007441e0();
  param_1[1] = &PTR_LAB_007fa1a4;
  iVar1 = param_1[2];
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
    FUN_00796cd8(iVar1);
    iVar1 = iVar2;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = pvStack_c;
  return;
}


