// FUN_006f5350 @ 6f5350 size=111

void __fastcall FUN_006f5350(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007dabf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f8234;
  param_1[2] = &PTR_LAB_007f8230;
  local_4 = 0;
  piVar2 = (int *)((int)param_1 + 0x16);
  iVar1 = 5;
  do {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  local_4 = 0xffffffff;
  FUN_006ee460();
  ExceptionList = pvStack_c;
  return;
}


