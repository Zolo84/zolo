// FUN_004638c0 @ 4638c0 size=169

undefined4 * __thiscall
FUN_004638c0(undefined4 *param_1,undefined2 param_2,uint param_3,undefined2 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  int iVar1;
  undefined2 *puVar2;
  
  puVar2 = operator_new(0x1c);
  if (puVar2 == (undefined2 *)0x0) {
    puVar2 = (undefined2 *)0x0;
  }
  else {
    FUN_0042d2d0();
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
  }
  param_1[1] = puVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *puVar2 = param_2;
  iVar1 = param_1[1];
  *(uint *)(iVar1 + 8) = param_3;
  param_3 = param_3 & 0xff000000;
  *(undefined2 *)(iVar1 + 0xc) = param_4;
  iVar1 = param_1[1];
  *(uint *)(iVar1 + 2) = param_3;
  *(undefined2 *)(iVar1 + 6) = 0;
  *param_1 = &PTR_FUN_007e6534;
  *(undefined4 *)(param_1[1] + 0x16) = param_5;
  *(undefined4 *)(param_1[1] + 0xe) = param_6;
  *(undefined4 *)(param_1[1] + 0x12) = param_7;
  *(undefined1 *)(param_1[1] + 0x1a) = param_8;
  return param_1;
}


