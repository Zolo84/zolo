// FUN_0042c3d0 @ 42c3d0 size=145

void FUN_0042c3d0(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 *local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007ba07b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = operator_new(10);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_24 = (undefined4 *)0x0;
  }
  else {
    local_24 = (undefined4 *)FUN_0042c890(param_1);
  }
  local_8 = 0xffffffff;
  *local_24 = param_2;
  *(undefined1 *)(local_24 + 2) = 0;
  FUN_0042c8c0(local_24);
  ExceptionList = local_10;
  return;
}


