// FUN_0047b310 @ 47b310 size=254

undefined4 * __thiscall
FUN_0047b310(undefined4 *param_1,undefined2 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined2 param_6,undefined4 param_7)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bd14b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x20);
  local_4 = 0;
  if (puVar2 == (undefined2 *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    FUN_0042d6c0();
    puVar2[7] = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0;
    puVar3 = puVar2;
  }
  param_1[1] = puVar3;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_FUN_007e6160;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *puVar3 = param_2;
  iVar1 = param_1[1];
  local_14 = (uint)puVar2 & 0xff000000;
  *(undefined4 *)(iVar1 + 8) = *param_3;
  *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_3 + 1);
  iVar1 = param_1[1];
  *(uint *)(iVar1 + 2) = local_14;
  *(undefined2 *)(iVar1 + 6) = 0;
  iVar1 = param_1[1];
  *param_1 = &PTR_FUN_007e6140;
  *(undefined4 *)(iVar1 + 0xe) = *param_4;
  *(undefined2 *)(iVar1 + 0x12) = *(undefined2 *)(param_4 + 1);
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x14) = *param_5;
  *(undefined2 *)(iVar1 + 0x18) = *(undefined2 *)(param_5 + 1);
  *(undefined2 *)(param_1[1] + 0x1a) = param_6;
  *(undefined4 *)(param_1[1] + 0x1c) = param_7;
  ExceptionList = local_c;
  return param_1;
}


