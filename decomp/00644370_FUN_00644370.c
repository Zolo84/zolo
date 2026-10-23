// FUN_00644370 @ 644370 size=211

void __fastcall FUN_00644370(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d24c4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007f011c;
  param_1[2] = &PTR_LAB_007f0118;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007f0114;
  local_4 = 2;
  *(undefined4 *)(*(int *)(DAT_00d0ca90 + 0x13c8c) + *(int *)((int)param_1 + 0x92) * 4) = 0;
  FUN_0040fe60(param_1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00415250();
  *(undefined ***)((int)param_1 + 0x3be) = &PTR_LAB_007e378c;
  iVar2 = *(int *)((int)param_1 + 0x3c2);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)param_1 + 0x3c2) = 0;
  *(undefined4 *)((int)param_1 + 0x3c6) = 0;
  *(undefined4 *)((int)param_1 + 0x3ca) = 0;
  local_4 = 0xffffffff;
  FUN_004338f0();
  ExceptionList = local_c;
  return;
}


