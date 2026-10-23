// FUN_0068f4e0 @ 68f4e0 size=499

undefined4 * __thiscall FUN_0068f4e0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d5108;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006a96f0(param_2);
  param_1[0xf] = &PTR_FUN_007e4c84;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x16] = &PTR_LAB_007f3fcc;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  FUN_007a8800((int)param_1 + 0x8a,0x12,10,&LAB_0068fa20,FUN_0068f780);
  local_4._0_1_ = 3;
  FUN_007a8800((int)param_1 + 0x13e,0x12,10,&LAB_00699e20,&LAB_00699e40);
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  param_1[0x82] = &PTR_FUN_007e7a0c;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  param_1[0x87] = &PTR_FUN_007e7b70;
  local_4._0_1_ = 6;
  FUN_00457e10();
  param_1[0x8c] = &PTR_FUN_007e7084;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  param_1[0x91] = &PTR_FUN_007e6eac;
  *(undefined4 *)((int)param_1 + 0x25a) = 0;
  *(undefined4 *)((int)param_1 + 0x25e) = 0;
  *(undefined4 *)((int)param_1 + 0x262) = 0;
  *(undefined1 *)((int)param_1 + 0x266) = 0;
  *(undefined ***)((int)param_1 + 0x256) = &PTR_LAB_007f3f9c;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  param_1[0x9d] = &PTR_LAB_007f3f6c;
  local_4 = CONCAT31(local_4._1_3_,10);
  *param_1 = &PTR_FUN_007f3d54;
  *(undefined1 *)((int)param_1 + 0x1f2) = 0;
  param_1[0x7d] = 0;
  param_1[0x7f] = 0;
  param_1[0x81] = 0;
  param_1[0x7e] = 0;
  param_1[0x80] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)((int)param_1 + 0x6e) = 0;
  *(undefined4 *)((int)param_1 + 0x7a) = 0;
  *(undefined4 *)((int)param_1 + 0x7e) = 0;
  *(undefined4 *)((int)param_1 + 0x86) = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)((int)param_1 + 0x6a) = 0;
  *(undefined4 *)((int)param_1 + 0x286) = 0;
  iVar3 = 0;
  *(undefined4 *)((int)param_1 + 0x28a) = 0;
  puVar2 = param_1 + 0xa4;
  *(undefined2 *)((int)param_1 + 0x28e) = 0;
  do {
    uVar1 = FUN_006982c0(0,iVar3);
    *puVar2 = uVar1;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 10);
  ExceptionList = local_c;
  return param_1;
}


