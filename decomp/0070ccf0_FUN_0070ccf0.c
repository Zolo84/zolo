// FUN_0070ccf0 @ 70ccf0 size=564

undefined4 * __fastcall FUN_0070ccf0(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007dba18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425b20();
  local_4 = 0;
  FUN_00428000();
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined1 *)((int)param_1 + 0x22) = 0;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007f8690;
  *(undefined2 *)((int)param_1 + 0x123e) = 0;
  *(undefined1 *)(param_1 + 0x48f) = 0;
  *(undefined1 *)((int)param_1 + 0x123b) = 0;
  *(undefined1 *)((int)param_1 + 0x123a) = 0;
  *(undefined2 *)(param_1 + 0x491) = 0;
  *(undefined1 *)((int)param_1 + 0x1242) = 0;
  *(undefined1 *)((int)param_1 + 0x1241) = 0;
  *(undefined1 *)(param_1 + 0x490) = 0;
  *(undefined2 *)((int)param_1 + 0x124a) = 0;
  *(undefined1 *)(param_1 + 0x492) = 0;
  *(undefined1 *)((int)param_1 + 0x1247) = 0;
  *(undefined1 *)((int)param_1 + 0x1246) = 0;
  *(undefined2 *)(param_1 + 0x494) = 0;
  *(undefined1 *)((int)param_1 + 0x124e) = 0;
  *(undefined1 *)((int)param_1 + 0x124d) = 0;
  *(undefined1 *)(param_1 + 0x493) = 0;
  *(undefined4 *)((int)param_1 + 0x125e) = 0;
  *(undefined4 *)((int)param_1 + 0x1262) = 0;
  *(undefined4 *)((int)param_1 + 0x1266) = 0;
  *(undefined1 *)((int)param_1 + 0x126a) = 0;
  *(undefined ***)((int)param_1 + 0x125a) = &PTR_FUN_007f85ac;
  *(undefined4 *)((int)param_1 + 0x1272) = 0;
  *(undefined4 *)((int)param_1 + 0x1276) = 0;
  *(undefined4 *)((int)param_1 + 0x127a) = 0;
  *(undefined1 *)((int)param_1 + 0x127e) = 0;
  *(undefined ***)((int)param_1 + 0x126e) = &PTR_LAB_007f8660;
  *(undefined4 *)((int)param_1 + 0x1286) = 0;
  *(undefined4 *)((int)param_1 + 0x128a) = 0;
  *(undefined4 *)((int)param_1 + 0x128e) = 0;
  *(undefined1 *)((int)param_1 + 0x1292) = 0;
  *(undefined ***)((int)param_1 + 0x1282) = &PTR_FUN_007f85ac;
  param_1[0x4a6] = 0;
  param_1[0x4a7] = 0;
  param_1[0x4a8] = 0;
  *(undefined1 *)(param_1 + 0x4a9) = 0;
  param_1[0x4a5] = &PTR_FUN_007f85ac;
  param_1[0x8ec] = 0;
  param_1[0x8ed] = 0;
  param_1[0x8ee] = 0;
  *(undefined1 *)(param_1 + 0x8ef) = 0;
  param_1[0x8eb] = &PTR_FUN_007e5258;
  uVar2 = 0xffffffff;
  *param_1 = &PTR_FUN_007f864c;
  param_1[2] = &PTR_LAB_007f8634;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0x40a) = 0;
  pcVar4 = s_events_empty_008722f8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x44a);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x1252) = 0;
  *(undefined1 *)(param_1 + 0x48e) = 0;
  uVar2 = 0xffffffff;
  *(undefined1 *)(param_1 + 0x48d) = 0;
  *(undefined1 *)((int)param_1 + 0x1235) = 0;
  param_1[0x48b] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x49b) = 0;
  *(undefined1 *)((int)param_1 + 0x1236) = 0;
  *(undefined1 *)((int)param_1 + 0x1237) = 0;
  *(undefined4 *)((int)param_1 + 0x1256) = 0;
  *(undefined1 *)(param_1 + 0x4a0) = 0;
  *(undefined1 *)((int)param_1 + 0x1281) = 0;
  *(undefined1 *)((int)param_1 + 0x23be) = 0;
  param_1[0x48c] = 0;
  *(undefined1 *)((int)param_1 + 0x12a6) = 0;
  pcVar4 = s_decisions_empty_008722e8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)((int)param_1 + 0x22a6);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined1 *)((int)param_1 + 0x23a6) = 0;
  *(undefined1 *)((int)param_1 + 0x23a7) = 0;
  param_1[0x8ea] = 0;
  ExceptionList = local_c;
  return param_1;
}


