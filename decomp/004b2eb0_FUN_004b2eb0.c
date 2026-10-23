// FUN_004b2eb0 @ 4b2eb0 size=200

void __thiscall FUN_004b2eb0(int param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = operator_new(0x18);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *(undefined2 *)puVar4 = 0;
    *(undefined4 *)((int)puVar4 + 2) = 0;
    *(undefined2 *)((int)puVar4 + 10) = 0;
    *(undefined1 *)(puVar4 + 2) = 0;
    *(undefined1 *)((int)puVar4 + 7) = 0;
    *(undefined1 *)((int)puVar4 + 6) = 0;
  }
  iVar2 = DAT_00893530;
  *(undefined4 *)((int)puVar4 + 6) = *(undefined4 *)(DAT_00893530 + 0x14);
  *(undefined2 *)((int)puVar4 + 10) = *(undefined2 *)(iVar2 + 0x18);
  *puVar4 = *(undefined4 *)(param_2 + 0x10);
  uVar1 = *(undefined2 *)(param_2 + 0x14);
  puVar4[3] = 0xffffffff;
  *(undefined2 *)(puVar4 + 1) = uVar1;
  puVar4[5] = param_3;
  puVar4[4] = 0xffffffff;
  puVar5 = operator_new(8);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = puVar4;
    puVar5[1] = 0;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  puVar4 = operator_new(0xe);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = puVar5;
    puVar4[1] = iVar2;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  *(undefined4 **)(param_1 + 0xc) = puVar4;
  *(int *)(param_1 + 0x10) = iVar3 + 1;
  if (iVar3 != 0) {
    *(undefined4 **)(iVar2 + 8) = puVar4;
    return;
  }
  *(undefined4 **)(param_1 + 8) = puVar4;
  return;
}


