// FUN_0073a5c0 @ 73a5c0 size=310

void __thiscall
FUN_0073a5c0(int *param_1,undefined4 param_2,char *param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *local_14 [4];
  char *local_4;
  
  local_14[0] = s_FE_DIFFI5_0086fde4;
  local_14[1] = s_FE_DIFFI4_0086fdd8;
  local_14[2] = s_FE_DIFFI3_0086fdcc;
  local_14[3] = s_FE_DIFFI2_0086fdc0;
  local_4 = s_FE_DIFFI1_0086fdb4;
  if ((char)param_4 == '\0') {
    uVar2 = FUN_0042b6c9(local_14[*(int *)((int)param_1 + 0x12)]);
    pcVar9 = s_TC_DIFFICULTY_00873758;
  }
  else {
    uVar2 = FUN_0042b6c9(local_14[*(int *)((int)param_1 + 0x12)]);
    pcVar9 = s_TCNOT_DIFFICULTY_00873768;
  }
  uVar3 = FUN_0042b6c9(pcVar9);
  FUN_007a630a(&DAT_00d4baec,uVar3,uVar2);
  DAT_00d4bbec = 0;
  if (0 < param_5) {
    do {
      uVar4 = 0xffffffff;
      pcVar9 = &DAT_0083d364;
      do {
        pcVar7 = pcVar9;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar7;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar9 = &DAT_00d4bbec;
      do {
        pcVar8 = pcVar9;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar8 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar8;
      } while (cVar1 != '\0');
      pcVar9 = pcVar7 + -uVar4;
      pcVar7 = pcVar8 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar7 = pcVar7 + 4;
      }
      param_5 = param_5 + -1;
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar7 = pcVar7 + 1;
      }
    } while (param_5 != 0);
  }
  uVar4 = 0xffffffff;
  pcVar9 = &DAT_00d4bbec;
  do {
    pcVar7 = pcVar9;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pcVar9 = param_3;
  do {
    pcVar8 = pcVar9;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar8 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar8;
  } while (cVar1 != '\0');
  pcVar9 = pcVar7 + -uVar4;
  pcVar7 = pcVar8 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar7 = pcVar7 + 1;
  }
  (**(code **)(*param_1 + 0x38))(param_2,param_3,param_4);
  uVar4 = 0xffffffff;
  pcVar9 = &DAT_00d4baec;
  do {
    pcVar7 = pcVar9;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  do {
    pcVar9 = param_3;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar9;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -uVar4;
  pcVar9 = pcVar9 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  return;
}


