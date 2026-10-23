// FUN_004b7e20 @ 4b7e20 size=157

undefined4 * __thiscall FUN_004b7e20(undefined4 *param_1,undefined2 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  uint local_8;
  
  puVar2 = operator_new(0x26);
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
    puVar2[0xf] = 0;
    *(undefined1 *)(puVar2 + 0xe) = 0;
    *(undefined1 *)((int)puVar2 + 0x1b) = 0;
    *(undefined1 *)(puVar2 + 0xd) = 0;
    puVar2[0x10] = 0;
    *(undefined4 *)(puVar2 + 0x11) = 0;
  }
  param_1[1] = puVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_FUN_007e7530;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *puVar2 = param_2;
  iVar1 = param_1[1];
  local_8 = local_8 & 0xff000000;
  *(undefined4 *)(iVar1 + 8) = *param_3;
  *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_3 + 1);
  iVar1 = param_1[1];
  *(uint *)(iVar1 + 2) = local_8;
  *(undefined2 *)(iVar1 + 6) = 0;
  return param_1;
}


