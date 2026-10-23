// FUN_006431f0 @ 6431f0 size=148

undefined4 * __thiscall FUN_006431f0(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d23bb;
  local_c = ExceptionList;
  puVar3 = param_1;
  ExceptionList = &local_c;
  for (iVar2 = 0x42; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  pvVar1 = operator_new(0x714);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00534930(param_2,&DAT_008390e0);
  }
  local_4 = 0xffffffff;
  FUN_00643470(iVar2);
  if (iVar2 != 0) {
    FUN_005349a0();
    FUN_00796cd8(iVar2);
  }
  ExceptionList = local_c;
  return param_1;
}


