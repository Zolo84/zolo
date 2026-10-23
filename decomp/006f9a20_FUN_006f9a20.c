// FUN_006f9a20 @ 6f9a20 size=214

undefined4 __thiscall FUN_006f9a20(int param_1,undefined4 param_2)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007db0e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_0040f5a0();
  if (cVar1 == '\0') {
    pvVar2 = operator_new(0x68);
    local_4 = 0;
  }
  else {
    cVar1 = FUN_0040f920(param_2);
    if (cVar1 != '\0') {
      ExceptionList = local_c;
      return 1;
    }
    pvVar2 = operator_new(0x68);
    local_4 = 1;
  }
  if (pvVar2 != (void *)0x0) {
    uVar4 = 0x29a;
    uVar3 = FUN_0042b6c9(s_BZIP_DECOMPRESSION_FAILED_0086fb58);
    uVar3 = FUN_0043da60(uVar3,uVar4);
    *(undefined4 *)(param_1 + 0x220) = uVar3;
    ExceptionList = local_c;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x220) = 0;
  ExceptionList = local_c;
  return 0;
}


