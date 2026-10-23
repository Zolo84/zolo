// FUN_0048f270 @ 48f270 size=234

undefined4 * __thiscall
FUN_0048f270(undefined4 *param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7,undefined1 param_8,undefined1 param_9
            ,undefined1 param_10,undefined1 param_11)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  
  iVar2 = (**(code **)(*param_7 + 4))();
  puVar3 = operator_new(iVar2 * 4 + 0x24);
  param_1[1] = puVar3;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_FUN_007e6d88;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *puVar3 = param_2;
  iVar2 = param_1[1];
  *(undefined4 *)(iVar2 + 8) = param_3;
  *(undefined2 *)(iVar2 + 0xc) = param_4;
  puVar4 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
  iVar2 = param_1[1];
  *(undefined4 *)(iVar2 + 2) = *puVar4;
  *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(puVar4 + 1);
  *param_1 = &PTR_FUN_007e6d68;
  *(undefined1 *)((int)param_1 + 10) = 1;
  *(undefined4 *)(param_1[1] + 0xe) = param_5;
  *(undefined1 *)(param_1[1] + 0x16) = param_9;
  *(undefined1 *)(param_1[1] + 0x17) = param_8;
  *(undefined1 *)(param_1[1] + 0x18) = param_10;
  *(undefined4 *)(param_1[1] + 0x12) = param_6;
  *(undefined1 *)(param_1[1] + 0x19) = param_11;
  iVar2 = param_1[1];
  puVar5 = (ushort *)(iVar2 + 0x1a);
  *puVar5 = 0;
  puVar4 = (undefined4 *)param_7[1];
  while (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar4[2];
    *(undefined4 *)(iVar2 + 0x1c + (uint)*puVar5 * 4) = *puVar4;
    *puVar5 = *puVar5 + 1;
    puVar4 = puVar1;
  }
  return param_1;
}


