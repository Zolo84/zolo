// FUN_00743f30 @ 743f30 size=318

undefined4 * __fastcall FUN_00743f30(undefined4 *param_1)

{
  char cVar1;
  void *pvVar2;
  HANDLE pvVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_21;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007df30e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 6) = local_21;
  pvVar2 = operator_new(0xc);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  param_1[7] = pvVar2;
  param_1[8] = 0;
  local_1c[0] = local_21;
  uVar4 = 0xffffffff;
  pcVar6 = s_ThreadSafeList_Mutex_0087463c;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  local_4 = 0;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  cVar1 = FUN_00674e40(uVar4,1);
  if (cVar1 != '\0') {
    pcVar6 = s_ThreadSafeList_Mutex_0087463c;
    pcVar7 = local_18;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_18[uVar4] = '\0';
    local_14 = uVar4;
  }
  local_4._0_1_ = 1;
  *(undefined1 *)(param_1 + 1) = local_1c[0];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_00674710(local_1c,0,DAT_007f33d8);
  local_4 = CONCAT31(local_4._1_3_,2);
  *param_1 = &PTR_FUN_007fa1d8;
  pvVar3 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  param_1[5] = pvVar3;
  if (pvVar3 == (HANDLE)0x0) {
    FUN_0074bc80(s_CreateMutex_NULL__false__NULL__f_00874538,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x28);
  }
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8(local_18 + -1);
    }
    else {
      local_18[-1] = cVar1 + -1;
    }
  }
  *param_1 = &PTR_FUN_007fa1ec;
  ExceptionList = local_c;
  return param_1;
}


