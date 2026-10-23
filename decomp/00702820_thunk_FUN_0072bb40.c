// thunk_FUN_0072bb40 @ 702820 size=5

void __fastcall thunk_FUN_0072bb40(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007ddd38;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f86f8;
  uStack_4 = 0;
  piVar2 = (int *)param_1[1];
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    FUN_00796cd8(piVar2);
    piVar2 = piVar1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_007f86c8;
  ExceptionList = pvStack_c;
  return;
}


