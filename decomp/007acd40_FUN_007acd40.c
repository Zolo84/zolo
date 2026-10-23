// FUN_007acd40 @ 7acd40 size=165

undefined4
FUN_007acd40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008008b8;
  puStack_10 = &LAB_007b0b7c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_007ad1b1();
  FUN_007ad1b1();
  iVar1 = FUN_007ad1b1();
  *(undefined4 *)(iVar1 + 0x6c) = param_1;
  iVar1 = FUN_007ad1b1();
  *(undefined4 *)(iVar1 + 0x70) = param_3;
  local_8 = 1;
  uVar2 = FUN_007a5ffb(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_007ace0d();
  ExceptionList = local_14;
  return uVar2;
}


