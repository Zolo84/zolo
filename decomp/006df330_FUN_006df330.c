// FUN_006df330 @ 6df330 size=222

void __fastcall FUN_006df330(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d9b98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f7cc8;
  param_1[2] = &PTR_LAB_007f7cc4;
  local_4 = 0;
  FUN_00796cd8(param_1[0x4a]);
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x19])(1);
  }
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1a])(1);
  }
  if ((undefined4 *)param_1[0x1b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1b])(1);
  }
  FUN_006d4290(param_1);
  if ((undefined4 *)param_1[0x25] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x25])(1);
  }
  if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x17])(1);
  }
  if ((undefined4 *)param_1[0x48] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x48])(1);
  }
  piVar2 = param_1 + 0x1d;
  iVar1 = 8;
  do {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  local_4 = 0xffffffff;
  FUN_00441ec0();
  ExceptionList = pvStack_c;
  return;
}


