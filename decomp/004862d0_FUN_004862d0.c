// FUN_004862d0 @ 4862d0 size=334

undefined4 * __fastcall FUN_004862d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bd6a1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425b20();
  local_4 = 0;
  FUN_00428b00();
  puVar2 = (undefined4 *)((int)param_1 + 0x2e);
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007e4068;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x17) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined ***)((int)param_1 + 0x2a) = &PTR_LAB_007e4068;
  puVar3 = (undefined4 *)((int)param_1 + 0x32);
  local_14 = 0x158;
  do {
    *puVar2 = &PTR_FUN_007e6cdc;
    puVar4 = puVar3;
    for (iVar1 = 0x56; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puVar2 = puVar2 + 0x57;
    puVar3 = puVar3 + 0x57;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  puVar3 = (undefined4 *)((int)param_1 + 0x1d3d6);
  *(undefined4 *)((int)param_1 + 0x1d3ce) = 0;
  *(undefined ***)((int)param_1 + 0x2a) = &PTR_FUN_007e6cd0;
  *(undefined ***)((int)param_1 + 0x1d3d2) = &PTR_LAB_007e4068;
  puVar2 = (undefined4 *)((int)param_1 + 0x1d3da);
  local_14 = 0x158;
  do {
    *puVar3 = &PTR_FUN_007e6cdc;
    puVar4 = puVar2;
    for (iVar1 = 0x56; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puVar3 = puVar3 + 0x57;
    puVar2 = puVar2 + 0x57;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  *(undefined4 *)((int)param_1 + 0x3a776) = 0;
  *(undefined ***)((int)param_1 + 0x1d3d2) = &PTR_FUN_007e6cd0;
  *(undefined4 *)((int)param_1 + 0x3a77e) = 0;
  *(undefined4 *)((int)param_1 + 0x3a782) = 0;
  *(undefined4 *)((int)param_1 + 0x3a786) = 0;
  *(undefined1 *)((int)param_1 + 0x3a78a) = 0;
  *(undefined ***)((int)param_1 + 0x3a77a) = &PTR_FUN_007e5258;
  local_4 = CONCAT31(local_4._1_3_,2);
  *param_1 = &PTR_FUN_007e6cc0;
  param_1[2] = &PTR_LAB_007e6cac;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007e6ca4;
  FUN_00428d60(&stack0x00000004);
  ExceptionList = local_c;
  return param_1;
}


