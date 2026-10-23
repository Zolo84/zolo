// FUN_00425f10 @ 425f10 size=76

void __thiscall FUN_00425f10(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  puVar3 = operator_new(0xe);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = iVar1;
    *puVar3 = param_2;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 8) = puVar3;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar1 + 8) = puVar3;
    return;
  }
  *(undefined4 **)(param_1 + 4) = puVar3;
  return;
}


