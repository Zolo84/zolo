// FUN_004e4700 @ 4e4700 size=140

void __thiscall FUN_004e4700(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x1aa) == 0) {
    puVar4 = operator_new(0x14);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(undefined1 *)(puVar4 + 4) = 0;
      *(undefined1 *)((int)puVar4 + 0x12) = 0;
      *puVar4 = &PTR_FUN_007e80e4;
    }
    *(undefined4 **)(param_1 + 0x1aa) = puVar4;
    *(undefined1 *)((int)puVar4 + 0x12) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x1aa);
  iVar2 = *(int *)(iVar1 + 4);
  puVar4 = operator_new(0xe);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = 0;
    *puVar4 = param_2;
    puVar4[2] = iVar2;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  iVar3 = *(int *)(iVar1 + 0xc);
  *(undefined4 **)(iVar1 + 4) = puVar4;
  *(int *)(iVar1 + 0xc) = iVar3 + 1;
  if (iVar3 != 0) {
    *(undefined4 **)(iVar2 + 4) = puVar4;
    return;
  }
  *(undefined4 **)(iVar1 + 8) = puVar4;
  return;
}


