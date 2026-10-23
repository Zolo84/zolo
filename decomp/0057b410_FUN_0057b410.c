// FUN_0057b410 @ 57b410 size=184

undefined4 __thiscall FUN_0057b410(int param_1,int param_2)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c8a0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  if ((*(char *)(param_1 + 0x37b) != '\0') && (param_2 == *(int *)(param_1 + 900))) {
    pvVar1 = operator_new(0xc);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      FUN_0057e240(300,&DAT_0088f254,0xffffffff,1);
    }
    local_4 = 0xffffffff;
    FUN_00565ca0();
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x3ac) >> 8),*(int *)(param_1 + 0x3ac) == 0);
}


