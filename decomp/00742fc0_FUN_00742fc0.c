// FUN_00742fc0 @ 742fc0 size=337

undefined4 * __thiscall FUN_00742fc0(undefined4 *param_1,undefined4 param_2,undefined1 *param_3)

{
  char cVar1;
  HANDLE pvVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_10 [4];
  char *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = *param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_00674710(param_3,0,DAT_007f33d8);
  local_10[0] = (undefined1)param_2;
  uVar3 = 0xffffffff;
  pcVar5 = s_Semaphore_mutex_0087458c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_c = (char *)0x0;
  local_8 = 0;
  local_4 = 0;
  cVar1 = FUN_00674e40(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_Semaphore_mutex_0087458c;
    pcVar6 = local_c;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_00674e20(uVar3);
  }
  *(undefined1 *)(param_1 + 7) = local_10[0];
  FUN_00674910(0);
  FUN_00674710(local_10,0,DAT_007f33d8);
  param_1[6] = &PTR_FUN_007fa1d8;
  pvVar2 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  param_1[0xb] = pvVar2;
  if (pvVar2 == (HANDLE)0x0) {
    FUN_0074bc80(s_CreateMutex_NULL__false__NULL__f_00874538,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x28);
  }
  if (local_c != (char *)0x0) {
    cVar1 = local_c[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8(local_c + -1);
    }
    else {
      local_c[-1] = cVar1 + -1;
    }
  }
  *param_1 = &PTR_FUN_007fa1d4;
  pvVar2 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,param_1[1],9999999,(LPCSTR)0x0);
  param_1[0xc] = pvVar2;
  if (pvVar2 == (HANDLE)0x0) {
    FUN_0074bc80(s_Error_creating_semaphore_008744ec,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874508,0x46);
  }
  return param_1;
}


