// FUN_006dbb40 @ 6dbb40 size=238

void __thiscall FUN_006dbb40(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0x6c) == '\0') {
    if (*(int *)(param_1 + 0x72) == 0) goto LAB_006dbbb3;
    (**(code **)(**(int **)(param_1 + 0x58) + 0x18))(0xcc,0xe5);
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x18))(0x8e,0xe5);
    (**(code **)(**(int **)(param_1 + 0x58) + 0x10))(param_2);
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x10))(param_2);
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x10))(param_2);
    piVar3 = *(int **)(param_1 + 0x8e);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x68) + 0x18))(0x2a,0x7b);
    piVar3 = *(int **)(param_1 + 0x68);
  }
  (**(code **)(*piVar3 + 0x10))(param_2);
LAB_006dbbb3:
  if (*(int *)(param_1 + 100) == 0) {
    iVar1 = **(int **)(param_1 + 0x60);
    iVar2 = FUN_00415bd0(0x126);
    (**(code **)(iVar1 + 0x18))(0xb4 - iVar2 / 2);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x60) + 0x18))(0xbe,0x126);
  }
  (**(code **)(**(int **)(param_1 + 0x60) + 0x10))(param_2);
  if (*(int **)(param_1 + 100) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 100);
    iVar2 = FUN_00415bd0(0x126);
    (**(code **)(iVar1 + 0x18))(0xaa - iVar2);
    (**(code **)(**(int **)(param_1 + 100) + 0x10))(param_2);
  }
  FUN_004424d0(param_2);
  return;
}


