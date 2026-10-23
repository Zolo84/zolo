// FUN_0078e650 @ 78e650 size=86

undefined1 * __thiscall
FUN_0078e650(undefined1 *param_1,int param_2,undefined2 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined2 *puVar2;
  
  *param_1 = *param_4;
  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = 0;
  }
  puVar2 = operator_new(iVar1 * 2);
  *(undefined2 **)(param_1 + 4) = puVar2;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = *param_3;
    }
    puVar2 = puVar2 + 1;
  }
  iVar1 = *(int *)(param_1 + 4) + param_2 * 2;
  *(int *)(param_1 + 8) = iVar1;
  *(int *)(param_1 + 0xc) = iVar1;
  return param_1;
}


