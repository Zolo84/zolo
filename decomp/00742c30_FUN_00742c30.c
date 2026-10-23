// FUN_00742c30 @ 742c30 size=901

void __thiscall FUN_00742c30(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  uint local_88;
  undefined4 *local_84;
  int local_80;
  undefined1 *local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined1 local_6c [4];
  int local_68;
  undefined1 local_64 [4];
  int local_60;
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007df1e0;
  local_c = ExceptionList;
  local_88 = 0;
  ExceptionList = &local_c;
  local_78 = param_1;
  FUN_007572e0();
  *(undefined4 *)((int)param_1 + 0x4e) = param_2;
  puVar3 = (undefined4 *)((int)param_1 + 0x52);
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  *(undefined4 *)((int)param_1 + 0x5e) = 0;
  *(undefined4 *)((int)param_1 + 0x62) = 0;
  *(undefined1 *)((int)param_1 + 0x66) = 0;
  *(undefined ***)((int)param_1 + 0x56) = &PTR_LAB_007fa1a4;
  param_1[0x1a] = param_1 + 4;
  local_4 = 1;
  param_1[0x1c] = 10000;
  param_1[0x1d] = param_1 + 4;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  local_74 = puVar3;
  FUN_00743f30();
  *(undefined1 *)((int)param_1 + 0x9e) = 0;
  *(undefined4 *)((int)param_1 + 0xa2) = 0;
  param_1[0x1b] = &PTR_FUN_007fa1a0;
  local_84 = operator_new(0x20);
  if (local_84 == (undefined4 *)0x0) {
    local_68 = 0;
  }
  else {
    FUN_00673c70(s_Network_reader_thread_008744d4,&local_8c);
    local_88 = 4;
    local_68 = FUN_00744150(param_1 + 0x1b,local_4c,0);
  }
  local_6c[0] = local_68 != 0;
  FUN_007440d0(local_6c);
  FUN_00744130();
  if ((local_88 & 4) != 0) {
    local_88 = local_88 & 0xfffffffb;
    FUN_00674910(1);
  }
  *(undefined1 *)((int)param_1 + 0xa6) = 0;
  *(undefined4 *)((int)param_1 + 0xaa) = 0;
  local_7c = (undefined1 *)((int)param_1 + 0xae);
  *local_7c = 0;
  *(undefined4 *)((int)param_1 + 0xb2) = 0;
  local_4._0_1_ = 4;
  local_70 = (undefined4 *)((int)param_1 + 0xb6);
  FUN_00743be0();
  local_4._0_1_ = 5;
  FUN_00673c70(s_Noname_semaphore_008744c0,&local_8b);
  local_84 = (undefined4 *)((int)param_1 + 0xda);
  FUN_00742fc0(0,local_3c);
  local_4._0_1_ = 6;
  FUN_00674910(1);
  *(undefined4 *)((int)param_1 + 0xb6) = &PTR_FUN_007fa19c;
  *local_84 = &PTR_LAB_007fa198;
  local_4._0_1_ = 7;
  local_70 = (undefined4 *)((int)param_1 + 0x10e);
  FUN_00743be0();
  local_4._0_1_ = 8;
  FUN_00673c70(s_Noname_semaphore_008744c0,&local_8a);
  local_84 = (undefined4 *)((int)param_1 + 0x132);
  FUN_00742fc0(0,local_2c);
  local_4._0_1_ = 9;
  FUN_00674910(1);
  *(undefined4 *)((int)param_1 + 0x10e) = &PTR_FUN_007fa19c;
  *local_84 = &PTR_LAB_007fa198;
  local_4._0_1_ = 10;
  *(undefined1 *)((int)param_1 + 0x166) = 0;
  *puVar3 = &PTR_FUN_007fa194;
  local_84 = operator_new(0x20);
  local_4 = CONCAT31(local_4._1_3_,0xb);
  if (local_84 == (undefined4 *)0x0) {
    local_60 = 0;
  }
  else {
    local_5c[0] = local_8a;
    FUN_00674910(0);
    uVar2 = 0xffffffff;
    pcVar4 = s_Noname_Thread_008744b0;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00674d80(s_Noname_Thread_008744b0,~uVar2 - 1);
    local_88 = local_88 | 1;
    local_60 = FUN_00743d70(puVar3,local_5c,0);
  }
  local_64[0] = local_60 != 0;
  local_4 = 0xd;
  FUN_00743b60(local_64);
  FUN_00743bc0();
  local_4 = 10;
  if ((local_88 & 1) != 0) {
    local_88 = local_88 & 0xfffffffe;
    FUN_00674910(1);
  }
  local_70 = operator_new(0x20);
  local_4 = CONCAT31(local_4._1_3_,0xe);
  if (local_70 == (void *)0x0) {
    local_80 = 0;
  }
  else {
    FUN_00673c70(s_Noname_Thread_008744b0,&local_89);
    local_88 = local_88 | 2;
    local_80 = FUN_00743d70(puVar3,local_1c,0);
  }
  local_4 = 0x10;
  local_84 = (undefined4 *)CONCAT31(local_84._1_3_,local_80 != 0);
  FUN_00743b60(&local_84);
  FUN_00743bc0();
  local_4 = 10;
  if ((local_88 & 2) != 0) {
    FUN_00674910(1);
  }
  local_78[0x5a] = 0;
  *local_78 = &PTR_FUN_007fa18c;
  ExceptionList = local_c;
  return;
}


