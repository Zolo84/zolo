// FUN_00442b90 @ 442b90 size=100

void __fastcall FUN_00442b90(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_007e48a4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  puVar1 = (undefined4 *)((int)param_1 + 0x42);
  iVar2 = 5;
  do {
    puVar1[-5] = 0xffffffff;
    *puVar1 = 0xffffffff;
    puVar1[5] = 0xffffffff;
    puVar1[10] = 0xffffffff;
    puVar1[0xf] = 0xffffffff;
    puVar1[0x14] = 0xffffffff;
    puVar1[0x19] = 0xffffffff;
    puVar1[0x1e] = 0xffffffff;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)((int)param_1 + 0xce) = 0;
  *(undefined1 *)((int)param_1 + 0xd2) = 0;
  return;
}


