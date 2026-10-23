// FUN_005d59e0 @ 5d59e0 size=168

void __fastcall FUN_005d59e0(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cd6eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_0064ec20();
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(iVar1 + 0x10);
  if (*(undefined4 **)(param_1 + 0xc6) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xc6))(1);
  }
  pvVar2 = operator_new(0x80);
  uStack_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = FUN_0064ec20(0);
    uVar3 = FUN_005dcb20(uVar3,uVar4);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc6) = uVar3;
  FUN_005d5aa0();
  ExceptionList = pvStack_c;
  return;
}


