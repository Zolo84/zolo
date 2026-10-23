// FUN_004bfff0 @ 4bfff0 size=232

undefined4 * __thiscall
FUN_004bfff0(undefined4 *param_1,undefined2 param_2,undefined4 *param_3,undefined4 param_4,
            undefined2 param_5,undefined4 param_6,undefined2 param_7,undefined1 param_8,int *param_9
            )

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  ushort *puVar5;
  uint uStack_8;
  
  iVar3 = (**(code **)(*param_9 + 4))();
  puVar4 = operator_new(iVar3 * 4 + 0x28);
  param_1[1] = puVar4;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_FUN_007e7850;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *puVar4 = param_2;
  iVar3 = param_1[1];
  uStack_8 = uStack_8 & 0xff000000;
  *(undefined4 *)(iVar3 + 8) = *param_3;
  *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(param_3 + 1);
  iVar3 = param_1[1];
  *(uint *)(iVar3 + 2) = uStack_8;
  *(undefined2 *)(iVar3 + 6) = 0;
  *param_1 = &PTR_FUN_007e7830;
  *(undefined4 *)(param_1[1] + 0xe) = param_6;
  *(undefined2 *)(param_1[1] + 0x14) = param_7;
  iVar3 = param_1[1];
  *(undefined4 *)(iVar3 + 0x16) = param_4;
  *(undefined2 *)(iVar3 + 0x1a) = param_5;
  *(undefined1 *)(param_1[1] + 0x22) = param_8;
  iVar3 = param_1[1];
  puVar5 = (ushort *)(iVar3 + 0x1c);
  *puVar5 = 0;
  puVar2 = (undefined4 *)param_9[1];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    *(undefined4 *)(iVar3 + 0x1e + (uint)*puVar5 * 4) = *puVar2;
    *puVar5 = *puVar5 + 1;
    puVar2 = puVar1;
  }
  *(undefined1 *)((int)param_1 + 10) = 1;
  return param_1;
}


