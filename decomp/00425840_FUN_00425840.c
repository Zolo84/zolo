// FUN_00425840 @ 425840 size=97

void __thiscall FUN_00425840(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    cVar3 = (**(code **)(**(int **)(param_1 + 0x10) + 0x40))(param_2);
    iVar1 = *(int *)(param_1 + 0x10);
    if (cVar3 != '\0') {
      return;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
      puVar2 = *(undefined4 **)(param_1 + 0x10);
      if ((int)puVar2[2] < 1) {
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  *(int *)(param_1 + 0x10) = param_2;
  return;
}


