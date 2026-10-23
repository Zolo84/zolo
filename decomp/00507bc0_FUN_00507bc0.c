// FUN_00507bc0 @ 507bc0 size=206

undefined4 * __thiscall FUN_00507bc0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c1588;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005197b0();
  uVar5 = 1;
  uVar4 = 10;
  uVar3 = 0;
  *param_1 = &PTR_FUN_007e85c0;
  param_1[2] = &PTR_LAB_007e85bc;
  param_1[5] = &PTR_LAB_007e85a8;
  *(undefined ***)((int)param_1 + 0x1e) = &PTR_FUN_007e85a0;
  *(undefined ***)((int)param_1 + 0x22) = &PTR_LAB_007e8570;
  param_1[0x92] = param_2;
  uVar2 = 0;
  local_4 = 0;
  uVar1 = FUN_0044a720(0,0,10,1);
  FUN_00418530(uVar1,uVar2,uVar3,uVar4,uVar5);
  *(undefined4 *)((int)param_1 + 0x2aa) = 0;
  *(undefined4 *)((int)param_1 + 0x2a6) = 0;
  *(undefined4 *)((int)param_1 + 0x2a2) = 0;
  *(undefined4 *)((int)param_1 + 0x29e) = 0;
  *(undefined4 *)((int)param_1 + 0x2b2) = 0;
  *(undefined4 *)((int)param_1 + 0x2ae) = 0;
  param_1[0x90] = 0;
  (**(code **)(**(int **)((int)param_1 + 0x152) + 0x2c))(s_gfx_army_bmp_0084a0b4);
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  *(undefined1 *)(param_1 + 0xa7) = 0;
  ExceptionList = param_1;
  return param_1;
}


