// FUN_00748370 @ 748370 size=447

undefined4 * __thiscall FUN_00748370(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char local_18 [8];
  undefined1 local_10 [4];
  char *local_c;
  uint local_8;
  
  param_1[2] = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  bVar2 = false;
  *(undefined1 *)((int)param_1 + 0x26) = (undefined1)param_3;
  uVar4 = FUN_0074a060(0,0);
  *(undefined4 *)((int)param_1 + 0x2a) = uVar4;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  FUN_00673c70(s_ThreadSafeList_Mutex_0087463c,&param_3);
  FUN_00744af0(local_10);
  FUN_00674910(1);
  *(undefined ***)((int)param_1 + 0xe) = &PTR_FUN_007fa1ec;
  *(undefined1 *)((int)param_1 + 0x32) = 0;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *param_1 = &PTR_FUN_007fa1a0;
  puVar5 = operator_new(0x20);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    local_10[0] = (undefined1)param_3;
    FUN_00674910(0);
    uVar6 = 0xffffffff;
    pcVar8 = s_Network_reader_thread_008744d4;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6 - 1;
    param_3 = uVar6;
    cVar3 = FUN_00674e40(uVar6,1);
    if (cVar3 != '\0') {
      pcVar8 = s_Network_reader_thread_008744d4;
      pcVar9 = local_c;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      local_c[uVar6] = '\0';
      local_8 = uVar6;
    }
    *puVar5 = &PTR_LAB_007fa1e8;
    DAT_00d4c340 = DAT_00d4c340 + 1;
    bVar2 = true;
    puVar5[1] = param_1;
    puVar5[2] = local_10;
    puVar5[3] = 0;
    puVar5[7] = 1;
    *puVar5 = &PTR_FUN_007fa1f0;
    puVar5[5] = &LAB_007443f0;
  }
  local_18[0] = puVar5 != (undefined4 *)0x0;
  pcVar8 = (char *)((int)param_1 + 0x32);
  if (pcVar8 == local_18) {
    if (((bool)local_18[0]) && (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
  }
  else {
    puVar1 = *(undefined4 **)((int)param_1 + 0x36);
    if (puVar1 == puVar5) {
      if ((bool)local_18[0]) {
        *pcVar8 = '\x01';
      }
      *(undefined4 **)((int)param_1 + 0x36) = puVar5;
    }
    else {
      if ((*pcVar8 != '\0') && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *pcVar8 = local_18[0];
      *(undefined4 **)((int)param_1 + 0x36) = puVar5;
    }
  }
  if ((bVar2) && (local_c != (char *)0x0)) {
    cVar3 = local_c[-1];
    if ((cVar3 != '\0') && (cVar3 != -1)) {
      local_c[-1] = cVar3 + -1;
      return param_1;
    }
    FUN_00796cd8(local_c + -1);
  }
  return param_1;
}


