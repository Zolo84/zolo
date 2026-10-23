// FUN_00748760 @ 748760 size=334

void __fastcall FUN_00748760(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_11;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007df56b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(param_1 + 1) = local_11;
  uVar3 = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  pcVar5 = s_Invalid_ip_008747ac;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar2 = FUN_00674e40(uVar3,1);
  if (cVar2 != '\0') {
    pcVar5 = s_Invalid_ip_008747ac;
    pcVar6 = (char *)param_1[2];
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
    param_1[3] = uVar3;
    *(undefined1 *)(param_1[2] + uVar3) = 0;
  }
  local_4 = 0;
  *(undefined1 *)(param_1 + 5) = local_11;
  uVar3 = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  pcVar5 = s_Invalid_user_0087479c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  uVar4 = ~uVar3 - 1;
  uVar3 = FUN_00675dc0();
  if (uVar3 < uVar4) {
    FUN_00798b7d();
  }
  iVar1 = param_1[6];
  if (((iVar1 == 0) || (cVar2 = *(char *)(iVar1 + -1), cVar2 == '\0')) || (cVar2 == -1)) {
    if (uVar4 == 0) {
      FUN_00674910(1);
      goto LAB_0074888b;
    }
    if ((0x1f < (uint)param_1[8]) || ((uint)param_1[8] < uVar4)) {
      FUN_00674910(1);
      goto LAB_0074885f;
    }
  }
  else {
    if (uVar4 == 0) {
      *(char *)(iVar1 + -1) = cVar2 + -1;
      FUN_00674910(0);
      goto LAB_0074888b;
    }
LAB_0074885f:
    FUN_00675dd0(uVar4);
  }
  pcVar5 = s_Invalid_user_0087479c;
  pcVar6 = (char *)param_1[6];
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  param_1[7] = uVar4;
  *(undefined1 *)(uVar4 + param_1[6]) = 0;
LAB_0074888b:
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_007fa230;
  ExceptionList = pvStack_c;
  return;
}


