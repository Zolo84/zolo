// FUN_006fc8c0 @ 6fc8c0 size=258

void __fastcall FUN_006fc8c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007db3e0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f843c;
  param_1[2] = &PTR_LAB_007f8438;
  local_4 = 0;
  if ((undefined4 *)param_1[0x27] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x27])(1);
  }
  puVar1 = (undefined4 *)param_1[0x2b];
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_007f8430;
    if ((undefined4 *)puVar1[5] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[5])(1);
    }
    if ((undefined4 *)puVar1[6] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[6])(1);
    }
    FUN_00796cd8(puVar1);
  }
  FUN_00796cd8(param_1[3]);
  iVar2 = param_1[0x2a];
  if (iVar2 != 0) {
    FUN_005349a0();
    FUN_00796cd8(iVar2);
  }
  if ((undefined4 *)param_1[0x25] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x25])(1);
  }
  piVar3 = param_1 + 4;
  iVar2 = 0x20;
  do {
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_4 = 1;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


