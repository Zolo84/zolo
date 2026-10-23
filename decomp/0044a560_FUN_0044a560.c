// FUN_0044a560 @ 44a560 size=138

undefined4 * __thiscall
FUN_0044a560(undefined4 *param_1,undefined2 param_2,uint param_3,undefined2 param_4,
            undefined1 param_5)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  
  uVar2 = param_3;
  puVar3 = operator_new(0x10);
  if (puVar3 == (undefined2 *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    puVar3[3] = 0;
    *(undefined1 *)(puVar3 + 2) = 0;
    *(undefined1 *)((int)puVar3 + 3) = 0;
    *(undefined1 *)(puVar3 + 1) = 0;
    puVar3[4] = 0;
    *(undefined4 *)(puVar3 + 5) = 0;
  }
  param_1[1] = puVar3;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *puVar3 = param_2;
  iVar1 = param_1[1];
  param_3 = param_3 & 0xff000000;
  *(uint *)(iVar1 + 8) = uVar2;
  *(undefined2 *)(iVar1 + 0xc) = param_4;
  iVar1 = param_1[1];
  *(uint *)(iVar1 + 2) = param_3;
  *(undefined2 *)(iVar1 + 6) = 0;
  *param_1 = &PTR_FUN_007e53f8;
  *(undefined1 *)(param_1[1] + 0xe) = param_5;
  return param_1;
}


