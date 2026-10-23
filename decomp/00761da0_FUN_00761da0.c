// FUN_00761da0 @ 761da0 size=315

void __fastcall FUN_00761da0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_007e0818;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007fa53c;
  param_1[2] = &PTR_LAB_007fa528;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007fa520;
  local_4 = 0;
  param_1[0x2a] = &PTR_LAB_007e378c;
  iVar2 = param_1[0x2b];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined ***)((int)param_1 + 0x96) = &PTR_LAB_007e378c;
  iVar2 = *(int *)((int)param_1 + 0x9a);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)param_1 + 0x9a) = 0;
  *(undefined4 *)((int)param_1 + 0x9e) = 0;
  *(undefined4 *)((int)param_1 + 0xa2) = 0;
  param_1[0x21] = &PTR_LAB_007e378c;
  iVar2 = param_1[0x22];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined ***)((int)param_1 + 0x6a) = &PTR_LAB_007fa54c;
  iVar2 = *(int *)((int)param_1 + 0x6e);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)param_1 + 0x6e) = 0;
  *(undefined4 *)((int)param_1 + 0x72) = 0;
  *(undefined4 *)((int)param_1 + 0x76) = 0;
  FUN_00428ca0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


