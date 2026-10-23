// FUN_006d97c0 @ 6d97c0 size=269

void __fastcall FUN_006d97c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d969b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(param_1 + 0x22242) = 0;
  if (*(undefined4 **)(param_1 + 0x2223a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x2223a))(1);
  }
  pvVar4 = operator_new(0x7e);
  uStack_4 = 0;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar7 = 8;
    uVar5 = FUN_005841b0(8);
    uVar6 = FUN_005841a0(uVar5);
    uVar5 = FUN_00414ed0(uVar6,uVar5,uVar7);
  }
  iVar1 = *(int *)(param_1 + 0x2220e);
  *(undefined4 *)(param_1 + 0x2223a) = uVar5;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2220e) = 0;
    ExceptionList = pvStack_c;
    return;
  }
  *(undefined ***)(iVar1 + 0x1c) = &PTR_LAB_007e3b70;
  iVar3 = *(int *)(iVar1 + 0x20);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined ***)(iVar1 + 4) = &PTR_LAB_007e378c;
  iVar3 = *(int *)(iVar1 + 8);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  FUN_00796cd8(iVar1);
  *(undefined4 *)(param_1 + 0x2220e) = 0;
  ExceptionList = pvStack_c;
  return;
}


