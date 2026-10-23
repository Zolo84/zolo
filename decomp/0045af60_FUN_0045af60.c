// FUN_0045af60 @ 45af60 size=150

void __thiscall FUN_0045af60(int param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_3 != iVar1) {
    iVar1 = *(int *)(param_3 + 2);
    puVar3 = operator_new(0xc);
    if (puVar3 == (undefined2 *)0x0) {
      puVar3 = (undefined2 *)0x0;
    }
    else {
      *(int *)(puVar3 + 1) = iVar1;
      *puVar3 = param_2;
      *(int *)(puVar3 + 3) = param_3;
      *(undefined1 *)(puVar3 + 5) = 0;
    }
    *(undefined2 **)(param_3 + 2) = puVar3;
    if (iVar1 != 0) {
      *(undefined2 **)(iVar1 + 6) = puVar3;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    return;
  }
  puVar3 = operator_new(0xc);
  if (puVar3 == (undefined2 *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 0;
    *puVar3 = param_2;
    *(int *)(puVar3 + 3) = iVar1;
    *(undefined1 *)(puVar3 + 5) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  *(undefined2 **)(param_1 + 4) = puVar3;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  if (iVar2 != 0) {
    *(undefined2 **)(iVar1 + 2) = puVar3;
    return;
  }
  *(undefined2 **)(param_1 + 8) = puVar3;
  return;
}


