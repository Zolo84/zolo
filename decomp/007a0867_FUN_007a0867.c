// FUN_007a0867 @ 7a0867 size=66

int __thiscall FUN_007a0867(int param_1,undefined2 *param_2,int param_3)

{
  char cVar1;
  undefined2 *puVar2;
  int iVar3;
  
  cVar1 = FUN_007a0a73(param_3,1);
  if (cVar1 != '\0') {
    puVar2 = *(undefined2 **)(param_1 + 4);
    for (iVar3 = param_3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = *param_2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    *(int *)(param_1 + 8) = param_3;
    *(undefined2 *)(*(int *)(param_1 + 4) + param_3 * 2) = 0;
  }
  return param_1;
}


