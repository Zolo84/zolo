// FUN_006d9340 @ 6d9340 size=343

undefined4 __fastcall FUN_006d9340(int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  bool bVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d965b;
  pvStack_c = ExceptionList;
  puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x2220e) + 0x20);
  uVar5 = *puVar7;
  iVar8 = 0;
  do {
    puVar7 = (undefined4 *)puVar7[2];
    bVar9 = iVar8 != 0;
    iVar8 = iVar8 + -1;
  } while (bVar9);
  uVar4 = *puVar7;
  ExceptionList = &pvStack_c;
  pvVar3 = operator_new(0xb0);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    uVar4 = FUN_0042b6c9(uVar4);
    uVar5 = FUN_0042b6c9(uVar5);
    piVar6 = (int *)FUN_006d50d0(uVar5,uVar4);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar6 + 0x28))();
  iVar8 = *(int *)(param_1 + 0x2221e);
  puVar7 = operator_new(0xe);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    *puVar7 = piVar6;
    puVar7[1] = iVar8;
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x22222);
  *(undefined4 **)(param_1 + 0x2221e) = puVar7;
  *(int *)(param_1 + 0x22222) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(param_1 + 0x2221a) = puVar7;
  }
  else {
    *(undefined4 **)(iVar8 + 8) = puVar7;
  }
  iVar8 = *(int *)(param_1 + 0x2220e);
  if (iVar8 != 0) {
    *(undefined ***)(iVar8 + 0x1c) = &PTR_LAB_007e3b70;
    iVar1 = *(int *)(iVar8 + 0x20);
    while (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
      FUN_00796cd8(iVar1);
      iVar1 = iVar2;
    }
    *(undefined4 *)(iVar8 + 0x20) = 0;
    *(undefined4 *)(iVar8 + 0x24) = 0;
    *(undefined4 *)(iVar8 + 0x28) = 0;
    *(undefined ***)(iVar8 + 4) = &PTR_LAB_007e378c;
    iVar1 = *(int *)(iVar8 + 8);
    while (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
      FUN_00796cd8(iVar1);
      iVar1 = iVar2;
    }
    *(undefined4 *)(iVar8 + 8) = 0;
    *(undefined4 *)(iVar8 + 0xc) = 0;
    *(undefined4 *)(iVar8 + 0x10) = 0;
    FUN_00796cd8(iVar8);
  }
  *(undefined4 *)(param_1 + 0x2220e) = 0;
  ExceptionList = pvStack_c;
  return 1;
}


