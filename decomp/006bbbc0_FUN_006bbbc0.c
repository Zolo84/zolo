// FUN_006bbbc0 @ 6bbbc0 size=326

void __fastcall FUN_006bbbc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_007d752c;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007f71cc;
  local_4 = 3;
  puVar3 = (undefined4 *)param_1[0x11];
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    FUN_00796cd8(*puVar3);
    FUN_00796cd8(puVar3);
    puVar3 = puVar1;
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  puVar3 = *(undefined4 **)((int)param_1 + 0x56);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    FUN_00796cd8(*puVar3);
    FUN_00796cd8(puVar3);
    puVar3 = puVar1;
  }
  *(undefined4 *)((int)param_1 + 0x56) = 0;
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  *(undefined4 *)((int)param_1 + 0x5e) = 0;
  FUN_006caa80(param_1 + 0x1d);
  param_1[0x1d] = &PTR_LAB_007f71d4;
  iVar4 = param_1[0x1e];
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined ***)((int)param_1 + 0x52) = &PTR_LAB_007f7164;
  iVar4 = *(int *)((int)param_1 + 0x56);
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x56) = 0;
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  *(undefined4 *)((int)param_1 + 0x5e) = 0;
  param_1[0x10] = &PTR_LAB_007e4b64;
  iVar4 = param_1[0x11];
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined ***)((int)param_1 + 0x2e) = &PTR_LAB_007e378c;
  iVar4 = *(int *)((int)param_1 + 0x32);
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  ExceptionList = local_c;
  return;
}


