// FUN_00674190 @ 674190 size=246

int FUN_00674190(undefined1 *param_1)

{
  char cVar1;
  int local_3c [2];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d4988;
  local_c = ExceptionList;
  local_28[0] = *param_1;
  local_34 = 0;
  local_30 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  ExceptionList = &local_c;
  FUN_00674710(param_1,0,DAT_007f33d8);
  local_18 = local_34;
  local_14 = local_30;
  local_10 = 0;
  local_4 = 0;
  FUN_00675640(local_3c,local_28);
  if (local_24 == 0) {
    ExceptionList = local_c;
    return local_3c[0] + 0x1c;
  }
  cVar1 = *(char *)(local_24 + -1);
  if ((cVar1 != '\0') && (cVar1 != -1)) {
    *(char *)(local_24 + -1) = cVar1 + -1;
    ExceptionList = local_c;
    return local_3c[0] + 0x1c;
  }
  FUN_00796cd8((char *)(local_24 + -1));
  ExceptionList = local_c;
  return local_3c[0] + 0x1c;
}


