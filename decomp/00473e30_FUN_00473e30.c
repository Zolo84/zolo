// FUN_00473e30 @ 473e30 size=166

undefined4 __thiscall FUN_00473e30(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  uVar2 = *(undefined4 *)(*(int *)(param_2 + 4) + 0xe);
  puVar6 = operator_new(10);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    *(undefined2 *)puVar6 = 0;
    *(undefined4 *)((int)puVar6 + 2) = 0;
    puVar7 = puVar6;
  }
  iVar3 = *(int *)(param_2 + 4);
  *puVar7 = *(undefined4 *)(iVar3 + 0x12);
  uVar1 = *(undefined2 *)(iVar3 + 0x16);
  *(undefined4 *)((int)puVar7 + 6) = uVar2;
  *(undefined2 *)(puVar7 + 1) = uVar1;
  iVar4 = *(int *)(*(int *)(param_2 + 4) + 0x18);
  iVar3 = param_1 + 0x2ae + iVar4 * 0x12;
  iVar4 = *(int *)(param_1 + 0x2b6 + iVar4 * 0x12);
  puVar6 = operator_new(0xe);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = puVar7;
    puVar6[1] = iVar4;
    puVar6[2] = 0;
    *(undefined1 *)(puVar6 + 3) = 0;
  }
  iVar5 = *(int *)(iVar3 + 0xc);
  *(undefined4 **)(iVar3 + 8) = puVar6;
  *(int *)(iVar3 + 0xc) = iVar5 + 1;
  if (iVar5 != 0) {
    *(undefined4 **)(iVar4 + 8) = puVar6;
    return 3;
  }
  *(undefined4 **)(iVar3 + 4) = puVar6;
  return 3;
}


