// FUN_006fd940 @ 6fd940 size=229

void __fastcall FUN_006fd940(undefined4 *param_1)

{
  int iVar1;
  void *unaff_EDI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007db4d0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f84b4;
  param_1[2] = &PTR_LAB_007f84b0;
  iVar1 = param_1[3];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_0043fb30();
    FUN_00796cd8(iVar1);
  }
  if (*(undefined4 **)((int)param_1 + 0x22) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x22))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x26) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x26))(1);
  }
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  (**(code **)(**(int **)(*(int *)((int)param_1 + 0x2a) + 8) + 0x18))(0xfffffc18,0xfffffc18);
  (**(code **)(**(int **)(*(int *)((int)param_1 + 0x2a) + 0x18) + 0x18))(0xfffffc18,0xfffffc18);
  *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x2a) + 8) + 0x88) = 0xffffffff;
  *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x2a) + 0x18) + 0x88) = 0xffffffff;
  FUN_005837f0();
  FUN_00425b80();
  ExceptionList = unaff_EDI;
  return;
}


