// FUN_004c01e0 @ 4c01e0 size=224

undefined4 * __thiscall
FUN_004c01e0(undefined4 *param_1,undefined2 param_2,undefined4 *param_3,undefined4 param_4,
            undefined2 param_5,undefined4 param_6,undefined2 param_7)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bed7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x1c);
  local_4 = 0;
  if (puVar2 == (undefined2 *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    FUN_0042d6c0();
    puVar2[0xb] = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    puVar3 = puVar2;
  }
  param_1[1] = puVar3;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_FUN_007e7890;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *puVar3 = param_2;
  iVar1 = param_1[1];
  local_14 = (uint)puVar2 & 0xff000000;
  *(undefined4 *)(iVar1 + 8) = *param_3;
  *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_3 + 1);
  iVar1 = param_1[1];
  *(uint *)(iVar1 + 2) = local_14;
  *(undefined2 *)(iVar1 + 6) = 0;
  *param_1 = &PTR_FUN_007e7870;
  *(undefined4 *)(param_1[1] + 0xe) = param_6;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x16) = param_4;
  *(undefined2 *)(iVar1 + 0x1a) = param_5;
  *(undefined2 *)(param_1[1] + 0x14) = param_7;
  ExceptionList = local_c;
  return param_1;
}


