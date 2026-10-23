// FUN_00411bb3 @ 411bb3 size=331

void __fastcall FUN_00411bb3(undefined4 *param_1)

{
  int iVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007b99eb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_007e35c0;
  local_8 = 0;
  if (param_1[3] != 0) {
    FUN_00796cd8(param_1[3]);
  }
  for (local_14 = 0; local_14 < 0x100; local_14 = local_14 + 1) {
    if ((*(int *)(param_1[2] + local_14 * 4) != 0) &&
       (iVar1 = *(int *)(param_1[2] + local_14 * 4), iVar1 != 0)) {
      FUN_00411230();
      FUN_00796cd8(iVar1);
    }
  }
  for (local_14 = 0; local_14 < 0x100; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 5] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 5])(1);
    }
  }
  if (param_1[2] != 0) {
    FUN_00796cd8(param_1[2]);
  }
  local_8 = 0xffffffff;
  FUN_005837f0();
  ExceptionList = local_10;
  return;
}


