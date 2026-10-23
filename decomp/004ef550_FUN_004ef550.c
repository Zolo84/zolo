// FUN_004ef550 @ 4ef550 size=226

undefined4 * __thiscall FUN_004ef550(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c0228;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005197b0();
  uVar6 = 1;
  uVar5 = 10;
  *(undefined2 *)(param_1 + 0xa6) = 0;
  *(undefined4 *)((int)param_1 + 0x29a) = 0;
  uVar4 = 0;
  *param_1 = &PTR_FUN_007e81dc;
  param_1[2] = &PTR_LAB_007e81d8;
  param_1[5] = &PTR_LAB_007e81c4;
  *(undefined ***)((int)param_1 + 0x1e) = &PTR_FUN_007e81bc;
  *(undefined ***)((int)param_1 + 0x22) = &PTR_LAB_007e818c;
  param_1[0x92] = param_2;
  uVar3 = 0xc;
  local_4 = 0;
  uVar1 = FUN_0044a720(0xc,0,10,1);
  FUN_00418530(uVar1,uVar3,uVar4,uVar5,uVar6);
  *(undefined4 *)((int)param_1 + 0x2a6) = 0;
  param_1[0x90] = 0;
  puVar2 = operator_new(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    *puVar2 = &PTR_FUN_007e4c84;
  }
  param_1[0xa5] = puVar2;
  (**(code **)(**(int **)((int)param_1 + 0x152) + 0x2c))(s_gfx_air_bmp_00848fc0);
  *(undefined4 *)((int)param_1 + 0x29e) = 0;
  *(undefined4 *)((int)param_1 + 0x2a2) = 0;
  ExceptionList = param_1;
  return param_1;
}


