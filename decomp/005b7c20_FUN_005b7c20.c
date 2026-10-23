// FUN_005b7c20 @ 5b7c20 size=208

undefined4 * __thiscall
FUN_005b7c20(undefined4 *param_1,undefined2 param_2,undefined4 *param_3,undefined4 param_4,
            undefined2 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8)

{
  int iVar1;
  undefined2 *puVar2;
  uint local_8;
  
  puVar2 = operator_new(0x1e);
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
  }
  param_1[1] = puVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_FUN_007ea01c;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *puVar2 = param_2;
  iVar1 = param_1[1];
  local_8 = local_8 & 0xff000000;
  *(undefined4 *)(iVar1 + 8) = *param_3;
  *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_3 + 1);
  iVar1 = param_1[1];
  *(uint *)(iVar1 + 2) = local_8;
  *(undefined2 *)(iVar1 + 6) = 0;
  iVar1 = param_1[1];
  *param_1 = &PTR_FUN_007e9ffc;
  *(undefined4 *)(iVar1 + 0xe) = param_4;
  *(undefined2 *)(iVar1 + 0x12) = param_5;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x14) = param_6;
  *(undefined2 *)(iVar1 + 0x18) = param_7;
  *(undefined4 *)(param_1[1] + 0x1a) = param_8;
  return param_1;
}


