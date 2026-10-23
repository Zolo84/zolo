// FUN_007572e0 @ 7572e0 size=334

undefined4 * __fastcall FUN_007572e0(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007dfef6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00741450(0,1,10000);
  *param_1 = &PTR_FUN_007fa2cc;
  DAT_00d4c348 = DAT_00d4c348 + 1;
  local_4 = 0;
  puVar3 = operator_new(0x20);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (puVar3 == (undefined4 *)0x0) {
    bVar2 = false;
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar4 = 0xffffffff;
    pcVar6 = s_PThreadClient_Thread_00874c6c;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar1 = FUN_00674e40(uVar4,1);
    if (cVar1 != '\0') {
      pcVar6 = s_PThreadClient_Thread_00874c6c;
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
    *puVar3 = &PTR_LAB_007fa1e8;
    DAT_00d4c340 = DAT_00d4c340 + 1;
    bVar2 = true;
    puVar3[1] = param_1;
    puVar3[2] = local_1c;
    puVar3[3] = 0;
    puVar3[7] = 1;
    *puVar3 = &PTR_FUN_007fa2c4;
    puVar3[5] = &LAB_007575b0;
  }
  *(undefined4 **)((int)param_1 + 0x4a) = puVar3;
  if ((bVar2) && (local_18 != (char *)0x0)) {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8(local_18 + -1);
    }
    else {
      local_18[-1] = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}


