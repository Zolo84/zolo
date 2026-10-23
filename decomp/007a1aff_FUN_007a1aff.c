// FUN_007a1aff @ 7a1aff size=62

undefined2 * FUN_007a1aff(char *param_1)

{
  undefined2 uVar1;
  size_t sVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  
  sVar2 = _strlen(param_1);
  iVar4 = sVar2 + 1;
  puVar3 = operator_new(iVar4 * 2);
  puVar5 = puVar3;
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    uVar1 = FUN_0079c11f((int)*param_1);
    *puVar5 = uVar1;
    puVar5 = puVar5 + 1;
    param_1 = param_1 + 1;
  }
  return puVar3;
}


