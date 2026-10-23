// FUN_0050b1c0 @ 50b1c0 size=143

void __fastcall FUN_0050b1c0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007c1688;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_007e51dc;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007e51d4;
  local_4 = 0;
  piVar4 = (int *)param_1[1];
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    puVar2 = (undefined4 *)*piVar4;
    piVar4 = piVar1;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  (**(code **)(*param_1 + 0x10))();
  *param_1 = (int)&PTR_LAB_007e8724;
  iVar5 = param_1[1];
  while (iVar5 != 0) {
    iVar3 = *(int *)(iVar5 + 8);
    FUN_00796cd8(iVar5);
    iVar5 = iVar3;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  ExceptionList = pvStack_c;
  return;
}


