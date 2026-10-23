// FUN_004d2dd0 @ 4d2dd0 size=264

void __fastcall FUN_004d2dd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_007bf76b;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e7ec0;
  param_1[2] = &PTR_LAB_007e7eac;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007e7ea4;
  puVar1 = *(undefined4 **)((int)param_1 + 0x10e);
  local_4 = 3;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
    puVar4 = param_1;
    FUN_004e9370(*puVar1,param_1);
    FUN_004ed6b0(puVar4);
  }
  *(undefined ***)((int)param_1 + 0x10a) = &PTR_LAB_007e378c;
  iVar3 = *(int *)((int)param_1 + 0x10e);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x10e) = 0;
  *(undefined4 *)((int)param_1 + 0x112) = 0;
  *(undefined4 *)((int)param_1 + 0x116) = 0;
  param_1[0x3e] = &PTR_LAB_007e378c;
  iVar3 = param_1[0x3f];
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_00428ca0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


