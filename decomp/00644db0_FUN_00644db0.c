// FUN_00644db0 @ 644db0 size=48

undefined4 __thiscall FUN_00644db0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xa2) != '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x92) + 0x20))(param_2,param_3);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


