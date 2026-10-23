// FUN_00426fb0 @ 426fb0 size=496

undefined1 __thiscall FUN_00426fb0(int param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  if ((*(char *)(param_1 + 0x13c) == '\0') && (*(int *)(param_1 + 0x6c) != 0)) {
    FUN_007a6429(*(int *)(param_1 + 0x6c));
  }
  *(undefined1 *)(param_1 + 0x13c) = 1;
  pcVar1 = (char *)(param_1 + 8);
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
  iVar3 = FUN_007a6615(pcVar1,&DAT_0082eeb4);
  *(int *)(param_1 + 0x6c) = iVar3;
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
    uVar4 = FUN_007a6615(pcVar1,&DAT_0082eeb4);
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
  }
  if (*(int *)(param_1 + 0x6c) == 0) {
    DAT_0088f21a = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x13c) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)(param_1 + 0x6c) == 0) {
    *(undefined4 *)(param_1 + 0x138) = 0;
    return *(undefined1 *)(param_1 + 0x13c);
  }
  iVar3 = FUN_007a8307(*(int *)(param_1 + 0x6c),0,2);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x138);
  }
  else {
    FUN_007a630a(param_1 + 0x70,s_Error_seeking_in_file__s__0083a3c0,pcVar1);
    FUN_00405ad0(param_1 + 0x70);
    *(undefined1 *)(param_1 + 0x13c) = 1;
    DAT_0088f21a = 1;
  }
  if (*(char *)(param_1 + 0x13c) == '\0') {
    iVar3 = FUN_007a846a(*(undefined4 *)(param_1 + 0x6c));
    if (iVar3 != -1) goto LAB_0042712f;
    FUN_007a630a(param_1 + 0x70,s_Could_not_return_current_file_po_0083a38c,pcVar1);
    FUN_00405ad0(param_1 + 0x70);
    *(undefined1 *)(param_1 + 0x13c) = 1;
    DAT_0088f21a = 1;
  }
  else {
    FUN_00405ad0(s_No_valid_file__0083a378);
  }
  iVar3 = -1;
LAB_0042712f:
  *(int *)(param_1 + 0x138) = iVar3;
  iVar3 = FUN_007a8307(*(undefined4 *)(param_1 + 0x6c),0,0);
  if (iVar3 != 0) {
    FUN_007a630a(param_1 + 0x70,s_Error_seeking_in_file__s__0083a3c0,pcVar1);
    FUN_00405ad0(param_1 + 0x70);
    *(undefined1 *)(param_1 + 0x13c) = 1;
    DAT_0088f21a = 1;
    return *(undefined1 *)(param_1 + 0x13c);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return *(undefined1 *)(param_1 + 0x13c);
}


