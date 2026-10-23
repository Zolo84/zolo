// FUN_00437480 @ 437480 size=245

void __thiscall FUN_00437480(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007ba96b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_00436110();
  iVar3 = FUN_00415be0();
  iVar3 = iVar2 + 8 + iVar3;
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2a);
  if (param_2 < iVar2 + 0x10) {
    param_2 = iVar2 + 0x10;
  }
  if (param_2 < iVar3) {
    iVar3 = param_2;
  }
  if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
  }
  pvVar4 = operator_new(0x7e);
  uStack_4 = 0;
  if (pvVar4 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    uVar9 = 0xffffffff;
    uVar8 = 0xffffffff;
    uVar7 = 0;
    uVar5 = FUN_00415bd0(iVar3,0,0xffffffff,0xffffffff);
    iVar3 = FUN_0043a650(uVar5,iVar3,uVar7,uVar8,uVar9);
  }
  *(int *)(param_1 + 0x20) = iVar3;
  iVar3 = *(int *)(iVar3 + 0x62);
  uStack_4 = 0xffffffff;
  uVar1 = FUN_00584270(0x74,0x65,0x5e);
  *(undefined2 *)(iVar3 + 0x25a) = uVar1;
  iVar3 = FUN_00415be0();
  iVar2 = FUN_00415bd0();
  iVar6 = FUN_00415be0();
  FUN_004012e0(0,iVar6 + -1,iVar2 + -1,iVar3 + -1);
  ExceptionList = pvStack_c;
  return;
}


