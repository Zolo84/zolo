// FUN_0046a3a0 @ 46a3a0 size=1227

void __thiscall FUN_0046a3a0(int *param_1,char param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_100 [256];
  
  cVar2 = FUN_0042e980();
  if (cVar2 != '\0') {
    FUN_0046d790();
  }
  cVar2 = FUN_004442a0();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_1 + 0x1c))();
    if (cVar2 == '\0') {
      return;
    }
    if (DAT_0087b633 != '\0') {
      FUN_0046b570();
    }
    if (DAT_0087b630 != '\0') {
      FUN_0046c3d0();
    }
    if (DAT_0087b633 != '\0') {
      FUN_0046a870();
    }
    FUN_0046d920();
    FUN_0046d500();
    FUN_0046bbe0();
    FUN_0046ef10(1,1,1);
    return;
  }
  if ((*(int *)(*DAT_00d12b40 + 0x38e) != 0) && (DAT_0087b633 != '\0')) {
    FUN_0046b570();
  }
  if ((*(int *)(*DAT_00d12b40 + 0x38a) != 0) && (DAT_0087b630 != '\0')) {
    FUN_0046c3d0();
  }
  if ((*(int *)(*DAT_00d12b40 + 0x392) != 0) && (DAT_0087b633 != '\0')) {
    FUN_0046a870();
  }
  if (*(int *)(*DAT_00d12b40 + 0x396) != 0) {
    FUN_0046d920();
  }
  iVar1 = *DAT_00d12b40;
  iVar3 = *(int *)(iVar1 + 0x3d2);
  if (((iVar3 != 0) || (*(int *)(iVar1 + 0x3d6) != 0)) || (*(int *)(iVar1 + 0x3da) != 0)) {
    FUN_0046ef10(CONCAT31((int3)((uint)iVar3 >> 8),0 < iVar3),
                 CONCAT31((int3)((uint)iVar1 >> 8),0 < *(int *)(iVar1 + 0x3d6)),
                 0 < *(int *)(iVar1 + 0x3da));
  }
  if (*(int *)(*DAT_00d12b40 + 0x39a) != 0) {
    FUN_0046d500();
  }
  FUN_0046bbe0();
  if ((((DAT_00dc1540 != '\0') && (DAT_0087b631 != '\0')) &&
      (((iVar1 = *DAT_00d12b40, *(int *)(iVar1 + 0x3a6) != 0 ||
        ((*(int *)(iVar1 + 0x3b2) != 0 || (*(int *)(iVar1 + 0x3ae) != 0)))) ||
       (*(int *)(iVar1 + 0x3aa) != 0)))) &&
     ((*(char *)((int)param_1 + 0x3bf2) != '\0' || ((*(char *)(DAT_00893530 + 0x15) + 1) % 3 != 0)))
     ) {
    if (*(int *)(iVar1 + 0x3aa) != 0) {
      FUN_004706b0();
    }
    if ((*(char *)((int)param_1 + 0x3c0e) != '\0') && (*(int *)(*DAT_00d12b40 + 0x3a6) != 0)) {
      FUN_00470a80();
    }
    if (*(int *)(*DAT_00d12b40 + 0x3ae) != 0) {
      FUN_004715f0();
    }
    if (*(int *)(*DAT_00d12b40 + 0x3b2) != 0) {
      FUN_00471cc0();
    }
  }
  if ((param_2 == '\0') && (*(int *)(*DAT_00d12b40 + 0x3ba) != 0)) {
    FUN_0046e080();
  }
  cVar2 = (**(code **)(*(int *)param_1[0x91] + 8))();
  if (((cVar2 == '\0') || (DAT_0087b631 == '\0')) || (cVar2 = FUN_0042e9a0(), cVar2 != '\0'))
  goto LAB_0046a778;
  iVar1 = *(int *)(*DAT_00d12b40 + 0x3e2);
  if (iVar1 == 0) {
    if (*(int *)(*DAT_00d12b40 + 0x3e6) == 1) {
      FUN_006ea0e0(0xed,*(undefined4 *)((int)param_1 + 6),&DAT_0088ebf8);
    }
    goto LAB_0046a778;
  }
  if (iVar1 < 8) {
    iVar1 = iVar1 + -1;
    iVar3 = FUN_0044dc80(iVar1);
    cVar2 = FUN_004a0270(iVar1,iVar3 + 1);
    if (cVar2 == '\0') {
      if (*(int *)(*DAT_00d12b40 + 0x3e6) != 1) goto LAB_0046a778;
      iVar3 = FUN_0044dc80(iVar1);
      FUN_007a630a(auStack_100,&DAT_008390a0,iVar3 + 1);
      uVar5 = *(undefined4 *)((int)param_1 + 6);
      puVar7 = auStack_100;
      uVar4 = FUN_007604a0(iVar1,puVar7);
      goto LAB_0046a764;
    }
    iVar3 = FUN_0044dc80(iVar1);
    FUN_0045bbf0(iVar1,iVar3 + 1);
    iVar3 = FUN_0044dc80(iVar1);
    FUN_007a630a(auStack_100,&DAT_008390a0,iVar3 + 1);
    uVar5 = *(undefined4 *)((int)param_1 + 6);
    puVar7 = auStack_100;
    uVar4 = FUN_007604a0(iVar1,puVar7);
    uVar6 = 0xeb;
  }
  else {
    iVar1 = iVar1 + -8;
    iVar3 = FUN_0044dc80(iVar1);
    cVar2 = FUN_004a0270(iVar1,iVar3 + -1);
    if (cVar2 == '\0') {
      if (*(int *)(*DAT_00d12b40 + 0x3e6) != 1) goto LAB_0046a778;
      iVar3 = FUN_0044dc80(iVar1);
      FUN_007a630a(auStack_100,&DAT_008390a0,iVar3 + 1);
      uVar5 = *(undefined4 *)((int)param_1 + 6);
      puVar7 = auStack_100;
      uVar4 = FUN_00760540(iVar1,puVar7);
LAB_0046a764:
      uVar6 = 0xec;
    }
    else {
      iVar3 = FUN_0044dc80(iVar1);
      FUN_0045bbf0(iVar1,iVar3 + -1);
      iVar3 = FUN_0044dc80(iVar1);
      FUN_007a630a(auStack_100,&DAT_008390a0,iVar3 + 1);
      uVar5 = *(undefined4 *)((int)param_1 + 6);
      puVar7 = auStack_100;
      uVar4 = FUN_00760540(iVar1,puVar7);
      uVar6 = 0xeb;
    }
  }
  FUN_006ea2c0(uVar6,uVar5,uVar4,puVar7);
LAB_0046a778:
  if (((*(int *)(*DAT_00d12b40 + 0x3ee) != 0) && (DAT_0087b634 != '\0')) &&
     (cVar2 = FUN_004731a0(), cVar2 == '\0')) {
    FUN_004732a0();
  }
  if (((DAT_00dc1925 != '\0') && (cVar2 = FUN_0064ed40(&DAT_008a0144), cVar2 != '\0')) &&
     (FUN_006ea0e0(0xf6,*(undefined4 *)((int)param_1 + 6),&DAT_008a0144),
     *(int *)(DAT_00d0ca90 + 0x21e62) == 10)) {
    FUN_0064c090(10);
    return;
  }
  return;
}


