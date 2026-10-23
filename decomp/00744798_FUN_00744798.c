// FUN_00744798 @ 744798 size=856

undefined4 * __thiscall
FUN_00744798(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
            int param_5)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 in_EAX;
  undefined4 uVar3;
  void *pvVar4;
  HANDLE pvVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 uStack00000030;
  
  param_1[1] = in_EAX;
  param_1[2] = DAT_00d4c214;
  *param_1 = &PTR_FUN_007fa210;
  *(undefined4 *)((int)param_1 + 0x12) = DAT_00d4c210;
  *(undefined4 *)((int)param_1 + 0x16) = DAT_00d4c214;
  param_2 = 0;
  *(undefined ***)((int)param_1 + 0xe) = &PTR_FUN_007fa210;
  FUN_00741450(0,1,10000);
  *(undefined1 *)(param_1 + 0x1b) = uStack00000030;
  uVar3 = FUN_00749d70(0,0);
  param_1[0x1c] = uVar3;
  param_1[0x1d] = 0;
  FUN_00673c70(s_ThreadSafeList_Mutex_0087463c,&stack0x00000003);
  FUN_00744af0(&param_4);
  FUN_00674910(1);
  puVar1 = param_1 + 0x1e;
  param_1[0x15] = &PTR_FUN_007fa20c;
  FUN_00748350();
  *(int *)((int)param_1 + 0x8e) = (int)param_1 + 0x1a;
  FUN_00748370((int)param_1 + 0x1a,_uStack00000030);
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  FUN_00744ce0();
  FUN_00744ce0();
  *(undefined1 *)(param_1 + 99) = 0;
  *puVar1 = &PTR_FUN_007fa194;
  pvVar4 = operator_new(0x20);
  if (pvVar4 == (void *)0x0) {
    param_5 = 0;
  }
  else {
    FUN_00673c70(s_Noname_Thread_008744b0,&stack0x00000030);
    param_2 = 1;
    param_5 = FUN_00743d70(puVar1,&stack0x0000001c,0);
  }
  param_4 = param_5 != 0;
  FUN_00743b60(&param_4);
  FUN_00743bc0();
  uVar6 = param_2;
  if ((param_2 & 1) != 0) {
    uVar6 = param_2 & 0xfffffffe;
    FUN_00674910(1);
  }
  pvVar4 = operator_new(0x20);
  if (pvVar4 == (void *)0x0) {
    param_5 = 0;
  }
  else {
    FUN_00673c70(s_Noname_Thread_008744b0,&stack0x00000030);
    uVar6 = uVar6 | 2;
    param_5 = FUN_00743d70(puVar1,&stack0x0000001c,0);
  }
  param_4 = param_5 != 0;
  FUN_00743b60(&param_4);
  FUN_00743bc0();
  if ((uVar6 & 2) != 0) {
    FUN_00674910(1);
  }
  param_4 = uStack00000030;
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
  FUN_00673b50(&param_4);
  FUN_00673c70(s_Semaphore_mutex_0087458c,&stack0x00000030);
  FUN_00744af0(&stack0x0000001c);
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
  *(undefined1 *)((int)param_1 + 0x20e) = uStack00000030;
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
  FUN_00748b60(&stack0x00000030);
  FUN_00748330(&stack0x00000030);
  FUN_00748330(&stack0x00000030);
  FUN_00673c70(&DAT_0088ebf8,&stack0x00000030);
  FUN_00745350(1,&stack0x0000001c,0);
  FUN_00674910(1);
  *param_1 = &PTR_FUN_007fa1f8;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0x24e) = 0;
  return param_1;
}


