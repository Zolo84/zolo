// FUN_0043e1b0 @ 43e1b0 size=145

void __thiscall
FUN_0043e1b0(int param_1,int param_2,undefined4 param_3,undefined2 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007badeb;
  pvStack_c = ExceptionList;
  puVar1 = *(undefined4 **)(param_1 + 0x68 + param_2 * 4);
  ExceptionList = &pvStack_c;
  if (puVar1 != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)*puVar1)(1);
  }
  pvVar2 = operator_new(0x72);
  uStack_4 = 0;
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00434930(param_5,0x140,4,0);
  }
  *(int *)(param_1 + 0x68 + param_2 * 4) = iVar3;
  *(undefined1 *)(iVar3 + 0x5c) = 1;
  *(undefined2 *)(*(int *)(param_1 + 0x68 + param_2 * 4) + 0x5a) = param_4;
  *(undefined4 *)(*(int *)(param_1 + 0x68 + param_2 * 4) + 0x56) = param_3;
  ExceptionList = pvStack_c;
  return;
}


