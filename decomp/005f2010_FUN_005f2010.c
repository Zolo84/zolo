// FUN_005f2010 @ 5f2010 size=127

void __fastcall FUN_005f2010(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cec58;
  ExceptionList = &local_c;
  *(undefined ***)(param_1 + 0x46) = &PTR_LAB_007ed804;
  iVar2 = *(int *)(param_1 + 0x4a);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  local_4 = 0;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


