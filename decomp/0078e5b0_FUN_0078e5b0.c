// FUN_0078e5b0 @ 78e5b0 size=94

undefined1 * __thiscall
FUN_0078e5b0(undefined1 *param_1,int param_2,undefined4 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = *param_4;
  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = 0;
  }
  puVar2 = operator_new(iVar1 * 8);
  *(undefined4 **)(param_1 + 4) = puVar2;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
    }
    puVar2 = puVar2 + 2;
  }
  iVar1 = *(int *)(param_1 + 4) + param_2 * 8;
  *(int *)(param_1 + 8) = iVar1;
  *(int *)(param_1 + 0xc) = iVar1;
  return param_1;
}


