// FUN_0053a784 @ 53a784 size=248

undefined4 __fastcall FUN_0053a784(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007c2b12;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00426f50(param_1 + 0x13e8a);
  local_8 = 0;
  uVar2 = FUN_00427590(0);
  FUN_004273c0(0);
  FUN_00796cd8(*(undefined4 *)(param_1 + 0x148ba));
  pvVar3 = operator_new(uVar2);
  *(void **)(param_1 + 0x148ba) = pvVar3;
  FUN_00427590(*(undefined4 *)(param_1 + 0x148ba));
  uVar1 = *(undefined4 *)(param_1 + 0x148ba);
  local_8 = 0xffffffff;
  FUN_00426f80();
  ExceptionList = local_10;
  return uVar1;
}


