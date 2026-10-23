// FUN_0074dd40 @ 74dd40 size=150

void FUN_0074dd40(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007df918;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00798acc();
  uVar2 = DAT_00d4c258;
  local_4 = 0;
  FUN_00798acc();
  iVar1 = *(int *)(uVar2 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(uVar2 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  FUN_00798b68();
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_00d4c258 = 0;
  local_4 = 0xffffffff;
  FUN_00798b68();
  ExceptionList = pvStack_c;
  return;
}


