// FUN_0040e200 @ 40e200 size=595

bool __fastcall FUN_0040e200(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  undefined2 *puVar6;
  undefined **ppuVar7;
  int iVar8;
  undefined4 uStack_a4;
  undefined4 *puStack_a0;
  undefined *puStack_9c;
  undefined4 *puStack_98;
  int *piStack_94;
  undefined *puStack_90;
  undefined4 *puStack_8c;
  void *pvStack_54;
  void *pvStack_4c;
  void *pvStack_48;
  void *pvStack_38;
  void *pvStack_24;
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007b985b;
  pvStack_c = ExceptionList;
  piStack_94 = *(int **)(param_1 + 0x3e);
  puStack_90 = &DAT_007fa7f0;
  puStack_98 = (undefined4 *)0x40e22f;
  ExceptionList = &pvStack_c;
  puStack_8c = (undefined4 *)(param_1 + 2);
  iVar3 = (**(code **)(*piStack_94 + 0x10))();
  if (iVar3 < 0) {
    ExceptionList = pvStack_18;
    return false;
  }
  puStack_a0 = *(undefined4 **)(param_1 + 2);
  puVar1 = (undefined4 *)(param_1 + 0xe);
  puStack_9c = &DAT_007fc310;
  uStack_a4 = 0x40e259;
  puStack_98 = puVar1;
  iVar3 = (**(code **)*puStack_a0)();
  if (iVar3 < 0) {
    ExceptionList = pvStack_24;
    return false;
  }
  uStack_a4 = 0;
  ppuVar7 = &puStack_90;
  puStack_90 = (undefined *)0x6c;
  puStack_8c = (undefined4 *)0xfff9ee;
  iVar8 = 0;
  iVar3 = (**(code **)(*(int *)*puVar1 + 0x24))((int *)*puVar1,ppuVar7,0,0);
  if (iVar3 < 0) {
    ExceptionList = pvStack_38;
    return false;
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined **)(param_1 + 0x1e) = puStack_9c;
  *(undefined4 **)(param_1 + 0x1a) = puStack_98;
  if (*(char *)(param_1 + 0x42) == '\0') {
    *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_1 + 0x12);
    *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_1 + 0x16);
    *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_1 + 0x1a);
    *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_1 + 0x1e);
  }
  else {
    uVar4 = (uint)(*(int *)(DAT_00bd1bb0 + 8) - (int)puStack_9c) >> 1;
    *(uint *)(param_1 + 0x26) = uVar4;
    iVar3 = *(int *)(DAT_00bd1bb0 + 4);
    *(undefined **)(param_1 + 0x2e) = puStack_9c + uVar4;
    uVar4 = (uint)(iVar3 - (int)puStack_98) >> 1;
    *(uint *)(param_1 + 0x22) = uVar4;
    *(uint *)(param_1 + 0x2a) = uVar4 + (int)puStack_98;
  }
  puVar2 = (undefined4 *)(param_1 + 6);
  *(undefined4 *)(param_1 + 0x32) = 0;
  *puVar2 = 0;
  if (*(char *)(param_1 + 0x42) == '\0') {
    pvVar5 = operator_new(0x25e);
    if (pvVar5 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004010a0(puStack_98,puStack_9c,0x10,6);
    }
    *(int *)(param_1 + 0x32) = iVar3;
    iVar3 = (**(code **)(*(int *)*puVar1 + 0x34))
                      ((int *)*puVar1,*(undefined4 *)(iVar3 + 0x2c),0,0,param_1 + 10);
    if (iVar3 < 0) {
      ExceptionList = pvStack_4c;
      return false;
    }
    puVar6 = (undefined2 *)FUN_00406160();
    iVar3 = 0;
    if (0 < iVar8 * (int)ppuVar7) {
      do {
        *puVar6 = 0;
        iVar3 = iVar3 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar3 < iVar8 * (int)ppuVar7);
    }
    FUN_00406180();
  }
  else {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x36) + 0x18))
                      (*(int **)(param_1 + 0x36),&uStack_a4,puVar2,0);
    if (iVar3 < 0) {
      ExceptionList = pvStack_48;
      return false;
    }
    iVar3 = (**(code **)(*(int *)*puVar1 + 0x34))((int *)*puVar1,*puVar2,0,0,param_1 + 10);
    if (iVar3 < 0) {
      ExceptionList = pvStack_4c;
      return false;
    }
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x3e) + 0x1c))(*(int **)(param_1 + 0x3e),1);
  ExceptionList = pvStack_54;
  return -1 < iVar3;
}


