// FUN_00691870 @ 691870 size=150

undefined4 * __thiscall FUN_00691870(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  uint local_8;
  
  puVar2 = operator_new(0x12);
  if (puVar2 == (undefined2 *)0x0) {
    puVar2 = (undefined2 *)0x0;
  }
  else {
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    *(undefined1 *)((int)puVar2 + 3) = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
  }
  param_1[1] = puVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_FUN_007ea67c;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *puVar2 = 0xb4;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 8) = *param_2;
  local_8 = local_8 & 0xff000000;
  *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_2 + 1);
  iVar1 = param_1[1];
  *(uint *)(iVar1 + 2) = local_8;
  *(undefined2 *)(iVar1 + 6) = 0;
  *param_1 = &PTR_FUN_007e9c1c;
  *(undefined4 *)(param_1[1] + 0xe) = param_3;
  return param_1;
}


