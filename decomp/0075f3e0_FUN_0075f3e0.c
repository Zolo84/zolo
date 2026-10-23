// FUN_0075f3e0 @ 75f3e0 size=159

void __fastcall FUN_0075f3e0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_007e047f;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007fa4c0;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007fa4a4;
  param_1[2] = &PTR_LAB_007fa4ac;
  local_4 = 1;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007e378c;
  iVar2 = *(int *)((int)param_1 + 0x1a);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_00428ca0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


