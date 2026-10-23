// thunk_FUN_004fbb20 @ 490af0 size=5

void __fastcall thunk_FUN_004fbb20(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007c1490;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e84a8;
  param_1[2] = &PTR_LAB_007e8494;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007e848c;
  uStack_4 = 4;
  puVar3 = *(undefined4 **)((int)param_1 + 0x3e);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    FUN_00796cd8(*puVar3);
    FUN_00796cd8(puVar3);
    puVar3 = puVar1;
  }
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *(undefined4 *)((int)param_1 + 0x42) = 0;
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  (**(code **)(*(int *)((int)param_1 + 0x3a) + 0x14))();
  (**(code **)(*(int *)((int)param_1 + 0x16) + 0x14))();
  puVar3 = (undefined4 *)param_1[0xb];
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    FUN_00796cd8(*puVar3);
    FUN_00796cd8(puVar3);
    puVar3 = puVar1;
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(int *)((int)param_1 + 0x3a) = (int)&PTR_LAB_007e84e4;
  iVar4 = *(int *)((int)param_1 + 0x3e);
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *(undefined4 *)((int)param_1 + 0x42) = 0;
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  param_1[10] = &PTR_LAB_007e8514;
  iVar4 = param_1[0xb];
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007e6edc;
  iVar4 = *(int *)((int)param_1 + 0x1a);
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 10);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  uStack_4 = uStack_4 & 0xffffff00;
  FUN_00428ca0();
  uStack_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


