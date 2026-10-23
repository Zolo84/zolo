// FUN_00566590 @ 566590 size=247

undefined4 * __thiscall
FUN_00566590(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c6d3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x9a);
  local_4 = 0;
  if (puVar2 == (undefined2 *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    FUN_0042d2d0();
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
    puVar3 = puVar2;
  }
  param_1[1] = puVar3;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_FUN_007e953c;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *puVar3 = 2;
  iVar1 = param_1[1];
  local_14 = (uint)puVar2 & 0xff000000;
  *(undefined4 *)(iVar1 + 8) = DAT_0088f29c;
  *(undefined2 *)(iVar1 + 0xc) = DAT_0088f2a0;
  iVar1 = param_1[1];
  *(uint *)(iVar1 + 2) = local_14;
  *(undefined2 *)(iVar1 + 6) = 0;
  *param_1 = &PTR_FUN_007e951c;
  *(undefined4 *)(param_1[1] + 0xe) = param_2;
  wsprintfA((LPSTR)(param_1[1] + 0x12),&DAT_0083a374,param_3);
  *(undefined4 *)(param_1[1] + 0x92) = param_4;
  *(undefined4 *)(param_1[1] + 0x96) = param_5;
  ExceptionList = local_c;
  return param_1;
}


