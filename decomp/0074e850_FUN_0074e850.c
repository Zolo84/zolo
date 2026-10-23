// FUN_0074e850 @ 74e850 size=791

void __fastcall FUN_0074e850(int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007dfa22;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = operator_new(0x72);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    iVar2 = FUN_00434930(0xaa,*(int *)(iVar2 + 0x10) * 0x1b + 1,0,0);
  }
  *(int *)(param_1 + 0x168) = iVar2;
  *(undefined2 *)(iVar2 + 0x5a) = 0xffff;
  local_4 = 0xffffffff;
  *(undefined1 *)(*(int *)(param_1 + 0x168) + 0x5d) = 0;
  pvVar1 = operator_new(0x72);
  local_4 = 1;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    iVar2 = FUN_00434930(400,*(int *)(iVar2 + 0x10) * 0x1e + 1,0,0x1e);
  }
  *(int *)(param_1 + 0x16c) = iVar2;
  *(undefined2 *)(iVar2 + 0x5a) = 0;
  local_4 = 0xffffffff;
  *(undefined1 *)(*(int *)(param_1 + 0x16c) + 0x5d) = 0;
  (*(code *)**(undefined4 **)(param_1 + 0xaa))();
  pvVar1 = operator_new(0x72);
  local_4 = 2;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    iVar2 = FUN_00434930(0x28,*(int *)(iVar2 + 0x10) * 6,0,0);
  }
  *(int *)(param_1 + 0x170) = iVar2;
  *(undefined2 *)(iVar2 + 0x5a) = 0xffff;
  local_4 = 0xffffffff;
  *(undefined1 *)(*(int *)(param_1 + 0x170) + 0x5d) = 0;
  pvVar1 = operator_new(0x72);
  local_4 = 3;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    iVar2 = FUN_00434930(0xcc,*(int *)(iVar2 + 0x10) * 0x11 + 1,0,0);
  }
  *(int *)(param_1 + 0x174) = iVar2;
  *(undefined1 *)(iVar2 + 0x5d) = 0;
  local_4 = 0xffffffff;
  *(undefined2 *)(*(int *)(param_1 + 0x174) + 0x5a) = 0xffff;
  pvVar1 = operator_new(0x56);
  local_4 = 4;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar5 = 0;
    iVar2 = DAT_00bd1bac;
    uVar3 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar3 = FUN_00437e60(0x1b8,0x96,0x1b8,0x78,uVar3,iVar2,uVar5);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x178) = uVar3;
  FUN_00438950(&DAT_0083baf4);
  pvVar1 = operator_new(0x3e);
  local_4 = 5;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00437040(200,300,1);
  }
  *(undefined4 *)(param_1 + 0x17c) = uVar3;
  local_4 = 0xffffffff;
  iVar4 = *(int *)(DAT_00bd1bac + 8) + -0x300 >> 1;
  iVar2 = *(int *)(DAT_00bd1bac + 4) + -0x400 >> 1;
  (**(code **)(**(int **)(param_1 + 0x16c) + 0x34))(iVar2 + 0x50,iVar4 + 0xb0);
  pvVar1 = (void *)(iVar4 + 0xd2);
  (**(code **)(**(int **)(param_1 + 0x168) + 0x34))(iVar2 + 0x224);
  (**(code **)(**(int **)(param_1 + 0x170) + 0x34))(iVar2 + 0x314,iVar4 + 0x98);
  (**(code **)(*(int *)(param_1 + 0xaa) + 4))();
  (**(code **)(**(int **)(param_1 + 0x174) + 0x34))(iVar2 + 0x314,iVar4 + 0x164);
  FUN_00438050(iVar2 + 0x40,iVar4 + 0x29c);
  FUN_00437580(iVar2 + 0x218,iVar4 + 0x84);
  ExceptionList = pvVar1;
  return;
}


