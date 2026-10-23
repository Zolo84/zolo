// FUN_00753750 @ 753750 size=266

void FUN_00753750(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007dfe86;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x2c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)(puVar1 + 1) = *param_3;
    FUN_00674910(0);
    FUN_00674710(param_3,0,DAT_007f33d8);
    local_4 = CONCAT31(local_4._1_3_,1);
    *(undefined1 *)(puVar1 + 5) = *param_2;
    FUN_00674910(0);
    FUN_00674710(param_2,0,DAT_007f33d8);
    puVar1[9] = 0;
    puVar1[10] = param_4;
    *puVar1 = &PTR_FUN_007fa230;
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00758d30(puVar1);
  if (iVar2 == 0) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *param_1 = 0xc;
    param_1[1] = 0;
    ExceptionList = local_c;
    return;
  }
  *param_1 = 0;
  param_1[1] = puVar1;
  ExceptionList = local_c;
  return;
}


