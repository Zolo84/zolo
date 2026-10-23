// FUN_0068ae10 @ 68ae10 size=234

void __fastcall FUN_0068ae10(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_007d4f24;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007f3acc;
  local_4 = 2;
  puVar4 = (undefined4 *)param_1[0x34];
  while (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar4[2];
    FUN_00796cd8(*puVar4);
    FUN_00796cd8(puVar4);
    puVar4 = puVar1;
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = &PTR_LAB_007f3cd4;
  iVar3 = param_1[0x34];
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  FUN_00527230();
  local_4._0_1_ = 1;
  FUN_00527230();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00527230();
  local_4 = 0xffffffff;
  FUN_006a9770();
  ExceptionList = local_c;
  return;
}


