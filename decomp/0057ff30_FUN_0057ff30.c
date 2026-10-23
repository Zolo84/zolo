// FUN_0057ff30 @ 57ff30 size=121

void __thiscall FUN_0057ff30(int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c8ccb;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 8) != '\0') {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0xc);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00566410(param_2,*(undefined4 *)(DAT_00bd1500 + 900),
                           *(undefined4 *)(DAT_00bd1500 + 900),0);
    }
    local_4 = 0xffffffff;
    FUN_00565ca0(uVar2,pvVar1);
  }
  ExceptionList = local_c;
  return;
}


