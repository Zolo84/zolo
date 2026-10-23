// FUN_004b3730 @ 4b3730 size=355

undefined4 * FUN_004b3730(int *param_1,int *param_2,undefined4 param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined1 local_100 [256];
  
  iVar4 = param_2[1];
  if (iVar4 == 0) {
    iVar4 = *param_2;
    FUN_00791b3b(local_100,iVar4 + 6);
    if (*(int *)(iVar4 + 0x14) == -1) {
      if (*(int *)(iVar4 + 0xc) == -1) {
        if (*(int *)(iVar4 + 0x10) == -1) goto LAB_004b3883;
        uVar7 = FUN_0050aa70(*(int *)(iVar4 + 0x10),local_100);
        uVar7 = (**(code **)(*param_1 + 0xc))(uVar7);
        pcVar8 = s__s_got_the_trait__s_at__s_0083eb68;
      }
      else {
        uVar7 = (**(code **)(*param_1 + 0xc))(*(int *)(iVar4 + 0xc),local_100);
        pcVar8 = s__s_attained_skill__i_at__s_0083eb84;
      }
    }
    else {
      uVar7 = FUN_0050a460(*(undefined4 *)((int)param_1 + 0x26),*(int *)(iVar4 + 0x14),local_100);
      uVar7 = (**(code **)(*param_1 + 0xc))(uVar7);
      pcVar8 = s__s_was_promoted_to__s_at__s_0083eba0;
    }
    FUN_007a630a(&DAT_008e2320,pcVar8,uVar7);
    return &DAT_008e2320;
  }
  if (*(char *)(iVar4 + 0xa4) == '\0') {
    psVar5 = *(short **)(iVar4 + 0x1c);
    while (psVar5 != (short *)0x0) {
      psVar1 = psVar5 + 5;
      piVar2 = (int *)(psVar5 + 1);
      sVar3 = *psVar5;
      psVar5 = *(short **)psVar1;
      if ((*(int *)((int)param_1 + 0x12) == *piVar2) && ((short)param_1[4] == sVar3)) {
        puVar6 = (undefined4 *)FUN_004b38a0(param_1,iVar4,param_3);
        return puVar6;
      }
    }
    psVar5 = *(short **)(iVar4 + 0x60);
    while (psVar5 != (short *)0x0) {
      psVar1 = psVar5 + 5;
      piVar2 = (int *)(psVar5 + 1);
      sVar3 = *psVar5;
      psVar5 = *(short **)psVar1;
      if ((*(int *)((int)param_1 + 0x12) == *piVar2) && ((short)param_1[4] == sVar3)) {
        puVar6 = (undefined4 *)FUN_004b38a0(param_1,iVar4 + 0x44,param_3);
        return puVar6;
      }
    }
  }
LAB_004b3883:
  return (undefined4 *)&DAT_0088ebf8;
}


