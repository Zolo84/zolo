// FUN_00744ce0 @ 744ce0 size=483

undefined4 * __fastcall FUN_00744ce0(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  HANDLE pvVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 local_31;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007df3c1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 6) = local_31;
  uVar2 = FUN_00748f30(0,0);
  param_1[7] = uVar2;
  param_1[8] = 0;
  local_4 = 0;
  FUN_00674910(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_ThreadSafeList_Mutex_0087463c;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00674d80(s_ThreadSafeList_Mutex_0087463c,~uVar4 - 1);
  local_4._0_1_ = 1;
  FUN_00673b50(local_1c);
  local_4 = CONCAT31(local_4._1_3_,2);
  *param_1 = &PTR_FUN_007fa1d8;
  pvVar3 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  param_1[5] = pvVar3;
  if (pvVar3 == (HANDLE)0x0) {
    FUN_0074bc80(s_CreateMutex_NULL__false__NULL__f_00874538,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x28);
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00674910(1);
  *param_1 = &PTR_FUN_007fa1dc;
  local_2c[0] = local_31;
  uVar4 = 0xffffffff;
  local_4 = 5;
  pcVar5 = s_Noname_semaphore_008744c0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_00674d80(s_Noname_semaphore_008744c0,~uVar4 - 1);
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = local_2c[0];
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_00674910(0);
  FUN_00674710(local_2c,0,DAT_007f33d8);
  FUN_00674910(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Semaphore_mutex_0087458c;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00674d80(s_Semaphore_mutex_0087458c,~uVar4 - 1);
  FUN_00744af0(local_1c);
  FUN_00674910(1);
  param_1[9] = &PTR_FUN_007fa1d4;
  pvVar3 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,param_1[10],9999999,(LPCSTR)0x0);
  param_1[0x15] = pvVar3;
  if (pvVar3 == (HANDLE)0x0) {
    FUN_0074bc80(s_Error_creating_semaphore_008744ec,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874508,0x46);
  }
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_00674910(1);
  *param_1 = &PTR_FUN_007fa19c;
  param_1[9] = &PTR_LAB_007fa198;
  ExceptionList = local_c;
  return param_1;
}


