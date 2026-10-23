// FUN_005b7cf0 @ 5b7cf0 size=266

undefined4 * __thiscall
FUN_005b7cf0(undefined4 *param_1,undefined2 param_2,undefined4 *param_3,undefined4 param_4,
            undefined2 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8,
            undefined2 param_9)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cc0e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x20);
  if (puVar2 == (undefined2 *)0x0) {
    puVar2 = (undefined2 *)0x0;
  }
  else {
    FUN_0042d2d0();
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
    puVar2[7] = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0;
    puVar2[0xd] = 0;
    *(undefined4 *)(puVar2 + 0xe) = 0;
  }
  param_1[1] = puVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_FUN_007ea63c;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *puVar2 = param_2;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 8) = *param_3;
  *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_3 + 1);
  local_4 = 0;
  puVar3 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 2) = *puVar3;
  *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar3 + 1);
  iVar1 = param_1[1];
  *param_1 = &PTR_FUN_007e9fbc;
  *(undefined4 *)(iVar1 + 0xe) = param_4;
  *(undefined2 *)(iVar1 + 0x12) = param_5;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x14) = param_6;
  *(undefined2 *)(iVar1 + 0x18) = param_7;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x1a) = param_8;
  *(undefined2 *)(iVar1 + 0x1e) = param_9;
  ExceptionList = local_c;
  return param_1;
}


