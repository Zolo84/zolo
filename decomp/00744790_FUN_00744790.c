// FUN_00744790 @ 744790 size=8

undefined4 * __thiscall FUN_00744790(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  void *pvVar4;
  HANDLE pvVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 uStack_29;
  uint uStack_28;
  undefined4 *puStack_24;
  undefined1 auStack_20 [4];
  int iStack_1c;
  undefined1 auStack_10 [16];
  
  param_1[1] = DAT_00d4c210;
  param_1[2] = DAT_00d4c214;
  *param_1 = &PTR_FUN_007fa210;
  *(undefined4 *)((int)param_1 + 0x12) = DAT_00d4c210;
  *(undefined4 *)((int)param_1 + 0x16) = DAT_00d4c214;
  uStack_28 = 0;
  *(undefined ***)((int)param_1 + 0xe) = &PTR_FUN_007fa210;
  FUN_00741450(0,1,10000);
  *(undefined1 *)(param_1 + 0x1b) = (undefined1)param_2;
  uVar3 = FUN_00749d70(0,0);
  param_1[0x1c] = uVar3;
  param_1[0x1d] = 0;
  FUN_00673c70(s_ThreadSafeList_Mutex_0087463c,&uStack_29);
  FUN_00744af0(auStack_20);
  FUN_00674910(1);
  puVar1 = param_1 + 0x1e;
  param_1[0x15] = &PTR_FUN_007fa20c;
  FUN_00748350();
  *(int *)((int)param_1 + 0x8e) = (int)param_1 + 0x1a;
  FUN_00748370((int)param_1 + 0x1a,param_2);
  puStack_24 = param_1 + 0x35;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  *(undefined1 *)puStack_24 = 0;
  param_1[0x36] = 0;
  FUN_00744ce0();
  FUN_00744ce0();
  *(undefined1 *)(param_1 + 99) = 0;
  *puVar1 = &PTR_FUN_007fa194;
  pvVar4 = operator_new(0x20);
  if (pvVar4 == (void *)0x0) {
    iStack_1c = 0;
  }
  else {
    FUN_00673c70(s_Noname_Thread_008744b0,&param_2);
    uStack_28 = 1;
    iStack_1c = FUN_00743d70(puVar1,auStack_10,0);
  }
  auStack_20[0] = iStack_1c != 0;
  FUN_00743b60(auStack_20);
  FUN_00743bc0();
  uVar6 = uStack_28;
  if ((uStack_28 & 1) != 0) {
    uVar6 = uStack_28 & 0xfffffffe;
    FUN_00674910(1);
  }
  pvVar4 = operator_new(0x20);
  if (pvVar4 == (void *)0x0) {
    iStack_1c = 0;
  }
  else {
    FUN_00673c70(s_Noname_Thread_008744b0,&param_2);
    uVar6 = uVar6 | 2;
    iStack_1c = FUN_00743d70(puVar1,auStack_10,0);
  }
  auStack_20[0] = iStack_1c != 0;
  FUN_00743b60(auStack_20);
  FUN_00743bc0();
  if ((uVar6 & 2) != 0) {
    FUN_00674910(1);
  }
  auStack_20[0] = (undefined1)param_2;
  FUN_00674910(0);
  uVar6 = 0xffffffff;
  pcVar7 = s_Noname_semaphore_008744c0;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00674d80(s_Noname_semaphore_008744c0,~uVar6 - 1);
  *(undefined4 *)((int)param_1 + 0x192) = 0;
  FUN_00673b50(auStack_20);
  FUN_00673c70(s_Semaphore_mutex_0087458c,&param_2);
  FUN_00744af0(auStack_10);
  FUN_00674910(1);
  *(undefined ***)((int)param_1 + 0x18e) = &PTR_FUN_007fa1d4;
  pvVar5 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,*(LONG *)((int)param_1 + 0x192),9999999,
                            (LPCSTR)0x0);
  *(HANDLE *)((int)param_1 + 0x1be) = pvVar5;
  if (pvVar5 == (HANDLE)0x0) {
    FUN_0074bc80(s_Error_creating_semaphore_008744ec,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874508,0x46);
  }
  FUN_00674910(1);
  FUN_00744ed0(0);
  *(undefined1 *)((int)param_1 + 0x20e) = (undefined1)param_2;
  FUN_00674910(0);
  uVar6 = 0xffffffff;
  pcVar7 = &DAT_0088ebf8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00674d80(&DAT_0088ebf8,~uVar6 - 1);
  FUN_00748b60(&param_2);
  FUN_00748330(&param_2);
  FUN_00748330(&param_2);
  FUN_00673c70(&DAT_0088ebf8,&param_2);
  FUN_00745350(1,auStack_10,0);
  FUN_00674910(1);
  *param_1 = &PTR_FUN_007fa1f8;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0x24e) = 0;
  return param_1;
}


