// FUN_004bdf00 @ 4bdf00 size=200

void __fastcall FUN_004bdf00(int *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007becbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_0042e980();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0xc))();
    cVar1 = FUN_00527dc0();
    if (cVar1 != '\0') {
      pvVar2 = operator_new(0xc);
      uStack_4 = 0;
      if (pvVar2 != (void *)0x0) {
        FUN_004c0970();
        uVar3 = FUN_00458280();
        FUN_004c0980(uVar3);
        uVar4 = FUN_00447250();
        FUN_004c0440(0x8f,&DAT_0088f284,uVar4,uVar3);
      }
      uStack_4 = 0xffffffff;
      FUN_00565c50();
    }
  }
  ExceptionList = local_c;
  return;
}


