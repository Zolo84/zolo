// FUN_006ad240 @ 6ad240 size=104

void FUN_006ad240(int param_1)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = FUN_0042e980();
  if (cVar2 != '\0') {
    if (*(int **)(param_1 + 500) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 500) + 0x1a8))(param_1);
    }
    FUN_006ad4e0(6,&LAB_006ade60,param_1);
    if (*(int *)(param_1 + 500) == 0) {
      cVar2 = (**(code **)(**(int **)(param_1 + 0x248) + 0x1c))();
      if ((cVar2 != '\0') &&
         (piVar1 = *(int **)(*(int *)(param_1 + 0x248) + 0x13c84),
         *(char *)((int)piVar1 + 0xe) != '\0')) {
        (**(code **)(*piVar1 + 0x1a8))(param_1);
      }
    }
  }
  return;
}


