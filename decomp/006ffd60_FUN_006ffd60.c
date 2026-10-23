// FUN_006ffd60 @ 6ffd60 size=726

void __thiscall FUN_006ffd60(int param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  char local_960 [576];
  undefined1 local_720 [4];
  int local_71c;
  undefined1 local_310 [772];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007db734;
  local_c = ExceptionList;
  uVar8 = 0xffffffff;
  pcVar10 = param_2;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  ExceptionList = &local_c;
  pcVar3 = operator_new(~uVar8);
  uVar8 = 0xffffffff;
  pcVar10 = param_2;
  do {
    pcVar11 = pcVar10;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar11 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar10 = pcVar11 + -uVar8;
  pcVar11 = pcVar3;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  iVar5 = *(int *)(param_1 + 0x1d4da);
  puVar4 = operator_new(0xe);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = pcVar3;
    puVar4[1] = iVar5;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1d4de);
  *(undefined4 **)(param_1 + 0x1d4da) = puVar4;
  *(int *)(param_1 + 0x1d4de) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(param_1 + 0x1d4d6) = puVar4;
  }
  else {
    *(undefined4 **)(iVar5 + 8) = puVar4;
  }
  if (DAT_00dc3a00 != '\0') {
    FUN_007a630a(local_960,s__s__s_0083a350,&DAT_00dc3a00,param_2);
    iVar5 = FUN_007a6615(local_960,&DAT_0082eeb4);
    if (iVar5 != 0) {
      FUN_007a6429(iVar5);
      uVar8 = 0xffffffff;
      pcVar10 = local_960;
      do {
        pcVar3 = pcVar10;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar3 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar3;
      } while (cVar2 != '\0');
      uVar8 = ~uVar8;
      pcVar10 = pcVar3 + -uVar8;
      pcVar3 = param_2;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar3 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar3 = pcVar3 + 1;
      }
    }
  }
  FUN_00426d70(param_2,&DAT_0082eeb4);
  local_4 = 0;
  cVar2 = FUN_00427570();
  if (cVar2 == '\0') {
    if (DAT_00dc4b5e != '\0') {
      FUN_00429a00(s_Parse_events_file___s_____008700b0,param_2);
    }
    FUN_00534930(param_2,&DAT_008390e0);
    local_4._0_1_ = 1;
    do {
      while (iVar5 = FUN_00535490(), iVar5 == 1) {
        if (local_71c == 0x1f7) {
          pvVar6 = operator_new(0x23c0);
          local_4._0_1_ = 2;
          if (pvVar6 == (void *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            piVar7 = (int *)FUN_0070ccf0();
          }
          local_4._0_1_ = 1;
          (**(code **)(*piVar7 + 8))(local_720);
          if ((char)piVar7[0x48e] == '\0') {
            FUN_0070d480();
          }
          FUN_00701050(piVar7);
        }
        else {
          if (local_71c != 0x294) {
            FUN_005349b0(s_unknown_data_defined_in_event_da_00870088);
            goto joined_r0x006fffe1;
          }
          FUN_00429d50(local_310,local_960);
          FUN_006ffd60(local_960);
        }
      }
      if ((iVar5 == 2) || (iVar5 == -1)) goto joined_r0x006fffe1;
      piVar7 = (int *)FUN_00534391();
    } while (*piVar7 != 4);
    FUN_005343dc();
joined_r0x006fffe1:
    if (DAT_00dc4b5e != '\0') {
      FUN_00429a00(&DAT_00870084);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_005349a0();
  }
  else {
    FUN_00429a50(s_missing_eventdatabase__s_008700cc,param_2);
  }
  local_4 = 0xffffffff;
  FUN_00426f80();
  ExceptionList = local_c;
  return;
}


