// FUN_00426d70 @ 426d70 size=465

undefined4 * __thiscall FUN_00426d70(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  param_1[0x1b] = 0;
  param_1[0x4e] = 0;
  *param_1 = &PTR_FUN_007e3ba0;
  *(undefined1 *)(param_1 + 0x4f) = 1;
  pcVar1 = (char *)(param_1 + 2);
  if (DAT_00dc3a00 == '\0') {
    uVar5 = 0xffffffff;
    pcVar7 = param_2;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    pcVar8 = pcVar1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
  }
  else {
    FUN_007a630a(pcVar1,s__s__s_0083a350,&DAT_00dc3a00,param_2);
  }
  iVar3 = FUN_007a6615(pcVar1,param_3);
  param_1[0x1b] = iVar3;
  param_1[1] = 0;
  param_1[0x4e] = 0;
  if ((iVar3 == 0) && (DAT_00dc3a00 != '\0')) {
    uVar5 = 0xffffffff;
    do {
      pcVar7 = param_2;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar7 = param_2 + 1;
      cVar2 = *param_2;
      param_2 = pcVar7;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar7 + -uVar5;
    pcVar8 = pcVar1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar4 = FUN_007a6615(pcVar1,param_3);
    param_1[0x1b] = uVar4;
  }
  if (param_1[0x1b] == 0) {
    DAT_0088f21a = 1;
    return param_1;
  }
  *(undefined1 *)(param_1 + 0x4f) = 0;
  iVar3 = FUN_007a8307(param_1[0x1b],0,2);
  if (iVar3 == 0) {
    param_1[1] = param_1[0x4e];
  }
  else {
    FUN_007a630a(param_1 + 0x1c,s_Error_seeking_in_file__s__0083a3c0,pcVar1);
    FUN_00405ad0(param_1 + 0x1c);
    *(undefined1 *)(param_1 + 0x4f) = 1;
    DAT_0088f21a = 1;
  }
  if (*(char *)(param_1 + 0x4f) == '\0') {
    iVar3 = FUN_007a846a(param_1[0x1b]);
    if (iVar3 != -1) goto LAB_00426eeb;
    FUN_007a630a(param_1 + 0x1c,s_Could_not_return_current_file_po_0083a38c,pcVar1);
    FUN_00405ad0(param_1 + 0x1c);
    *(undefined1 *)(param_1 + 0x4f) = 1;
    DAT_0088f21a = 1;
  }
  else {
    FUN_00405ad0(s_No_valid_file__0083a378);
  }
  iVar3 = -1;
LAB_00426eeb:
  param_1[0x4e] = iVar3;
  iVar3 = FUN_007a8307(param_1[0x1b],0,0);
  if (iVar3 == 0) {
    param_1[1] = 0;
    return param_1;
  }
  FUN_007a630a(param_1 + 0x1c,s_Error_seeking_in_file__s__0083a3c0,pcVar1);
  FUN_00405ad0(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x4f) = 1;
  DAT_0088f21a = 1;
  return param_1;
}


