// FUN_00651c90 @ 651c90 size=206

undefined4 __fastcall FUN_00651c90(int param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d2d8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00481890();
  cVar1 = FUN_004442a0();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*(int *)(param_1 + 0xe8a0) + 4))();
    if (iVar2 < 1) {
      FUN_00461790();
    }
    else {
      pvVar3 = operator_new(0xc2);
      uStack_4 = 0;
      if (pvVar3 != (void *)0x0) {
        iVar2 = FUN_00652040();
        FUN_00449290(iVar2 + 0x12);
        FUN_00645f00(param_1);
      }
    }
  }
  ExceptionList = local_c;
  return 3;
}


