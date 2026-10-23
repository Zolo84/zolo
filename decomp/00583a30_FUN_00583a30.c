// FUN_00583a30 @ 583a30 size=97

void FUN_00583a30(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c8f4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x534);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    DAT_00bd1bb4 = 0;
  }
  else {
    DAT_00bd1bb4 = FUN_00579ed0(pvVar1);
  }
  local_4 = 0xffffffff;
  FUN_0057a470();
  ExceptionList = local_c;
  return;
}


