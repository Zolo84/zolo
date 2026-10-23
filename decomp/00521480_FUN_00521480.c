// FUN_00521480 @ 521480 size=181

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00521480(undefined4 *param_1,undefined4 *param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  uint local_8;
  
  puVar2 = operator_new(0x16);
  if (puVar2 == (undefined2 *)0x0) {
    puVar2 = (undefined2 *)0x0;
  }
  else {
    FUN_0042d2d0();
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
    puVar2[7] = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
  }
  param_1[1] = puVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_FUN_007e78f0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *puVar2 = 0x3c;
  iVar1 = param_1[1];
  local_8 = local_8 & 0xff000000;
  *(undefined4 *)(iVar1 + 8) = _DAT_0088f24c;
  *(undefined2 *)(iVar1 + 0xc) = DAT_0088f24e._2_2_;
  iVar1 = param_1[1];
  *(uint *)(iVar1 + 2) = local_8;
  *(undefined2 *)(iVar1 + 6) = 0;
  iVar1 = param_1[1];
  *param_1 = &PTR_FUN_007e7784;
  *(undefined4 *)(iVar1 + 0xe) = *param_2;
  *(undefined2 *)(iVar1 + 0x12) = *(undefined2 *)(param_2 + 1);
  *(undefined2 *)(iVar1 + 0x14) = param_3;
  return param_1;
}


