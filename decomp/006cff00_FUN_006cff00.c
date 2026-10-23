// FUN_006cff00 @ 6cff00 size=160

void __fastcall FUN_006cff00(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d9108;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007f7458;
  puVar3 = (undefined4 *)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 3));
  param_1[2] = &PTR_LAB_007f746c;
  param_1[3] = &PTR_LAB_007f7428;
  *puVar3 = &PTR_LAB_007f7470;
  iVar2 = puVar3[1];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  local_4 = 0;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


