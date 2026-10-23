// FUN_0066d0c0 @ 66d0c0 size=158

void __thiscall FUN_0066d0c0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_0066cf80(param_2);
  puVar3 = operator_new(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = param_2;
    puVar3[1] = *param_3;
    *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(param_3 + 1);
    *(undefined2 *)((int)puVar3 + 0xe) = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
    *(undefined1 *)((int)puVar3 + 0xb) = 0;
    *(undefined1 *)((int)puVar3 + 10) = 0;
    puVar3[4] = 0;
  }
  iVar1 = *(int *)(param_1 + 0x30da2);
  puVar4 = operator_new(0xe);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = puVar3;
    puVar4[1] = iVar1;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x30da6);
  *(undefined4 **)(param_1 + 0x30da2) = puVar4;
  *(int *)(param_1 + 0x30da6) = iVar2 + 1;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar1 + 8) = puVar4;
    return;
  }
  *(undefined4 **)(param_1 + 0x30d9e) = puVar4;
  return;
}


