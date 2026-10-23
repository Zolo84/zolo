// FUN_007515a0 @ 7515a0 size=1369

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007515a0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined1 auStack_49c [4];
  undefined4 uStack_498;
  uint uStack_494;
  undefined4 uStack_490;
  undefined4 *puStack_48c;
  char *pcStack_488;
  undefined1 uStack_469;
  undefined1 *puStack_468;
  int *piStack_464;
  undefined1 auStack_460 [4];
  char *pcStack_45c;
  uint uStack_458;
  undefined4 uStack_454;
  char acStack_450 [1092];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_007dfcc0;
  pvStack_c = ExceptionList;
  local_4 = 0;
  uStack_3 = 0;
  pcStack_488 = (char *)0x7515dc;
  ExceptionList = &pvStack_c;
  WaitForSingleObject(*(HANDLE *)((int)param_1 + 0x18e),3000);
  *(undefined4 *)((int)param_1 + 0x182) = 0xffffffff;
  iVar3 = FUN_0042b6c9();
  if (iVar3 != 0) {
    pcStack_488 = (char *)0x75160c;
    FUN_004367a0();
  }
  piVar1 = (int *)param_1[0x1d];
  if (*(char *)((int)piVar1 + 0xa2) != '\0') {
    FUN_00433930();
  }
  (**(code **)(*piVar1 + 0x60))();
  piStack_464 = param_1 + 0x23;
  *(undefined1 *)((int)piVar1 + 0x86) = 1;
  (**(code **)*piStack_464)();
  if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x22])();
    param_1[0x22] = 0;
  }
  pvVar4 = operator_new(0x268);
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00744790();
  }
  param_1[0x22] = uVar5;
  puStack_48c = *(undefined4 **)((int)param_1 + 0x1a);
  if (puStack_48c == (undefined4 *)0x0) {
    puStack_48c = &DAT_007f0c98;
  }
  pcStack_488 = *(char **)((int)param_1 + 0x66);
  uStack_490 = 0x7516af;
  uVar5 = FUN_00745ef0();
  switch(uVar5) {
  case 0:
    iVar3 = FUN_0042b6c9();
    if (iVar3 != 0) {
      pcStack_488 = (char *)0x7516e9;
      FUN_004367a0();
    }
    goto LAB_0075187e;
  case 1:
    puStack_468 = operator_new(0x68);
    local_4 = 3;
    if (puStack_468 != (void *)0x0) {
      puVar9 = *(undefined4 **)((int)param_1 + 0x4a);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = &DAT_007f0c98;
      }
      pcStack_488 = (char *)0x7517a9;
      FUN_0042b6c9();
      pcStack_488 = (char *)puVar9;
LAB_00751871:
      puStack_48c = (undefined4 *)0x751876;
      FUN_0043dce0();
    }
    break;
  case 2:
    puStack_468 = operator_new(0x68);
    local_4 = 4;
    if (puStack_468 != (void *)0x0) {
      puVar9 = *(undefined4 **)((int)param_1 + 0x4a);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = &DAT_007f0c98;
      }
      pcStack_488 = (char *)0x7517ef;
      FUN_0042b6c9();
      pcStack_488 = (char *)puVar9;
      goto LAB_00751871;
    }
    break;
  case 3:
    puStack_468 = operator_new(0x68);
    local_4 = 5;
    if (puStack_468 != (void *)0x0) {
      puVar9 = *(undefined4 **)((int)param_1 + 0x4a);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = &DAT_007f0c98;
      }
      pcStack_488 = (char *)0x75182e;
      FUN_0042b6c9();
      pcStack_488 = (char *)puVar9;
      goto LAB_00751871;
    }
    break;
  case 4:
    puStack_468 = operator_new(0x68);
    local_4 = 1;
    if (puStack_468 != (void *)0x0) {
      puVar9 = *(undefined4 **)((int)param_1 + 0x4a);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = &DAT_007f0c98;
      }
      pcStack_488 = (char *)0x75172b;
      FUN_0042b6c9();
      pcStack_488 = (char *)puVar9;
      goto LAB_00751871;
    }
    break;
  case 5:
    puStack_468 = operator_new(0x68);
    local_4 = 2;
    if (puStack_468 != (void *)0x0) {
      puVar9 = *(undefined4 **)((int)param_1 + 0x4a);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = &DAT_007f0c98;
      }
LAB_00751863:
      pcStack_488 = (char *)0x75186d;
      FUN_0042b6c9();
      pcStack_488 = (char *)puVar9;
      goto LAB_00751871;
    }
    break;
  default:
    puStack_468 = operator_new(0x68);
    local_4 = 6;
    if (puStack_468 != (void *)0x0) {
      puVar9 = *(undefined4 **)((int)param_1 + 0x4a);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = &DAT_007f0c98;
      }
      goto LAB_00751863;
    }
  }
  local_4 = 0;
LAB_0075187e:
  pcStack_488 = (char *)&param_2;
  puStack_48c = (undefined4 *)0x751899;
  FUN_00674710();
  cVar2 = FUN_00757c20();
  if (cVar2 == '\0') {
    puStack_468 = operator_new(0x68);
    local_4 = 7;
    if (puStack_468 != (void *)0x0) {
      param_1 = *(undefined4 **)((int)param_1 + 0x4a);
      puVar9 = &DAT_007f0c98;
      if (param_1 != (undefined4 *)0x0) {
        puVar9 = param_1;
      }
      pcStack_488 = (char *)0x7518e6;
      FUN_0042b6c9();
      puStack_48c = (undefined4 *)0x7518ef;
      pcStack_488 = (char *)puVar9;
      FUN_0043dce0();
    }
    local_4 = 0;
    (**(code **)(*piStack_464 + 4))();
    FUN_007a64d3();
  }
  FUN_00746b90();
  uVar7 = 0xffffffff;
  pcVar6 = (char *)(*DAT_00d12b40 + 0x301);
  do {
    pcVar10 = pcVar6;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar10 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar10;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7;
  pcVar6 = pcVar10 + -uVar7;
  pcVar10 = acStack_450;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar10 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar10 = pcVar10 + 1;
  }
  FUN_00746d10();
  (**(code **)(*(int *)param_1[0x1c] + 0x50))();
  pcVar6 = (char *)FUN_0042b6c9();
  auStack_460[0] = uStack_469;
  uVar7 = 0xffffffff;
  pcStack_45c = (char *)0x0;
  uStack_458 = 0;
  uStack_454 = 0;
  pcVar10 = pcVar6;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7 - 1;
  pcStack_488 = (char *)0x751996;
  cVar2 = FUN_00674e40();
  if (cVar2 != '\0') {
    pcVar10 = pcStack_45c;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcStack_45c[uVar7] = '\0';
    uStack_458 = uVar7;
  }
  local_4 = 8;
  pcVar6 = (char *)FUN_007535d0();
  puStack_468 = (undefined1 *)&puStack_48c;
  puStack_48c = (undefined4 *)CONCAT31(puStack_48c._1_3_,uStack_469);
  uVar7 = 0xffffffff;
  pcStack_488 = (char *)0x0;
  pcVar10 = pcVar6;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7 - 1;
  uStack_490 = 1;
  uStack_498 = 0x751a00;
  uStack_494 = uVar7;
  piStack_464 = (int *)uVar7;
  cVar2 = FUN_00674e40();
  if (cVar2 != '\0') {
    pcVar10 = pcStack_488;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcStack_488[uVar7] = '\0';
  }
  piStack_464 = (int *)auStack_49c;
  puVar11 = &uStack_469;
  local_4 = 9;
  uVar5 = FUN_007535d0(puVar11);
  FUN_00673c70(uVar5,puVar11);
  _local_4 = CONCAT31(uStack_3,8);
  FUN_00745c90(auStack_460,*(undefined4 *)((int)param_1 + 0x66));
  (**(code **)(param_1[0x23] + 4))();
  FUN_00750040();
  FUN_00751000();
  if (pcStack_45c != (char *)0x0) {
    cVar2 = pcStack_45c[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_00796cd8();
    }
    else {
      pcStack_45c[-1] = cVar2 + -1;
    }
  }
  pcStack_45c = (char *)0x0;
  uStack_458 = 0;
  uStack_454 = 0;
  if (param_3 != 0) {
    cVar2 = *(char *)(param_3 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_00796cd8();
    }
    else {
      *(char *)(param_3 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


