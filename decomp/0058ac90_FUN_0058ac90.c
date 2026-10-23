// FUN_0058ac90 @ 58ac90 size=200

void __fastcall FUN_0058ac90(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_007c980d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e6cc0;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007e6ca4;
  param_1[2] = &PTR_LAB_007e6cac;
  local_4 = 2;
  if (*(undefined4 **)((int)param_1 + 0x22) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x22))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x26) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x26))(1);
  }
  *(undefined ***)((int)param_1 + 0x3a77a) = &PTR_LAB_007e3ff0;
  iVar2 = *(int *)((int)param_1 + 0x3a77e);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)param_1 + 0x3a77e) = 0;
  *(undefined4 *)((int)param_1 + 0x3a782) = 0;
  *(undefined4 *)((int)param_1 + 0x3a786) = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_00428ca0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


