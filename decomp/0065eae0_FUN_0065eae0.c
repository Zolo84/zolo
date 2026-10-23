// FUN_0065eae0 @ 65eae0 size=54

undefined4 __thiscall FUN_0065eae0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_0065eb20(CONCAT22((short)((uint)*(int *)(param_1 + 0x28) >> 0x10),
                          *(undefined2 *)(param_1 + 0x20)));
    (**(code **)(**(int **)(param_1 + 0x28) + 0x10))(param_2);
  }
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x10))(param_2);
  }
  return 0;
}


