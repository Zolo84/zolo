// FUN_005dc370 @ 5dc370 size=341

void __fastcall FUN_005dc370(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cdcb6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x90) + 0x21e5a) + 4))();
  if (iVar3 == 2) {
    FUN_004d8730();
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x90) + 0x21e5a) + 4);
    piVar2 = (int *)piVar1[2];
    iVar3 = *piVar1;
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(iVar3 + 0x18);
    *(undefined2 *)(param_1 + 200) = *(undefined2 *)(iVar3 + 0x1c);
    iVar3 = *piVar2;
    *(undefined4 *)(param_1 + 0xca) = *(undefined4 *)(iVar3 + 0x18);
    *(undefined2 *)(param_1 + 0xce) = *(undefined2 *)(iVar3 + 0x1c);
    if (*(undefined4 **)(param_1 + 0xd4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xd4))(1);
    }
    if (*(undefined4 **)(param_1 + 0xd8) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xd8))(1);
    }
    pvVar4 = operator_new(0x98);
    uVar5 = 0;
    uStack_4 = 0;
    if (pvVar4 != (void *)0x0) {
      iVar3 = FUN_00428ee0((undefined4 *)(param_1 + 0xc4));
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar3 + -0x14;
      }
      uVar5 = FUN_005c79d0(iVar3,0);
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0xd4) = uVar5;
    pvVar4 = operator_new(0x98);
    uStack_4 = 1;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      iVar3 = FUN_00428ee0((undefined4 *)(param_1 + 0xca));
      if (iVar3 == 0) {
        uVar5 = FUN_005c79d0(0,0);
      }
      else {
        uVar5 = FUN_005c79d0(iVar3 + -0x14,0);
      }
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0xd8) = uVar5;
    FUN_005dc4d0();
  }
  ExceptionList = pvStack_c;
  return;
}


