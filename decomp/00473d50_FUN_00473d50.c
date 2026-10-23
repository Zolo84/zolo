// FUN_00473d50 @ 473d50 size=224

undefined4 __thiscall FUN_00473d50(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  bVar5 = false;
  if (*(undefined4 **)(param_1 + 0x2a0) != (undefined4 *)0x0) {
    puVar6 = *(undefined4 **)(param_1 + 0x2a0);
    do {
      puVar7 = puVar6 + 2;
      if ((*(int *)((short *)*puVar6 + 1) == *(int *)(*(int *)(param_2 + 4) + 0x14)) &&
         (*(short *)*puVar6 == *(short *)(*(int *)(param_2 + 4) + 0x12))) {
        bVar5 = true;
      }
      puVar6 = (undefined4 *)*puVar7;
    } while ((undefined4 *)*puVar7 != (undefined4 *)0x0);
  }
  uVar2 = *(undefined4 *)(*(int *)(param_2 + 4) + 0xe);
  if (!bVar5) {
    puVar6 = operator_new(10);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      *(undefined2 *)puVar6 = 0;
      *(undefined4 *)((int)puVar6 + 2) = 0;
    }
    iVar3 = *(int *)(param_2 + 4);
    *puVar6 = *(undefined4 *)(iVar3 + 0x12);
    uVar1 = *(undefined2 *)(iVar3 + 0x16);
    *(undefined4 *)((int)puVar6 + 6) = uVar2;
    *(undefined2 *)(puVar6 + 1) = uVar1;
    iVar3 = *(int *)(param_1 + 0x2a4);
    puVar7 = operator_new(0xe);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *puVar7 = puVar6;
      puVar7[1] = iVar3;
      puVar7[2] = 0;
      *(undefined1 *)(puVar7 + 3) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x2a8);
    *(undefined4 **)(param_1 + 0x2a4) = puVar7;
    *(int *)(param_1 + 0x2a8) = iVar4 + 1;
    if (iVar4 != 0) {
      *(undefined4 **)(iVar3 + 8) = puVar7;
      return 3;
    }
    *(undefined4 **)(param_1 + 0x2a0) = puVar7;
  }
  return 3;
}


