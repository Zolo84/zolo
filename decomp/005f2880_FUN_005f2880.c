// FUN_005f2880 @ 5f2880 size=83

void __thiscall FUN_005f2880(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  puVar3 = operator_new(0x12);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[2] = 0;
    *puVar3 = param_2;
    puVar3[1] = param_3;
    puVar3[3] = iVar1;
    *(undefined1 *)(puVar3 + 4) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 4) = puVar3;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar1 + 8) = puVar3;
    return;
  }
  *(undefined4 **)(param_1 + 8) = puVar3;
  return;
}


