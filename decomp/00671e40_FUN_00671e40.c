// FUN_00671e40 @ 671e40 size=95

void FUN_00671e40(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_007d4666;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_00527230();
  local_4 = local_4 & 0xffffff00;
  FUN_00669740();
  local_4 = 0xffffffff;
  FUN_006a9770();
  ExceptionList = local_c;
  return;
}


