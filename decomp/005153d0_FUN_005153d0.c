// FUN_005153d0 @ 5153d0 size=172

undefined4 * __fastcall FUN_005153d0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  DAT_00adc0f0._0_1_ = 0;
  if (DAT_00dc1720 == '\0') {
LAB_005153ee:
    switch(*(undefined4 *)(param_1 + 4)) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    case 0x11:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
switchD_005153ff_caseD_1:
      piVar2 = (int *)FUN_004e9370(*(undefined4 *)(param_1 + 8));
      pcVar4 = (char *)(**(code **)(*piVar2 + 0xc))();
      break;
    default:
      goto switchD_005153ff_caseD_6;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x12:
    case 0x13:
    case 0x17:
    case 0x18:
    case 0x19:
      goto switchD_005153ff_caseD_9;
    case 0x1d:
switchD_005153ff_caseD_1d:
      iVar3 = FUN_004e9370(*(undefined4 *)(param_1 + 8));
      pcVar4 = (char *)FUN_004c7c14(*(undefined4 *)(iVar3 + 0x28c));
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x26);
    if (iVar3 == 1) goto switchD_005153ff_caseD_1;
    if (iVar3 != 2) {
      if (iVar3 != 3) goto LAB_005153ee;
      goto switchD_005153ff_caseD_1d;
    }
switchD_005153ff_caseD_9:
    iVar3 = FUN_004e9370(*(undefined4 *)(param_1 + 8));
    pcVar4 = (char *)FUN_004c7bfa(*(undefined4 *)(iVar3 + 0x288));
  }
  uVar5 = 0xffffffff;
  do {
    pcVar8 = pcVar4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar3 = -1;
  pcVar4 = (char *)&DAT_00adc0f0;
  do {
    pcVar7 = pcVar4;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar7 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar7;
  } while (cVar1 != '\0');
  pcVar4 = pcVar8 + -uVar5;
  pcVar8 = pcVar7 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar8 = pcVar8 + 1;
  }
switchD_005153ff_caseD_6:
  return &DAT_00adc0f0;
}


