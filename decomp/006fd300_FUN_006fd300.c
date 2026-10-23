// FUN_006fd300 @ 6fd300 size=158

void __thiscall FUN_006fd300(int param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007db43b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_00444300();
  iVar1 = *(int *)(param_1 + 0xa8);
  if (iVar1 != 0) {
    FUN_005349a0();
    FUN_00796cd8(iVar1);
  }
  FUN_006cd210();
  pvVar2 = operator_new(0x714);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00534930(param_2,&DAT_008390e0);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  FUN_00535cd0();
  ExceptionList = local_c;
  return;
}


