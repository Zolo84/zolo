// FUN_0045af10 @ 45af10 size=78

void __thiscall FUN_0045af10(int param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  puVar3 = operator_new(0xc);
  if (puVar3 == (undefined2 *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    *(int *)(puVar3 + 1) = iVar1;
    *puVar3 = param_2;
    *(undefined4 *)(puVar3 + 3) = 0;
    *(undefined1 *)(puVar3 + 5) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  *(undefined2 **)(param_1 + 8) = puVar3;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  if (iVar2 != 0) {
    *(undefined2 **)(iVar1 + 6) = puVar3;
    return;
  }
  *(undefined2 **)(param_1 + 4) = puVar3;
  return;
}


