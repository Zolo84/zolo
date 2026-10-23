// FUN_004a3350 @ 4a3350 size=77

undefined4 __thiscall FUN_004a3350(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x3350) != 0) {
    iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x3350) + 0x22) + 4))();
    if (0 < iVar2) {
      iVar2 = *(int *)(param_1 + 6);
      iVar3 = FUN_00584c90();
      if (iVar3 == iVar2) {
        cVar1 = FUN_00584e20(param_2);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}


