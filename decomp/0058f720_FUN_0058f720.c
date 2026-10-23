// FUN_0058f720 @ 58f720 size=185

void __fastcall FUN_0058f720(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007c9cf7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007eb380;
  param_1[2] = &PTR_LAB_007eb37c;
  iVar2 = 0;
  local_4 = 1;
  if (0 < *(int *)((int)param_1 + 0x32)) {
    do {
      if ((iVar2 < 0) || (*(int *)((int)param_1 + 0x36) <= iVar2)) {
        FUN_00405ad0(s_Array_bounds_violation__00857f9c);
        puVar1 = *(undefined4 **)((int)param_1 + 0x2e);
      }
      else {
        puVar1 = (undefined4 *)(*(int *)((int)param_1 + 0x2e) + iVar2 * 4);
      }
      FUN_00796cd8(*puVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)param_1 + 0x32));
  }
  local_4._0_1_ = 2;
  FUN_005837f0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00425b80();
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    param_1 = (undefined4 *)((int)param_1 + 0x2e);
  }
  FUN_00796cd8(*param_1);
  ExceptionList = local_c;
  return;
}


