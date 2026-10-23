// FUN_00640df0 @ 640df0 size=109

void __fastcall FUN_00640df0(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d21db;
  local_c = ExceptionList;
  puVar1 = *(undefined4 **)(param_1 + 0x10a);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = *(undefined4 *)((int)puVar1 + 0x7e);
    ExceptionList = &local_c;
    (**(code **)*puVar1)(1);
    pvVar2 = operator_new(0xae);
    uStack_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00641470(uVar3);
    }
    *(undefined4 *)(param_1 + 0x10a) = uVar3;
  }
  ExceptionList = local_c;
  return;
}


