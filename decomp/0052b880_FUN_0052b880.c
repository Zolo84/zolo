// FUN_0052b880 @ 52b880 size=190

undefined4 __thiscall FUN_0052b880(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  FUN_00416f90(param_2);
  iVar2 = FUN_0051c480();
  if (iVar2 != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x2c))();
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x9c) + 0x2aa) + 4))();
      if (0 < iVar2) {
        (**(code **)(**(int **)(param_1 + 0xa0) + 0x38))(2);
        (**(code **)(**(int **)(param_1 + 0xa0) + 0x18))
                  (*(int *)(param_1 + 0x86) + 6 + *(int *)(param_1 + 0x1a),
                   *(undefined4 *)(param_1 + 0x8a));
        (**(code **)(**(int **)(param_1 + 0xa0) + 0x10))(param_2);
      }
    }
  }
  cVar1 = FUN_0051cc00();
  if (cVar1 != '\0') {
    (**(code **)(**(int **)(param_1 + 0xa4) + 0x18))
              (*(int *)(param_1 + 0x86) + 6 + *(int *)(param_1 + 0x1a),
               *(undefined4 *)(param_1 + 0x8a));
    (**(code **)(**(int **)(param_1 + 0xa4) + 0x10))(param_2);
  }
  return 0;
}


