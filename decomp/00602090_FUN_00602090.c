// FUN_00602090 @ 602090 size=151

void __fastcall FUN_00602090(undefined4 *param_1)

{
  void *unaff_EBX;
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cf946;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007eea24;
  param_1[2] = &PTR_LAB_007eea20;
  local_4 = 1;
  piVar2 = param_1 + 0x49;
  iVar1 = 10;
  do {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  (**(code **)(**(int **)(DAT_00d0ca90 + 0x13cfc) + 0x18))(0xffffff9c,0xffffff9c);
  pvStack_c = (void *)((uint)pvStack_c & 0xffffff00);
  FUN_00607680();
  pvStack_c = (void *)0xffffffff;
  FUN_00415250();
  ExceptionList = unaff_EBX;
  return;
}


