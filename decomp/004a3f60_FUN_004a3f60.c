// FUN_004a3f60 @ 4a3f60 size=168

undefined4 FUN_004a3f60(void)

{
  int iVar1;
  int iVar2;
  undefined **local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007bdec8;
  local_c = ExceptionList;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_20 = &PTR_FUN_007e5258;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004a3650(&local_20);
  local_20 = &PTR_LAB_007e3ff0;
  iVar2 = local_1c;
  if (local_14 == 0) {
    local_14 = 0;
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_00796cd8(iVar2);
      iVar2 = iVar1;
    }
    ExceptionList = local_c;
    return 0;
  }
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  ExceptionList = local_c;
  return 1;
}


