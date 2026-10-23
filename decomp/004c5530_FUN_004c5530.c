// FUN_004c5530 @ 4c5530 size=349

undefined4 * __thiscall FUN_004c5530(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bf079;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x68);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_004bc800(0);
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    *(undefined1 *)(puVar1 + 0x18) = 0;
    puVar1[0x14] = &PTR_FUN_007e7b70;
    puVar1[0x19] = 0x3f000000;
    *puVar1 = &PTR_FUN_007e7b0c;
  }
  local_4 = 0xffffffff;
  puVar2 = operator_new(0x68);
  local_4 = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_004bc800(1);
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    *(undefined1 *)(puVar2 + 0x18) = 0;
    puVar2[0x14] = &PTR_FUN_007e7b70;
    puVar2[0x19] = 0x3f000000;
    *puVar2 = &PTR_FUN_007e7b0c;
  }
  local_4 = 0xffffffff;
  FUN_004b82e0(param_2,param_3,puVar2,puVar1);
  local_4 = 2;
  param_1[0x2d] = 0x3f800000;
  *param_1 = &PTR_FUN_007e7a84;
  param_1[2] = &PTR_LAB_007e7a70;
  param_1[0x1d] = 2;
  pvVar3 = operator_new(0x20);
  local_4._0_1_ = 3;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005826d0(&DAT_00857650,4,*(undefined4 *)(param_2 + 0x3f2),
                         *(undefined4 *)(param_2 + 0x3f6));
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[0x2c] = uVar4;
  FUN_00582940(uVar4);
  ExceptionList = local_c;
  return param_1;
}


