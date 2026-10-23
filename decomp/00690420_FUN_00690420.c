// FUN_00690420 @ 690420 size=76

void FUN_00690420(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d52c8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00527230();
  local_4 = 0xffffffff;
  FUN_0069aec0();
  ExceptionList = local_c;
  return;
}


