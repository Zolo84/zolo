// FUN_0065f320 @ 65f320 size=269

undefined4 * __thiscall FUN_0065f320(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_stack_ffffffcc;
  uint local_1c [2];
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d3838;
  local_c = ExceptionList;
  local_1c[0] = local_1c[0] & 0xff000000;
  ExceptionList = &local_c;
  FUN_0065cdb0(local_1c[0],in_stack_ffffffcc & 0xffff0000);
  local_4 = 0;
  *param_1 = &PTR_FUN_007f0bac;
  param_1[2] = &PTR_LAB_007f0ba8;
  puVar1 = (undefined4 *)FUN_004d7870(local_1c,param_2);
  param_1[9] = *puVar1;
  uVar3 = puVar1[1];
  param_1[10] = uVar3;
  puVar2 = (undefined4 *)FUN_004e2be0(local_14,param_1[9],uVar3);
  iVar4 = 10;
  param_1[9] = *puVar2;
  puVar1 = param_1 + 0x15;
  uVar3 = puVar2[1];
  *(undefined1 *)((int)param_1 + 0x16) = 1;
  param_1[10] = uVar3;
  puVar2 = param_1 + 0xb;
  do {
    uVar3 = __ftol();
    *puVar2 = uVar3;
    puVar2 = puVar2 + 1;
    *(undefined1 *)puVar1 = 0;
    iVar4 = iVar4 + -1;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  } while (0 < iVar4);
  if (param_3 != 0) {
    iVar4 = *(int *)(DAT_00893530 + 8);
    *(undefined1 *)((int)param_1 + 0x16) = 0;
    *(int *)((int)param_1 + 0x12) = iVar4 + param_3 * 0x46;
  }
  ExceptionList = local_c;
  return param_1;
}


