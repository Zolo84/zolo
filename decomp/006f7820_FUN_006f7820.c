// FUN_006f7820 @ 6f7820 size=127

void __fastcall FUN_006f7820(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007dae08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f82c4;
  param_1[2] = &PTR_LAB_007f82c0;
  local_4 = 0;
  if (*(undefined4 **)((int)param_1 + 0x136) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x136))(1);
  }
  piVar2 = (int *)((int)param_1 + 0x16);
  iVar1 = 7;
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


