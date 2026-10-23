// FUN_004440e0 @ 4440e0 size=122

undefined4 * __fastcall FUN_004440e0(int *param_1)

{
  undefined4 *puVar1;
  float10 fVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bb3fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x10);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    fVar2 = (float10)(**(code **)(*param_1 + 0xc))();
    puVar1[3] = (float)fVar2;
    puVar1[1] = 5;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_007e48ac;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


