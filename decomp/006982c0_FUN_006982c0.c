// FUN_006982c0 @ 6982c0 size=840

undefined4 * FUN_006982c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d562e;
  local_c = ExceptionList;
  switch(param_2) {
  case 0:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x10);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00698630(0,param_1);
      puVar1[3] = 0;
      *puVar1 = &PTR_LAB_007f47e0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 1:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x10);
    local_4 = 9;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00698650(param_1,1,0);
      *puVar1 = &PTR_LAB_007f4720;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 2:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x10);
    local_4 = 1;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00698630(2,param_1);
      puVar1[3] = 0;
      *puVar1 = &PTR_LAB_007f47c0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 3:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x10);
    local_4 = 8;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00698650(param_1,3,0);
      *puVar1 = &PTR_LAB_007f4740;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 4:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x10);
    local_4 = 2;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00698630(4,param_1);
      puVar1[3] = 0;
      *puVar1 = &PTR_LAB_007f47a0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 5:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x1a);
    local_4 = 3;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00698650(param_1,5,0);
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(undefined1 *)(puVar1 + 6) = 0;
      *puVar1 = &PTR_LAB_007f46a0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 6:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x1c);
    local_4 = 5;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00698650(param_1,6,0);
      puVar1[4] = 1;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *puVar1 = &PTR_FUN_007f4700;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 7:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x1a);
    local_4 = 4;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00698650(param_1,7,0);
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(undefined1 *)(puVar1 + 6) = 0;
      *puVar1 = &PTR_LAB_007f46e0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 8:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x14);
    local_4 = 6;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00698650(param_1,8,0x3f800000);
      puVar1[4] = 0;
      *puVar1 = &PTR_LAB_007f4780;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 9:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x14);
    local_4 = 7;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00698650(param_1,9,0x3f800000);
      puVar1[4] = 0;
      *puVar1 = &PTR_LAB_007f4760;
      ExceptionList = local_c;
      return puVar1;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


